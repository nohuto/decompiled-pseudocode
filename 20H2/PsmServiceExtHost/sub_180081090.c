/*
 * XREFs of sub_180081090 @ 0x180081090
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 *     sub_180034650 @ 0x180034650 (sub_180034650.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18007731C @ 0x18007731C (sub_18007731C.c)
 */

int __fastcall sub_180081090(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // esi
  int result; // eax
  DWORD v12; // ebx
  char v13; // [rsp+20h] [rbp-E8h] BYREF
  _DWORD v14[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+30h] [rbp-D8h]
  __int64 v16; // [rsp+38h] [rbp-D0h]
  __int128 v17; // [rsp+40h] [rbp-C8h]
  _BYTE TlsValue[144]; // [rsp+50h] [rbp-B8h] BYREF

  sub_18000B7F8(TlsValue);
  sub_180034650(*(_QWORD *)(a4 + 80), 0);
  v9 = *(_QWORD *)(a4 + 80);
  if ( *(_QWORD *)(a4 + 504) == a1 )
  {
    v10 = *(_DWORD *)(a4 + 384);
    sub_18001E830(v8, v7, 1u);
    result = RtlReleaseSRWLockShared(v9);
    if ( a2 == 100 )
    {
      v15 = 0LL;
      v16 = a4 + 124;
      v14[0] = 1;
      v14[1] = v10;
      v17 = 0LL;
      result = sub_18007731C(a1, (__int64)v14, (char)&v13);
    }
  }
  else
  {
    sub_18001E830(v8, v7, 1u);
    result = RtlReleaseSRWLockShared(v9);
  }
  v12 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    return TlsSetValue(v12, 0LL);
  }
  return result;
}
