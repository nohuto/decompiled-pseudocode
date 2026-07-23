/*
 * XREFs of IommupHvGetDeviceCapabilities @ 0x1404DA184
 * Callers:
 *     IommuMapDevice @ 0x1404D90D0 (IommuMapDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvGetDeviceCapabilities(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  bool v4; // zf
  __int64 result; // rax
  unsigned int v7; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v9; // [rsp+30h] [rbp-18h]

  v4 = *(_DWORD *)a1 == 1;
  v8 = 0LL;
  v9 = 0;
  if ( !v4 )
    return 3221225659LL;
  HIWORD(v7) = *(_WORD *)(a1 + 8);
  LOWORD(v7) = *(_WORD *)(a1 + 12);
  result = ((__int64 (__fastcall *)(_QWORD, __int64 *))qword_140C4A2A0)(v7, &v8);
  if ( (int)result < 0 )
    return result;
  if ( (v8 & 1) == 0 || HIDWORD(v8) < IommupHvMaximumAsids )
    return 3221225659LL;
  *a2 = v7;
  *a3 = IommupHvPageRequestQueues + ((unsigned __int64)v9 << 6);
  return 0LL;
}
