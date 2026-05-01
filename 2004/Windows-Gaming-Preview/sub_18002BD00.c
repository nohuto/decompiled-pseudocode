/*
 * XREFs of sub_18002BD00 @ 0x18002BD00
 * Callers:
 *     sub_180028E68 @ 0x180028E68 (sub_180028E68.c)
 *     sub_180029FB8 @ 0x180029FB8 (sub_180029FB8.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180016730 @ 0x180016730 (sub_180016730.c)
 *     sub_18003A1A4 @ 0x18003A1A4 (sub_18003A1A4.c)
 */

__int64 __fastcall sub_18002BD00(__int64 a1, HSTRING *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  HSTRING v11; // rax
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 152));
  v6 = *(_QWORD *)(a1 + 264);
  if ( v6 && *(_QWORD *)(a1 + 272) )
  {
    LOBYTE(v5) = 1;
    v12 = *(_OWORD *)sub_18003A1A4(v6, v5);
    WindowsDeleteString(0LL);
    v7 = *(_QWORD *)(a1 + 272);
    string = 0LL;
    v8 = sub_180016730(v7, &v12, 26LL, &string);
    v9 = v8;
    if ( v8 < 0 )
    {
      sub_180003268(retaddr, 1468, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v8);
      WindowsDeleteString(string);
      string = 0LL;
      if ( v2 )
        LeaveCriticalSection(v2);
      return v9;
    }
    v11 = string;
    string = 0LL;
    *a2 = v11;
    WindowsDeleteString(0LL);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
