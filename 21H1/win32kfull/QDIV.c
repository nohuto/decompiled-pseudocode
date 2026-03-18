/*
 * XREFs of QDIV @ 0x241344
 * Callers:
 *     ?bInitPlgDDA@@YGHPAU_PLGDDA@@PAU_RECTL@@1PAU_POINTFIX@@@Z @ 0x2414A8 (-bInitPlgDDA@@YGHPAU_PLGDDA@@PAU_RECTL@@1PAU_POINTFIX@@@Z.c)
 * Callees:
 *     __aulldvrm @ 0xF91F7 (__aulldvrm.c)
 */

int __fastcall QDIV(int a1, int *a2, unsigned __int64 a3)
{
  int v3; // esi
  int v4; // edx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  int result; // eax
  unsigned int v9; // [esp+Ch] [ebp-8h]
  char v10; // [esp+13h] [ebp-1h]

  v3 = *a2;
  v4 = a2[1];
  if ( v4 < 0 )
  {
    v3 = -v3;
    v10 = 1;
    v4 = (unsigned __int64)-__SPAIR64__(v4, v3) >> 32;
  }
  else
  {
    v10 = 0;
  }
  v7 = __PAIR64__(v4, v3) % a3;
  v6 = __PAIR64__(v4, v3) / a3;
  v9 = HIDWORD(v7);
  HIDWORD(v7) = v7;
  *(_QWORD *)a1 = v6;
  if ( v10 )
  {
    LODWORD(v7) = 0;
    *(_DWORD *)a1 = -(int)v6;
    HIDWORD(v6) = (unsigned __int64)-(__int64)v6 >> 32;
    *(_DWORD *)(a1 + 4) = HIDWORD(v6);
    if ( __PAIR64__(v9, HIDWORD(v7)) )
    {
      *(_QWORD *)a1 = __PAIR64__(HIDWORD(v6), -(int)v6) - 1;
      result = (a3 - __PAIR64__(v9, HIDWORD(v7))) >> 32;
      LODWORD(v7) = a3 - HIDWORD(v7);
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    result = v9;
  }
  *(_DWORD *)(a1 + 8) = v7;
  *(_DWORD *)(a1 + 12) = result;
  return result;
}
