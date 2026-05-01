/*
 * XREFs of sub_18002BB40 @ 0x18002BB40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180016730 @ 0x180016730 (sub_180016730.c)
 *     sub_18003A1A4 @ 0x18003A1A4 (sub_18003A1A4.c)
 */

__int64 __fastcall sub_18002BB40(__int64 a1, _DWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  HSTRING v11; // rcx
  BOOL IsStringEmpty; // eax
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0;
  if ( *(_QWORD *)(a1 + 240) )
  {
    *a2 = 3;
    return 0LL;
  }
  if ( *(_QWORD *)(a1 + 288) )
  {
    *a2 = 2;
    return 0LL;
  }
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 152));
  v6 = *(_QWORD *)(a1 + 264);
  if ( !v6 || !*(_QWORD *)(a1 + 272) )
  {
LABEL_15:
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
  LOBYTE(v5) = 1;
  v13 = *(_OWORD *)sub_18003A1A4(v6, v5);
  WindowsDeleteString(0LL);
  v7 = *(_QWORD *)(a1 + 272);
  string = 0LL;
  v8 = sub_180016730(v7, &v13, 23LL, &string);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = string;
    if ( string )
    {
      IsStringEmpty = WindowsIsStringEmpty(string);
      v11 = string;
      if ( !IsStringEmpty )
        *a2 = 1;
    }
    WindowsDeleteString(v11);
    goto LABEL_15;
  }
  sub_180003268(retaddr, 1417, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v8);
  WindowsDeleteString(string);
  string = 0LL;
  if ( v4 )
    LeaveCriticalSection(v4);
  return v9;
}
