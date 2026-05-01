/*
 * XREFs of sub_180017404 @ 0x180017404
 * Callers:
 *     sub_18003A258 @ 0x18003A258 (sub_18003A258.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180016BC8 @ 0x180016BC8 (sub_180016BC8.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180017404(__int64 a1, __int128 *a2, __int64 *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, __int128 *, _QWORD *); // rcx
  HSTRING v10; // rbx
  PCWSTR StringRawBuffer; // rax
  int v12; // eax
  unsigned int v13; // esi
  __int64 (__fastcall ***v14)(_QWORD, __int128 *, _QWORD *); // rcx
  __int64 (__fastcall ***v15)(_QWORD, __int128 *, _QWORD *); // rcx
  HSTRING string; // [rsp+30h] [rbp-38h] BYREF
  __int128 v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  UINT32 length; // [rsp+88h] [rbp+20h] BYREF

  string = 0LL;
  v6 = sub_180016BC8((__int64 (__fastcall ***)(_QWORD, __int128 *, _QWORD *))*a3, &string);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = string;
    StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
    v17 = *a2;
    v12 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, PCWSTR, UINT32))(*(_QWORD *)a1 + 72LL))(
            a1,
            &v17,
            22LL,
            StringRawBuffer,
            2 * length);
    v13 = v12;
    if ( v12 >= 0 )
    {
      WindowsDeleteString(v10);
      v15 = (__int64 (__fastcall ***)(_QWORD, __int128 *, _QWORD *))*a3;
      if ( *a3 )
      {
        *a3 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int128 *, _QWORD *)))(*v15)[2])(v15);
      }
      return 0LL;
    }
    else
    {
      sub_180003268(retaddr, 533, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v12);
      WindowsDeleteString(v10);
      v14 = (__int64 (__fastcall ***)(_QWORD, __int128 *, _QWORD *))*a3;
      if ( *a3 )
      {
        *a3 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int128 *, _QWORD *)))(*v14)[2])(v14);
      }
      return v13;
    }
  }
  else
  {
    sub_180003268(retaddr, 524, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v6);
    WindowsDeleteString(string);
    v8 = (__int64 (__fastcall ***)(_QWORD, __int128 *, _QWORD *))*a3;
    if ( *a3 )
    {
      *a3 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int128 *, _QWORD *)))(*v8)[2])(v8);
    }
    return v7;
  }
}
