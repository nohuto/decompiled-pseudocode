/*
 * XREFs of sub_180017460 @ 0x180017460
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int128 *__fastcall sub_180017460(__int64 a1, __int128 *a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int128 v7; // xmm0
  _QWORD *v8; // rbx
  int v9; // esi
  __int64 v10; // rdi
  _QWORD *v11; // rcx
  bool v12; // zf
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v15; // [rsp+28h] [rbp-40h]
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF

  v15 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 16);
  sub_18001A330(&lpCriticalSection);
  v6 = -*a3;
  if ( !*a3 )
    v6 = -a3[1];
  v7 = xmmword_180043368;
  v8 = *(_QWORD **)(a1 + 56);
  v16 = xmmword_180043368;
  v9 = v6 != 0;
  if ( v8 )
  {
    while ( 1 )
    {
      v10 = v8[2];
      v8 = (_QWORD *)*v8;
      if ( v10
        && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 128LL))(v10)
        && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10) != 2 )
      {
        v11 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 120LL))(v10);
        if ( (*v11 || v11[1]) && (unsigned int)++v9 > 1 )
        {
          v7 = xmmword_180043368;
          break;
        }
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v10 + 104LL))(v10, &v16);
      }
      if ( !v8 )
      {
        v7 = v16;
        break;
      }
    }
  }
  v12 = v15 == 0;
  *a2 = v7;
  if ( !v12 )
    LeaveCriticalSection(lpCriticalSection);
  return a2;
}
