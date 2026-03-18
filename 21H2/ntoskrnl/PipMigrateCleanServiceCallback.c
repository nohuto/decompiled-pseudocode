/*
 * XREFs of PipMigrateCleanServiceCallback @ 0x140B4FA10
 * Callers:
 *     <none>
 * Callees:
 *     _PnpCtxRegQueryInfoKey @ 0x1406994BC (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegDeleteTree @ 0x14082E95C (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegQueryValue @ 0x14082EB54 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegCloseKey @ 0x14082EB8C (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegOpenKey @ 0x14082EBA4 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKey @ 0x14082EBE0 (_PnpCtxRegEnumKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PipMigrateCleanServiceCallback(__int64 a1, __int64 a2, __int64 a3)
{
  char *Pool2; // rbx
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
  Pool2 = 0LL;
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
            Pool2 = (char *)ExAllocatePool2(256LL, 2LL * (unsigned int)(v14 + 1), 0x6E697050u);
            if ( Pool2 )
            {
              v7 = 0;
              for ( i = 0; ; i = v7 )
              {
                v10 = v6;
                if ( (int)PnpCtxRegEnumKey(v5, v15, i, Pool2, &v10) < 0 )
                  break;
                if ( (int)PnpCtxRegDeleteTree(a1, (__int64)v15, (__int64)Pool2) >= 0 )
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
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return 0LL;
}
