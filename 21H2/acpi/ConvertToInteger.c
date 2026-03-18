/*
 * XREFs of ConvertToInteger @ 0x1C001C420
 * Callers:
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     ToInteger @ 0x1C001C4B0 (ToInteger.c)
 *     Concat @ 0x1C0027500 (Concat.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     _strtoui64_0 @ 0x1C002F1E9 (_strtoui64_0.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 */

__int64 __fastcall ConvertToInteger(__int64 a1, __int64 a2)
{
  int v2; // r8d
  unsigned int v3; // ebx
  int v6; // r8d
  unsigned __int64 v7; // rax
  __int128 v8; // xmm1
  __int64 v9; // xmm0_8
  int v11; // r8d
  int v12; // r8d
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int128 v15; // [rsp+20h] [rbp-38h]
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-18h]

  v2 = *(unsigned __int16 *)(a1 + 2);
  v3 = 0;
  v15 = 0LL;
  v17 = 0LL;
  WORD1(v15) = 1;
  v16 = 0LL;
  v6 = v2 - 1;
  if ( v6 )
  {
    v11 = v6 - 1;
    if ( !v11 )
    {
      v7 = strtoui64_0(*(const char **)(a1 + 32), 0LL, 0);
      goto LABEL_3;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v13 = *(_DWORD *)(a1 + 24);
      v14 = 8;
      if ( v13 <= 8 )
        v14 = v13;
      memmove(&v16, *(const void **)(a1 + 32), v14);
      goto LABEL_4;
    }
    if ( v12 != 12 )
      return (unsigned int)-1072431095;
  }
  v7 = *(_QWORD *)(a1 + 16);
LABEL_3:
  *(_QWORD *)&v16 = v7;
LABEL_4:
  FreeDataBuffs(a2, 1u);
  v8 = v16;
  *(_OWORD *)a2 = v15;
  v9 = v17;
  *(_OWORD *)(a2 + 16) = v8;
  *(_QWORD *)(a2 + 32) = v9;
  return v3;
}
