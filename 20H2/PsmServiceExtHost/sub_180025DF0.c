/*
 * XREFs of sub_180025DF0 @ 0x180025DF0
 * Callers:
 *     sub_180025C98 @ 0x180025C98 (sub_180025C98.c)
 * Callees:
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 *     sub_180025EC8 @ 0x180025EC8 (sub_180025EC8.c)
 */

__int64 __fastcall sub_180025DF0(__int64 a1, char a2)
{
  DWORD v2; // edi
  _QWORD *Value; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFF800uLL) != 0 )
      __int2c();
    *Value |= 0x800uLL;
    ++Value[12];
  }
  RtlAcquireSRWLockExclusive(a1 + 40);
  *(_DWORD *)(a1 + 48) = GetCurrentThreadId();
  *(_BYTE *)(a1 + 184) &= 0x8Fu;
  *(_BYTE *)(a1 + 185) |= 0x10u;
  *(_BYTE *)(a1 + 184) |= 16 * (a2 & 7);
  sub_180025EC8(a1);
  sub_18001E830(v7, v6, 0xBu);
  *(_DWORD *)(a1 + 48) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 40);
}
