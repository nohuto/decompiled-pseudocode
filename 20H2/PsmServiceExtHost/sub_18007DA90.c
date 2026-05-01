/*
 * XREFs of sub_18007DA90 @ 0x18007DA90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 */

__int64 sub_18007DA90()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // r10
  int v5; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+38h] [rbp-10h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v6 = *(_QWORD *)(v3 + 32);
    v5 = v2;
    sub_180063424(v0, byte_1800A13E2, v1, v2, (__int64)&v5, (__int64)&v6);
  }
  return 0LL;
}
