/*
 * XREFs of sub_180029CE0 @ 0x180029CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180028B34 @ 0x180028B34 (sub_180028B34.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180029CE0(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // esi
  __int64 v9; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  if ( *(_QWORD *)(a1 + 208) || (*a2 = 0LL, v6 = sub_180028B34((_QWORD *)a1, v5), v7 = v6, v6 >= 0) )
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    v9 = *(_QWORD *)(a1 + 208);
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v9 = *(_QWORD *)(a1 + 208);
    }
    *a2 = v9;
    return 0LL;
  }
  else
  {
    sub_180003268(retaddr, 953, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v6);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v7;
  }
}
