/*
 * XREFs of ?NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C0351720
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00138D4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C034800C (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 *     ?VailSendWnfToDwm@DXGSESSIONDATA@@QEAAJH@Z @ 0x1C0353874 (-VailSendWnfToDwm@DXGSESSIONDATA@@QEAAJH@Z.c)
 */

char __fastcall DXGVAILOBJECT::NotifyVailSessionCallback(__int64 a1, int a2, unsigned int a3)
{
  struct DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *v6; // rbx
  __int64 v7; // rcx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  PVOID Object; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF
  char v13; // [rsp+58h] [rbp-20h]

  if ( a2 )
    return 1;
  Object = 0LL;
  Global = DXGGLOBAL_GetGlobal();
  if ( (int)DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
              *((DXGSESSIONMGR **)Global + 122),
              a3,
              (struct _KPROCESS **)&Object) >= 0 )
  {
    v13 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
    v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, CurrentProcessSessionId);
    DXGSESSIONDATA::VailSendWnfToDwm(SessionDataForSpecifiedSession, a1 != 0);
    if ( v13 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(Object);
  }
  return 0;
}
