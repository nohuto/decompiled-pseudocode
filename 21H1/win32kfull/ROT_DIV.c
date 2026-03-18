/*
 * XREFs of ROT_DIV @ 0x2413D5
 * Callers:
 *     ?bInitPlgDDA@@YGHPAU_PLGDDA@@PAU_RECTL@@1PAU_POINTFIX@@@Z @ 0x2414A8 (-bInitPlgDDA@@YGHPAU_PLGDDA@@PAU_RECTL@@1PAU_POINTFIX@@@Z.c)
 * Callees:
 *     __alldvrm @ 0xF91D9 (__alldvrm.c)
 */

int __thiscall ROT_DIV(_DWORD *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // edi
  bool v5; // cf

  v3 = a2 / a3;
  v4 = (unsigned __int64)(a2 % a3) >> 32;
  *(_QWORD *)this = a2 / a3;
  this[2] = a2 % a3;
  this[3] = v4;
  if ( v4 < 0 )
  {
    v5 = (_DWORD)v3 == 0;
    LODWORD(v3) = v3 - 1;
    *this = v3;
    this[1] = HIDWORD(v3) - v5;
    *((_QWORD *)this + 1) = a3 + a2 % a3;
  }
  return v3;
}
