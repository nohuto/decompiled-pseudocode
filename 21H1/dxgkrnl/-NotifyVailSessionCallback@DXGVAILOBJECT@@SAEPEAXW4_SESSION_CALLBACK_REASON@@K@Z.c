/*
 * XREFs of ?NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C02B0FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0011C24 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C029A564 (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 *     ?VailSendWnfToDwm@DXGSESSIONDATA@@QEAAJH@Z @ 0x1C02B3988 (-VailSendWnfToDwm@DXGSESSIONDATA@@QEAAJH@Z.c)
 */

char __fastcall DXGVAILOBJECT::NotifyVailSessionCallback(__int64 a1, __int64 a2, unsigned int a3)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rbx
  __int64 v9; // rcx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  PVOID Object; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF
  char v15; // [rsp+58h] [rbp-20h]

  if ( (_DWORD)a2 )
    return 1;
  Object = 0LL;
  Global = DXGGLOBAL::GetGlobal(a1, a2);
  if ( (int)DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
              *((DXGSESSIONMGR **)Global + 88),
              a3,
              (struct _KPROCESS **)&Object) >= 0 )
  {
    v15 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
    v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v7, v6) + 88);
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, CurrentProcessSessionId);
    DXGSESSIONDATA::VailSendWnfToDwm(SessionDataForSpecifiedSession, a1 != 0);
    if ( v15 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(Object);
  }
  return 0;
}
