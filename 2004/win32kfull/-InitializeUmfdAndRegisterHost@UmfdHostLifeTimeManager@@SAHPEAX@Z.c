/*
 * XREFs of ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C010E6E0
 * Callers:
 *     UmfdDispatchWinLogonEscape @ 0x1C010E1A8 (UmfdDispatchWinLogonEscape.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C001ED40 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001ED74 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?Create@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C010E7E0 (-Create@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C010E864 (-ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C010EA8C (-UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 */

__int64 __fastcall UmfdHostLifeTimeManager::InitializeUmfdAndRegisterHost(HANDLE Handle)
{
  unsigned int v2; // ebx
  NTSTATUS v3; // eax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF
  char v6; // [rsp+48h] [rbp+10h] BYREF
  char v7; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v7, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v6, (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock();
  UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
  if ( Handle )
  {
    UmfdFileviewLookup = (PVOID)NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Create();
    if ( UmfdFileviewLookup
      && (Object = 0LL,
          v3 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL),
          UmfdHostLifeTimeManager::s_UmfdHostProcess = Object,
          v3 >= 0) )
    {
      ++UmfdHostLifeTimeManager::s_UmfdHostGenerationId;
      v2 = 1;
      UmfdHostLifeTimeManager::s_Launched = 1;
      UmfdHostLifeTimeManager::s_Ready = 1;
    }
    else
    {
      UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
      UmfdHostLifeTimeManager::s_UmfdHostProcess = 0LL;
    }
  }
  else if ( !UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
  {
    KeSetEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, 0, 0);
    if ( gpidLogon )
      PostWinlogonMessage(3LL, 4LL);
  }
  KeSetEvent(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent, 0, 0);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v6);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v7);
  return v2;
}
