/*
 * XREFs of ?SendMaterializeProxy@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18000D0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18003F458 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180063E7C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall BamoImpl::BamoControllerNavigationManagerPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoControllerNavigationManagerPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // r12
  __int64 v7; // rax
  int v8; // eax
  unsigned int *v9; // rcx
  int v10; // esi
  __int64 v11; // rdi
  __int64 v12; // rbx
  struct IMessageCallSendHost *SendHost; // rax
  unsigned int v14; // eax
  unsigned int *v15; // rcx
  int v16; // esi
  __int64 v17; // rdi
  __int64 v18; // rbx
  struct IMessageCallSendHost *v19; // rax
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  int v26; // [rsp+20h] [rbp-58h]
  int v27; // [rsp+20h] [rbp-58h]
  int v28; // [rsp+30h] [rbp-48h]
  int v29; // [rsp+30h] [rbp-48h]
  __int64 v30; // [rsp+40h] [rbp-38h] BYREF
  __int64 v31; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 5);
  if ( *(_BYTE *)(v3 + 44) )
  {
    v7 = (__int64)a2 + 56;
    if ( !a2 )
      v7 = 72LL;
    *(_BYTE *)v7 = 1;
  }
  v28 = *((_DWORD *)this + 6);
  v30 = *(unsigned int *)(v3 + 36);
  v31 = *(unsigned int *)(v3 + 40);
  v8 = CoreUICallSend(a2, &v30, 2LL, 74LL, 10, &unk_1801BF1BA, v28);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6539,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v26);
    __debugbreak();
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v9 = (unsigned int *)*((_QWORD *)a3 + 5);
    v10 = *((unsigned __int8 *)this + 40);
    v11 = *((unsigned int *)this + 6);
    v12 = v9[9];
    SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v9);
    v30 = v12;
    LOWORD(v26) = 0;
    v31 = v11;
    v14 = CoreUICallSend(SendHost, &v30, 2LL, 15LL, v26, &unk_1801BF1BD, v10);
    if ( (int)(v14 + 0x80000000) >= 0 && v14 != -2018375675 )
    {
      v24 = wil::verify_hresult<long>(v14);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x659A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v24,
        v26);
      __debugbreak();
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v15 = (unsigned int *)*((_QWORD *)a3 + 5);
    v16 = *((unsigned __int8 *)this + 41);
    v17 = *((unsigned int *)this + 6);
    v18 = v15[9];
    v19 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v15);
    v30 = v18;
    LOWORD(v26) = 1;
    v31 = v17;
    v20 = CoreUICallSend(v19, &v30, 2LL, 15LL, v26, &unk_1801BF1BD, v16);
    if ( (int)(v20 + 0x80000000) >= 0 && v20 != -2018375675 )
    {
      v25 = wil::verify_hresult<long>(v20);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x65C0,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v25,
        v26);
      __debugbreak();
    }
  }
  v21 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 32LL))(a3);
  if ( v21 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6549,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v21,
      v26);
    __debugbreak();
  }
  if ( *(_BYTE *)(*((_QWORD *)a3 + 5) + 44LL) )
  {
    v22 = (__int64)a2 + 56;
    if ( !a2 )
      v22 = 72LL;
    *(_BYTE *)v22 = 1;
  }
  v29 = *((_DWORD *)this + 6);
  v30 = *(unsigned int *)(v3 + 36);
  v31 = *(unsigned int *)(v3 + 40);
  LOWORD(v26) = 55;
  v23 = CoreUICallSend(a2, &v30, 2LL, 74LL, v26, &unk_1801BF1BA, v29);
  if ( v23 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x655A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v23,
      v27);
    JUMPOUT(0x18000D3D5LL);
  }
}
