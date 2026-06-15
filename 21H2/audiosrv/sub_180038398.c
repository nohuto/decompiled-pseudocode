/*
 * XREFs of sub_180038398 @ 0x180038398
 * Callers:
 *     sub_180038340 @ 0x180038340 (sub_180038340.c)
 *     sub_180069484 @ 0x180069484 (sub_180069484.c)
 *     sub_1800B838C @ 0x1800B838C (sub_1800B838C.c)
 *     sub_1800B93B8 @ 0x1800B93B8 (sub_1800B93B8.c)
 * Callees:
 *     sub_18006D76C @ 0x18006D76C (sub_18006D76C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall sub_180038398(__int64 a1))(_QWORD, __int64, _QWORD, _QWORD)
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
      sub_18006D76C(*v3, *((_QWORD *)v3 + 1));
      v3 += 4;
    }
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 48);
    result = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))qword_18019FA48;
    if ( qword_18019FA48 )
      return (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))result(0LL, 254LL, 0LL, 0LL);
    result = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))qword_18019F948;
    if ( qword_18019F948 )
      return (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))result(0LL, 254LL, 0LL, 0LL);
  }
  return result;
}
