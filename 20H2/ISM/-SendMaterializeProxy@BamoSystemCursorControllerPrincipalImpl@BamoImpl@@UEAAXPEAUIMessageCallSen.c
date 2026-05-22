/*
 * XREFs of ?SendMaterializeProxy@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18000D5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18003F3C8 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180063DBC (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall BamoImpl::BamoSystemCursorControllerPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoSystemCursorControllerPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rbp
  __int64 v7; // rax
  int v8; // eax
  unsigned int *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rbx
  int v12; // xmm6_4
  struct IMessageCallSendHost *SendHost; // rax
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // eax
  int v19; // [rsp+20h] [rbp-68h]
  int v20; // [rsp+20h] [rbp-68h]
  int v21; // [rsp+30h] [rbp-58h]
  int v22; // [rsp+30h] [rbp-58h]
  __int64 v23; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 5);
  if ( *(_BYTE *)(v3 + 44) )
  {
    v7 = (__int64)a2 + 56;
    if ( !a2 )
      v7 = 72LL;
    *(_BYTE *)v7 = 1;
  }
  v21 = *((_DWORD *)this + 6);
  v23 = *(unsigned int *)(v3 + 36);
  v24 = *(unsigned int *)(v3 + 40);
  v8 = CoreUICallSend(a2, &v23, 2LL, 74LL, 46, &unk_1801BF1AA, v21);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC551,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v19);
    __debugbreak();
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v9 = (unsigned int *)*((_QWORD *)a3 + 5);
    v10 = *((unsigned int *)this + 6);
    v11 = v9[9];
    v12 = *((_DWORD *)this + 10);
    SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v9);
    v23 = v11;
    v24 = v10;
    LOWORD(v19) = 0;
    v14 = CoreUICallSend(SendHost, &v23, 2LL, 63LL, v19, &unk_1801BF2A1, v12);
    if ( (int)(v14 + 0x80000000) >= 0 && v14 != -2018375675 )
    {
      v18 = wil::verify_hresult<long>(v14);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC5B0,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v18,
        v19);
      __debugbreak();
    }
  }
  v15 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 32LL))(a3);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC55F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v15,
      v19);
    __debugbreak();
  }
  if ( *(_BYTE *)(*((_QWORD *)a3 + 5) + 44LL) )
  {
    v16 = (__int64)a2 + 56;
    if ( !a2 )
      v16 = 72LL;
    *(_BYTE *)v16 = 1;
  }
  v22 = *((_DWORD *)this + 6);
  v23 = *(unsigned int *)(v3 + 36);
  v24 = *(unsigned int *)(v3 + 40);
  LOWORD(v19) = 55;
  v17 = CoreUICallSend(a2, &v23, 2LL, 74LL, v19, &unk_1801BF1AA, v22);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC570,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v17,
      v20);
    JUMPOUT(0x18000D816LL);
  }
}
