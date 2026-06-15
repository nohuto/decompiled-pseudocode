/*
 * XREFs of ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x18012E7EC
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18000FE40 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800BB2E0 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 *     AudioServerGetAudioHistoryProducerHandle @ 0x1800DE770 (AudioServerGetAudioHistoryProducerHandle.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x18012EAB0 (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x18012EBB0 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioDGProcess::CancelADGTerminationTimer(LPCRITICAL_SECTION lpCriticalSection)
{
  struct CAudioThreadPool *v2; // rdi
  HANDLE OwningThread; // rdx

  v2 = ThreadPool;
  EnterCriticalSection(lpCriticalSection);
  OwningThread = lpCriticalSection[3].OwningThread;
  if ( OwningThread )
  {
    (*(void (__fastcall **)(struct CAudioThreadPool *, HANDLE, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v2 + 24LL))(
      v2,
      OwningThread,
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(struct CAudioThreadPool *, HANDLE, __int64))(*(_QWORD *)v2 + 32LL))(
      v2,
      lpCriticalSection[3].OwningThread,
      1LL);
  }
  LeaveCriticalSection(lpCriticalSection);
}
