/*
 * XREFs of EtwpGetSidExtendedHeaderItem @ 0x14066AF50
 * Callers:
 *     EtwpEventWriteFull @ 0x140256EC0 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140669E00 (EtwpWriteUserEvent.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140206540 (ObFastDereferenceObject.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     PsReferenceEffectiveToken @ 0x140609900 (PsReferenceEffectiveToken.c)
 *     SeQueryUserSidToken @ 0x14066B11C (SeQueryUserSidToken.c)
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
  bool v11; // [rsp+30h] [rbp-39h] BYREF
  int v12; // [rsp+34h] [rbp-35h] BYREF
  int v13; // [rsp+38h] [rbp-31h] BYREF
  unsigned int Size[21]; // [rsp+3Ch] [rbp-2Dh] BYREF

  v11 = 0;
  v13 = 0;
  memset(Size, 0, 72);
  v12 = 0;
  CurrentThread = KeGetCurrentThread();
  v3 = (struct _DMA_ADAPTER *)PsReferenceEffectiveToken((__int64)CurrentThread, &v12, &v11, &v13, 0LL);
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
