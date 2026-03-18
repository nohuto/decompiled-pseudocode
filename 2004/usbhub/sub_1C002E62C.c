/*
 * XREFs of sub_1C002E62C @ 0x1C002E62C
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 *     sub_1C000A080 @ 0x1C000A080 (sub_1C000A080.c)
 *     sub_1C000E210 @ 0x1C000E210 (sub_1C000E210.c)
 *     sub_1C0014C0C @ 0x1C0014C0C (sub_1C0014C0C.c)
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 *     sub_1C001C580 @ 0x1C001C580 (sub_1C001C580.c)
 *     sub_1C002A7DC @ 0x1C002A7DC (sub_1C002A7DC.c)
 *     sub_1C0030934 @ 0x1C0030934 (sub_1C0030934.c)
 *     sub_1C003A0A8 @ 0x1C003A0A8 (sub_1C003A0A8.c)
 *     sub_1C003A2BC @ 0x1C003A2BC (sub_1C003A2BC.c)
 *     sub_1C003D000 @ 0x1C003D000 (sub_1C003D000.c)
 *     sub_1C003FF9C @ 0x1C003FF9C (sub_1C003FF9C.c)
 *     sub_1C0043AE0 @ 0x1C0043AE0 (sub_1C0043AE0.c)
 *     sub_1C0043C9C @ 0x1C0043C9C (sub_1C0043C9C.c)
 *     sub_1C0045AD0 @ 0x1C0045AD0 (sub_1C0045AD0.c)
 *     sub_1C0045CE0 @ 0x1C0045CE0 (sub_1C0045CE0.c)
 *     sub_1C00469A4 @ 0x1C00469A4 (sub_1C00469A4.c)
 *     sub_1C0048A24 @ 0x1C0048A24 (sub_1C0048A24.c)
 *     sub_1C0053F94 @ 0x1C0053F94 (sub_1C0053F94.c)
 *     sub_1C0054AFC @ 0x1C0054AFC (sub_1C0054AFC.c)
 *     sub_1C0055FD0 @ 0x1C0055FD0 (sub_1C0055FD0.c)
 *     sub_1C0057020 @ 0x1C0057020 (sub_1C0057020.c)
 *     sub_1C005B530 @ 0x1C005B530 (sub_1C005B530.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C002E62C(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rbx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = *((_DWORD *)&DeviceObject->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v9, (a3 - 1) & 0x1F) )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))qword_1C006B728)(
      *((_QWORD *)&DeviceObject->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, 0LL, a3, a5, v11, va);
}
