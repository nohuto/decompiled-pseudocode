/*
 * XREFs of ?SendMaterializeProxy@BamoInputObserverManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18000E9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall BamoImpl::BamoInputObserverManagerPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoInputObserverManagerPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rsi
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  int v12; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+30h] [rbp-38h]
  int v15; // [rsp+30h] [rbp-38h]
  __int64 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 5);
  if ( *(_BYTE *)(v3 + 44) )
  {
    v7 = (__int64)a2 + 56;
    if ( !a2 )
      v7 = 72LL;
    *(_BYTE *)v7 = 1;
  }
  v14 = *((_DWORD *)this + 6);
  v16 = *(unsigned int *)(v3 + 36);
  v17 = *(unsigned int *)(v3 + 40);
  v8 = CoreUICallSend(a2, &v16, 2LL, 74LL, 29, &unk_1801C01AA, v14);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x8F15,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v12);
    __debugbreak();
  }
  v9 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 32LL))(a3);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x8F20,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v9,
      v12);
    __debugbreak();
  }
  if ( *(_BYTE *)(*((_QWORD *)a3 + 5) + 44LL) )
  {
    v10 = (__int64)a2 + 56;
    if ( !a2 )
      v10 = 72LL;
    *(_BYTE *)v10 = 1;
  }
  v15 = *((_DWORD *)this + 6);
  v16 = *(unsigned int *)(v3 + 36);
  v17 = *(unsigned int *)(v3 + 40);
  LOWORD(v12) = 55;
  v11 = CoreUICallSend(a2, &v16, 2LL, 74LL, v12, &unk_1801C01AA, v15);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x8F31,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v11,
      v13);
    JUMPOUT(0x18000EB6CLL);
  }
}
