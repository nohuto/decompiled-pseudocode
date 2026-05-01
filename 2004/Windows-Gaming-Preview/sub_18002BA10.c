/*
 * XREFs of sub_18002BA10 @ 0x18002BA10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 *     sub_18002E524 @ 0x18002E524 (sub_18002E524.c)
 */

__int64 __fastcall sub_18002BA10(__int64 a1, int a2, __int64 a3)
{
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  int v9; // edi
  _DWORD v10[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int64 *v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 144) == 1 )
  {
    sub_180003268(
      retaddr,
      1363,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      -2147024891);
    return 2147942405LL;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 136);
    while ( v5 >= 0 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 136), v5 + 1, v5);
      if ( v6 == v5 )
        goto LABEL_7;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v5 + 16));
LABEL_7:
    v7 = *(_QWORD *)(a1 + 136);
    v11 = a1;
    v12 = (volatile signed __int64 *)a1;
    while ( v7 >= 0 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 136), v7 + 1, v7);
      if ( v8 == v7 )
        goto LABEL_11;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 16));
LABEL_11:
    v10[2] = 0;
    v13 = a2;
    v10[0] = 3;
    v10[1] = 128;
    v9 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, __int64 *))sub_18002E524)(v10, a3, a3, &v11);
    if ( v12 )
      sub_1800120A0(v12);
    if ( v9 < 0 )
      sub_180003268(retaddr, 1382, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v9);
    sub_1800120A0((volatile signed __int64 *)a1);
    return (unsigned int)v9;
  }
}
