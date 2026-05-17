/*
 * XREFs of _RtlpGetLengthWithoutLastPathElement@16 @ 0x4B2E3F17
 * Callers:
 *     _RtlGetLengthWithoutLastFullDosOrNtPathElement@12 @ 0x4B2E3F00 (_RtlGetLengthWithoutLastFullDosOrNtPathElement@12.c)
 * Callees:
 *     _RtlpDetermineDosPathNameType4@16 @ 0x4B2E400E (_RtlpDetermineDosPathNameType4@16.c)
 */

int __thiscall RtlpGetLengthWithoutLastPathElement(void *this, unsigned __int16 *a2, int *a3)
{
  int *v3; // ebx
  int result; // eax
  int v5; // esi
  int v6; // edx
  _WORD *v7; // eax
  _WORD *v8; // eax
  _WORD *v9; // eax
  int v10; // [esp+Ch] [ebp-8h] BYREF
  int v11; // [esp+10h] [ebp-4h] BYREF

  v3 = a3;
  v11 = 0;
  result = 0;
  v10 = 0;
  if ( a3 )
    *a3 = 0;
  if ( !a2 || this || !a3 )
    return -1073741811;
  v5 = *a2 >> 1;
  if ( !v5 )
    return result;
  result = RtlpDetermineDosPathNameType4(&v11, &v10);
  if ( result < 0 )
    return result;
  if ( ((1 << v11) & 0xD6) == 0 || (v10 & 0x200) != 0 )
    return -1073741811;
  v6 = *((_DWORD *)a2 + 1);
  v10 = 92;
  v7 = (_WORD *)(v6 - 2 + 2 * v5);
  do
  {
    if ( *v7 != 47 && *v7 != (_WORD)v10 )
      break;
    --v7;
    --v5;
  }
  while ( v5 );
  if ( v5 )
  {
    v8 = (_WORD *)(v6 - 2 + 2 * v5);
    do
    {
      if ( *v8 == (_WORD)v10 )
        break;
      if ( *v8 == 47 )
        break;
      --v8;
      --v5;
    }
    while ( v5 );
    if ( v5 )
    {
      v9 = (_WORD *)(v6 - 2 + 2 * v5);
      do
      {
        if ( *v9 != 92 && *v9 != 47 )
          break;
        --v9;
        --v5;
      }
      while ( v5 );
      v3 = a3;
      if ( v5 )
        ++v5;
    }
  }
  *v3 = v5;
  return 0;
}
