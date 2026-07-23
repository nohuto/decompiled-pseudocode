/*
 * XREFs of NormBuffer__RecheckStartCombinations @ 0x1800FF9B8
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x180080D8C (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__GetCurrentOutputChar @ 0x1800FF6DC (NormBuffer__GetCurrentOutputChar.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1800FFE90 (Normalization__CanCombinableCharactersCombine.c)
 */

unsigned __int64 __fastcall NormBuffer__RecheckStartCombinations(__int64 a1)
{
  unsigned __int64 result; // rax
  bool v2; // zf
  __int64 v3; // rbx
  unsigned __int16 *v4; // rbp
  __int64 v5; // rdi
  char v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r13
  unsigned __int64 v10; // r8
  char v11; // si
  char v12; // r9
  unsigned __int16 *v13; // r8
  _WORD *v14; // rdx
  char v15; // al
  char v16; // r9
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  unsigned __int16 *v18; // [rsp+50h] [rbp+8h] BYREF

  result = (unsigned __int64)&retaddr;
  v2 = *(_BYTE *)(a1 + 93) == 64;
  v3 = a1;
  v4 = *(unsigned __int16 **)(a1 + 80);
  v18 = v4;
  if ( v2 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    v6 = 0;
    if ( v4 != (unsigned __int16 *)v5 )
    {
      v7 = *(_QWORD *)(a1 + 112);
      while ( 1 )
      {
        result = NormBuffer__GetCurrentOutputChar(a1, &v18);
        v8 = *(_QWORD *)(v7 + 32);
        v9 = *(_QWORD *)(v7 + 40);
        v10 = result & 0x7F;
        a1 = v9 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)result >> 7) + v8) << 7);
        v11 = *(_BYTE *)(v10 + a1 - 128) & 0x3F;
        if ( v11 == v6 )
          goto LABEL_17;
        if ( (*(_BYTE *)(v10 + a1 - 128) & 0xC0) != 0xC0 )
          break;
        result = Normalization__CanCombinableCharactersCombine(v7, *(unsigned int *)(v3 + 88), (unsigned int)result);
        if ( !(_DWORD)result )
          break;
        v5 = *(_QWORD *)(v3 + 40) - 2LL;
        *(_DWORD *)(v3 + 88) = result;
        *(_QWORD *)(v3 + 40) = v5;
        a1 = v9 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)result >> 7) + v8) << 7);
        v12 = *(_BYTE *)((result & 0x7F) + a1 - 128);
        v13 = v18;
        *(v4 - 1) = result;
        v14 = v13;
        v15 = v12;
        v16 = v12 & 0xC0;
        *(_BYTE *)(v3 + 93) = v16;
        *(_BYTE *)(v3 + 92) = v15 & 0x3F;
        result = *(_QWORD *)(v3 + 64);
        if ( result == v5 )
        {
          if ( (unsigned __int64)v13 >= result )
          {
            result = *(_QWORD *)(v3 + 24) - 2LL;
            *(_DWORD *)(v3 + 56) = 0;
            *(_WORD *)(v3 + 72) = 0;
          }
          else
          {
            result -= 2LL;
          }
          *(_QWORD *)(v3 + 64) = result;
        }
        if ( v13 != (unsigned __int16 *)v5 )
        {
          do
          {
            a1 = (__int64)(v14 + 1);
            result = (unsigned __int16)v14[1];
            *v14 = result;
            v14 = (_WORD *)a1;
          }
          while ( a1 != v5 );
        }
        if ( v16 != 64 )
          return result;
LABEL_18:
        if ( v13 == (unsigned __int16 *)v5 )
          return result;
      }
      v6 = v11;
LABEL_17:
      v13 = ++v18;
      goto LABEL_18;
    }
  }
  return result;
}
