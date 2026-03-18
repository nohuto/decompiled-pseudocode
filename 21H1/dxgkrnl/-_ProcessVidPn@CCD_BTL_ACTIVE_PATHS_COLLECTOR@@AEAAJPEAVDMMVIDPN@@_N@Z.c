/*
 * XREFs of ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00EB900
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_1_ @ 0x1C00E8AC0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_1_1_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_0_ @ 0x1C0152250 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_1_0_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C01597F0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 *     ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C02E869C (-CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018388 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00EC88C (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 */

int __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DMMVIDPN *a2,
        bool a3)
{
  char *v3; // rsi
  int v6; // ebx
  char *v7; // rdi
  struct DMMVIDPNPRESENTPATH *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  int result; // eax
  char *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax

  v3 = (char *)a2 + 96;
  v6 = 0;
  if ( a2 == (struct DMMVIDPN *)-96LL )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, -96LL);
    WdLogEvent5_WdAssertion(v14);
  }
  v7 = (char *)*((_QWORD *)v3 + 3);
  if ( v7 == v3 + 24 )
    return v6;
  v8 = (struct DMMVIDPNPRESENTPATH *)(v7 - 8);
  if ( !v8 )
    return v6;
  while ( 1 )
  {
    v10 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)(v3 + 160), (__int64)a2) + 48);
    v11 = *(_QWORD *)(v10 + 8);
    if ( !v11 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v9, 0LL);
      WdLogEvent5_WdAssertion(v15);
      v11 = *(_QWORD *)(v10 + 8);
    }
    result = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(this, *(struct DXGADAPTER **)(v11 + 16), v8, 1, a3);
    v6 = result;
    if ( result < 0 )
      break;
    v13 = (char *)*((_QWORD *)v8 + 1);
    v8 = (struct DMMVIDPNPRESENTPATH *)(v13 - 8);
    if ( v13 == v3 + 24 )
      v8 = 0LL;
    if ( !v8 )
      return v6;
  }
  return result;
}
