/*
 * XREFs of ?AllocateStub@BamoMPCConstantManagerClientPrincipal@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@PEAPEAVBamoMPCConstantManagerClientStub@@@Z @ 0x18006E040
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoMPCConstantManagerClientPrincipal::AllocateStub(
        BamoMPCConstantManagerClientPrincipal *this,
        struct MPCManagerBamo_AutoBamos::BamoPeer *a2,
        struct BamoMPCConstantManagerClientStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x58uLL);
  memset_0(v4, 0, 0x58uLL);
  *v4 = &BamoMPCConstantManagerClientStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoMPCConstantManagerClientStub::`vftable'{for `IMPCConstantManagerClientStub'};
  v4[7] = 0LL;
  v4[2] = &BamoImpl::BamoMPCConstantManagerClientStubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  *((_BYTE *)v4 + 48) = 0;
  v4[8] = 0LL;
  v4[9] = 0LL;
  v4[10] = 0LL;
  *a3 = (struct BamoMPCConstantManagerClientStub *)v4;
  return result;
}
