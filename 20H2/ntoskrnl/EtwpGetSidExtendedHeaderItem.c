/*
 * XREFs of EtwpGetSidExtendedHeaderItem @ 0x140656940
 * Callers:
 *     EtwpEventWriteFull @ 0x14020E300 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1406557F0 (EtwpWriteUserEvent.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140210E40 (ObFastDereferenceObject.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     PsReferenceEffectiveToken @ 0x14061FA40 (PsReferenceEffectiveToken.c)
 *     SeQueryUserSidToken @ 0x140656B0C (SeQueryUserSidToken.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 */

void *__fastcall EtwpGetSidExtendedHeaderItem(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _DMA_ADAPTER *v3; // rax
  int v4; // esi
  struct _DMA_ADAPTER *v5; // rbx
  int v6; // eax
  size_t v7; // r8
  unsigned int v8; // edi
  unsigned int v9; // ebx
  bool v11; // [rsp+30h] [rbp-39h] BYREF
  int v12; // [rsp+34h] [rbp-35h] BYREF
  int v13[22]; // [rsp+38h] [rbp-31h] BYREF

  v11 = 0;
  memset(v13, 0, 76);
  v12 = 0;
  CurrentThread = KeGetCurrentThread();
  v3 = (struct _DMA_ADAPTER *)PsReferenceEffectiveToken((__int64)CurrentThread, &v12, &v11, v13, 0LL);
  v4 = v12;
  v5 = v3;
  if ( v12 == 2 && v13[0] < 2 )
  {
    if ( v3 )
      HalPutDmaAdapter(v3);
    v5 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(CurrentThread->Process);
    v4 = 1;
  }
  SeQueryUserSidToken(v5, &v13[2], 68LL);
  if ( v4 == 1 )
  {
    ObFastDereferenceObject((signed __int64 *)&CurrentThread->Process[1].Affinity.Bitmap[5], v5);
  }
  else if ( v5 )
  {
    HalPutDmaAdapter(v5);
  }
  v6 = v13[1];
  v7 = (unsigned int)v13[1];
  *(_DWORD *)(a1 + 2) = 2;
  *(_WORD *)(a1 + 6) = v6;
  v8 = v6 + 8;
  v9 = (v6 + 15) & 0xFFFFFFF8;
  *(_WORD *)a1 = (v6 + 15) & 0xFFF8;
  memmove((void *)(a1 + 8), &v13[2], v7);
  return memset((void *)(a1 + v8), 0, v9 - v8);
}
