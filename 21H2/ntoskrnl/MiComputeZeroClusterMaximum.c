/*
 * XREFs of MiComputeZeroClusterMaximum @ 0x14026243C
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x14025EF28 (MiExpandSharedZeroCluster.c)
 *     MiResolvePrivateZeroFault @ 0x1402B4A20 (MiResolvePrivateZeroFault.c)
 *     MiGetClusterPage @ 0x140555BB0 (MiGetClusterPage.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x14025F8BC (MiGetAvailablePagesBelowPriority.c)
 *     MiSufficientAvailablePages @ 0x140263410 (MiSufficientAvailablePages.c)
 */

unsigned __int64 __fastcall MiComputeZeroClusterMaximum(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // r10
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  _QWORD *v12; // r14
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned int v21; // edx
  unsigned __int64 AvailablePagesBelowPriority; // rax

  v3 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 8) + 16LL * *(_QWORD *)(a1 + 24);
  v7 = (((unsigned __int64)(*(_DWORD *)v6 & 0xFFF) + *(_QWORD *)(v6 + 8) + 4095LL) >> 12) - v3;
  v8 = *(_QWORD *)v6 + (v3 << 12);
  if ( a3 )
  {
    v9 = (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) - (v8 >> 12);
    if ( v7 > v9 + 1 )
      v7 = v9 + 1;
  }
  v10 = *(unsigned __int16 *)(a2 + 174);
  v11 = 20000LL;
  v12 = *(_QWORD **)(qword_140C4E688 + 8 * v10);
  v13 = *(_QWORD *)(v12[856] + 2384LL);
  v14 = 20000LL;
  if ( v13 > 0x4E20 )
    v14 = *(_QWORD *)(v12[856] + 2384LL);
  if ( (v14 & 0xFFFFFFFFFFFFFFFEuLL) <= 0x4E20 )
  {
    v15 = 10000LL;
  }
  else
  {
    if ( v13 > 0x4E20 )
      v11 = *(_QWORD *)(v12[856] + 2384LL);
    v15 = v11 >> 1;
  }
  v16 = MiSufficientAvailablePages(v12, v15 >> 1);
  v17 = 1LL;
  if ( !v16 )
    v7 = 1LL;
  if ( (*(_BYTE *)(a2 + 184) & 0x40) != 0 && (*(_BYTE *)a1 != 1 || (*(_DWORD *)(a1 + 80) & 0x4000) == 0) )
  {
    v19 = *(_QWORD *)(a2 + 120);
    v20 = *(_QWORD *)(a2 + 152);
    if ( v19 >= v20 )
      return 1LL;
    if ( v19 + v7 > v20 )
      v7 = v20 - v19;
  }
  if ( *(_BYTE *)a1 == 1 )
  {
    v21 = *(_DWORD *)(a1 + 80);
    if ( (v21 & 0x4000) != 0 )
    {
      AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v12, ((v21 >> 3) & 7) + 1);
      if ( v7 > AvailablePagesBelowPriority )
        v7 = AvailablePagesBelowPriority;
    }
  }
  if ( !v7 )
    v7 = v17;
  result = 512 - ((((v8 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF);
  if ( v7 <= result )
    return v7;
  return result;
}
