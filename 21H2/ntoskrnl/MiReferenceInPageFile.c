/*
 * XREFs of MiReferenceInPageFile @ 0x14031CC98
 * Callers:
 *     MiIssueHardFault @ 0x14030E9B0 (MiIssueHardFault.c)
 *     MiPfExecuteReadList @ 0x1406E9104 (MiPfExecuteReadList.c)
 * Callees:
 *     MiCanPageMove @ 0x14026B990 (MiCanPageMove.c)
 *     MiComputeImagePteIndex @ 0x1402FCD40 (MiComputeImagePteIndex.c)
 *     MiReferenceControlAreaFile @ 0x14031CEB0 (MiReferenceControlAreaFile.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiReferenceInPageFile(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbp
  int v12; // esi
  BOOL CanPageMove; // eax

  v2 = *(_QWORD *)(a1 + 208);
  if ( !v2 )
    return 0LL;
  v7 = MiReferenceControlAreaFile(*(_QWORD *)(a1 + 208));
  if ( (*(_DWORD *)(v2 + 56) & 0x20) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v2 + 112));
    v9 = *(_QWORD *)(a1 + 256);
    v10 = *(_QWORD *)(v2 + 96);
    if ( !v9 )
      v9 = a1 + 272;
    v11 = 48LL * *(_QWORD *)(v9 + 48) - 0x58000000000LL;
    *(_DWORD *)(a1 + 188) = MiComputeImagePteIndex(v11, a2, v5, v6);
    if ( *(_QWORD *)(v10 + 32) )
    {
      v12 = *(_DWORD *)(a1 + 192);
      *(_DWORD *)(a1 + 192) = v12 | 0x10000;
      if ( (MiFlags & 0x40000) != 0 )
      {
        CanPageMove = MiCanPageMove(v11);
        if ( !CanPageMove
          || (*(_DWORD *)(v2 + 92) & 0xC0000) != 0 && (((unsigned __int8)MI_READ_PTE_LOCK_FREE(v11 + 16) >> 5) & 2) != 0 )
        {
          *(_DWORD *)(a1 + 192) = v12 & 0xFFFEFFFF;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  return v7;
}
