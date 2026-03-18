/*
 * XREFs of EtwpGetSidExtendedHeaderItem @ 0x140625830
 * Callers:
 *     EtwpEventWriteFull @ 0x140293740 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1406246E0 (EtwpWriteUserEvent.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObFastDereferenceObject @ 0x140299050 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     SeQueryUserSidToken @ 0x1406259FC (SeQueryUserSidToken.c)
 *     PsReferencePrimaryToken @ 0x1406676A0 (PsReferencePrimaryToken.c)
 *     PsReferenceEffectiveToken @ 0x140681A50 (PsReferenceEffectiveToken.c)
 */

void *__fastcall EtwpGetSidExtendedHeaderItem(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _DMA_ADAPTER *v3; // rax
  int v4; // esi
  struct _DMA_ADAPTER *v5; // rbx
  unsigned int v6; // eax
  size_t v7; // r8
  unsigned int v8; // edi
  unsigned int v9; // ebx
  char v11; // [rsp+30h] [rbp-39h] BYREF
  int v12; // [rsp+34h] [rbp-35h] BYREF
  int v13; // [rsp+38h] [rbp-31h] BYREF
  unsigned int Size[21]; // [rsp+3Ch] [rbp-2Dh] BYREF

  v11 = 0;
  v13 = 0;
  memset(Size, 0, 72);
  v12 = 0;
  CurrentThread = KeGetCurrentThread();
  v3 = (struct _DMA_ADAPTER *)PsReferenceEffectiveToken(
                                (_DWORD)CurrentThread,
                                (unsigned int)&v12,
                                (unsigned int)&v11,
                                (unsigned int)&v13,
                                0LL);
  v4 = v12;
  v5 = v3;
  if ( v12 == 2 && v13 < 2 )
  {
    if ( v3 )
      HalPutDmaAdapter(v3);
    v5 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(CurrentThread->Process);
    v4 = 1;
  }
  SeQueryUserSidToken(v5, &Size[1], 68LL, Size);
  if ( v4 == 1 )
  {
    ObFastDereferenceObject((signed __int64 *)&CurrentThread->Process[1].Affinity.Bitmap[5], v5);
  }
  else if ( v5 )
  {
    HalPutDmaAdapter(v5);
  }
  v6 = Size[0];
  v7 = Size[0];
  *(_DWORD *)(a1 + 2) = 2;
  *(_WORD *)(a1 + 6) = v6;
  v8 = v6 + 8;
  v9 = (v6 + 15) & 0xFFFFFFF8;
  *(_WORD *)a1 = (v6 + 15) & 0xFFF8;
  memmove((void *)(a1 + 8), &Size[1], v7);
  return memset((void *)(a1 + v8), 0, v9 - v8);
}
