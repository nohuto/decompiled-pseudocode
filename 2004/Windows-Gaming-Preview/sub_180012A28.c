/*
 * XREFs of sub_180012A28 @ 0x180012A28
 * Callers:
 *     sub_180012990 @ 0x180012990 (sub_180012990.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_180012D80 @ 0x180012D80 (sub_180012D80.c)
 *     sub_180012EF4 @ 0x180012EF4 (sub_180012EF4.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180012A28(_QWORD *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = sub_180012D80(*a1, &v10);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = sub_180012EF4(*a1, &v10, *(_QWORD *)a1[1]);
    if ( v4 >= 0 )
      goto LABEL_9;
    sub_180012300(
      retaddr,
      230,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      v4);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 72LL))(v10, *(_QWORD *)a1[1]);
    v6 = v5;
    if ( v5 >= 0 )
      v6 = 0;
    else
      sub_180003268(
        retaddr,
        386,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        v5);
    if ( v6 >= 0 )
    {
LABEL_9:
      v3 = 0;
    }
    else
    {
      sub_180012300(
        retaddr,
        235,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        v6);
      v3 = -2147467259;
    }
  }
  else
  {
    sub_180003268(
      retaddr,
      228,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      v2);
  }
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v3;
}
