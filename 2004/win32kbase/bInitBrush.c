/*
 * XREFs of bInitBrush @ 0x1C02933EC
 * Callers:
 *     bInitBRUSHOBJ @ 0x1C0293494 (bInitBRUSHOBJ.c)
 * Callees:
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0014748 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0014780 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C0015520 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C0015620 (-bSetStockObject@@YAHPEAXHH@Z.c)
 */

__int64 __fastcall bInitBrush(int a1, int a2, unsigned int a3, HBRUSH **a4, int a5)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  HBRUSH *v9; // rbx
  unsigned int v10; // edi
  HBRUSH *v12[2]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+40h] [rbp-18h]

  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, a2, a3, 0, 0);
  v9 = v12[0];
  if ( v12[0] )
  {
    v10 = 1;
    v13 = 1;
    BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v12, v7, v8);
    if ( a5 )
      *((_DWORD *)v9 + 10) |= 4u;
    if ( a4 )
      *a4 = v9;
    bSetStockObject((unsigned __int64)*v9, a1, 0);
    if ( !a1 )
      *(_QWORD *)&WPP_MAIN_CB.SectorSize = *v9;
  }
  else
  {
    v10 = 0;
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ(v12);
  return v10;
}
