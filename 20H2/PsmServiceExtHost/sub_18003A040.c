/*
 * XREFs of sub_18003A040 @ 0x18003A040
 * Callers:
 *     sub_180039294 @ 0x180039294 (sub_180039294.c)
 *     sub_180044860 @ 0x180044860 (sub_180044860.c)
 *     sub_180064440 @ 0x180064440 (sub_180064440.c)
 * Callees:
 *     sub_180046554 @ 0x180046554 (sub_180046554.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall sub_18003A040(__int64 a1))(_QWORD, __int64, _QWORD, _QWORD)
{
  unsigned int *v1; // rsi
  unsigned int *v3; // rbx
  __int64 (__fastcall *result)(_QWORD, __int64, _QWORD, _QWORD); // rax

  v1 = *(unsigned int **)(a1 + 56);
  v3 = *(unsigned int **)(a1 + 48);
  result = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))((char *)v1 - (char *)v3);
  if ( (unsigned __int64)((char *)v1 - (char *)v3) >= 0x10 )
  {
    while ( v3 != v1 )
    {
      sub_180046554(*v3, *((_QWORD *)v3 + 1));
      v3 += 4;
    }
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 48);
    result = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))qword_1800B4EF8;
    if ( qword_1800B4EF8 )
      return (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))result(0LL, 254LL, 0LL, 0LL);
    result = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))qword_1800B4FB8;
    if ( qword_1800B4FB8 )
      return (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))result(0LL, 254LL, 0LL, 0LL);
  }
  return result;
}
