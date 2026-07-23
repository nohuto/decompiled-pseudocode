/*
 * XREFs of MiReferenceInPageFile @ 0x1403279E8
 * Callers:
 *     MiIssueHardFault @ 0x140319700 (MiIssueHardFault.c)
 *     MiPfExecuteReadList @ 0x1407004E4 (MiPfExecuteReadList.c)
 * Callees:
 *     MiCanPageMove @ 0x140259930 (MiCanPageMove.c)
 *     MiComputeImagePteIndex @ 0x140307A90 (MiComputeImagePteIndex.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiReferenceInPageFile(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v5; // r14
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbp
  int v10; // esi
  BOOL CanPageMove; // eax

  v2 = *(_QWORD *)(a1 + 208);
  if ( !v2 )
    return 0LL;
  v5 = MiReferenceControlAreaFile(*(_QWORD *)(a1 + 208));
  if ( (*(_DWORD *)(v2 + 56) & 0x20) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v2 + 112));
    v7 = *(_QWORD *)(a1 + 256);
    v8 = *(_QWORD *)(v2 + 96);
    if ( !v7 )
      v7 = a1 + 272;
    v9 = 48LL * *(_QWORD *)(v7 + 48) - 0x58000000000LL;
    *(_DWORD *)(a1 + 188) = MiComputeImagePteIndex(v9, a2);
    if ( *(_QWORD *)(v8 + 32) )
    {
      v10 = *(_DWORD *)(a1 + 192);
      *(_DWORD *)(a1 + 192) = v10 | 0x10000;
      if ( (MiFlags & 0x40000) != 0 )
      {
        CanPageMove = MiCanPageMove(v9);
        if ( !CanPageMove
          || (*(_DWORD *)(v2 + 92) & 0xC0000) != 0 && (((unsigned __int8)MI_READ_PTE_LOCK_FREE(v9 + 16) >> 5) & 2) != 0 )
        {
          *(_DWORD *)(a1 + 192) = v10 & 0xFFFEFFFF;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  return v5;
}
