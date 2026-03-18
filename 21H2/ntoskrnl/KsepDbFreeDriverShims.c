/*
 * XREFs of KsepDbFreeDriverShims @ 0x14075C424
 * Callers:
 *     KseDriverUnloadImage @ 0x1406EAFE4 (KseDriverUnloadImage.c)
 *     KsepDbGetDriverShimsInternal @ 0x14075C380 (KsepDbGetDriverShimsInternal.c)
 *     KsepDbGetDriverShims @ 0x14075C460 (KsepDbGetDriverShims.c)
 *     KsepGetShimsForDriver @ 0x14075C7BC (KsepGetShimsForDriver.c)
 *     KsepDbGetShimInfo @ 0x1409638AC (KsepDbGetShimInfo.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1402D8494 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x14075CDC4 (KsepStringFree.c)
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
