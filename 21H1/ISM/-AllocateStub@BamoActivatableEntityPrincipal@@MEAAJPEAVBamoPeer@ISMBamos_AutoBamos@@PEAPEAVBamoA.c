/*
 * XREFs of ?AllocateStub@BamoActivatableEntityPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoActivatableEntityStub@@@Z @ 0x180009D50
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003CA18 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoActivatableEntityPrincipal::AllocateStub(
        BamoActivatableEntityPrincipal *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2,
        struct BamoActivatableEntityStub **a3)
{
  _OWORD *v5; // [rsp+40h] [rbp+18h]

  v5 = operator new(0x50uLL);
  *v5 = 0LL;
  v5[1] = 0LL;
  v5[2] = 0LL;
  v5[3] = 0LL;
  v5[4] = 0LL;
  *(_QWORD *)v5 = &BamoActivatableEntityStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  *((_QWORD *)v5 + 1) = &BamoActivatableEntityStub::`vftable'{for `IActivatableEntityStub'};
  *((_DWORD *)v5 + 8) = 0;
  *((_QWORD *)v5 + 5) = 0LL;
  *((_BYTE *)v5 + 48) = 0;
  *((_QWORD *)v5 + 7) = 0LL;
  *((_QWORD *)v5 + 8) = 0LL;
  *((_QWORD *)v5 + 9) = 0LL;
  *((_QWORD *)v5 + 2) = &BamoImpl::BamoActivatableEntityStubImpl::`vftable';
  *((_DWORD *)v5 + 6) = 1;
  *a3 = (struct BamoActivatableEntityStub *)v5;
  return 0LL;
}
