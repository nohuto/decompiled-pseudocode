/*
 * XREFs of AlpcpReleaseMessageAttributesOnCancel @ 0x1406D26F0
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x1406D21B0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpCancelMessage @ 0x1406D277C (AlpcpCancelMessage.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     AlpcpReleaseViewAttribute @ 0x140613954 (AlpcpReleaseViewAttribute.c)
 *     AlpcpDereferenceBlobEx @ 0x1406D9720 (AlpcpDereferenceBlobEx.c)
 */

void __fastcall AlpcpReleaseMessageAttributesOnCancel(__int64 a1, int a2)
{
  ULONG_PTR v4; // rcx
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rcx
  unsigned __int64 v7; // rcx

  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
  {
    AlpcpDereferenceBlobEx(v4);
    *(_QWORD *)(a1 + 136) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 144);
  if ( v5 && (!a2 || (*(_DWORD *)(a1 + 40) & 0x4000) == 0) )
  {
    AlpcpReleaseViewAttribute(v5);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 152);
  if ( v6 )
  {
    AlpcpDereferenceBlobEx(v6);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 160);
  if ( (v7 & 1) != 0 )
  {
    if ( v7 >= 4 && (v7 & 2) != 0 )
      HalPutDmaAdapter((PADAPTER_OBJECT)(v7 & 0xFFFFFFFFFFFFFFFCuLL));
    *(_QWORD *)(a1 + 160) = 0LL;
  }
}
