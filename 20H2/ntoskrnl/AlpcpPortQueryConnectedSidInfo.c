/*
 * XREFs of AlpcpPortQueryConnectedSidInfo @ 0x1406A6FD8
 * Callers:
 *     NtAlpcQueryInformation @ 0x1406A6BB0 (NtAlpcQueryInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     RtlEqualSid @ 0x140210C40 (RtlEqualSid.c)
 *     ObFastDereferenceObject @ 0x140210E40 (ObFastDereferenceObject.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     SeCaptureSid @ 0x1405E5438 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x1405E553C (SeReleaseSid.c)
 *     AlpcpReferenceConnectedPort @ 0x1405F1540 (AlpcpReferenceConnectedPort.c)
 *     SeQueryUserSidToken @ 0x140656B0C (SeQueryUserSidToken.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall AlpcpPortQueryConnectedSidInfo(__int64 a1, PSID a2, __int64 a3, _DWORD *a4, char a5)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  struct _KPROCESS *DmaOperations; // rdi
  __int64 v12; // rax
  struct _DMA_ADAPTER *v13; // r13
  signed __int64 *v14; // rsi
  struct _DMA_ADAPTER *v15; // rbx
  unsigned int v16; // ebx
  int v17; // [rsp+20h] [rbp-C8h]
  PSID Sid1; // [rsp+40h] [rbp-A8h] BYREF
  int v19; // [rsp+48h] [rbp-A0h]
  PSID v20; // [rsp+50h] [rbp-98h]
  __int64 v21; // [rsp+58h] [rbp-90h]
  _BYTE Sid2[80]; // [rsp+60h] [rbp-88h] BYREF

  v21 = a1;
  v20 = a2;
  Sid1 = 0LL;
  memset(Sid2, 0, 0x44uLL);
  if ( !a1 )
    return 3221225485LL;
  if ( !a5 )
  {
    if ( a4 )
      *a4 = 0;
    Sid1 = a2;
    goto LABEL_6;
  }
  if ( a4 )
    *a4 = 0;
  result = SeCaptureSid((char *)a2, a5, v8, v9, v17, 1, &Sid1);
  v19 = result;
  if ( (int)result >= 0 )
  {
LABEL_6:
    DmaOperations = 0LL;
    v12 = AlpcpReferenceConnectedPort(a1);
    v13 = (struct _DMA_ADAPTER *)v12;
    if ( v12 )
    {
      v14 = (signed __int64 *)(v12 + 352);
      ExAcquirePushLockSharedEx(v12 + 352, 0LL);
      if ( ((__int64)v13[1].DmaOperations & 1) == 0 )
        DmaOperations = (struct _KPROCESS *)v13[1].DmaOperations;
      if ( DmaOperations )
        ObfReferenceObjectWithTag(DmaOperations, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v14);
      KeAbPostRelease((ULONG_PTR)v14);
      HalPutDmaAdapter(v13);
    }
    if ( DmaOperations )
    {
      v15 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(DmaOperations);
      SeQueryUserSidToken((__int64)v15, Sid2, 0x44u, 0LL);
      ObFastDereferenceObject((signed __int64 *)&DmaOperations[1].Affinity.Bitmap[5], v15);
      LOBYTE(v15) = RtlEqualSid(Sid1, Sid2);
      ObfDereferenceObjectWithTag(DmaOperations, 0x63706C41u);
      v16 = (_BYTE)v15 == 0 ? 0xC00002A0 : 0;
    }
    else
    {
      v16 = -1073741769;
    }
    if ( Sid1 != a2 )
      SeReleaseSid(Sid1, a5, 1);
    return v16;
  }
  return result;
}
