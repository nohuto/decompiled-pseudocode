/*
 * XREFs of MiIsPageTableLocked @ 0x14023B6D8
 * Callers:
 *     MiWalkVaCheckCommon @ 0x140311474 (MiWalkVaCheckCommon.c)
 *     MiTrimPte @ 0x140313650 (MiTrimPte.c)
 *     MiAgePte @ 0x140344190 (MiAgePte.c)
 *     MiResetAccessBitPte @ 0x14039B940 (MiResetAccessBitPte.c)
 * Callees:
 *     MiGetPageTableLockBuffer @ 0x1402029B8 (MiGetPageTableLockBuffer.c)
 *     MiShouldLockPteDirectly @ 0x140317770 (MiShouldLockPteDirectly.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiIsPageTableLocked(__int64 a1, unsigned __int64 a2)
{
  char v2; // r8
  char v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  bool v10; // zf
  char *PageTableLockBuffer; // rax
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a1 + 184);
  v12 = 0;
  v4 = v2 & 7;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( v4 )
    {
      if ( v4 == 7 )
      {
        v9 = &unk_140C4E538;
      }
      else
      {
        v9 = &unk_140C4E530;
        if ( v4 != 5 )
          v9 = &unk_140C4E548;
      }
    }
    else
    {
      v9 = (_QWORD *)(a1 + 176);
    }
    v10 = *v9 == 0LL;
  }
  else
  {
    if ( v4
      || a2 < 0xFFFFF6FB7DBED000uLL
      || a2 > 0xFFFFF6FB7DBEDFFFuLL
      || (v8 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 608)) == 0 )
    {
      if ( (unsigned int)MiShouldLockPteDirectly(a1) )
        return ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v5) >> 60) & 1;
      PageTableLockBuffer = MiGetPageTableLockBuffer(v6, v5, &v12);
      return ((*(_DWORD *)PageTableLockBuffer >> v12) & 1) != 0;
    }
    v10 = *(_DWORD *)(v8 + 4 * ((a2 >> 3) & 0x1FF)) == 0;
  }
  return !v10;
}
