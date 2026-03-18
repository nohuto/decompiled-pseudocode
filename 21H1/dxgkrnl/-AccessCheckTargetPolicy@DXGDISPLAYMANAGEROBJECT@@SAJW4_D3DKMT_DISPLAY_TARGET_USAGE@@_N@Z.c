/*
 * XREFs of ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C02AC4F4
 * Callers:
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02AC9F0 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     MonitorAreSpecializedDisplaysSupported @ 0x1C00E093C (MonitorAreSpecializedDisplaysSupported.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ @ 0x1C0281058 (-IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::AccessCheckTargetPolicy(__int64 a1, __int64 a2)
{
  char v2; // bp
  int v3; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *v7; // rdi
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v12; // rcx
  bool v13; // zf
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v16; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v3 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v7 = Current;
  if ( Current && *((_BYTE *)Current + 346) )
    return 0LL;
  v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v6, v5) + 88);
  if ( v9 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession && *((_BYTE *)SessionDataForSpecifiedSession + 18492) )
    return 0LL;
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)v7 + 11) + 208LL))() )
    return 3221225506LL;
  if ( !(unsigned __int8)RtlIsMultiSessionSku(v12) )
  {
    if ( !DXGPROCESS::IsCurrentThreadAppContainer() )
      return 0LL;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"shellDisplayManagement");
    v16 = 0;
    if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v16) >= 0 )
    {
      v13 = v16 == 0;
      goto LABEL_18;
    }
    return 3221225506LL;
  }
  if ( DXGPROCESS::IsCurrentThreadAppContainer() || v2 && !g_OSTestSigningEnabled )
    return 3221225506LL;
  if ( v3 != 2 )
  {
    if ( v3 != 1 )
      return 3221225506LL;
    return 0LL;
  }
  v13 = !MonitorAreSpecializedDisplaysSupported();
LABEL_18:
  if ( v13 )
    return 3221225506LL;
  return 0LL;
}
