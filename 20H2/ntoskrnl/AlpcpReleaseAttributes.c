/*
 * XREFs of AlpcpReleaseAttributes @ 0x1405EAF90
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1405E85DC (AlpcpAcceptConnectPort.c)
 *     AlpcpSendMessage @ 0x1405EBDA0 (AlpcpSendMessage.c)
 *     AlpcpCaptureAttributes @ 0x1405ED830 (AlpcpCaptureAttributes.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     AlpcpDereferenceBlobEx @ 0x1405F1600 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReleaseViewAttribute @ 0x1406D649C (AlpcpReleaseViewAttribute.c)
 */

void __fastcall AlpcpReleaseAttributes(_QWORD *a1)
{
  ULONG_PTR v2; // rcx
  ULONG_PTR v3; // rcx
  ULONG_PTR v4; // rcx
  unsigned __int64 v5; // rcx

  v2 = a1[4];
  if ( v2 )
  {
    AlpcpDereferenceBlobEx(v2);
    a1[4] = 0LL;
  }
  v3 = a1[5];
  if ( v3 )
  {
    AlpcpReleaseViewAttribute(v3);
    a1[5] = 0LL;
  }
  v4 = a1[6];
  if ( v4 )
  {
    AlpcpDereferenceBlobEx(v4);
    a1[6] = 0LL;
  }
  v5 = a1[7];
  if ( (v5 & 1) != 0 )
  {
    if ( v5 >= 4 && (v5 & 2) != 0 )
      HalPutDmaAdapter((PADAPTER_OBJECT)(v5 & 0xFFFFFFFFFFFFFFFCuLL));
    a1[7] = 0LL;
  }
}
