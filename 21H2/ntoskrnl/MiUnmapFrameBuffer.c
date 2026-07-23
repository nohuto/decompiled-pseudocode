/*
 * XREFs of MiUnmapFrameBuffer @ 0x14021958C
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140219184 (MiReplaceRotateWithDemandZero.c)
 *     MiDeleteVa @ 0x1403427D0 (MiDeleteVa.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnmapFrameBuffer(unsigned __int64 *BugCheckParameter2, int a2, unsigned int a3, _QWORD *a4)
{
  ULONG_PTR v8; // rdi
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int16 v17; // dx
  int v18; // eax
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // [rsp+78h] [rbp+20h] BYREF

  *a4 = -1LL;
  v23 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
  v8 = v23;
  MI_READ_PTE_LOCK_FREE(&v23);
  v9 = MiSwizzleInvalidPte(128LL);
  v14 = v9;
  if ( a2 == 2 )
  {
    v14 = v9 | 0x300;
  }
  else if ( a2 )
  {
    if ( a2 == 3 )
    {
      if ( v10 )
        v14 = 0LL;
      else
        v14 = v8 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    }
  }
  else
  {
    v14 = v9 | 0x100;
  }
  v15 = 8 * v12 - 0x58000000000LL;
  if ( v10 )
  {
    v16 = *(_QWORD *)(v15 + 40);
    v17 = 1;
    if ( (v16 & 0x1000000000LL) != 0 || (v13 & v16) == 0xFFFFFFFFDLL )
      v17 = 2;
    if ( *(_WORD *)(v15 + 32) < v17 )
      KeBugCheckEx(0x1Au, 0x41301uLL, (ULONG_PTR)BugCheckParameter2, v8, 8 * v12 - 0x58000000000LL);
    v18 = 1;
    if ( *(_WORD *)(v15 + 32) <= v17 )
      v18 = a3;
    a3 = v18;
  }
  else
  {
    *a4 = v11;
  }
  if ( a2 != 3 )
    v14 = (v14 & 0xFF1F ^ (v14 & 0xFF1F | (unsigned __int16)((v8 & 0x800) != 0 ? 128 : 32))) & 0x3E0 ^ v14 & 0xFFFFFFFFFFFFFF1FuLL;
  v19 = 0;
  if ( (unsigned int)MiPteInShadowRange(BugCheckParameter2) )
  {
    if ( (unsigned int)MiPteHasShadow(v21, v20) )
    {
      v19 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_27;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_27;
    }
    if ( (v14 & 1) != 0 )
      v14 |= 0x8000000000000000uLL;
  }
LABEL_27:
  *BugCheckParameter2 = v14;
  if ( v19 )
    MiWritePteShadow(BugCheckParameter2);
  return a3;
}
