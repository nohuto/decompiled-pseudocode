/*
 * XREFs of ?OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z @ 0x1C0018440
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C030A8A0 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C034800C (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

bool __fastcall DxgkCompositionObject::OkToClose(struct _EPROCESS *a1, _DWORD *a2, void *a3, char a4)
{
  int v8; // ebx
  __int64 CurrentProcess; // rax
  bool v10; // bl
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  char v14; // [rsp+20h] [rbp-A8h]
  char v15; // [rsp+30h] [rbp-98h]
  PRKPROCESS PROCESS; // [rsp+38h] [rbp-90h] BYREF
  unsigned int v17; // [rsp+40h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-80h] BYREF

  PROCESS = 0LL;
  v15 = 0;
  v17 = a2[2];
  if ( a4 && (unsigned int)PsGetProcessSessionIdEx(a1) == -1 )
  {
    v8 = -1073741790;
  }
  else
  {
    v8 = 0;
    CurrentProcess = PsGetCurrentProcess();
    if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) == v17
      || (Global = DXGGLOBAL_GetGlobal(),
          SessionMgr = DXGGLOBAL::GetSessionMgr(Global),
          v8 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v17, &PROCESS),
          v8 < 0) )
    {
      if ( v8 < 0 )
        goto LABEL_6;
    }
    else
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      v15 = 1;
    }
    v14 = a4;
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct _EPROCESS *, _DWORD *, void *, char))(**((_QWORD **)a2 + 2) + 16LL))(
           *((_QWORD *)a2 + 2),
           a1,
           a2,
           a3,
           v14);
  }
LABEL_6:
  v10 = v8 >= 0;
  if ( v15 )
    KeUnstackDetachProcess(&ApcState);
  if ( PROCESS )
    ObfDereferenceObject(PROCESS);
  return v10;
}
