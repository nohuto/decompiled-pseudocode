/*
 * XREFs of sub_18003D8F0 @ 0x18003D8F0
 * Callers:
 *     sub_18002A7E0 @ 0x18002A7E0 (sub_18002A7E0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18003D4A0 @ 0x18003D4A0 (sub_18003D4A0.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003D8F0(__int64 a1, __int64 a2, __int64 *a3)
{
  DWORD v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  DWORD LastError; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v5 = WaitForSingleObject(hEvent, 0x1F4u);
  if ( !v5 )
  {
    v6 = *a3;
    if ( *a3 )
    {
      *a3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = *(_QWORD *)(a1 + 40);
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v7 = *(_QWORD *)(a1 + 40);
    }
    *a3 = v7;
    return 0LL;
  }
  if ( v5 == -1 )
  {
    LastError = GetLastError();
    if ( !LastError )
      return 0LL;
    return sub_18003D4A0(
             retaddr,
             101,
             (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
             LastError);
  }
  else
  {
    sub_180003268(
      retaddr,
      105,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      -2147023436);
    return 2147943860LL;
  }
}
