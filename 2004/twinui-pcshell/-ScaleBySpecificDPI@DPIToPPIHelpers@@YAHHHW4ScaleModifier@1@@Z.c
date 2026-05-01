/*
 * XREFs of ?ScaleBySpecificDPI@DPIToPPIHelpers@@YAHHHW4ScaleModifier@1@@Z @ 0x18047E388
 * Callers:
 *     _lambda_2ae8870d6bc816a04ba0e39f1c502364_::operator() @ 0x18047DE24 (_lambda_2ae8870d6bc816a04ba0e39f1c502364_--operator().c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x18047E3EC (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 * Callees:
 *     ?SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z @ 0x18047B4D8 (-SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z.c)
 */

int __fastcall DPIToPPIHelpers::ScaleBySpecificDPI(HWND a1, int a2, int a3)
{
  int v4; // ebx
  int nDenominator; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = (int)a1;
  if ( a3 == 1 )
  {
    SHComputeDPI(a1, &nDenominator, &v7);
    v4 = MulDiv(v4, 96, nDenominator);
  }
  return MulDiv(v4, a2, 96);
}
