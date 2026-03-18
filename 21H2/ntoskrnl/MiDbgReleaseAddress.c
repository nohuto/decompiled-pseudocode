/*
 * XREFs of MiDbgReleaseAddress @ 0x1403AD0A8
 * Callers:
 *     MiDbgCopyMemory @ 0x14028FA14 (MiDbgCopyMemory.c)
 * Callees:
 *     MiRealVaToFlushType @ 0x140227300 (MiRealVaToFlushType.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KeFlushSingleCurrentTb @ 0x1403AD304 (KeFlushSingleCurrentTb.c)
 */

_UNKNOWN **__fastcall MiDbgReleaseAddress(unsigned __int64 a1, __int64 *a2, char a3)
{
  _UNKNOWN **result; // rax
  __int64 v4; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 *v9; // rdi
  int v10; // ebp
  unsigned __int64 LeafVa; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  bool v16; // zf
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = *a2;
  if ( !*a2 )
    return result;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
  {
    v7 = (a1 >> 18) & 0x3FFFFFF8;
    v8 = 0xFFFFF6FB40000000uLL;
  }
  else
  {
    v7 = (a1 >> 9) & 0x7FFFFFFFF8LL;
    v8 = 0xFFFFF68000000000uLL;
  }
  v9 = (__int64 *)(v8 + v7);
  _InterlockedIncrement(&dword_140C52BD4);
  v10 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v9) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v10 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_5;
      v16 = (v4 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v16 = (v4 & 1) == 0;
    }
    if ( !v16 )
      v4 |= 0x8000000000000000uLL;
  }
LABEL_5:
  *v9 = v4;
  if ( v10 )
    MiWritePteShadow((__int64)v9, v4);
  _InterlockedDecrement(&dword_140C52BD4);
  LeafVa = MiGetLeafVa(a1);
  v15 = (unsigned int)MiRealVaToFlushType(LeafVa, v12, v13, v14);
  if ( (a3 & 4) != 0 )
    return (_UNKNOWN **)KeFlushSingleCurrentTb(a1, v15);
  else
    return (_UNKNOWN **)KeFlushSingleTb(a1, v15, 2u);
}
