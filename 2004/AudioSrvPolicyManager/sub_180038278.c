/*
 * XREFs of sub_180038278 @ 0x180038278
 * Callers:
 *     sub_180037A30 @ 0x180037A30 (sub_180037A30.c)
 *     sub_180038A60 @ 0x180038A60 (sub_180038A60.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_18002B300 @ 0x18002B300 (sub_18002B300.c)
 *     sub_18002B8A0 @ 0x18002B8A0 (sub_18002B8A0.c)
 *     sub_180036DF4 @ 0x180036DF4 (sub_180036DF4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180038278(char *a1, __int64 a2, void **a3)
{
  int v5; // eax
  unsigned int v6; // edi
  void *v7; // rbx
  __int128 v8; // [rsp+28h] [rbp-49h]
  _BYTE v9[8]; // [rsp+40h] [rbp-31h] BYREF
  __int64 (__fastcall **v10)(LPVOID); // [rsp+48h] [rbp-29h] BYREF
  __int128 v11; // [rsp+50h] [rbp-21h]
  __int64 (__fastcall ***v12)(LPVOID); // [rsp+B0h] [rbp+3Fh]
  __int64 retaddr; // [rsp+D0h] [rbp+5Fh]
  char *v14; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v15; // [rsp+E0h] [rbp+6Fh] BYREF
  LPVOID pv; // [rsp+F0h] [rbp+7Fh] BYREF

  v15 = a2;
  v14 = a1;
  if ( a2 )
  {
    pv = 0LL;
    *(_QWORD *)&v8 = &v14;
    *((_QWORD *)&v8 + 1) = &v15;
    v10 = &off_18003F838;
    v11 = v8;
    v12 = &v10;
    v5 = sub_180036DF4(&pv, (__int64)v9);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v7 = 0LL;
      sub_18002B8A0(&pv, (char *)pv, 0xFFFFFFFFFFFFFFFFuLL);
      sub_18002B300(a3, &pv);
      if ( pv )
        CoTaskMemFree(pv);
      v6 = 0;
    }
    else
    {
      sub_180003AB0(
        retaddr,
        31,
        (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\inc\\persistentlocationhelper.h",
        v5);
      v7 = pv;
    }
    if ( v7 )
      CoTaskMemFree(v7);
    return v6;
  }
  else
  {
    sub_18002B8A0(&pv, a1, 0xFFFFFFFFFFFFFFFFuLL);
    sub_18002B300(a3, &pv);
    if ( pv )
      CoTaskMemFree(pv);
    return 0LL;
  }
}
