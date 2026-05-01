/*
 * XREFs of sub_180038CA8 @ 0x180038CA8
 * Callers:
 *     sub_180038B20 @ 0x180038B20 (sub_180038B20.c)
 * Callees:
 *     sub_180038D80 @ 0x180038D80 (sub_180038D80.c)
 *     sub_180046410 @ 0x180046410 (sub_180046410.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *sub_180038CA8(
        _DWORD *a1,
        unsigned __int8 a2,
        char a3,
        ...))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  __int64 v3; // r8
  int v4; // ebx
  unsigned int v5; // edi
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v7; // [rsp+80h] [rbp+30h] BYREF
  __int16 v8; // [rsp+84h] [rbp+34h]
  int v9; // [rsp+90h] [rbp+40h] BYREF
  __int64 v10; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  va_list va1; // [rsp+A0h] [rbp+50h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  LOBYTE(v9) = a3;
  LODWORD(v3) = *a1;
  v4 = (int)a1;
  v5 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v3 = *(_QWORD *)sub_180038D80(a1, (__int64 *)va);
    v10 = v3;
  }
  v9 = 3;
  BYTE4(v10) = 1;
  v7 = 1;
  v8 = WORD2(v10);
  LODWORD(v10) = 1;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))sub_180046410(
                                                                                                     v4 + 8,
                                                                                                     a2,
                                                                                                     ((unsigned int)v3 >> 8) & 1,
                                                                                                     ((unsigned int)v3 >> 9) & 1,
                                                                                                     4 * (v5 ^ 1) + 2,
                                                                                                     0);
  if ( (_DWORD)result )
  {
    result = qword_1800B5048;
    if ( qword_1800B5048 )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))qword_1800B5048(16669694LL, &v7, 0LL, v5, &v9, 0LL, 0, 1LL);
  }
  return result;
}
