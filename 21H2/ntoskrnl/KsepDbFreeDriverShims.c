/*
 * XREFs of KsepDbFreeDriverShims @ 0x1407590F0
 * Callers:
 *     KsepGetShimsForDriver @ 0x140758D38 (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x140758E20 (KsepDbGetDriverShims.c)
 *     KsepDbGetDriverShimsInternal @ 0x14075904C (KsepDbGetDriverShimsInternal.c)
 *     KseDriverUnloadImage @ 0x1407730B4 (KseDriverUnloadImage.c)
 *     KsepDbGetShimInfo @ 0x1408BF97C (KsepDbGetShimInfo.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140371274 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x14075B9C0 (KsepStringFree.c)
 */

void __fastcall KsepDbFreeDriverShims(_QWORD *a1, unsigned int a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rbp
  char *v5; // rdi

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = a1 + 3;
      v4 = a2;
      v5 = (char *)(a1 + 2);
      do
      {
        if ( v3[2] )
          KsepStringFree(v5 + 16);
        if ( *v3 )
          KsepStringFree(v5);
        if ( v3[4] )
          KsepStringFree(v5 + 32);
        v5 += 80;
        v3 += 10;
        --v4;
      }
      while ( v4 );
    }
    KsepPoolFreePaged(a1);
  }
}
