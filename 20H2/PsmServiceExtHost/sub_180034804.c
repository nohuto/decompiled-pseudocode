/*
 * XREFs of sub_180034804 @ 0x180034804
 * Callers:
 *     sub_1800202A0 @ 0x1800202A0 (sub_1800202A0.c)
 *     sub_18003474C @ 0x18003474C (sub_18003474C.c)
 *     sub_180081D54 @ 0x180081D54 (sub_180081D54.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall sub_180034804(__int64 a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx
  DWORD result; // eax

  v1 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      __int2c();
    *Value |= 0x10uLL;
    ++Value[5];
  }
  RtlAcquireSRWLockExclusive(a1 + 16);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 24) = result;
  return result;
}
