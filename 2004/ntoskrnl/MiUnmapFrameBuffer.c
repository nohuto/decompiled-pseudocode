/*
 * XREFs of MiUnmapFrameBuffer @ 0x1403350B8
 * Callers:
 *     MiDeleteVa @ 0x140242B90 (MiDeleteVa.c)
 *     MiReplaceRotateWithDemandZero @ 0x140334CB0 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnmapFrameBuffer(__int64 *BugCheckParameter2, int a2, unsigned int a3, _QWORD *a4)
{
  ULONG_PTR v8; // rdi
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int16 v17; // dx
  int v18; // eax
  int v19; // edi
  __int64 v20; // r8
  __int64 v22; // [rsp+78h] [rbp+20h] BYREF

  *a4 = -1LL;
  v22 = MI_READ_PTE_LOCK_FREE((unsigned __int64)BugCheckParameter2);
  v8 = v22;
  MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22);
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
    v14 = (v14 & 0xFF1F ^ (unsigned __int16)(v14 & 0xFF1F | ((v8 & 0x800) != 0 ? 128 : 32))) & 0x3E0 ^ v14 & 0xFFFFFFFFFFFFFF1FuLL;
  v19 = 0;
  if ( MiPteInShadowRange((unsigned __int64)BugCheckParameter2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v19 = 1;
      if ( HIBYTE(word_140C4DE08) )
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
    MiWritePteShadow((__int64)BugCheckParameter2, v14, v20);
  return a3;
}
