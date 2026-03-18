/*
 * XREFs of MiIsPageTableLocked @ 0x14032E7BC
 * Callers:
 *     MiAgePte @ 0x140244550 (MiAgePte.c)
 *     MiTrimPte @ 0x1402469E0 (MiTrimPte.c)
 *     MiWalkVaCheckCommon @ 0x14032DAC4 (MiWalkVaCheckCommon.c)
 *     MiResetAccessBitPte @ 0x140398A60 (MiResetAccessBitPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageTableLockBuffer @ 0x140278D38 (MiGetPageTableLockBuffer.c)
 *     MiShouldLockPteDirectly @ 0x14032EC5C (MiShouldLockPteDirectly.c)
 */

unsigned __int64 __fastcall MiIsPageTableLocked(__int64 a1, unsigned __int64 a2)
{
  char v2; // r8
  char v4; // r8
  unsigned __int64 v5; // rdx
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
        v9 = &unk_140C4E2F8;
      }
      else
      {
        v9 = &unk_140C4E2F0;
        if ( v4 != 5 )
          v9 = &unk_140C4E308;
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
