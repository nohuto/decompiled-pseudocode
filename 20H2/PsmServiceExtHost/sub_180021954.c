/*
 * XREFs of sub_180021954 @ 0x180021954
 * Callers:
 *     sub_180022AFC @ 0x180022AFC (sub_180022AFC.c)
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000DCD8 @ 0x18000DCD8 (sub_18000DCD8.c)
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 *     sub_1800223EC @ 0x1800223EC (sub_1800223EC.c)
 *     sub_1800260A0 @ 0x1800260A0 (sub_1800260A0.c)
 *     sub_180026554 @ 0x180026554 (sub_180026554.c)
 *     sub_180034650 @ 0x180034650 (sub_180034650.c)
 */

__int64 __fastcall sub_180021954(__int64 a1)
{
  int v1; // r14d
  DWORD v2; // ebp
  __int64 v4; // rsi
  _QWORD *Value; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi

  v1 = 0;
  v2 = dwTlsIndex;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 776) + 88LL);
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockShared(a1);
  if ( (*(_QWORD *)(a1 + 648) & 0x800000000000LL) == 0 )
  {
    sub_18001E830(v7, v6, 1u);
    RtlReleaseSRWLockShared(a1);
    v1 = 1;
    sub_180026554(v4);
    sub_180034650(a1, 0LL);
    if ( (*(_QWORD *)(a1 + 648) & 0x800000000000LL) == 0 )
    {
      sub_18001E830(v7, v6, 1u);
      RtlReleaseSRWLockShared(a1);
      v8 = sub_18000DCD8(a1);
      if ( v8 >= 0 )
      {
        sub_1800093A0(a1, 0);
        *(_QWORD *)(a1 + 648) |= 0x800000000000uLL;
        sub_18000A110(a1);
        v8 = 0;
      }
      goto LABEL_11;
    }
  }
  sub_18001E830(v7, v6, 1u);
  RtlReleaseSRWLockShared(a1);
  v8 = 0;
  if ( v1 )
  {
LABEL_11:
    sub_1800223EC(v4);
    *(_DWORD *)(v4 + 336) = 0;
    sub_1800260A0(v4);
    RtlWakeAddressSingle(v4 + 336);
  }
  return (unsigned int)v8;
}
