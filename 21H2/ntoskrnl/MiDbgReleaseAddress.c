/*
 * XREFs of MiDbgReleaseAddress @ 0x1405462FC
 * Callers:
 *     MiDbgCopyMemory @ 0x140545AE4 (MiDbgCopyMemory.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiRealVaToFlushType @ 0x140378CF8 (MiRealVaToFlushType.c)
 *     KeFlushSingleCurrentTb @ 0x14038A028 (KeFlushSingleCurrentTb.c)
 */

_UNKNOWN **__fastcall MiDbgReleaseAddress(unsigned __int64 a1, __int64 *a2, char a3)
{
  _UNKNOWN **result; // rax
  __int64 v4; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 *v9; // rdi
  int v10; // ebp
  bool v11; // zf
  unsigned __int64 LeafVa; // rax
  unsigned int v13; // edx
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
  _InterlockedIncrement(&dword_140C4E8D4);
  v10 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v9) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v10 = 1;
      if ( !HIBYTE(word_140C4E048) )
      {
        v11 = (v4 & 1) == 0;
        goto LABEL_11;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v11 = (v4 & 1) == 0;
LABEL_11:
      if ( !v11 )
        v4 |= 0x8000000000000000uLL;
    }
  }
  *v9 = v4;
  if ( v10 )
    MiWritePteShadow((__int64)v9, v4);
  _InterlockedDecrement(&dword_140C4E8D4);
  LeafVa = MiGetLeafVa(a1);
  v13 = MiRealVaToFlushType(LeafVa);
  if ( (a3 & 4) != 0 )
    return (_UNKNOWN **)KeFlushSingleCurrentTb(a1, v13);
  else
    return (_UNKNOWN **)KeFlushSingleTb(a1, v13, 2u);
}
