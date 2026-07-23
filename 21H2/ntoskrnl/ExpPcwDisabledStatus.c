/*
 * XREFs of ExpPcwDisabledStatus @ 0x140956E88
 * Callers:
 *     PcwCreateInstance @ 0x1405E5E20 (PcwCreateInstance.c)
 *     PcwAddInstance @ 0x1405E7060 (PcwAddInstance.c)
 *     PcwRegister @ 0x140781AA0 (PcwRegister.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x140635878 (RtlpQueryRegistryValues.c)
 */

__int64 ExpPcwDisabledStatus()
{
  int v0; // eax
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp-19h] BYREF
  int v3; // [rsp+38h] [rbp-11h]
  const wchar_t *v4; // [rsp+40h] [rbp-9h]
  int *v5; // [rsp+48h] [rbp-1h]
  int v6; // [rsp+50h] [rbp+7h]
  int *v7; // [rsp+58h] [rbp+Fh]
  int v8; // [rsp+60h] [rbp+17h]
  __int128 v9; // [rsp+68h] [rbp+1Fh]
  __int128 v10; // [rsp+78h] [rbp+2Fh]
  __int128 v11; // [rsp+88h] [rbp+3Fh]
  __int64 v12; // [rsp+98h] [rbp+4Fh]
  int v13; // [rsp+B0h] [rbp+67h] BYREF
  int v14; // [rsp+B8h] [rbp+6Fh] BYREF

  v0 = ExpPcwEnableState;
  v13 = 0;
  if ( ExpPcwEnableState )
    return v0 != 1 ? 0xC0000002 : 0;
  v14 = -1;
  v4 = L"Start";
  v2 = 0LL;
  v3 = 288;
  v5 = &v13;
  v6 = 67108868;
  v7 = &v14;
  v8 = 4;
  v12 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  result = RtlpQueryRegistryValues(1LL, L"pcw", (__int64)&v2, 0LL);
  if ( (_DWORD)result == -1073741772 )
    result = 0LL;
  if ( (int)result >= 0 )
  {
    v0 = 2 - (v13 != 0);
    ExpPcwEnableState = v0;
    return v0 != 1 ? 0xC0000002 : 0;
  }
  return result;
}
