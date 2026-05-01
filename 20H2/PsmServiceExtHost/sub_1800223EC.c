/*
 * XREFs of sub_1800223EC @ 0x1800223EC
 * Callers:
 *     sub_180005EAC @ 0x180005EAC (sub_180005EAC.c)
 *     sub_1800066B0 @ 0x1800066B0 (sub_1800066B0.c)
 *     sub_18000DCD8 @ 0x18000DCD8 (sub_18000DCD8.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_180021954 @ 0x180021954 (sub_180021954.c)
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

DWORD __fastcall sub_1800223EC(__int64 a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx
  DWORD result; // eax

  v1 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      __int2c();
    *Value |= 0x40uLL;
    ++Value[7];
  }
  RtlAcquireSRWLockExclusive(a1 + 304);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 312) = result;
  return result;
}
