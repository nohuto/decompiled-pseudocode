/*
 * XREFs of ?Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z @ 0x1C0017FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C030A8A0 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C034800C (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkCompositionObject::Open(unsigned int a1, char a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v6; // eax
  int ProcessSessionId; // eax
  int v12; // ebx
  __int64 CurrentProcess; // rax
  __int64 v14; // r8
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  char v18; // [rsp+40h] [rbp-59h]
  PRKPROCESS PROCESS; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v20; // [rsp+50h] [rbp-49h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-41h] BYREF

  v6 = *(_DWORD *)(a4 + 8);
  PROCESS = 0LL;
  v18 = 0;
  v20 = v6;
  if ( (unsigned __int8)PsIsSystemProcess(a3)
    || (ProcessSessionId = PsGetProcessSessionIdEx(a3), ProcessSessionId != -1)
    && ProcessSessionId == *(_DWORD *)(a4 + 8) )
  {
    v12 = 0;
    CurrentProcess = PsGetCurrentProcess();
    if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) == v20
      || (Global = DXGGLOBAL_GetGlobal(),
          SessionMgr = DXGGLOBAL::GetSessionMgr(Global),
          v12 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v20, &PROCESS),
          v12 < 0) )
    {
      if ( v12 < 0 )
        goto LABEL_7;
    }
    else
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      v18 = 1;
    }
    LOBYTE(v14) = a2;
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, __int64, int))(**(_QWORD **)(a4 + 16)
                                                                                             + 8LL))(
            *(_QWORD *)(a4 + 16),
            a1,
            v14,
            a3,
            a4,
            a5,
            a6);
  }
  else
  {
    v12 = -1073741790;
  }
LABEL_7:
  if ( v18 )
    KeUnstackDetachProcess(&ApcState);
  if ( PROCESS )
    ObfDereferenceObject(PROCESS);
  return (unsigned int)v12;
}
