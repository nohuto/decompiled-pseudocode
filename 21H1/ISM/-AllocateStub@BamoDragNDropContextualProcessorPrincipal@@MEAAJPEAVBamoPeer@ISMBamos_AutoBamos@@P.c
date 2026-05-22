/*
 * XREFs of ?AllocateStub@BamoDragNDropContextualProcessorPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoDragNDropContextualProcessorStub@@@Z @ 0x1800102A0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA18 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoDragNDropContextualProcessorPrincipal::AllocateStub(
        BamoDragNDropContextualProcessorPrincipal *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2,
        struct BamoDragNDropContextualProcessorStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &BamoDragNDropContextualProcessorStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoDragNDropContextualProcessorStub::`vftable'{for `IDragNDropContextualProcessorStub'};
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  *((_BYTE *)v4 + 48) = 0;
  v4[7] = 0LL;
  v4[8] = 0LL;
  v4[9] = 0LL;
  v4[2] = &BamoImpl::BamoDragNDropContextualProcessorStubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  *a3 = (struct BamoDragNDropContextualProcessorStub *)v4;
  return result;
}
