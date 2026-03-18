/*
 * XREFs of _NtUserProcessConnect@8 @ 0x1B300
 * Callers:
 *     <none>
 * Callees:
 *     ?InitMapSharedSection@@YGJPAU_EPROCESS@@PAU_USERCONNECT@@@Z @ 0x1B10E (-InitMapSharedSection@@YGJPAU_EPROCESS@@PAU_USERCONNECT@@@Z.c)
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _IsSysEntryApiExtSupported@0 @ 0xF8F7A (_IsSysEntryApiExtSupported@0.c)
 *     _SysEntryGetDispatchTableValues@0 @ 0xF8F8C (_SysEntryGetDispatchTableValues@0.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

NTSTATUS __stdcall NtUserProcessConnect(void *a1, volatile void *a2)
{
  NTSTATUS result; // eax
  PVOID CurrentProcess; // eax
  struct _KPROCESS *v4; // edi
  int inited; // ebx
  signed __int32 v6; // eax
  size_t v7; // edi
  _DWORD Src[72]; // [esp+10h] [ebp-18Ch] BYREF
  volatile void *Address; // [esp+148h] [ebp-54h]
  HANDLE v10; // [esp+14Ch] [ebp-50h]
  int ProcessPeb; // [esp+150h] [ebp-4Ch]
  int v12; // [esp+154h] [ebp-48h]
  HANDLE Handle; // [esp+158h] [ebp-44h] BYREF
  unsigned int v14; // [esp+15Ch] [ebp-40h]
  PVOID Object; // [esp+160h] [ebp-3Ch] BYREF
  char v16; // [esp+167h] [ebp-35h]
  _KAPC_STATE ApcState; // [esp+168h] [ebp-34h] BYREF
  CPPEH_RECORD ms_exc; // [esp+184h] [ebp-18h]

  Handle = a1;
  Address = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v10 = 0;
  ProcessPeb = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(3, 16, &WPP_5beb818f3182338190d7890059714f79_Traceguids);
  if ( _gpepCSRSS != PsGetCurrentProcess() )
    return -1073741823;
  if ( (int)IsSysEntryApiExtSupported() < 0 )
    return -1073741637;
  ms_exc.registration.TryLevel = 0;
  ProbeForWrite(Address, 0x120u, 4u);
  qmemcpy(Src, (const void *)Address, sizeof(Src));
  ms_exc.registration.TryLevel = -2;
  if ( Src[0] != SysEntryGetDispatchTableValues() )
    return -1073741811;
  Object = 0;
  result = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)PsProcessType, 1, &Object, 0);
  if ( result >= 0 )
  {
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    v4 = (struct _KPROCESS *)Object;
    if ( Object == CurrentProcess || !PsIsProtectedProcess(Object) || PsIsProtectedProcessLight(v4) )
    {
      v16 = 0;
      v7 = 288;
    }
    else
    {
      v14 = 0;
      v12 = 0;
      Handle = 0;
      inited = PsAcquireProcessExitSynchronization(v4);
      if ( inited < 0 )
      {
LABEL_25:
        ObfDereferenceObject(Object);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(3, 17, &WPP_5beb818f3182338190d7890059714f79_Traceguids);
        return inited;
      }
      v16 = 1;
      ProcessPeb = PsGetProcessPeb(v4);
      KeStackAttachProcess(v4, &ApcState);
      ms_exc.registration.TryLevel = 1;
      v6 = _InterlockedAnd((volatile signed __int32 *)(ProcessPeb + 44), 0xFFFFFFFE);
      v14 = v6;
      ms_exc.registration.TryLevel = -2;
      if ( (v6 & 1) == 0
        || (v14 = v6 & 0xFFFFFFFE,
            ms_exc.registration.TryLevel = 2,
            ProbeForRead((volatile void *)(v6 & 0xFFFFFFFE), 8u, 4u),
            v12 = *(_DWORD *)v14,
            Handle = *(HANDLE *)(v14 + 4),
            ms_exc.registration.TryLevel = -2,
            v7 = 288,
            v12 != 284) )
      {
        inited = -1073741823;
LABEL_23:
        if ( v16 )
        {
          KeUnstackDetachProcess(&ApcState);
          PsReleaseProcessExitSynchronization(Object);
        }
        goto LABEL_25;
      }
      v10 = Handle;
      ms_exc.registration.TryLevel = 3;
      ProbeForWrite(Handle, 0x11Cu, 4u);
      ms_exc.registration.TryLevel = -2;
    }
    EnterCrit(0, 1);
    inited = InitMapSharedSection((int)Object, Src);
    UserSessionSwitchLeaveCrit();
    if ( inited >= 0 )
    {
      if ( v16 )
      {
        ms_exc.registration.TryLevel = 4;
        qmemcpy(v10, &Src[1], 0x11Cu);
        Handle = 0;
        _InterlockedOr((volatile signed __int32 *)&Handle, 0);
        *(_DWORD *)(ProcessPeb + 44) = 0;
        ms_exc.registration.TryLevel = -2;
        KeUnstackDetachProcess(&ApcState);
        PsReleaseProcessExitSynchronization(Object);
        v16 = 0;
        v7 = 4;
      }
      ms_exc.registration.TryLevel = 5;
      memcpy((void *)Address, Src, v7);
      ms_exc.registration.TryLevel = -2;
    }
    goto LABEL_23;
  }
  return result;
}
