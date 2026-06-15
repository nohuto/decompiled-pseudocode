/*
 * XREFs of sub_18001AFD0 @ 0x18001AFD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001058C @ 0x18001058C (sub_18001058C.c)
 *     sub_180015E4C @ 0x180015E4C (sub_180015E4C.c)
 *     sub_1800163F0 @ 0x1800163F0 (sub_1800163F0.c)
 *     sub_180017F24 @ 0x180017F24 (sub_180017F24.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall sub_18001AFD0(char *a1, char a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  _QWORD *v5; // rsi
  volatile signed __int32 *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  volatile signed __int32 *v9; // rsi
  void *v10; // rcx

  *(_QWORD *)a1 = off_18003F290;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v5 = (_QWORD *)*((_QWORD *)a1 + 16);
  while ( v5 )
  {
    v6 = (volatile signed __int32 *)v5[2];
    v5 = (_QWORD *)*v5;
    if ( v6 )
    {
      v7 = *((_QWORD *)v6 + 32);
      if ( v7 )
        sub_18001058C(v7, (__int64)v6);
      sub_1800163F0((__int64)v6, 1);
      sub_180015E4C((__int64)v6, 1);
      if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 32LL))(v6);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
      }
    }
  }
  v8 = (_QWORD *)*((_QWORD *)a1 + 9);
  while ( v8 )
  {
    v9 = (volatile signed __int32 *)v8[2];
    v8 = (_QWORD *)*v8;
    if ( v9 && _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  sub_180017F24((__int64)(a1 + 128));
  sub_180017F24((__int64)(a1 + 72));
  DeleteCriticalSection(v4);
  v10 = (void *)*((_QWORD *)a1 + 2);
  if ( v10 )
    LocalFree(v10);
  *(_QWORD *)a1 = &off_18003F260;
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}
