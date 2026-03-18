/*
 * XREFs of ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C02F37F4
 * Callers:
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02F3E04 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 * Callees:
 *     MonitorAreSpecializedDisplaysSupported @ 0x1C0008E58 (MonitorAreSpecializedDisplaysSupported.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ @ 0x1C0336B00 (-IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::AccessCheckTargetPolicy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  int v5; // esi
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v7; // rbx
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v12; // rdi
  __int64 v13; // rcx
  bool v14; // zf
  bool v15; // bl
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  char v18; // [rsp+60h] [rbp+18h] BYREF

  v4 = a2;
  v5 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v7 = Current;
  if ( Current && (*((_DWORD *)Current + 106) & 4) != 0 )
    return 0LL;
  v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( v9 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, CurrentProcessSessionId);
    v12 = SessionDataForSpecifiedSession;
    if ( SessionDataForSpecifiedSession && *((_BYTE *)SessionDataForSpecifiedSession + 18500) )
      return 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)v7 + 11) + 208LL))() )
    return 3221225506LL;
  if ( !(unsigned __int8)RtlIsMultiSessionSku(v13) )
  {
    if ( !DXGPROCESS::IsCurrentThreadAppContainer() )
      return 0LL;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"shellDisplayManagement");
    v18 = 0;
    if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v18) >= 0 )
    {
      v14 = v18 == 0;
      goto LABEL_21;
    }
    return 3221225506LL;
  }
  v15 = g_OSTestSigningEnabled != 0;
  if ( v12 && *((_BYTE *)v12 + 18501) )
    v15 = 0;
  if ( DXGPROCESS::IsCurrentThreadAppContainer() || v4 && !v15 )
    return 3221225506LL;
  if ( v5 != 2 )
  {
    if ( v5 != 1 )
      return 3221225506LL;
    return 0LL;
  }
  v14 = !MonitorAreSpecializedDisplaysSupported();
LABEL_21:
  if ( v14 )
    return 3221225506LL;
  return 0LL;
}
