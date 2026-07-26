/*
 * XREFs of ?ndisOidGetStatisticAllProcessors@@YAEPEAU_NDIS_MINIPORT_STATS@@KPEA_K@Z @ 0x1C009B620
 * Callers:
 *     ?ndisOidPreGenStats@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0005D50 (-ndisOidPreGenStats@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreMiniportStats@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009CC00 (-ndisOidPreMiniportStats@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisOidGetStatisticAllProcessors(
        struct _NDIS_MINIPORT_STATS *a1,
        unsigned int a2,
        unsigned __int64 *a3)
{
  char v3; // r10
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  __int64 v11; // r9
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // r11
  __int64 v21; // rdi

  v3 = 0;
  *a3 = 0LL;
  if ( a2 > 0x20208 )
  {
    v12 = a2 - 131593;
    if ( !v12 )
    {
      v11 = 24LL;
      goto LABEL_31;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v11 = 40LL;
      goto LABEL_31;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v11 = 16LL;
      goto LABEL_31;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v11 = 48LL;
      goto LABEL_31;
    }
    v16 = v15 - 13;
    if ( !v16 )
    {
      v17 = 24LL;
      v11 = 8LL;
      v18 = 16LL;
      goto LABEL_32;
    }
    if ( v16 == 1 )
    {
      v17 = 96LL;
      v11 = 88LL;
      v18 = 104LL;
      goto LABEL_32;
    }
    return 1;
  }
  if ( a2 == 131592 )
  {
    v11 = 32LL;
    goto LABEL_31;
  }
  v5 = a2 - 131585;
  if ( !v5 )
  {
    v11 = 88LL;
    goto LABEL_31;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v11 = 64LL;
    goto LABEL_31;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v11 = 96LL;
    goto LABEL_31;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v11 = 72LL;
    goto LABEL_31;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v11 = 104LL;
    goto LABEL_31;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v11 = 80LL;
    goto LABEL_31;
  }
  if ( v10 != 1 )
    return 1;
  v11 = 8LL;
LABEL_31:
  v17 = -1LL;
  v18 = -1LL;
LABEL_32:
  if ( ndisMaxNumberOfProcessors )
  {
    v19 = v11 - v18;
    v20 = (unsigned __int64 *)((char *)&a1->ifHCInOctets + v18);
    v21 = ndisMaxNumberOfProcessors;
    do
    {
      *a3 += *(_QWORD *)((char *)v20 + v19);
      if ( v18 >= 0 )
        *a3 += *v20;
      if ( v17 >= 0 )
        *a3 += *(_QWORD *)((char *)v20 + v17 - v18);
      v20 += 14;
      --v21;
    }
    while ( v21 );
  }
  return v3;
}
