/*
 * XREFs of sub_180046410 @ 0x180046410
 * Callers:
 *     sub_180038CA8 @ 0x180038CA8 (sub_180038CA8.c)
 * Callees:
 *     sub_180037EC8 @ 0x180037EC8 (sub_180037EC8.c)
 *     sub_180039098 @ 0x180039098 (sub_180039098.c)
 *     sub_1800392EC @ 0x1800392EC (sub_1800392EC.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180046410(volatile signed __int32 *a1, __int64 a2, int a3, int a4, unsigned int a5, int a6)
{
  _DWORD *v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  void (__fastcall *v14)(__int64, _QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v15)(__int64, __int64, _QWORD, _QWORD); // rax
  __int64 v16; // rdx
  unsigned int v18; // [rsp+34h] [rbp-44h]
  __int64 v19; // [rsp+48h] [rbp-30h] BYREF

  v9 = sub_180037EC8((__int64)&v19, a1, a5, a6);
  v11 = 0;
  v12 = *(_OWORD *)v9;
  v13 = *((_QWORD *)v9 + 2);
  v18 = HIDWORD(*(_QWORD *)v9);
  if ( qword_1800B4F00 && (!a5 || a5 - 100 <= 0x31) )
    qword_1800B4F00(16669694LL, a5, 1LL);
  if ( (_DWORD)v12 )
    sub_1800392EC(&byte_1800B4128, v10, (__int64)a1);
  if ( DWORD1(v12) )
  {
    v14 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))qword_1800B4EF8;
    if ( qword_1800B4EF8 || (v14 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))qword_1800B4FB8) != 0LL )
      v14(16669694LL, DWORD2(v12), v18, 0LL);
  }
  if ( !(_DWORD)v13 )
    sub_180039098((__int64)&byte_1800B4128, (__int64)sub_180063E50);
  if ( a3 )
  {
    v15 = (void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))qword_1800B4EF8;
    v16 = a5;
    LODWORD(v16) = a5 | 0x80000000;
    if ( !a4 )
      v16 = a5;
    if ( qword_1800B4EF8 || (v15 = (void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))qword_1800B4FB8) != 0LL )
      v15(16669694LL, v16, 0LL, 0LL);
  }
  LOBYTE(v11) = (_DWORD)v13 == 0;
  return v11;
}
