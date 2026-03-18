/*
 * XREFs of ?SendMaterializeProxy@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800CFE80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180168BDC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoDataProviderRegistrarPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rsi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // [rsp+20h] [rbp-58h]
  int v13; // [rsp+20h] [rbp-58h]
  int v14; // [rsp+20h] [rbp-58h]
  int v15; // [rsp+30h] [rbp-48h]
  int v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+38h] [rbp-40h]
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 5);
  if ( *(_BYTE *)(v3 + 44) )
  {
    v10 = (__int64)a2 + 56;
    if ( !a2 )
      v10 = 72LL;
    *(_BYTE *)v10 = 1;
  }
  v15 = *((_DWORD *)this + 6);
  v19 = *(unsigned int *)(v3 + 36);
  v20 = *(unsigned int *)(v3 + 40);
  LOWORD(v12) = 2;
  v7 = CoreUICallSend(a2, &v19, 2LL, 6LL, v12, &unk_1802D1365, v15, v17);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x216D,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v7,
      v13);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 32LL))(a3);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2178,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v8,
      v13);
    __debugbreak();
  }
  if ( *(_BYTE *)(*((_QWORD *)a3 + 5) + 44LL) )
  {
    v11 = (__int64)a2 + 56;
    if ( !a2 )
      v11 = 72LL;
    *(_BYTE *)v11 = 1;
  }
  v16 = *((_DWORD *)this + 6);
  v19 = *(unsigned int *)(v3 + 36);
  v20 = *(unsigned int *)(v3 + 40);
  LOWORD(v13) = 4;
  v9 = CoreUICallSend(a2, &v19, 2LL, 6LL, v13, &unk_1802D1365, v16, v18);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2189,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v9,
      v14);
    __debugbreak();
  }
}
