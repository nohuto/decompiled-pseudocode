/*
 * XREFs of sub_18002C2E0 @ 0x18002C2E0
 * Callers:
 *     sub_18000A924 @ 0x18000A924 (sub_18000A924.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 */

__int64 __fastcall sub_18002C2E0(__int64 a1, HSTRING *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  HRESULT v5; // eax
  unsigned int v6; // ebx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 152));
  v5 = WindowsDuplicateString(*(HSTRING *)(a1 + 136), a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
  else
  {
    sub_180003268(retaddr, 1576, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v5);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v6;
  }
}
