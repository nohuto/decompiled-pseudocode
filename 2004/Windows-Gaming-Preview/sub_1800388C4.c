/*
 * XREFs of sub_1800388C4 @ 0x1800388C4
 * Callers:
 *     sub_18002CDA4 @ 0x18002CDA4 (sub_18002CDA4.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18002CC2C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180039484 @ 0x180039484 (sub_180039484.c)
 *     sub_18003B1DC @ 0x18003B1DC (sub_18003B1DC.c)
 *     ??2@YAPEAX_K@Z @ 0x18004482C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800388C4(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  _OWORD *v10; // rax
  __int64 v11; // rcx
  int v12; // ebx
  int v13; // edx
  _QWORD v15[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  if ( (*(_QWORD *)a2 || *(_QWORD *)(a2 + 8)) && *a3 && *a4 )
  {
    v8 = a1 + 80;
    v9 = *(_QWORD *)(a1 + 80);
    v15[0] = a1 + 80;
    v15[1] = 0LL;
    v10 = operator new(0x38uLL);
    v10[2] = *(_OWORD *)a2;
    v11 = *a3;
    *a3 = 0LL;
    *((_QWORD *)v10 + 6) = v11;
    *(_QWORD *)v10 = v9;
    *((_QWORD *)v10 + 1) = v9;
    *((_QWORD *)v10 + 2) = v9;
    *((_WORD *)v10 + 12) = 0;
    sub_18003B1DC(v8, v15);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 64), a4);
    v12 = sub_180039484(a1);
    if ( v12 >= 0 )
      return 0LL;
    v13 = 32;
  }
  else
  {
    v12 = -2147024809;
    v13 = 27;
  }
  sub_180003268(retaddr, v13, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp", v12);
  return (unsigned int)v12;
}
