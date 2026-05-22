/*
 * XREFs of ??$EnumerateStubs@P6AJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGUtagPROPVARIANT@@3@ZW42@PEBGU3@U3@@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@P6AJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGUtagPROPVARIANT@@4@Z2344@Z_N52344@Z @ 0x18006D100
 * Callers:
 *     ??$EnumerateStubs@W4InputType@@PEBGUtagPROPVARIANT@@U2@@BamoMPCConstantManagerClientPrincipal@@QEAAJP6AJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGUtagPROPVARIANT@@3@Z_N1233@Z @ 0x18006D1F8 (--$EnumerateStubs@W4InputType@@PEBGUtagPROPVARIANT@@U2@@BamoMPCConstantManagerClientPrincipal@@Q.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<long (*)(BamoMPCConstantManagerClientStub *,enum InputType,unsigned short const *,tagPROPVARIANT,tagPROPVARIANT),enum InputType,unsigned short const *,tagPROPVARIANT,tagPROPVARIANT>(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64 (__fastcall *)(int, int, int, int, __int64), _QWORD, __int64, int *, __int128 *),
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int128 *a7,
        __int128 *a8)
{
  __int64 v8; // rbx
  __int64 v10; // xmm1_8
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  int v13; // eax
  unsigned int v14; // edi
  __int128 v16; // [rsp+40h] [rbp-48h] BYREF
  __int64 v17; // [rsp+50h] [rbp-38h]
  int v18[4]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v19; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v8 = *(_QWORD *)(a1 + 32);
  if ( !v8 )
    return 0LL;
  while ( 1 )
  {
    if ( *(_BYTE *)(v8 + 32) )
    {
      v10 = *((_QWORD *)a8 + 2);
      v16 = *a8;
      v11 = *a7;
      v17 = v10;
      v12 = *((_QWORD *)a7 + 2);
      *(_OWORD *)v18 = v11;
      v19 = v12;
      v13 = a2(v8, StubCallback, a5, a6, v18, &v16);
      v14 = v13;
      if ( v13 < 0 )
        break;
    }
    v8 = *(_QWORD *)(v8 + 48);
    if ( !v8 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D7,
    (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)v13);
  return v14;
}
