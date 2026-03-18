/*
 * XREFs of ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C02B0A34
 * Callers:
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02B0F30 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0114888 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     MonitorAreSpecializedDisplaysSupported @ 0x1C013ABAC (MonitorAreSpecializedDisplaysSupported.c)
 *     ?IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ @ 0x1C02854FC (-IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::AccessCheckTargetPolicy(__int64 a1, __int64 a2)
{
  char v2; // bp
  int v3; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGSESSIONMGR *v10; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v13; // rcx
  bool v14; // zf
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v17; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v3 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v7 = Current;
  if ( Current && *((_BYTE *)Current + 346) )
    return 0LL;
  v10 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v6, v5) + 102);
  if ( v10 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v10, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession && *((_BYTE *)SessionDataForSpecifiedSession + 18492) )
    return 0LL;
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)v7 + 11) + 208LL))() )
    return 3221225506LL;
  if ( !(unsigned __int8)RtlIsMultiSessionSku(v13) )
  {
    if ( !DXGPROCESS::IsCurrentThreadAppContainer() )
      return 0LL;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"shellDisplayManagement");
    v17 = 0;
    if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v17) >= 0 )
    {
      v14 = v17 == 0;
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
  v14 = !MonitorAreSpecializedDisplaysSupported();
LABEL_18:
  if ( v14 )
    return 3221225506LL;
  return 0LL;
}
