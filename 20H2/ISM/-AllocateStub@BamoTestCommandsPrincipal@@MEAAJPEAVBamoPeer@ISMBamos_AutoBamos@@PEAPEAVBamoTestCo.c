/*
 * XREFs of ?AllocateStub@BamoTestCommandsPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoTestCommandsStub@@@Z @ 0x18000FC70
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CAF8 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoTestCommandsPrincipal::AllocateStub(
        BamoTestCommandsPrincipal *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2,
        struct BamoTestCommandsStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &BamoTestCommandsStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoTestCommandsStub::`vftable'{for `ITestCommandsStub'};
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  *((_BYTE *)v4 + 48) = 0;
  v4[7] = 0LL;
  v4[8] = 0LL;
  v4[9] = 0LL;
  v4[2] = &BamoImpl::BamoDragNDropContextualProcessorStubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  *a3 = (struct BamoTestCommandsStub *)v4;
  return result;
}
