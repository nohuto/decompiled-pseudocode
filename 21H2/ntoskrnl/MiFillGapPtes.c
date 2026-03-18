/*
 * XREFs of MiFillGapPtes @ 0x140B1B0B0
 * Callers:
 *     <none>
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 */

_BOOL8 __fastcall MiFillGapPtes(__int64 a1, unsigned __int64 *a2, int a3)
{
  __int64 v4; // rbp
  char v6; // al
  unsigned __int64 v8; // rcx
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v10; // rbx
  int v11; // ebp
  bool v12; // zf

  v4 = a3;
  v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
  if ( (v6 & 1) == 0 )
  {
    v8 = (unsigned __int64)a2;
    if ( (_DWORD)v4 )
      v8 = 0LL;
    ValidPte = MiMakeValidPte(
                 v8,
                 *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v4),
                 (_DWORD)v4 != 0 ? -1476395004 : 536870913);
    v10 = ValidPte;
    if ( (MiFlags & 0x4000000) == 0 && ((unsigned __int8)(1 << v4) & (unsigned __int8)byte_140C506CE) != 0 )
      v10 = ValidPte & 0xFFFFFFFFFFFFFFDFuLL;
    v11 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)a2) )
      goto LABEL_18;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v11 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
        v12 = (v10 & 1) == 0;
        goto LABEL_16;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v12 = (v10 & 1) == 0;
LABEL_16:
      if ( !v12 )
        v10 |= 0x8000000000000000uLL;
    }
LABEL_18:
    *a2 = v10;
    if ( v11 )
      MiWritePteShadow((__int64)a2, v10);
    return 0LL;
  }
  return (_DWORD)v4 && v6 < 0;
}
