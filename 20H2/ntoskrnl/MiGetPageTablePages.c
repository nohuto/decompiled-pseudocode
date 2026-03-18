/*
 * XREFs of MiGetPageTablePages @ 0x140336880
 * Callers:
 *     MiCreateSystemPageTable @ 0x1403360F0 (MiCreateSystemPageTable.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B9828 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x140795B8C (MmCreateShadowMapping.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x14022DC70 (MiSufficientAvailablePages.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiSetPfnTbFlushStamp @ 0x140290710 (MiSetPfnTbFlushStamp.c)
 *     MiReturnSystemCharges @ 0x140316A18 (MiReturnSystemCharges.c)
 *     MiReleaseFreshPage @ 0x140333A30 (MiReleaseFreshPage.c)
 *     MiObtainSystemCharges @ 0x14033699C (MiObtainSystemCharges.c)
 */

__int64 __fastcall MiGetPageTablePages(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  int v3; // esi
  __int64 v4; // r15
  _QWORD *v8; // r14
  int v9; // r12d
  unsigned int v10; // esi
  unsigned int v11; // ebx
  __int64 Page; // rax
  _QWORD *v13; // rbx
  _QWORD *v15; // rbx
  unsigned __int64 v16; // [rsp+50h] [rbp+8h]

  v3 = *(_DWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 32);
  *a3 = 0LL;
  v8 = 0LL;
  if ( (v3 & 8) != 0 || !*(_QWORD *)(v4 + 7592) )
  {
    v9 = 0;
  }
  else
  {
    if ( !(unsigned int)MiObtainSystemCharges(v4, a2, *(unsigned int *)(a1 + 56)) )
      return 3221225773LL;
    *(_QWORD *)(a1 + 40) += a2;
    v9 = 1;
    v3 = *(_DWORD *)(a1 + 64);
  }
  v16 = 0LL;
  v10 = (v3 & 0x400 | 0x20C280u) >> 6;
  if ( a2 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(a1 + 284) | _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 272), 1u) & *(_DWORD *)(a1 + 280);
      Page = MiGetPage(v4, v11, v10);
      if ( Page == -1 )
      {
        if ( (*(_DWORD *)(a1 + 64) & 0x10) == 0 )
          break;
        if ( !(unsigned int)MiSufficientAvailablePages(v4, 0x60uLL) )
          break;
        Page = MiGetPage(v4, v11, v10 | 4);
        if ( Page == -1 )
          break;
      }
      v13 = (_QWORD *)(48 * Page - 0x58000000000LL);
      MiSetPfnTbFlushStamp((__int64)v13, 0, 0);
      *v13 = v8;
      ++v16;
      v8 = v13;
      if ( v16 >= a2 )
        goto LABEL_8;
    }
    if ( v9 )
    {
      MiReturnCommit(v4, a2);
      MiReturnSystemCharges(v4, a2, *(_DWORD *)(a1 + 56));
      *(_QWORD *)(a1 + 40) -= a2;
    }
    if ( v8 )
    {
      do
      {
        v15 = (_QWORD *)*v8;
        MiReleaseFreshPage((__int64)v8);
        v8 = v15;
      }
      while ( v15 );
    }
    return 3221225495LL;
  }
  else
  {
LABEL_8:
    *a3 = v8;
    return 0LL;
  }
}
