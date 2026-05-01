/*
 * XREFs of sub_180065D0C @ 0x180065D0C
 * Callers:
 *     sub_180065E18 @ 0x180065E18 (sub_180065E18.c)
 *     sub_180065EA8 @ 0x180065EA8 (sub_180065EA8.c)
 *     sub_180065F34 @ 0x180065F34 (sub_180065F34.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180046880 @ 0x180046880 (sub_180046880.c)
 *     sub_18006527C @ 0x18006527C (sub_18006527C.c)
 *     sub_1800666FC @ 0x1800666FC (sub_1800666FC.c)
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall sub_180065D0C(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int lpOutputString)
{
  bool v8; // bl
  int v9; // [rsp+48h] [rbp-14F0h]
  int v10; // [rsp+58h] [rbp-14E0h]
  int v11; // [rsp+68h] [rbp-14D0h]
  _BYTE v12[144]; // [rsp+80h] [rbp-14B8h] BYREF
  _BYTE v13[1024]; // [rsp+110h] [rbp-1428h] BYREF
  WCHAR v14[2068]; // [rsp+510h] [rbp-1028h] BYREF

  v8 = !a7 && qword_1800B4F80;
  sub_18006527C(a1, a2, a3, a4, a5, a6, a7, lpOutputString, 0LL, v9, v14, v10, v13, v11, (__int64)v12);
  if ( a7 == 3 )
LABEL_11:
    ((void (__fastcall __noreturn *)(_BYTE *))sub_1800666FC)(v12);
  if ( !a7 )
  {
    if ( v8 )
      ((void (__fastcall *)(_BYTE *, WCHAR *))qword_1800B4F80)(v12, v14);
    if ( qword_1800B4F98 )
      ((void (__fastcall *)(_BYTE *))qword_1800B4F98)(v12);
    goto LABEL_11;
  }
}
