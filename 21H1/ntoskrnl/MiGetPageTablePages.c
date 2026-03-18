/*
 * XREFs of MiGetPageTablePages @ 0x1403290D0
 * Callers:
 *     MiCreateSystemPageTable @ 0x1403289C0 (MiCreateSystemPageTable.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B5F58 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x1407824F8 (MmCreateShadowMapping.c)
 * Callees:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiSetPfnTbFlushStamp @ 0x140224C10 (MiSetPfnTbFlushStamp.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiSufficientAvailablePages @ 0x1402A1900 (MiSufficientAvailablePages.c)
 *     MiReturnSystemCharges @ 0x1403078C8 (MiReturnSystemCharges.c)
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     MiObtainSystemCharges @ 0x1403291EC (MiObtainSystemCharges.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  _QWORD *v15; // rbx
  _QWORD *v17; // rbx
  unsigned __int64 v18; // [rsp+50h] [rbp+8h]

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
  v18 = 0LL;
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
      v15 = (_QWORD *)(48 * Page - 0x58000000000LL);
      MiSetPfnTbFlushStamp((__int64)v15, 0, 0);
      *v15 = v8;
      ++v18;
      v8 = v15;
      if ( v18 >= a2 )
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
        v17 = (_QWORD *)*v8;
        MiReleaseFreshPage((__int64)v8, v13, v14);
        v8 = v17;
      }
      while ( v17 );
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
