/*
 * XREFs of ?W32kCddLineToApiExt@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C00C7FD0
 * Callers:
 *     <none>
 * Callees:
 *     W32kCddLineTo @ 0x1C00C8098 (W32kCddLineTo.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall W32kCddLineToApiExt(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        struct _RECTL *a8,
        unsigned int a9,
        struct _W32KCDD_ENG_CALLBACKS *a10)
{
  unsigned int v10; // ebx
  int v12; // esi
  int v13; // ebp
  int v14; // r14d
  int v15; // eax

  v10 = 0;
  v12 = (int)a3;
  v13 = (int)a2;
  v14 = (int)a1;
  if ( qword_1C0251110 )
    v15 = qword_1C0251110();
  else
    v15 = -1073741637;
  if ( v15 >= 0 )
    return (unsigned int)W32kCddLineTo(v14, v13, v12, a4, a5, a6, a7, (__int64)a8, a9, (__int64)a10);
  return v10;
}
