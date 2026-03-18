/*
 * XREFs of ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1C02FA214
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000F45C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC (DxgkReleaseSessionModeChangeLock.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02FA574 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 */

__int64 __fastcall DrtTestUpdateRegistryForNewOverride(struct _LUID a1, unsigned int a2, unsigned int a3)
{
  int v5; // eax
  unsigned int v6; // r9d
  __int64 v7; // rdi
  struct _LUID v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+78h] [rbp+20h] BYREF

  v9 = a1;
  v10 = 0;
  v5 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v10, 0);
  v7 = v5;
  if ( v5 >= 0 )
  {
    LODWORD(v7) = DpiPersistence::WriteDpiToRegistry((DpiPersistence *)&v9, (const struct _LUID *)a2, a3, v6);
  }
  else
  {
    WdLogSingleEntry1(2LL, v5);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v10 )
    DxgkReleaseSessionModeChangeLock();
  return (unsigned int)v7;
}
