/*
 * XREFs of MiGetPageTablePages @ 0x14027D03C
 * Callers:
 *     MiCreateSystemPageTable @ 0x14027CE40 (MiCreateSystemPageTable.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403C9590 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x14082A644 (MmCreateShadowMapping.c)
 * Callees:
 *     MiReturnSystemCharges @ 0x140229640 (MiReturnSystemCharges.c)
 *     MiZeroPhysicalPage @ 0x1402359C4 (MiZeroPhysicalPage.c)
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiObtainSystemCharges @ 0x14027D190 (MiObtainSystemCharges.c)
 *     MiSufficientAvailablePages @ 0x140285380 (MiSufficientAvailablePages.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiGetSlabPage @ 0x1402EB440 (MiGetSlabPage.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiSetPfnTbFlushStamp @ 0x14033C33C (MiSetPfnTbFlushStamp.c)
 */

__int64 __fastcall MiGetPageTablePages(__int64 a1, unsigned __int64 a2, int a3, _QWORD *a4)
{
  int v4; // esi
  __int64 v5; // r15
  _QWORD *v8; // r14
  int v9; // r13d
  unsigned int v10; // esi
  unsigned __int32 v11; // ebx
  unsigned int v12; // r9d
  __int64 Page; // r12
  ULONG_PTR SlabPage; // rax
  _QWORD *v16; // rbx
  unsigned __int64 v17; // [rsp+70h] [rbp+8h]
  int v18; // [rsp+80h] [rbp+18h]

  v18 = a3;
  v4 = *(_DWORD *)(a1 + 128);
  v5 = *(_QWORD *)(a1 + 96);
  *a4 = 0LL;
  v8 = 0LL;
  if ( (v4 & 8) != 0 || !*(_QWORD *)(v5 + 17496) )
  {
    v9 = 0;
  }
  else
  {
    if ( !(unsigned int)MiObtainSystemCharges(v5, a2, *(unsigned int *)(a1 + 120)) )
      return 3221225773LL;
    *(_QWORD *)(a1 + 104) += a2;
    v9 = 1;
    v4 = *(_DWORD *)(a1 + 128);
    a3 = v18;
  }
  v17 = 0LL;
  v10 = (v4 & 0x400 | 0x20C280u) >> 6;
  if ( !a2 )
  {
LABEL_9:
    *a4 = v8;
    return 0LL;
  }
  while ( 1 )
  {
    v11 = *(_DWORD *)(a1 + 348) | *(_DWORD *)(a1 + 344) & _InterlockedExchangeAdd(
                                                            *(volatile signed __int32 **)(a1 + 336),
                                                            1u);
    v12 = *(_DWORD *)(a1 + 128);
    if ( (v12 & 0x1000) != 0 )
    {
      if ( a3 )
      {
        SlabPage = MiGetSlabPage(v5, 6, v11, (v12 >> 10) & 1, 0LL, 0);
        Page = SlabPage;
        if ( SlabPage != -1LL )
        {
          MiZeroPhysicalPage(SlabPage, 0, 1);
          *(_QWORD *)(48 * Page - 0x220000000000LL + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
          goto LABEL_8;
        }
      }
    }
    Page = MiGetPage(v5, v11, v10);
    if ( Page == -1 )
    {
      if ( (*(_DWORD *)(a1 + 128) & 0x10) == 0 )
        break;
      if ( !(unsigned int)MiSufficientAvailablePages(v5, 96LL) )
        break;
      Page = MiGetPage(v5, v11, v10 | 4);
      if ( Page == -1 )
        break;
    }
LABEL_8:
    MiSetPfnTbFlushStamp(48 * Page - 0x220000000000LL, 0LL, 0LL);
    *(_QWORD *)(48 * Page - 0x220000000000LL) = v8;
    ++v17;
    v8 = (_QWORD *)(48 * Page - 0x220000000000LL);
    if ( v17 >= a2 )
      goto LABEL_9;
    a3 = v18;
  }
  if ( v9 )
  {
    MiReturnCommit(v5, a2);
    MiReturnSystemCharges(v5, a2, *(_DWORD *)(a1 + 120));
    *(_QWORD *)(a1 + 104) -= a2;
  }
  if ( v8 )
  {
    do
    {
      v16 = (_QWORD *)*v8;
      MiReleaseFreshPage((__int64)v8);
      v8 = v16;
    }
    while ( v16 );
  }
  return 3221225495LL;
}
