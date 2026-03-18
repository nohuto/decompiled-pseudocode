/*
 * XREFs of ?vComputePageXform@DC@@QAEXXZ @ 0x21D283
 * Callers:
 *     ?iSetMapMode@DC@@QAEHH@Z @ 0x21CB7F (-iSetMapMode@DC@@QAEHH@Z.c)
 * Callees:
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 */

void __usercall DC::vComputePageXform(DC *this@<ecx>, __int64 a2@<edx:eax>)
{
  __int64 v3; // rax
  int v4; // ecx
  int v5; // esi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rax
  int v9; // ecx
  int v10; // esi
  int v11; // edx
  int v12[2]; // [esp+8h] [ebp-10h] BYREF
  int v13; // [esp+10h] [ebp-8h] BYREF
  int v14; // [esp+14h] [ebp-4h]

  v13 = 0;
  v14 = 0;
  LODWORD(a2) = 16 * *(_DWORD *)(*((_DWORD *)this + 255) + 332);
  ltoef_c(a2, a2, &v13);
  LODWORD(v3) = *((_DWORD *)this + 255);
  ltoef_c(v3, *(_DWORD *)(v3 + 316), v12);
  divff3_c(&v13, &v13, v12);
  v4 = *((_DWORD *)this + 255);
  v5 = v13;
  HIDWORD(v6) = v14;
  *(_DWORD *)(v4 + 416) = v13;
  *(_DWORD *)(v4 + 420) = v14;
  v7 = *((_DWORD *)this + 255);
  *((_DWORD *)this + 105) = v5;
  *((_DWORD *)this + 106) = HIDWORD(v6);
  LODWORD(v6) = 16 * *(_DWORD *)(v7 + 336);
  ltoef_c(v6, v6, &v13);
  LODWORD(v8) = *((_DWORD *)this + 255);
  ltoef_c(v8, *(_DWORD *)(v8 + 320), v12);
  divff3_c(&v13, &v13, v12);
  v9 = *((_DWORD *)this + 255);
  v10 = v13;
  v11 = v14;
  *(_DWORD *)(v9 + 424) = v13;
  *(_DWORD *)(v9 + 428) = v14;
  *((_DWORD *)this + 107) = v10;
  *((_DWORD *)this + 108) = v11;
}
