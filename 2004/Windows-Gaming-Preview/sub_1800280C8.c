/*
 * XREFs of sub_1800280C8 @ 0x1800280C8
 * Callers:
 *     sub_1800273AC @ 0x1800273AC (sub_1800273AC.c)
 *     sub_180027610 @ 0x180027610 (sub_180027610.c)
 *     sub_1800295F0 @ 0x1800295F0 (sub_1800295F0.c)
 *     sub_180029A70 @ 0x180029A70 (sub_180029A70.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     ?_Init@?$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180027A18 (-_Init@-$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     sub_18002A4F4 @ 0x18002A4F4 (sub_18002A4F4.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800280C8(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // r9d
  int v5; // edx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)(a1 + 144) = 0;
  if ( !*(_QWORD *)(a1 + 280) || !*(_QWORD *)(a1 + 288) )
  {
    if ( *(_QWORD *)(a1 + 272) )
    {
      v13 = 0LL;
      v2 = sub_18002A4F4(a1, &v13);
      v3 = v2;
      if ( v2 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 48LL))(v13, &v12);
        v3 = v6;
        if ( v6 >= 0 )
        {
          if ( v12 <= 2 )
          {
            *(_DWORD *)(a1 + 144) = v12;
            v8 = v13;
            if ( v13 )
            {
              v13 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
            }
            goto LABEL_15;
          }
          v3 = -2147418113;
          v4 = -2147418113;
          v5 = 382;
        }
        else
        {
          v4 = v6;
          v5 = 381;
        }
      }
      else
      {
        v4 = v2;
        v5 = 378;
      }
      sub_180003268(retaddr, v5, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v4);
      v7 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
    else
    {
      v3 = -2147418113;
      sub_180003268(
        retaddr,
        389,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        -2147418113);
    }
    return v3;
  }
  *(_DWORD *)(a1 + 144) = 1;
LABEL_15:
  if ( !*(_DWORD *)(a1 + 144) )
  {
    v9 = std::numpunct<unsigned short>::_Init(a1);
    if ( v9 < 0 )
      sub_180012300(retaddr, 395, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v9);
  }
  return 0LL;
}
