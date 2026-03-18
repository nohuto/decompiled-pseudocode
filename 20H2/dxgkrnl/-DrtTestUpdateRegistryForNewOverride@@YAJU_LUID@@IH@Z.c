/*
 * XREFs of ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1C02A7DB0
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025E2E4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007AE4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011F004 (DxgkReleaseSessionModeChangeLock.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02A826C (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 */

__int64 __fastcall DrtTestUpdateRegistryForNewOverride(struct _LUID a1, unsigned int a2, unsigned int a3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // r9d
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _LUID v14; // [rsp+30h] [rbp+8h] BYREF
  char v15; // [rsp+48h] [rbp+20h] BYREF

  v14 = a1;
  v15 = 0;
  v5 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v15, 0);
  v9 = v5;
  if ( v5 >= 0 )
  {
    LODWORD(v9) = DpiPersistence::WriteDpiToRegistry((DpiPersistence *)&v14, (const struct _LUID *)a2, a3, v8);
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v10 + 24) = v9;
    WdLogEvent5_WdError(v10);
  }
  if ( v15 )
    DxgkReleaseSessionModeChangeLock(v12, v11);
  return (unsigned int)v9;
}
