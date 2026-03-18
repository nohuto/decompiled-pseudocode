/*
 * XREFs of ?Delete@DxgkCompositionObject@@SAXPEAX@Z @ 0x1C00174E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C0269AC4 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C029EA54 (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

void __fastcall DxgkCompositionObject::Delete(void *a1)
{
  bool v2; // zf
  __int64 CurrentProcess; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  char v8; // [rsp+20h] [rbp-68h]
  PRKPROCESS PROCESS; // [rsp+28h] [rbp-60h] BYREF
  unsigned int v10; // [rsp+30h] [rbp-58h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-50h] BYREF

  PROCESS = 0LL;
  v2 = *((_QWORD *)a1 + 2) == 0LL;
  v8 = 0;
  v10 = *((_DWORD *)a1 + 2);
  if ( v2 )
    return;
  CurrentProcess = PsGetCurrentProcess();
  if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != v10 )
  {
    Global = DXGGLOBAL::GetGlobal(v5, v4);
    SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
    if ( (int)DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v10, &PROCESS) < 0 )
      goto LABEL_4;
    KeStackAttachProcess(PROCESS, &ApcState);
    v8 = 1;
  }
  (*(void (__fastcall **)(_QWORD, void *))(**((_QWORD **)a1 + 2) + 48LL))(*((_QWORD *)a1 + 2), a1);
LABEL_4:
  if ( v8 )
    KeUnstackDetachProcess(&ApcState);
  if ( PROCESS )
    ObfDereferenceObject(PROCESS);
}
