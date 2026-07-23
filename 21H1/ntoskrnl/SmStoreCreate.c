/*
 * XREFs of SmStoreCreate @ 0x140925ADC
 * Callers:
 *     SmcStoreCreate @ 0x1409292A8 (SmcStoreCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwSetSystemInformation @ 0x1403F5870 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x140925C60 (SmStorePhysicalRequestIssue.c)
 */

NTSTATUS __fastcall SmStoreCreate(int a1, __int128 *a2, _DWORD *a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v6; // xmm0
  NTSTATUS result; // eax
  int v8; // ecx
  __int64 v9; // [rsp+30h] [rbp-39h] BYREF
  _DWORD SystemInformation[2]; // [rsp+38h] [rbp-31h] BYREF
  __int64 *v11; // [rsp+40h] [rbp-29h]
  int v12; // [rsp+48h] [rbp-21h]
  int v13; // [rsp+4Ch] [rbp-1Dh]
  __int64 v14; // [rsp+50h] [rbp-19h] BYREF
  __int128 v15; // [rsp+58h] [rbp-11h]
  __int128 v16; // [rsp+68h] [rbp-1h]
  __int128 v17; // [rsp+78h] [rbp+Fh]
  __int128 v18; // [rsp+88h] [rbp+1Fh]
  __int64 v19; // [rsp+98h] [rbp+2Fh]
  __int64 v20; // [rsp+A0h] [rbp+37h]

  v3 = *a2;
  v4 = a2[1];
  v9 = 0LL;
  v13 = 0;
  v15 = v3;
  v11 = &v14;
  v6 = a2[2];
  SystemInformation[0] = 1;
  SystemInformation[1] = 3;
  v12 = 88;
  v14 = 6LL;
  v20 = 0LL;
  v17 = v6;
  v19 = *((_QWORD *)a2 + 8);
  v16 = v4;
  v18 = a2[3];
  if ( a1 )
  {
    if ( a1 != 1 )
      return -1073741811;
    result = ZwSetSystemInformation(SystemStoreInformation, SystemInformation, 0x18u);
    v8 = v20;
  }
  else
  {
    result = SmStorePhysicalRequestIssue(DeviceObject, 0, (__int64)&v9);
    v8 = v9;
  }
  if ( result >= 0 )
  {
    *a3 = v8;
    return 0;
  }
  return result;
}
