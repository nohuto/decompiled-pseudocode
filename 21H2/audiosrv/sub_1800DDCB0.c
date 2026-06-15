/*
 * XREFs of sub_1800DDCB0 @ 0x1800DDCB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010A50 @ 0x180010A50 (sub_180010A50.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8CCC @ 0x1800B8CCC (sub_1800B8CCC.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_18012D91C @ 0x18012D91C (sub_18012D91C.c)
 */

__int64 __fastcall sub_1800DDCB0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  LPCRITICAL_SECTION v9; // rbx
  _QWORD *v11; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  EnterCriticalSection(&stru_18019EF60);
  v6 = (_QWORD *)qword_18019D9B0;
  v11 = (_QWORD *)qword_18019D9B0;
  while ( v6 )
  {
    v7 = sub_1800B8CCC(v5, (__int64)v6);
    v8 = *(_QWORD *)v7;
    if ( *(_QWORD *)(*(_QWORD *)v7 + 544LL) == a2 )
    {
      *a3 = v8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v9 = lpCriticalSection;
      EnterCriticalSection(lpCriticalSection);
      if ( ++LODWORD(v9[1].DebugInfo) == 1 )
      {
        sub_18012D91C(v9);
        sub_180010A50((__int64)v9);
      }
      LeaveCriticalSection(v9);
      break;
    }
    sub_1800B91A0(v8, &v11);
    v6 = v11;
  }
  LeaveCriticalSection(&stru_18019EF60);
  return 0LL;
}
