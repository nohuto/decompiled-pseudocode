/*
 * XREFs of ?ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z @ 0x180032160
 * Callers:
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180031784 (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x180031C0C (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x1800328D0 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000A4C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::ReadKey(HKEY hkey, LPCWSTR lpValue, unsigned __int16 **a3)
{
  LSTATUS ValueW; // ecx
  __int64 result; // rax
  SIZE_T v8; // rdi
  _WORD *v9; // rax
  void *pvData; // rbx
  _WORD *i; // rcx
  unsigned int v12; // eax
  unsigned int v13; // edi
  unsigned __int16 *v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD pcbData; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0LL;
  pcbData = 0;
  ValueW = RegGetValueW(hkey, 0LL, lpValue, 2u, 0LL, 0LL, &pcbData);
  if ( ValueW )
  {
    result = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      return (unsigned int)ValueW;
  }
  else
  {
    pcbData += 2;
    v8 = pcbData;
    v9 = CoTaskMemAlloc(v8 * 2);
    pvData = v9;
    if ( v9 )
    {
      for ( i = &v9[v8]; v9 != i; ++v9 )
        *v9 = 0;
      v12 = RegGetValueW(hkey, 0LL, lpValue, 2u, 0LL, pvData, &pcbData);
      if ( v12 )
      {
        v13 = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0x27F,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
                (const char *)v12);
      }
      else
      {
        v14 = (unsigned __int16 *)pvData;
        pvData = 0LL;
        v13 = 0;
        *a3 = v14;
      }
    }
    else
    {
      v13 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27D,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)0x8007000ELL);
    }
    if ( pvData )
      CoTaskMemFree(pvData);
    return v13;
  }
  return result;
}
