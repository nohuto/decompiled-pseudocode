/*
 * XREFs of sub_18006D850 @ 0x18006D850
 * Callers:
 *     sub_180040C14 @ 0x180040C14 (sub_180040C14.c)
 * Callees:
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_180041058 @ 0x180041058 (sub_180041058.c)
 *     sub_1800410C4 @ 0x1800410C4 (sub_1800410C4.c)
 *     sub_18006CAD0 @ 0x18006CAD0 (sub_18006CAD0.c)
 */

__int64 __fastcall sub_18006D850(__int64 a1)
{
  __int64 v2; // rsi
  char v3; // r15
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  _QWORD v11[7]; // [rsp+20h] [rbp-38h] BYREF

  sub_1800410C4(a1 + 24, v11);
  while ( 1 )
  {
    v9 = sub_180041058(v11);
    if ( !v9 )
      break;
    v2 = 0LL;
    v3 = 0;
    v4 = 20LL;
    do
    {
      v5 = v2 + v9;
      v6 = *(_QWORD *)(v2 + v9 + 104) & ~*(_QWORD *)(v2 + a1 + 88);
      if ( v6 )
      {
        v3 = 1;
        *(_QWORD *)(v5 + 104) &= ~v6;
        *(_DWORD *)(v9 + 264) -= RtlNumberOfSetBitsUlongPtr(v6, v5, v7, v8);
      }
      v2 += 8LL;
      --v4;
    }
    while ( v4 );
    if ( v3 )
      sub_18006CAD0(a1, v9);
    sub_1800265B0((char *)v9);
  }
  RtlReleaseSRWLockShared(v11[0] + 16LL);
  return sub_180040E64(a1);
}
