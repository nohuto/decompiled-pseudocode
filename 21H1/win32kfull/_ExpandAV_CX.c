/*
 * XREFs of _ExpandAV_CX @ 0x1C46B4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int16 *__cdecl ExpandAV_CX(_DWORD *a1)
{
  int v2; // ecx
  int v3; // edi
  _BYTE *v4; // esi
  unsigned int v5; // ebx
  int v6; // eax
  _BYTE *v7; // edx
  unsigned __int16 *result; // eax
  _BYTE *v9; // ecx
  int v10; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+14h] [ebp-4h]
  _BYTE *v12; // [esp+20h] [ebp+8h]

  v2 = a1[39];
  v3 = 1;
  v4 = (_BYTE *)a1[54];
  LOBYTE(v5) = -1;
  v12 = (_BYTE *)a1[55];
  v10 = a1[56];
  v6 = a1[47];
  v11 = *a1 & 0x2000;
  v7 = (_BYTE *)(v2 + 3);
  result = *(unsigned __int16 **)(v6 + 168);
  v9 = v12;
  do
  {
    if ( !--v3 )
    {
      v3 = *result++;
      LOBYTE(v5) = *v7;
      if ( v11 )
        v5 = ((unsigned __int8)*v4 + (unsigned int)(unsigned __int8)v5 + 1) >> 1;
      v9 = v12;
      v7 += 4;
    }
    *v4 = v5;
    v4 += v10;
  }
  while ( v4 != v9 );
  return result;
}
