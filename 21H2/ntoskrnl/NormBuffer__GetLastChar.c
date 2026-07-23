/*
 * XREFs of NormBuffer__GetLastChar @ 0x14058DDC8
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1409186F0 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     Normalization__PageLookup @ 0x140918F08 (Normalization__PageLookup.c)
 *     Normalization__TableLookup @ 0x140918F20 (Normalization__TableLookup.c)
 */

__int64 __fastcall NormBuffer__GetLastChar(__int64 a1)
{
  __int64 v1; // r10
  unsigned __int16 *v2; // rcx
  unsigned int v3; // eax
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  char v9; // al
  char v10; // cl
  char v11; // al

  v1 = a1;
  v2 = (unsigned __int16 *)(*(_QWORD *)(a1 + 40) - 2LL);
  if ( *(unsigned __int16 **)(v1 + 64) != v2 )
  {
    v3 = *v2;
    *(_QWORD *)(v1 + 64) = v2;
    v4 = v3;
    *(_DWORD *)(v1 + 56) = v3;
    if ( v3 > 0xDC00 && v3 <= 0xDFFF )
    {
      v4 = v3 + ((*(v2 - 1) - 55287) << 10);
      *(_DWORD *)(v1 + 56) = v4;
    }
    v5 = Normalization__PageLookup(*(_QWORD *)(v1 + 112), v4);
    v8 = (unsigned int)(v5 - 1);
    if ( (unsigned __int8)(v5 - 1) > 0xF9u )
    {
      v10 = 0;
      v11 = 0;
    }
    else
    {
      LOBYTE(v8) = v5;
      v9 = Normalization__TableLookup(v7, v6, v8);
      v10 = v9 & 0xC0;
      v11 = v9 & 0x3F;
    }
    *(_BYTE *)(v1 + 72) = v11;
    *(_BYTE *)(v1 + 73) = v10;
  }
  return *(unsigned int *)(v1 + 56);
}
