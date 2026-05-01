/*
 * XREFs of sub_18002B930 @ 0x18002B930
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18002A7E0 @ 0x18002A7E0 (sub_18002A7E0.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002B930(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v5; // eax
  unsigned int v6; // esi
  __int64 v8; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  if ( *(_QWORD *)(a1 + 216) || (*a2 = 0LL, v5 = sub_18002A7E0((_QWORD *)a1), v6 = v5, v5 >= 0) )
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    v8 = *(_QWORD *)(a1 + 216);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v8 = *(_QWORD *)(a1 + 216);
    }
    *a2 = v8;
    return 0LL;
  }
  else
  {
    sub_180003268(retaddr, 1349, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v5);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v6;
  }
}
