/*
 * XREFs of sub_18002C790 @ 0x18002C790
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800386D0 @ 0x1800386D0 (sub_1800386D0.c)
 */

__int64 __fastcall sub_18002C790(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 152));
  v5 = *(_QWORD *)(a1 + 264);
  v6 = 0LL;
  v8 = 0LL;
  if ( v5 && *(_QWORD *)(a1 + 272) )
  {
    sub_1800386D0(v5, &xmmword_180050A98, &v8);
    v6 = v8;
  }
  v8 = 0LL;
  *a2 = v6;
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
