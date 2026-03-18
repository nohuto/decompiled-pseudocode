/*
 * XREFs of SepUpdateSiloInClientSecurity @ 0x140924E98
 * Callers:
 *     SeCreateClientSecurityEx @ 0x140620380 (SeCreateClientSecurityEx.c)
 * Callees:
 *     PsIsHostSilo @ 0x14020DC00 (PsIsHostSilo.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     SeQueryServerSiloToken @ 0x1406D1C50 (SeQueryServerSiloToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14091F008 (SepCopyClientTokenAndSetSilo.c)
 *     SeGetTokenControlInformation @ 0x140925314 (SeGetTokenControlInformation.c)
 */

__int64 __fastcall SepUpdateSiloInClientSecurity(__int64 a1, __int64 a2)
{
  struct _DMA_ADAPTER *v2; // rbp
  _DMA_OPERATIONS *DmaOperations; // rbx
  int v6; // esi
  PADAPTER_OBJECT v7; // rbx
  int (__fastcall *v9)(_DMA_ADAPTER *, _DEVICE_OBJECT *, _MDL *, void *, unsigned int, void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *), void *, unsigned __int8, void *, unsigned int); // [rsp+50h] [rbp+8h] BYREF
  PADAPTER_OBJECT v10; // [rsp+60h] [rbp+18h] BYREF
  _DMA_OPERATIONS *v11; // [rsp+68h] [rbp+20h]

  v2 = *(struct _DMA_ADAPTER **)(a1 + 16);
  v9 = 0LL;
  v10 = 0LL;
  DmaOperations = v2[1].DmaOperations;
  v11 = DmaOperations;
  v6 = SeQueryServerSiloToken((__int64)v2, &v9);
  if ( v6 >= 0 && PsIsHostSilo((__int64)v9) && (_DWORD)DmaOperations == 999 && !HIDWORD(v11) )
  {
    v6 = SepCopyClientTokenAndSetSilo((__int64)v2, *(_DWORD *)(a1 + 4), a2, &v10);
    if ( v6 >= 0 )
    {
      v7 = v10;
      *(_QWORD *)(a1 + 16) = v10;
      *(_BYTE *)(a1 + 24) = 0;
      HalPutDmaAdapter(v2);
      SeGetTokenControlInformation(v7, a1 + 28);
    }
  }
  return (unsigned int)v6;
}
