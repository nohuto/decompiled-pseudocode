/*
 * XREFs of AlpcpPortQueryConnectedSidInfo @ 0x1405DD3F8
 * Callers:
 *     NtAlpcQueryInformation @ 0x1405DCFD0 (NtAlpcQueryInformation.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObFastDereferenceObject @ 0x14026A5B0 (ObFastDereferenceObject.c)
 *     RtlEqualSid @ 0x14026A980 (RtlEqualSid.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     SeCaptureSid @ 0x1406CDBCC (SeCaptureSid.c)
 *     SeReleaseSid @ 0x1406CDCD0 (SeReleaseSid.c)
 *     AlpcpReferenceConnectedPort @ 0x1406D9660 (AlpcpReferenceConnectedPort.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
 *     SeQueryUserSidToken @ 0x14071E204 (SeQueryUserSidToken.c)
 */

__int64 __fastcall AlpcpPortQueryConnectedSidInfo(__int64 a1, PSID a2, __int64 a3, _DWORD *a4, char a5)
{
  __int64 result; // rax
  struct _KPROCESS *DmaOperations; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _DMA_ADAPTER *v14; // r13
  signed __int64 *v15; // rsi
  struct _DMA_ADAPTER *v16; // rbx
  unsigned int v17; // ebx
  int v18; // [rsp+20h] [rbp-C8h]
  PSID Sid1; // [rsp+40h] [rbp-A8h] BYREF
  int v20; // [rsp+48h] [rbp-A0h]
  PSID v21; // [rsp+50h] [rbp-98h]
  __int64 v22; // [rsp+58h] [rbp-90h]
  _BYTE Sid2[80]; // [rsp+60h] [rbp-88h] BYREF

  v22 = a1;
  v21 = a2;
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
  result = SeCaptureSid(a2, v18, 1, (__int64)&Sid1);
  v20 = result;
  if ( (int)result >= 0 )
  {
LABEL_6:
    DmaOperations = 0LL;
    v10 = AlpcpReferenceConnectedPort(a1);
    v14 = (struct _DMA_ADAPTER *)v10;
    if ( v10 )
    {
      v15 = (signed __int64 *)(v10 + 352);
      ExAcquirePushLockSharedEx(v10 + 352, 0LL);
      if ( ((__int64)v14[1].DmaOperations & 1) == 0 )
        DmaOperations = (struct _KPROCESS *)v14[1].DmaOperations;
      if ( DmaOperations )
        ObfReferenceObjectWithTag(DmaOperations, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v15);
      KeAbPostRelease((ULONG_PTR)v15);
      HalPutDmaAdapter(v14);
    }
    if ( DmaOperations )
    {
      v16 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(DmaOperations);
      SeQueryUserSidToken(v16, Sid2, 68LL);
      ObFastDereferenceObject((signed __int64 *)&DmaOperations[1].Affinity.Bitmap[5], v16);
      LOBYTE(v16) = RtlEqualSid(Sid1, Sid2);
      ObfDereferenceObjectWithTag(DmaOperations, 0x63706C41u);
      v17 = (_BYTE)v16 == 0 ? 0xC00002A0 : 0;
    }
    else
    {
      v17 = -1073741769;
    }
    if ( Sid1 != a2 )
    {
      LOBYTE(v12) = 1;
      LOBYTE(v11) = a5;
      SeReleaseSid(Sid1, v11, v12, v13);
    }
    return v17;
  }
  return result;
}
