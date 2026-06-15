/*
 * XREFs of ?Reset@ApplicationSpecificEndpointInfo@@UEAAJXZ @ 0x180036D00
 * Callers:
 *     <none>
 * Callees:
 *     ?SendRefreshEndpointNotification@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180037E80 (-SendRefreshEndpointNotification@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdev.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::Reset(ApplicationSpecificEndpointInfo *this)
{
  void **v2; // rdi
  char v3; // bp
  __int64 v4; // r14
  void *v5; // rsi
  DWORD LastError; // ebx
  void *v7; // rsi
  DWORD v8; // ebx

  v2 = (void **)((char *)this + 168);
  v3 = 0;
  v4 = 9LL;
  do
  {
    v5 = *(v2 - 9);
    if ( v5 || *v2 )
    {
      v3 = 1;
      if ( v5 )
      {
        LastError = GetLastError();
        CoTaskMemFree(v5);
        SetLastError(LastError);
      }
    }
    *(v2 - 9) = 0LL;
    v7 = *v2;
    if ( *v2 )
    {
      v8 = GetLastError();
      CoTaskMemFree(v7);
      SetLastError(v8);
    }
    *v2++ = 0LL;
    --v4;
  }
  while ( v4 );
  if ( v3 )
    ApplicationSpecificEndpointInfo::SendRefreshEndpointNotification(this, 2LL, 0x7FFFLL);
  return 0LL;
}
