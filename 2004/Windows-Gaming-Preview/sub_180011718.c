/*
 * XREFs of sub_180011718 @ 0x180011718
 * Callers:
 *     sub_18000A1B0 @ 0x18000A1B0 (sub_18000A1B0.c)
 *     sub_1800392D8 @ 0x1800392D8 (sub_1800392D8.c)
 * Callees:
 *     sub_1800115A8 @ 0x1800115A8 (sub_1800115A8.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall sub_180011718(
        signed __int32 *a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        int a7))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v9; // ecx
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax

  if ( a7 )
  {
    switch ( a7 )
    {
      case 1:
        v9 = a6 == 0 ? 4 : 0;
        goto LABEL_17;
      case 2:
        v9 = a6 != 0 ? 1 : 5;
        goto LABEL_17;
      case 3:
        v9 = a6 != 0 ? 2 : 6;
        goto LABEL_17;
      case 4:
        v9 = a6 != 0 ? 3 : 7;
        goto LABEL_17;
      case 5:
        v9 = a6 != 0 ? 8 : 10;
        goto LABEL_17;
      case 6:
        v9 = a6 != 0 ? 9 : 11;
        goto LABEL_17;
    }
    if ( (unsigned __int8)(a7 - 100) <= 0x31u )
    {
      v9 = (unsigned __int8)(a7 - 100) + (a6 != 0 ? 100 : 150);
      goto LABEL_17;
    }
  }
  v9 = 255;
LABEL_17:
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))sub_1800115A8(
                                                                                                     a1,
                                                                                                     a2,
                                                                                                     a3,
                                                                                                     a4,
                                                                                                     v9,
                                                                                                     0);
  if ( (_DWORD)result )
  {
    result = qword_18005ADA0;
    if ( qword_18005ADA0 )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))qword_18005ADA0(a2, a5, 0LL, a6, &a7, 0LL, 0, 1LL);
  }
  return result;
}
