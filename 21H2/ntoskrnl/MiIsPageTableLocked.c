/*
 * XREFs of MiIsPageTableLocked @ 0x140228C50
 * Callers:
 *     MiWalkVaCheckCommon @ 0x140227020 (MiWalkVaCheckCommon.c)
 *     MiAgePte @ 0x140332110 (MiAgePte.c)
 *     MiTrimPte @ 0x1403731C0 (MiTrimPte.c)
 * Callees:
 *     MiGetPageTableLockBuffer @ 0x14020DAE8 (MiGetPageTableLockBuffer.c)
 *     MiShouldLockPteDirectly @ 0x14022948C (MiShouldLockPteDirectly.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiIsPageTableLocked(__int64 a1, unsigned __int64 a2)
{
  char v2; // r8
  char v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v8; // rax
  bool v9; // zf
  __int64 v10; // rcx
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
        v8 = &unk_140C51D80;
      }
      else
      {
        v8 = &unk_140C51D78;
        if ( v4 != 5 )
          v8 = &unk_140C51D90;
      }
    }
    else
    {
      v8 = (_QWORD *)(a1 + 176);
    }
    v9 = *v8 == 0LL;
  }
  else
  {
    if ( v4
      || a2 < 0xFFFFF6FB7DBED000uLL
      || a2 > 0xFFFFF6FB7DBEDFFFuLL
      || (v10 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 592)) == 0 )
    {
      if ( (unsigned int)MiShouldLockPteDirectly(a1) )
        return ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v5) >> 60) & 1;
      PageTableLockBuffer = MiGetPageTableLockBuffer(v6, v5, &v12);
      return ((*(_DWORD *)PageTableLockBuffer >> v12) & 1) != 0;
    }
    v9 = *(_DWORD *)(v10 + 4 * ((a2 >> 3) & 0x1FF)) == 0;
  }
  return !v9;
}
