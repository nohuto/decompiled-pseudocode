/*
 * XREFs of MiReferenceInPageFile @ 0x14028249C
 * Callers:
 *     MiIssueHardFault @ 0x1402B4770 (MiIssueHardFault.c)
 *     MiPfExecuteReadList @ 0x14063F024 (MiPfExecuteReadList.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiComputeImagePteIndex @ 0x1402BCCA0 (MiComputeImagePteIndex.c)
 *     MiCanPageMove @ 0x14034C6C0 (MiCanPageMove.c)
 */

__int64 __fastcall MiReferenceInPageFile(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v5; // r14
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rdx
  int v11; // esi
  int CanPageMove; // eax

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
      v11 = *(_DWORD *)(a1 + 192);
      *(_DWORD *)(a1 + 192) = v11 | 0x10000;
      if ( (MiFlags & 0x40000) != 0 )
      {
        CanPageMove = MiCanPageMove(v9, v10);
        if ( !CanPageMove
          || (*(_DWORD *)(v2 + 92) & 0xC0000) != 0 && (((unsigned __int8)MI_READ_PTE_LOCK_FREE(v9 + 16) >> 5) & 2) != 0 )
        {
          *(_DWORD *)(a1 + 192) = v11 & 0xFFFEFFFF;
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
