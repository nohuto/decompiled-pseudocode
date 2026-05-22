/*
 * XREFs of ?AllocateStub@BamoMPCConstantManagerClientCallbacksPrincipal@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@PEAPEAVBamoMPCConstantManagerClientCallbacksStub@@@Z @ 0x18011BA50
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CAF8 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoMPCConstantManagerClientCallbacksPrincipal::AllocateStub(
        BamoMPCConstantManagerClientCallbacksPrincipal *this,
        struct MPCManagerBamo_AutoBamos::BamoPeer *a2,
        struct BamoMPCConstantManagerClientCallbacksStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &BamoMPCConstantManagerClientCallbacksStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoMPCConstantManagerClientCallbacksStub::`vftable'{for `IMPCConstantManagerClientCallbacksStub'};
  v4[7] = 0LL;
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  *((_BYTE *)v4 + 48) = 0;
  v4[8] = 0LL;
  v4[9] = 0LL;
  v4[2] = &BamoImpl::BamoAsyncResult_string_StubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  *a3 = (struct BamoMPCConstantManagerClientCallbacksStub *)v4;
  return result;
}
