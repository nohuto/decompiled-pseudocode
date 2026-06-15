/*
 * XREFs of ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800BA740
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x1800473A8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800B7C08 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     ??_GCAudioDGProcess@@QEAAPEAXI@Z @ 0x1800B7F7C (--_GCAudioDGProcess@@QEAAPEAXI@Z.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800BAE14 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     ?MME_ServiceStop@@YAXXZ @ 0x1800F7648 (-MME_ServiceStop@@YAXXZ.c)
 *     ?KsNotifications_ServiceStop@@YAXXZ @ 0x180104F24 (-KsNotifications_ServiceStop@@YAXXZ.c)
 *     ??4?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180126754 (--4-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x18012D80C (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x18012DAD0 (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x180137010 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSrv::Terminate(CAudioSrv *this)
{
  CPowerReferenceManager *v2; // rbx
  CAudioDGProcess *v3; // rcx
  void *v4; // rdx
  AtmosCheck *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
  Microsoft::WRL::ComPtr<AtmosCheck>::operator=(&v5);
  LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
  if ( v5 )
    AtmosCheck::Uninitialize(v5);
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v5);
  if ( g_ADGProcess )
    CAudioDGProcess::CancelADGTerminationTimer(g_ADGProcess);
  CAudioSrv::VAD_AudiosrvServiceStop(this);
  v2 = g_powerReferenceManager;
  g_powerReferenceManager = 0LL;
  if ( v2 )
  {
    CPowerReferenceManager::~CPowerReferenceManager(v2);
    operator delete(v2, (const struct std::nothrow_t *)0x198);
  }
  MME_ServiceStop();
  if ( g_ADGProcess )
  {
    CAudioDGProcess::TerminateADG(v3);
    if ( g_ADGProcess )
      CAudioDGProcess::`scalar deleting destructor'((CAudioDGProcess *)g_ADGProcess, v4);
    g_ADGProcess = 0LL;
  }
  KsNotifications_ServiceStop();
  if ( (char *)g_hCanAcceptMMCClientEvent - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(g_hCanAcceptMMCClientEvent);
    g_hCanAcceptMMCClientEvent = 0LL;
  }
}
