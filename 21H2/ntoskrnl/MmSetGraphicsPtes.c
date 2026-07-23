/*
 * XREFs of MmSetGraphicsPtes @ 0x1408C7010
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiSetGraphicsPtes @ 0x14053487C (MiSetGraphicsPtes.c)
 *     MiGetAwePageSizeFromVa @ 0x14054C69C (MiGetAwePageSizeFromVa.c)
 *     MiLockAweVadsExclusive @ 0x14054D240 (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x14054E238 (MiUnlockAweVadsExclusive.c)
 *     MiGetVadPageSize @ 0x14055BFF0 (MiGetVadPageSize.c)
 */

__int64 __fastcall MmSetGraphicsPtes(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        int a5,
        int a6)
{
  unsigned __int64 v10; // rax
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v12; // rbp
  int v13; // r15d
  __int64 v14; // rax
  char *v15; // rsi
  int v17; // edx
  unsigned int v18; // ebx
  __int64 AwePageSizeFromVa; // r10
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r8
  ULONG_PTR v22; // rax
  __int64 v23; // rdx
  int v24; // [rsp+20h] [rbp-38h]
  unsigned int v25; // [rsp+60h] [rbp+8h] BYREF

  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
    || (v10 = BugCheckParameter2 + BugCheckParameter3, BugCheckParameter2 + BugCheckParameter3 <= BugCheckParameter2)
    || v10 >= 0xFFFF800000000000uLL )
  {
    KeBugCheckEx(0x1Au, 0xA000uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  v25 = 0;
  v12 = v10 - 1;
  v13 = 0;
  v14 = MiObtainReferencedVadEx(BugCheckParameter2, 0, (int *)&v25);
  v15 = (char *)v14;
  if ( !v14 )
    return v25;
  v17 = *(_DWORD *)(v14 + 48);
  if ( (v17 & 0x1100000) == 0x1100000 )
  {
    if ( v12 > (((*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) << 12) | 0xFFF) )
    {
      v18 = -1073741584;
      goto LABEL_35;
    }
    if ( (v17 & 0x70) == 0x30 )
    {
      v13 = 1;
      MiLockAweVadsExclusive((__int64)CurrentThread);
      AwePageSizeFromVa = (__int64)MiGetAwePageSizeFromVa(BugCheckParameter2);
      if ( !AwePageSizeFromVa )
      {
        v18 = -1073741585;
        goto LABEL_34;
      }
    }
    else
    {
      if ( (v17 & 0x500000) != 0x500000 )
        goto LABEL_32;
      AwePageSizeFromVa = MiGetVadPageSize(v14);
    }
    if ( (a6 & 0xFFFFFFFE) != 0 )
    {
      v18 = -1073741580;
      goto LABEL_33;
    }
    if ( a5 )
    {
      v18 = -1073741581;
      goto LABEL_33;
    }
    v20 = AwePageSizeFromVa << 12;
    if ( a4 != v20 )
    {
      v18 = -1073741582;
      goto LABEL_33;
    }
    v21 = v20 - 1;
    if ( ((v20 - 1) & BugCheckParameter2) == 0 && (v21 & BugCheckParameter3) == 0 )
    {
      if ( a3 )
      {
        if ( (a6 & 1) != 0 )
        {
          v22 = 1LL;
          goto LABEL_27;
        }
        v22 = BugCheckParameter3 / v20;
        if ( BugCheckParameter3 / v20 )
        {
LABEL_27:
          v23 = 0LL;
          while ( (v21 & a3[v23]) == 0 )
          {
            if ( ++v23 >= v22 )
              goto LABEL_30;
          }
          v18 = -1073741583;
LABEL_33:
          if ( !v13 )
            goto LABEL_35;
LABEL_34:
          MiUnlockAweVadsExclusive((__int64)CurrentThread);
          goto LABEL_35;
        }
      }
LABEL_30:
      v18 = MiSetGraphicsPtes(BugCheckParameter2, BugCheckParameter3, a3, a4, v24, a6);
      goto LABEL_33;
    }
LABEL_32:
    v18 = -1073741585;
    goto LABEL_33;
  }
  v18 = -1073741585;
LABEL_35:
  MiUnlockAndDereferenceVad(v15);
  return v18;
}
