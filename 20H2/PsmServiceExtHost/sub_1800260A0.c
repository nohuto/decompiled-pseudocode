/*
 * XREFs of sub_1800260A0 @ 0x1800260A0
 * Callers:
 *     sub_180005EAC @ 0x180005EAC (sub_180005EAC.c)
 *     sub_1800066B0 @ 0x1800066B0 (sub_1800066B0.c)
 *     sub_18000DCD8 @ 0x18000DCD8 (sub_18000DCD8.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_180021954 @ 0x180021954 (sub_180021954.c)
 *     sub_180023D30 @ 0x180023D30 (sub_180023D30.c)
 *     sub_180026554 @ 0x180026554 (sub_180026554.c)
 *     sub_1800298A0 @ 0x1800298A0 (sub_1800298A0.c)
 *     sub_18002AA04 @ 0x18002AA04 (sub_18002AA04.c)
 *     sub_18008057C @ 0x18008057C (sub_18008057C.c)
 *     sub_1800806D0 @ 0x1800806D0 (sub_1800806D0.c)
 *     sub_180080768 @ 0x180080768 (sub_180080768.c)
 *     sub_1800807E4 @ 0x1800807E4 (sub_1800807E4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800260A0(__int64 a1)
{
  _QWORD *Value; // rax

  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)Value & 0x40) == 0 )
      __int2c();
    if ( Value[7]-- == 1LL )
      *Value &= ~0x40uLL;
  }
  *(_DWORD *)(a1 + 312) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 304);
}
