/*
 * XREFs of sub_180034650 @ 0x180034650
 * Callers:
 *     sub_180002F50 @ 0x180002F50 (sub_180002F50.c)
 *     sub_18000375C @ 0x18000375C (sub_18000375C.c)
 *     sub_180004818 @ 0x180004818 (sub_180004818.c)
 *     sub_180012DB4 @ 0x180012DB4 (sub_180012DB4.c)
 *     sub_180021954 @ 0x180021954 (sub_180021954.c)
 *     sub_180034568 @ 0x180034568 (sub_180034568.c)
 *     sub_180037D30 @ 0x180037D30 (sub_180037D30.c)
 *     sub_18003BD44 @ 0x18003BD44 (sub_18003BD44.c)
 *     sub_18007F5AC @ 0x18007F5AC (sub_18007F5AC.c)
 *     sub_180081090 @ 0x180081090 (sub_180081090.c)
 *     sub_180081624 @ 0x180081624 (sub_180081624.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180034650(__int64 a1, int a2)
{
  DWORD v2; // edi
  _QWORD *Value; // rbx

  v2 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (((-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFEuLL) - 2) & *(_QWORD *)TlsGetValue(v2)) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  return RtlAcquireSRWLockShared(a1);
}
