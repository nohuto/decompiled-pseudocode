/*
 * XREFs of sub_18001D4E0 @ 0x18001D4E0
 * Callers:
 *     sub_18001B0C0 @ 0x18001B0C0 (sub_18001B0C0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001EB78 @ 0x18001EB78 (sub_18001EB78.c)
 *     sub_1800266E0 @ 0x1800266E0 (sub_1800266E0.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001D4E0(__int64 a1, __int64 *a2, __int64 a3)
{
  int v6; // edx
  __int64 v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 v11; // rax
  __int64 v12; // r8
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  int v15; // esi
  _DWORD v16[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v17; // [rsp+30h] [rbp-18h] BYREF
  __int64 v18; // [rsp+38h] [rbp-10h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( !a2 )
  {
    v6 = 627;
LABEL_3:
    sub_180003268(retaddr, v6, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", -2147024809);
    return 2147942487LL;
  }
  if ( !a3 )
  {
    v6 = 628;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
  v8 = a1 - 16;
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 32);
    while ( v9 >= 0 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 32), v9 + 1, v9);
      if ( v10 == v9 )
        goto LABEL_11;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v9 + 16));
  }
LABEL_11:
  v11 = *a2;
  v17 = a2;
  (*(void (__fastcall **)(__int64 *))(v11 + 8))(a2);
  v18 = v8;
  if ( v8 )
  {
    v13 = *(_QWORD *)(v8 + 32);
    while ( v13 >= 0 )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 32), v13 + 1, v13);
      if ( v14 == v13 )
        goto LABEL_16;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v13 + 16));
  }
LABEL_16:
  v16[2] = 0;
  v16[0] = 3;
  v16[1] = 128;
  v15 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, __int64 **))sub_18001EB78)(v16, a3, v12, &v17);
  if ( v18 )
    sub_1800266E0(v18);
  if ( v17 )
    (*(void (__fastcall **)(__int64 *))(*v17 + 16))(v17);
  if ( v15 < 0 )
    sub_180003268(retaddr, 713, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v15);
  if ( v8 )
    sub_1800266E0(v8);
  (*(void (__fastcall **)(__int64 *))(*a2 + 16))(a2);
  return (unsigned int)v15;
}
