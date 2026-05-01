/*
 * XREFs of sub_180040C3C @ 0x180040C3C
 * Callers:
 *     sub_18003F4AC @ 0x18003F4AC (sub_18003F4AC.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180042798 @ 0x180042798 (sub_180042798.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180040C3C(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // r14d
  unsigned int v9; // esi
  int v10; // eax
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-40h]
  unsigned int v16; // [rsp+2Ch] [rbp-3Ch]
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 40) )
  {
    v6 = *(_DWORD *)(a1 + 44);
    if ( v6 >= a2 )
    {
      v4 = -2147024809;
      v5 = 808;
      goto LABEL_43;
    }
    v7 = *(_DWORD *)(a1 + 48);
    if ( v7 >= a2 )
    {
      v4 = -2147024809;
      v5 = 809;
      goto LABEL_43;
    }
    if ( *(_DWORD *)(a1 + 36) == 5 )
    {
      if ( *(_DWORD *)(a1 + 52) != 16 )
      {
        v4 = -2147024809;
        v5 = 813;
        goto LABEL_43;
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 52) < 0x10u )
      {
        v4 = -2147024809;
        v5 = 818;
        goto LABEL_43;
      }
      if ( *(_DWORD *)(a1 + 36) < 2u )
        goto LABEL_15;
    }
    if ( *(_DWORD *)(a1 + 60) > 2u )
    {
      v4 = -2147024809;
      v5 = 824;
      goto LABEL_43;
    }
LABEL_15:
    if ( *(_DWORD *)(a1 + 36) >= 3u && (unsigned __int16)(*(_WORD *)(a1 + 66) - 1) > 8u )
    {
      v4 = -2147024809;
      v5 = 830;
      goto LABEL_43;
    }
    if ( v6 + v7 < v7 )
    {
      v5 = 833;
LABEL_42:
      v4 = -2147024362;
      goto LABEL_43;
    }
    if ( v6 + v7 >= a2 )
    {
      v4 = -2147024809;
      v5 = 834;
      goto LABEL_43;
    }
    v8 = v7 / *(_DWORD *)(a1 + 52);
    if ( v7 % *(_DWORD *)(a1 + 52) )
    {
      v4 = -2147024809;
      v5 = 835;
      goto LABEL_43;
    }
    v9 = 0;
    if ( !v8 )
      return 0LL;
    while ( 1 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 88LL))(a1, v9, &v14);
      v11 = v10;
      if ( v10 < 0 )
      {
        sub_180003268(
          retaddr,
          846,
          (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          v10);
        return v11;
      }
      if ( v15 >= a2 )
      {
        v4 = -2147024809;
        v5 = 848;
        goto LABEL_43;
      }
      if ( v16 >= a2 )
      {
        v4 = -2147024809;
        v5 = 849;
        goto LABEL_43;
      }
      if ( v16 + v15 < v15 )
      {
        v5 = 850;
        goto LABEL_42;
      }
      if ( v16 + v15 > a2 )
      {
        v4 = -2147024809;
        v5 = 851;
        goto LABEL_43;
      }
      if ( !v9 )
        goto LABEL_32;
      v12 = v14;
      if ( (_WORD)v14 )
        break;
LABEL_33:
      ++v9;
      v17 = v12;
      if ( v9 >= v8 )
        return 0LL;
    }
    if ( (int)sub_180042798(&v17, 4LL, &v14, 4LL) >= 0 )
    {
      v4 = -2147024809;
      v5 = 858;
      goto LABEL_43;
    }
LABEL_32:
    v12 = v14;
    goto LABEL_33;
  }
  v4 = -2147024809;
  v5 = 807;
LABEL_43:
  sub_180003268(
    retaddr,
    v5,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    v4);
  return v4;
}
