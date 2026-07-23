/*
 * XREFs of SepReferenceTokenUsingPseudoHandle @ 0x140259670
 * Callers:
 *     SepReferenceTokenByHandle @ 0x1402595E0 (SepReferenceTokenByHandle.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1402597C0 (RtlSidDominatesForTrust.c)
 *     SepSidFromProcessProtection @ 0x1402598C0 (SepSidFromProcessProtection.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     PsReferenceImpersonationTokenEx @ 0x1405EBDA0 (PsReferenceImpersonationTokenEx.c)
 *     PsReferenceEffectiveToken @ 0x140609900 (PsReferenceEffectiveToken.c)
 */

__int64 __fastcall SepReferenceTokenUsingPseudoHandle(__int64 a1, PACCESS_TOKEN *a2, _BYTE *a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _DMA_ADAPTER *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _DMA_ADAPTER *v11; // r11
  __int64 v12; // r9
  void *v13; // rbp
  PSID v14; // r9
  void *v15; // r11
  int v17; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+34h] [rbp-34h] BYREF
  char v19; // [rsp+70h] [rbp+8h] BYREF
  char v20; // [rsp+78h] [rbp+10h] BYREF
  BOOLEAN DominatesTrust; // [rsp+80h] [rbp+18h] BYREF
  char v22; // [rsp+88h] [rbp+20h] BYREF

  v20 = 0;
  *a2 = 0LL;
  *a3 = 0;
  *a4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( a1 == -4 )
  {
    *a2 = PsReferencePrimaryToken(CurrentThread->ApcState.Process);
    return 0LL;
  }
  if ( a1 == -5 )
  {
    v8 = (struct _DMA_ADAPTER *)PsReferenceImpersonationTokenEx(
                                  (_DWORD)CurrentThread,
                                  0,
                                  (unsigned int)&v22,
                                  (unsigned int)&v20,
                                  (__int64)&v17,
                                  (__int64)&v19);
    v11 = v8;
    if ( !v8 )
      return 3221225596LL;
  }
  else
  {
    v8 = (struct _DMA_ADAPTER *)PsReferenceEffectiveToken(
                                  (_DWORD)CurrentThread,
                                  (unsigned int)&v18,
                                  (unsigned int)&v20,
                                  (unsigned int)&v17,
                                  (__int64)&v19);
    v11 = v8;
    if ( v18 != 2 )
      goto LABEL_7;
  }
  if ( !v17 )
  {
    HalPutDmaAdapter(v8);
    return 3221225638LL;
  }
LABEL_7:
  v12 = *(_QWORD *)&v11[69].Version;
  *a3 = 0;
  *a4 = 0LL;
  DominatesTrust = 0;
  v13 = (void *)SepSidFromProcessProtection(&v19, v9, v10, v12);
  RtlSidDominatesForTrust(v13, v14, &DominatesTrust);
  if ( !DominatesTrust )
  {
    *a3 = 1;
    *a4 = v13;
  }
  *a2 = v15;
  return 0LL;
}
