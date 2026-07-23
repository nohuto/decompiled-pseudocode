/*
 * XREFs of SepReferenceTokenUsingPseudoHandle @ 0x140295EF0
 * Callers:
 *     SepReferenceTokenByHandle @ 0x140295E60 (SepReferenceTokenByHandle.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     RtlSidDominatesForTrust @ 0x140296040 (RtlSidDominatesForTrust.c)
 *     SepSidFromProcessProtection @ 0x140296140 (SepSidFromProcessProtection.c)
 *     PsReferencePrimaryToken @ 0x1406676A0 (PsReferencePrimaryToken.c)
 *     PsReferenceEffectiveToken @ 0x140681A50 (PsReferenceEffectiveToken.c)
 *     PsReferenceImpersonationTokenEx @ 0x1406952E0 (PsReferenceImpersonationTokenEx.c)
 */

__int64 __fastcall SepReferenceTokenUsingPseudoHandle(__int64 a1, PACCESS_TOKEN *a2, _BYTE *a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _DMA_ADAPTER *v8; // rax
  void *v9; // rbp
  PSID v10; // r9
  void *v11; // r11
  int v13; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+34h] [rbp-34h] BYREF
  char v15; // [rsp+70h] [rbp+8h] BYREF
  char v16; // [rsp+78h] [rbp+10h] BYREF
  BOOLEAN DominatesTrust; // [rsp+80h] [rbp+18h] BYREF
  char v18; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0;
  *a2 = 0LL;
  *a3 = 0;
  *a4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0;
  v14 = 0;
  v15 = 0;
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
                                  (unsigned int)&v18,
                                  (unsigned int)&v16,
                                  (__int64)&v13,
                                  (__int64)&v15);
    if ( !v8 )
      return 3221225596LL;
  }
  else
  {
    v8 = (struct _DMA_ADAPTER *)PsReferenceEffectiveToken(
                                  (_DWORD)CurrentThread,
                                  (unsigned int)&v14,
                                  (unsigned int)&v16,
                                  (unsigned int)&v13,
                                  (__int64)&v15);
    if ( v14 != 2 )
      goto LABEL_7;
  }
  if ( !v13 )
  {
    HalPutDmaAdapter(v8);
    return 3221225638LL;
  }
LABEL_7:
  *a3 = 0;
  *a4 = 0LL;
  DominatesTrust = 0;
  v9 = (void *)SepSidFromProcessProtection(&v15);
  RtlSidDominatesForTrust(v9, v10, &DominatesTrust);
  if ( !DominatesTrust )
  {
    *a3 = 1;
    *a4 = v9;
  }
  *a2 = v11;
  return 0LL;
}
