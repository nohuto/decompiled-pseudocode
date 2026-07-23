/*
 * XREFs of PipMigrateCleanServiceCallback @ 0x140A91380
 * Callers:
 *     <none>
 * Callees:
 *     _PnpCtxRegQueryValue @ 0x14061A094 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegCloseKey @ 0x1406306B4 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegOpenKey @ 0x14063562C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14067313C (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegDeleteTree @ 0x1407AC328 (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegEnumKey @ 0x1407C4164 (_PnpCtxRegEnumKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PipMigrateCleanServiceCallback(__int64 a1, int a2, int a3)
{
  unsigned int *PoolWithTag; // rbx
  __int64 v5; // rcx
  unsigned int v6; // esi
  ULONG v7; // edi
  ULONG i; // r8d
  unsigned int v10; // [rsp+40h] [rbp-20h] BYREF
  int v11; // [rsp+44h] [rbp-1Ch] BYREF
  int v12; // [rsp+48h] [rbp-18h] BYREF
  int v13; // [rsp+4Ch] [rbp-14h] BYREF
  unsigned int v14; // [rsp+50h] [rbp-10h] BYREF
  void *v15; // [rsp+58h] [rbp-8h] BYREF

  v15 = 0LL;
  v10 = 0;
  PoolWithTag = 0LL;
  v13 = 0;
  v14 = 0;
  v12 = 0;
  if ( (int)PnpCtxRegOpenKey(a1, a2, a3, 0, 983103, (__int64)&v15) >= 0 )
  {
    v11 = 4;
    if ( (int)PnpCtxRegQueryValue(v5, v15, (__int64)L"Clean", (__int64)&v10, (__int64)&v12, (__int64)&v11) >= 0
      && v10 == 4
      && v11 == 4 )
    {
      if ( v12 )
      {
        if ( (int)PnpCtxRegQueryInfoKey(v5, v15, &v13, &v14, 0LL, 0LL, 0LL) >= 0 )
        {
          if ( v13 )
          {
            v6 = v14 + 1;
            PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 2LL * (v14 + 1), 0x6E697050u);
            if ( PoolWithTag )
            {
              v7 = 0;
              for ( i = 0; ; i = v7 )
              {
                v10 = v6;
                if ( (int)PnpCtxRegEnumKey(v5, v15, i, PoolWithTag, &v10) < 0 )
                  break;
                if ( (int)PnpCtxRegDeleteTree(a1, (char *)v15, (const WCHAR *)PoolWithTag) >= 0 )
                  v7 = 0;
                else
                  ++v7;
              }
            }
          }
        }
      }
    }
  }
  if ( v15 )
    PnpCtxRegCloseKey(v5, v15);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 0LL;
}
