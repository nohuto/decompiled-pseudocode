/*
 * XREFs of ?CheckAllDriversRunning@Initmode@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0107E30
 * Callers:
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0107D9C (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall Ndis::Initmode::CheckAllDriversRunning(Ndis::Initmode *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 i; // rdx
  __int64 v4; // r10
  unsigned __int64 v6; // r9
  unsigned __int64 j; // rdx
  __int64 v8; // r10

  v2 = *((unsigned int *)this + 1255);
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= v2 )
LABEL_15:
      __fastfail(5u);
    v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 628) + 8 * i) + 80LL);
    if ( (*(_DWORD *)(v4 + 40) & 0x10) == 0 && !*(_QWORD *)(v4 + 56) )
      return 0;
  }
  v6 = *((unsigned int *)this + 1251);
  for ( j = 0LL; j != v6; ++j )
  {
    if ( j >= v6 )
      goto LABEL_15;
    v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 626) + 8 * j) + 80LL);
    if ( (*(_DWORD *)(v8 + 32) & 1) != 0 && !*(_QWORD *)(v8 + 40) )
      return 0;
  }
  return 1;
}
