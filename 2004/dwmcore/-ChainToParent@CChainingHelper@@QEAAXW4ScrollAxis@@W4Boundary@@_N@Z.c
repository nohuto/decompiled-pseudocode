/*
 * XREFs of ?ChainToParent@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N@Z @ 0x1802144C0
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1802035BC (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x180214618 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CChainingHelper::ChainToParent(__int64 a1, int a2, int a3, char a4)
{
  int v5; // eax
  __int64 v8; // rdi
  char v9; // bl
  int v10; // r9d
  int v11; // edx
  int v12; // ecx
  int v13; // r9d
  __int64 result; // rax

  v5 = 0;
  v8 = 3LL * a2;
  v9 = a4 | *(_BYTE *)(a1 + 12LL * a2) & 0xFE;
  v10 = 0;
  if ( a2 )
  {
    v11 = a2 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        if ( ((a3 - 1) & 0xFFFFFFFD) == 0 )
          v5 = 32;
        if ( (unsigned int)(a3 - 2) <= 1 )
          v5 |= 0x10u;
        v10 = 48;
      }
    }
    else
    {
      if ( ((a3 - 1) & 0xFFFFFFFD) == 0 )
        v5 = 4;
      if ( (unsigned int)(a3 - 2) <= 1 )
        v5 |= 8u;
      v10 = 12;
    }
  }
  else
  {
    v5 = ((a3 - 1) & 0xFFFFFFFD) == 0;
    if ( (unsigned int)(a3 - 2) <= 1 )
      v5 |= 2u;
    v10 = 3;
  }
  if ( a4 )
  {
    v12 = 63;
    v13 = ~v10;
    if ( a2 != 2 )
      v12 = 15;
    v5 |= v13 & v12;
  }
  *(_BYTE *)(a1 + 4 * v8) = v9 | 2;
  result = ~v5 & 0xCFFFFFFF;
  *(_DWORD *)(a1 + 4 * v8 + 4) = result;
  *(_BYTE *)(a1 + 36) |= 1u;
  return result;
}
