/*
 * XREFs of sub_180028818 @ 0x180028818
 * Callers:
 *     sub_180027610 @ 0x180027610 (sub_180027610.c)
 *     sub_180029A70 @ 0x180029A70 (sub_180029A70.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_180016730 @ 0x180016730 (sub_180016730.c)
 *     sub_18002A5F4 @ 0x18002A5F4 (sub_18002A5F4.c)
 *     sub_18003A1A4 @ 0x18003A1A4 (sub_18003A1A4.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180028818(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int128 v6; // xmm0
  int v7; // eax
  unsigned int v8; // ebx
  HSTRING v10; // rcx
  PCWSTR StringRawBuffer; // rax
  int v12; // eax
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1 + 38;
  v4 = a1[38];
  if ( v4 )
  {
    *v3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = a1[35];
  if ( v5 && a1[36] )
  {
    LOBYTE(a2) = 1;
    v6 = *(_OWORD *)sub_18003A1A4(v5, a2);
    string = 0LL;
    v13 = v6;
    WindowsDeleteString(0LL);
    string = 0LL;
    v7 = sub_180016730(a1[36], &v13, 25LL, &string);
    v8 = v7;
    if ( v7 < 0 )
    {
      sub_180003268(retaddr, 514, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v7);
      WindowsDeleteString(string);
      return v8;
    }
    v10 = string;
    if ( string )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v12 = sub_18002A5F4(StringRawBuffer, v3);
      if ( v12 < 0 )
        sub_180012300(retaddr, 519, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v12);
      v10 = string;
    }
    WindowsDeleteString(v10);
  }
  return 0LL;
}
