/*
 * XREFs of sub_1C005A828 @ 0x1C005A828
 * Callers:
 *     sub_1C005BC84 @ 0x1C005BC84 (sub_1C005BC84.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 *     sub_1C005AF90 @ 0x1C005AF90 (sub_1C005AF90.c)
 */

__int64 __fastcall sub_1C005A828(__int64 a1, WCHAR *a2)
{
  _DWORD *v3; // r15
  char *PoolWithTag; // rbx
  ULONG v5; // edi
  ULONG v6; // edx
  ULONG v7; // r14d
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rcx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-98h] BYREF
  __m128 v13[2]; // [rsp+40h] [rbp-88h] BYREF
  int v14; // [rsp+64h] [rbp-64h]

  ResultLength[0] = 0;
  v3 = sub_1C000F050(a1);
  sub_1C001D340(v13, 0, 0x44uLL);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, 0x2AuLL, 0x42554855u);
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_OWORD *)PoolWithTag = 0LL;
  v5 = 0;
  v6 = 0;
  *((_OWORD *)PoolWithTag + 1) = 0LL;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  *((_WORD *)PoolWithTag + 20) = 0;
  while ( ZwEnumerateValueKey(a2, v6, KeyValueBasicInformation, PoolWithTag, 0x2Au, ResultLength) >= 0 )
  {
    v7 = v5++;
    if ( *((_DWORD *)PoolWithTag + 1) == 3
      && (int)sub_1C005AF90(v10, a2, PoolWithTag + 12, v13) >= 0
      && (v14 || v3[1294]) )
    {
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        sub_1C003B2A0(DeviceObject->DeviceExtension, v8, v9, 34, (__int64)&unk_1C00654F0, (__int64)(PoolWithTag + 12));
      if ( RtlDeleteRegistryValue(0x40000000u, a2, (PCWSTR)PoolWithTag + 6) >= 0 )
        v5 = v7;
    }
    v6 = v5;
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  return 0LL;
}
