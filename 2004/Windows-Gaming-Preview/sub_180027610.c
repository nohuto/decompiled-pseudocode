/*
 * XREFs of sub_180027610 @ 0x180027610
 * Callers:
 *     sub_18000CFF4 @ 0x18000CFF4 (sub_18000CFF4.c)
 *     sub_18001D120 @ 0x18001D120 (sub_18001D120.c)
 *     sub_18001EA64 @ 0x18001EA64 (sub_18001EA64.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_1800280C8 @ 0x1800280C8 (sub_1800280C8.c)
 *     sub_180028228 @ 0x180028228 (sub_180028228.c)
 *     sub_1800283F4 @ 0x1800283F4 (sub_1800283F4.c)
 *     sub_1800285F8 @ 0x1800285F8 (sub_1800285F8.c)
 *     sub_180028818 @ 0x180028818 (sub_180028818.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18002CC2C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18002CDA4 @ 0x18002CDA4 (sub_18002CDA4.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180027610(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v9; // ebx
  int v10; // edx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 288, a4);
  v9 = sub_18002CDA4(a1 + 280, a2, a3, a4);
  if ( v9 < 0 )
  {
    v10 = 265;
LABEL_3:
    sub_180003268(retaddr, v10, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v9);
    return (unsigned int)v9;
  }
  v12 = *(_QWORD *)(a1 + 224);
  if ( v12 != a5 )
  {
    if ( a5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
      v12 = *(_QWORD *)(a1 + 224);
    }
    *(_QWORD *)(a1 + 224) = a5;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v9 = sub_1800285F8(a1);
  if ( v9 < 0 )
  {
    v10 = 269;
    goto LABEL_3;
  }
  v13 = sub_1800283F4(a1);
  if ( v13 < 0 )
    sub_180012300(retaddr, 270, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v13);
  v9 = sub_180028818(a1);
  if ( v9 < 0 )
  {
    v10 = 271;
    goto LABEL_3;
  }
  v14 = sub_1800280C8(a1);
  if ( v14 < 0 )
    sub_180012300(retaddr, 272, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v14);
  v15 = sub_180028228(a1);
  if ( v15 < 0 )
    sub_180012300(retaddr, 273, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v15);
  return 0LL;
}
