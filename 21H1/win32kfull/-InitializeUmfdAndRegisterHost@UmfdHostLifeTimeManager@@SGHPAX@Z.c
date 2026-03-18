/*
 * XREFs of ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SGHPAX@Z @ 0xEA2EA
 * Callers:
 *     _UmfdDispatchWinLogonEscape@4 @ 0xEB862 (_UmfdDispatchWinLogonEscape@4.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ?Create@?$CSortedVector@KK@NSInstrumentation@@SGPAV12@XZ @ 0xE61C6 (-Create@-$CSortedVector@KK@NSInstrumentation@@SGPAV12@XZ.c)
 */

int __thiscall UmfdHostLifeTimeManager::InitializeUmfdAndRegisterHost(void *this)
{
  int v1; // ebx
  PVOID v2; // edi
  HANDLE v3; // edi
  NTSTATUS v4; // eax
  PVOID v6; // edi
  int v7; // [esp+Ch] [ebp-Ch] BYREF
  int v8; // [esp+10h] [ebp-8h] BYREF
  HANDLE Handle; // [esp+14h] [ebp-4h] BYREF

  Handle = this;
  v1 = 0;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v7, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v8, (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::s_UmfdHostProcess )
  {
    ObfDereferenceObject(UmfdHostLifeTimeManager::s_UmfdHostProcess);
    UmfdHostLifeTimeManager::s_UmfdHostProcess = 0;
  }
  v2 = UmfdFileviewLookup;
  if ( UmfdFileviewLookup )
  {
    ExFreePoolWithTag(*((PVOID *)UmfdFileviewLookup + 7), 0);
    ExFreePoolWithTag(v2, 0);
    UmfdFileviewLookup = 0;
  }
  v3 = Handle;
  if ( Handle )
  {
    UmfdFileviewLookup = NSInstrumentation::CSortedVector<unsigned long,unsigned long>::Create();
    if ( UmfdFileviewLookup )
    {
      Handle = 0;
      v4 = ObReferenceObjectByHandle(v3, 0x1000u, (POBJECT_TYPE)PsProcessType, 0, &Handle, 0);
      UmfdHostLifeTimeManager::s_UmfdHostProcess = Handle;
      if ( v4 >= 0 )
      {
        v1 = 1;
        UmfdHostLifeTimeManager::s_Launched = 1;
        ++UmfdHostLifeTimeManager::s_UmfdHostGenerationId;
        UmfdHostLifeTimeManager::s_Ready = 1;
        goto LABEL_9;
      }
      v6 = UmfdFileviewLookup;
      if ( UmfdFileviewLookup )
      {
        ExFreePoolWithTag(*((PVOID *)UmfdFileviewLookup + 7), 0);
        ExFreePoolWithTag(v6, 0);
        UmfdFileviewLookup = 0;
      }
    }
    UmfdHostLifeTimeManager::s_UmfdHostProcess = 0;
  }
  else if ( !UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
  {
    KeSetEvent((PRKEVENT)UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, 0, 0);
    if ( _gpidLogon )
      PostWinlogonMessage(3, 4);
  }
LABEL_9:
  KeSetEvent(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent, 0, 0);
  if ( v8 )
  {
    ExReleasePushLockExclusiveEx(v8, 0);
    KeLeaveCriticalRegion();
  }
  if ( v7 )
  {
    ExReleasePushLockExclusiveEx(v7, 0);
    KeLeaveCriticalRegion();
  }
  return v1;
}
