/*
 * XREFs of _RtlpGetContainingRange@24 @ 0x4B357EF3
 * Callers:
 *     _RtlpQueryExtendedInformationHeap@8 @ 0x4B358EC0 (_RtlpQueryExtendedInformationHeap@8.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall RtlpGetContainingRange(_DWORD *a1, unsigned int a2, int *a3, int *a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v7; // edi
  _DWORD *v8; // ebx
  _DWORD *v9; // edx
  _DWORD *v10; // eax
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // ecx
  _DWORD *result; // eax
  unsigned int v15; // [esp+Ch] [ebp-8h]

  v7 = 0;
  v8 = 0;
  v9 = (_DWORD *)a1[14];
  if ( v9 == a1 + 14 )
  {
LABEL_15:
    v12 = a1[6];
    if ( a1 + 4 != *(_DWORD **)(v12 + 164) )
      v12 = (int)a1;
  }
  else
  {
    do
    {
      v10 = v9 - 2;
      v11 = v9[2];
      if ( a2 < v11 )
        goto LABEL_6;
      v15 = v11 + v10[5];
      if ( a2 < v15 )
      {
        *a3 = v11;
        *a4 = v15;
        *a5 = 0;
        goto LABEL_21;
      }
      v10 = v9 - 2;
      if ( a2 >= v11 )
      {
        if ( !v7 || v7[4] < v11 )
          v7 = v9 - 2;
      }
      else
      {
LABEL_6:
        if ( !v8 || v8[4] > v11 )
          v8 = v10;
      }
      v9 = (_DWORD *)*v9;
    }
    while ( v9 != a1 + 14 );
    if ( !v7 )
      goto LABEL_15;
    v12 = v7[4] + v7[5];
  }
  *a3 = v12;
  if ( v8 )
    v13 = v8[4];
  else
    v13 = v12 + (a1[8] << 12);
  *a4 = v13;
  *a5 = 1;
LABEL_21:
  result = a6;
  *a6 = (*(_DWORD *)(a1[6] + 64) & 0x40000) != 0 ? 64 : 4;
  return result;
}
