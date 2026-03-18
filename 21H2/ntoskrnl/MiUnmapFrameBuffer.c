/*
 * XREFs of MiUnmapFrameBuffer @ 0x14020101C
 * Callers:
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140200D20 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiDeleteVa @ 0x140330730 (MiDeleteVa.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnmapFrameBuffer(unsigned __int64 *BugCheckParameter2, int a2, unsigned int a3, _QWORD *a4)
{
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // r9
  __int64 v14; // r10
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // edi
  __int64 v19; // rdx
  unsigned __int16 v20; // cx
  bool v21; // cc
  int v22; // eax
  __int64 v23; // [rsp+78h] [rbp+20h] BYREF

  *a4 = -1LL;
  v23 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
  v8 = v23;
  v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v23) >> 12) & 0xFFFFFFFFFFLL;
  if ( v9 > qword_140C50840 )
    v10 = 0LL;
  else
    v10 = (*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1LL;
  v11 = MiSwizzleInvalidPte(128LL, v10);
  v15 = v11;
  if ( a2 == 2 )
  {
    v15 = v11 | 0x300;
  }
  else if ( a2 )
  {
    if ( a2 == 3 )
    {
      if ( v12 )
        v15 = 0LL;
      else
        v15 = v8 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    }
  }
  else
  {
    v15 = v11 | 0x100;
  }
  v16 = 48 * v14 - 0x220000000000LL;
  if ( v12 )
  {
    v19 = *(_QWORD *)(v16 + 40);
    v20 = 1;
    if ( (v19 & 0x10000000000LL) != 0 || (v13 & v19) == 0x3FFFFFFFFELL )
      v20 = 2;
    v21 = *(_WORD *)(v16 + 32) <= v20;
    if ( *(_WORD *)(v16 + 32) < v20 )
      KeBugCheckEx(0x1Au, 0x41301uLL, (ULONG_PTR)BugCheckParameter2, v8, 48 * v14 - 0x220000000000LL);
    v22 = 1;
    if ( v21 )
      v22 = a3;
    a3 = v22;
  }
  else
  {
    *a4 = v14;
  }
  if ( a2 != 3 )
    v15 = (v15 & 0xFF1F ^ (v15 & 0xFF1F | (unsigned __int16)((v8 & 0x800) != 0 ? 128 : 32))) & 0x3E0 ^ v15 & 0xFFFFFFFFFFFFFF1FuLL;
  v17 = 0;
  if ( (unsigned int)MiPteInShadowRange(BugCheckParameter2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v17 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_10;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_10;
    }
    if ( (v15 & 1) != 0 )
      v15 |= 0x8000000000000000uLL;
  }
LABEL_10:
  *BugCheckParameter2 = v15;
  if ( v17 )
    MiWritePteShadow(BugCheckParameter2, v15);
  return a3;
}
