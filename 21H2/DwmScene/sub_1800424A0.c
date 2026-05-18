/*
 * XREFs of sub_1800424A0 @ 0x1800424A0
 * Callers:
 *     _expandlocale @ 0x1800418BC (_expandlocale.c)
 * Callees:
 *     D3D11CreateDevice @ 0x180113DD8 (D3D11CreateDevice.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180124618 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180124678 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall sub_1800424A0(
        IDXGIAdapter *pAdapter,
        D3D_DRIVER_TYPE a2,
        HMODULE a3,
        UINT a4,
        D3D_FEATURE_LEVEL *a5,
        UINT FeatureLevels,
        UINT SDKVersion,
        ID3D11Device **a8,
        D3D_FEATURE_LEVEL *a9,
        ID3D11DeviceContext **a10)
{
  const D3D_FEATURE_LEVEL *pFeatureLevels; // r9
  char v13; // r12
  unsigned int v14; // eax
  HRESULT v15; // r15d
  ID3D11DeviceContext *v16; // rcx
  ID3D11Device *v17; // rcx
  ID3D11Device *v18; // rax
  ID3D11DeviceContext *v19; // rax
  ID3D11DeviceContext *v20; // rcx
  ID3D11Device *v21; // rcx
  D3D_DRIVER_TYPE DriverType; // [rsp+50h] [rbp-41h]
  HMODULE Software; // [rsp+58h] [rbp-39h]
  ID3D11DeviceContext *ppImmediateContext; // [rsp+68h] [rbp-29h] BYREF
  ID3D11Device *ppDevice; // [rsp+70h] [rbp-21h] BYREF
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+78h] [rbp-19h] BYREF

  pFeatureLevels = a5;
  Software = a3;
  DriverType = a2;
  if ( (a4 & 2) == 0 )
    return D3D11CreateDevice(pAdapter, a2, a3, a4, a5, FeatureLevels, SDKVersion, a8, a9, a10);
  if ( dword_18021FB9C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18021FB9C);
    if ( dword_18021FB9C == -1 )
    {
      byte_18021FB98 = 1;
      Init_thread_footer(&dword_18021FB9C);
    }
    goto LABEL_4;
  }
  while ( 1 )
  {
    v13 = byte_18021FB98;
    v14 = a4 & 0xFFFFFFFD;
    a4 |= 2u;
    if ( !byte_18021FB98 )
      a4 = v14;
    ppDevice = 0LL;
    ppImmediateContext = 0LL;
    v15 = D3D11CreateDevice(
            pAdapter,
            a2,
            a3,
            a4,
            pFeatureLevels,
            FeatureLevels,
            SDKVersion,
            &ppDevice,
            &pFeatureLevel,
            &ppImmediateContext);
    if ( v15 >= 0 )
      break;
    if ( !v13 )
      goto LABEL_19;
    byte_18021FB98 = 0;
    v16 = ppImmediateContext;
    if ( ppImmediateContext )
    {
      ppImmediateContext = 0LL;
      ((void (__fastcall *)(ID3D11DeviceContext *))v16->lpVtbl->Release)(v16);
    }
    v17 = ppDevice;
    if ( ppDevice )
    {
      ppDevice = 0LL;
      ((void (__fastcall *)(ID3D11Device *))v17->lpVtbl->Release)(v17);
    }
LABEL_4:
    a2 = DriverType;
    a3 = Software;
    pFeatureLevels = a5;
  }
  if ( a8 )
  {
    v18 = ppDevice;
    ppDevice = 0LL;
    *a8 = v18;
  }
  if ( a9 )
    *a9 = pFeatureLevel;
  if ( a10 )
  {
    v19 = ppImmediateContext;
    ppImmediateContext = 0LL;
    *a10 = v19;
  }
LABEL_19:
  v20 = ppImmediateContext;
  if ( ppImmediateContext )
  {
    ppImmediateContext = 0LL;
    ((void (__fastcall *)(ID3D11DeviceContext *))v20->lpVtbl->Release)(v20);
  }
  v21 = ppDevice;
  if ( ppDevice )
  {
    ppDevice = 0LL;
    ((void (__fastcall *)(ID3D11Device *))v21->lpVtbl->Release)(v21);
  }
  return v15;
}
