/*
 * XREFs of ?inv_cmap@@YGXHPAURGBX@@HPAKPAE@Z @ 0xB7804
 * Callers:
 *     ?MakeITable@@YGHPAEPAURGBX@@H@Z @ 0xB7744 (-MakeITable@@YGHPAEPAURGBX@@H@Z.c)
 * Callees:
 *     ?redloop@@YGHXZ @ 0xB795E (-redloop@@YGHXZ.c)
 */

void __userpurge inv_cmap(
        int a1@<edx>,
        int a2@<ecx>,
        int a3,
        struct RGBX *a4,
        int a5,
        unsigned int *a6,
        unsigned __int8 *a7)
{
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  unsigned int v11; // edi
  int v12; // esi

  v7 = a1;
  dword_273A44 = 32;
  dword_273A34 = 32;
  memset(a4, 0xFFu, 0x20000u);
  v8 = 0;
  dword_273A3C = 8;
  dword_273A40 = 64;
  dword_273A38 = 1024;
  for ( dword_273A48 = 0; v8 < a2; dword_273A48 = v8 )
  {
    v9 = *(unsigned __int8 *)(v7 + 4 * v8);
    v10 = *(unsigned __int8 *)(v7 + 4 * v8 + 1);
    v11 = *(unsigned __int8 *)(a1 + 4 * v8 + 2);
    dword_2739F8 = v11 >> 3;
    dword_2739FC = v10 >> 3;
    dword_273A00 = v9 >> 3;
    dword_273A08 = v9 - 8 * (v9 >> 3) - 4;
    dword_273A04 = v10 - 8 * (v10 >> 3) - 4;
    dword_273A0C = dword_273A08 * dword_273A08
                 + dword_273A04 * dword_273A04
                 + (v11 - 8 * dword_2739F8 - 4) * (v11 - 8 * dword_2739F8 - 4);
    dword_273A18 = 16 * (8 * (v9 >> 3) + 8 - v9);
    v12 = (v11 >> 3) + 32 * ((v10 >> 3) + 32 * (v9 >> 3));
    dword_273A14 = 16 * (8 * (v10 >> 3) + 8 - v10);
    dword_273A10 = 16 * (8 * (v11 >> 3) + 8 - v11);
    dword_273A24 = (int)a4 + 4 * v12;
    dword_273A30 = v12 + a5;
    redloop();
    v7 = a1;
    v8 = dword_273A48 + 1;
  }
}
