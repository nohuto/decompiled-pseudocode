/*
 * XREFs of NormBuffer__RecheckStartCombinations @ 0x14058E020
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1409186F0 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__GetCurrentOutputChar @ 0x14058DD70 (NormBuffer__GetCurrentOutputChar.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1409178D8 (Normalization__CanCombinableCharactersCombine.c)
 *     Normalization__GetCharacterInfo @ 0x140917B14 (Normalization__GetCharacterInfo.c)
 */

void __fastcall NormBuffer__RecheckStartCombinations(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rbx
  unsigned __int16 *v3; // rsi
  __int64 v4; // rdi
  char v5; // r15
  __int64 v6; // r12
  unsigned int CurrentOutputChar; // r14d
  unsigned int CanCombinableCharactersCombine; // eax
  unsigned int v9; // r14d
  char v10; // r9
  unsigned __int16 *v11; // r8
  _WORD *v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  char v16; // [rsp+60h] [rbp+40h] BYREF
  char v17; // [rsp+68h] [rbp+48h] BYREF
  unsigned __int16 *v18; // [rsp+70h] [rbp+50h] BYREF

  v1 = *(_BYTE *)(a1 + 93) == 64;
  v2 = a1;
  v3 = *(unsigned __int16 **)(a1 + 80);
  v18 = v3;
  if ( v1 )
  {
    v4 = *(_QWORD *)(a1 + 40);
    v5 = 0;
    if ( v3 != (unsigned __int16 *)v4 )
    {
      v6 = *(_QWORD *)(a1 + 112);
      while ( 1 )
      {
        v16 = 0;
        v17 = 0;
        CurrentOutputChar = NormBuffer__GetCurrentOutputChar(a1, &v18);
        Normalization__GetCharacterInfo(v6, CurrentOutputChar, &v16, &v17);
        if ( v16 == v5 )
          goto LABEL_17;
        if ( v17 != -64 )
          break;
        CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(
                                           v6,
                                           *(unsigned int *)(v2 + 88),
                                           CurrentOutputChar);
        v9 = CanCombinableCharactersCombine;
        if ( !CanCombinableCharactersCombine )
          break;
        Normalization__GetCharacterInfo(v6, CanCombinableCharactersCombine, &v16, &v17);
        v10 = v17;
        v4 = *(_QWORD *)(v2 + 40) - 2LL;
        v11 = v18;
        *(_BYTE *)(v2 + 92) = v16;
        v12 = v11;
        v13 = *(_QWORD *)(v2 + 64);
        *(v3 - 1) = v9;
        *(_DWORD *)(v2 + 88) = v9;
        *(_BYTE *)(v2 + 93) = v10;
        *(_QWORD *)(v2 + 40) = v4;
        if ( v13 == v4 )
        {
          if ( (unsigned __int64)v11 >= v13 )
          {
            v15 = *(_QWORD *)(v2 + 24);
            *(_DWORD *)(v2 + 56) = 0;
            v14 = v15 - 2;
            *(_WORD *)(v2 + 72) = 0;
          }
          else
          {
            v14 = v13 - 2;
          }
          *(_QWORD *)(v2 + 64) = v14;
        }
        if ( v11 != (unsigned __int16 *)v4 )
        {
          do
          {
            a1 = (__int64)(v12 + 1);
            *v12 = v12[1];
            v12 = (_WORD *)a1;
          }
          while ( a1 != v4 );
        }
        if ( v10 != 64 )
          return;
LABEL_18:
        if ( v11 == (unsigned __int16 *)v4 )
          return;
      }
      v5 = v16;
LABEL_17:
      v11 = ++v18;
      goto LABEL_18;
    }
  }
}
