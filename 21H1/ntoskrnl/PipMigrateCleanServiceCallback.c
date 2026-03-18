/*
 * XREFs of PipMigrateCleanServiceCallback @ 0x140A8E230
 * Callers:
 *     <none>
 * Callees:
 *     _PnpCtxRegOpenKey @ 0x1406ADE68 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegCloseKey @ 0x1406B01D0 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegQueryValue @ 0x1406B1148 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406B268C (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegDeleteTree @ 0x140792F78 (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegEnumKey @ 0x1407AE7A4 (_PnpCtxRegEnumKey.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PipMigrateCleanServiceCallback(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *PoolWithTag; // rbx
  __int64 v5; // rcx
  unsigned int v6; // esi
  ULONG v7; // edi
  ULONG i; // r8d
  unsigned int v10; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v11; // [rsp+44h] [rbp-1Ch] BYREF
  int v12; // [rsp+48h] [rbp-18h] BYREF
  int v13; // [rsp+4Ch] [rbp-14h] BYREF
  int v14; // [rsp+50h] [rbp-10h] BYREF
  void *v15; // [rsp+58h] [rbp-8h] BYREF

  v15 = 0LL;
  v10 = 0;
  PoolWithTag = 0LL;
  v13 = 0;
  v14 = 0;
  v12 = 0;
  if ( (int)PnpCtxRegOpenKey(a1, a2, a3, 0, 0xF003Fu, (__int64)&v15) >= 0 )
  {
    v11 = 4;
    if ( (int)PnpCtxRegQueryValue(v5, v15, L"Clean", &v10, &v12, &v11) >= 0 && v10 == 4 && v11 == 4 )
    {
      if ( v12 )
      {
        if ( (int)PnpCtxRegQueryInfoKey(v5, (int)v15, (int)&v13, (int)&v14, 0LL, 0LL, 0LL) >= 0 )
        {
          if ( v13 )
          {
            v6 = v14 + 1;
            PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)(v14 + 1), 0x6E697050u);
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
