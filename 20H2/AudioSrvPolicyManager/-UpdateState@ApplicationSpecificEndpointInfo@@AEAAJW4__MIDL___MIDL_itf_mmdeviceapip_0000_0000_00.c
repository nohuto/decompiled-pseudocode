/*
 * XREFs of ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180031A54
 * Callers:
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180030E60 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180031784 (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x1800328D0 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180018844 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::UpdateState(
        __int64 a1,
        __int64 a2,
        int a3,
        const unsigned __int16 *a4)
{
  unsigned __int16 **v5; // r14
  unsigned __int16 *v6; // rbp
  DWORD LastError; // ebx
  DWORD v8; // ebx
  unsigned __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // rdx
  unsigned __int16 **v13; // r14
  unsigned __int16 *v14; // rbp
  DWORD v15; // ebx
  DWORD v16; // ebx
  unsigned __int64 v17; // r9
  __int64 v18; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 == 1 )
  {
    v5 = (unsigned __int16 **)(a1 + 96 + 8LL * (int)a2);
    v6 = *v5;
    if ( *v5 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v6);
      SetLastError(LastError);
      *v5 = 0LL;
      v6 = 0LL;
    }
    if ( a4 )
    {
      if ( v6 )
      {
        v8 = GetLastError();
        CoTaskMemFree(v6);
        SetLastError(v8);
      }
      *v5 = 0LL;
      v9 = -1LL;
      do
        ++v9;
      while ( a4[v9] );
      v10 = _AllocStringWorker<CTCoAllocPolicy>(a1, a2, a4, v9, v18, v5);
      if ( v10 < 0 )
      {
        v11 = 486LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)v10);
        return (unsigned int)v10;
      }
    }
  }
  else
  {
    v13 = (unsigned __int16 **)(a1 + 168 + 8LL * (int)a2);
    v14 = *v13;
    if ( *v13 )
    {
      v15 = GetLastError();
      CoTaskMemFree(v14);
      SetLastError(v15);
      *v13 = 0LL;
      v14 = 0LL;
    }
    if ( a4 )
    {
      if ( v14 )
      {
        v16 = GetLastError();
        CoTaskMemFree(v14);
        SetLastError(v16);
      }
      *v13 = 0LL;
      v17 = -1LL;
      do
        ++v17;
      while ( a4[v17] );
      v10 = _AllocStringWorker<CTCoAllocPolicy>(a1, a2, a4, v17, v18, v13);
      if ( v10 < 0 )
      {
        v11 = 499LL;
        goto LABEL_11;
      }
    }
  }
  return 0LL;
}
