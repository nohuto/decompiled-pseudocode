/*
 * XREFs of PepPerfStateSelectionHandler @ 0x1C000D8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PepPerfStateSelectionHandler(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        char a7,
        _DWORD *a8,
        unsigned __int64 *a9)
{
  __int64 v9; // rsi
  unsigned __int8 v10; // di
  unsigned __int8 v11; // r11
  unsigned __int8 v12; // bl
  __int64 v13; // r10
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // r11
  unsigned __int8 v16; // r8
  __int64 v17; // r9

  v9 = *(_QWORD *)(a1 + 8);
  v10 = 0;
  v11 = 0;
  v12 = *(_BYTE *)(v9 + 32);
  v13 = *(_QWORD *)(v9 + 40);
  while ( v11 < v12 )
  {
    v13 = *(_QWORD *)(v9 + 40);
    if ( *(_DWORD *)(v13 + 24LL * v11 + 8) <= a4 )
    {
      v10 = v11;
      break;
    }
    ++v11;
  }
  v14 = v12 - 1;
  while ( v12 )
  {
    v13 = *(_QWORD *)(v9 + 40);
    if ( *(_DWORD *)(v13 + 24LL * v12 - 16) >= a3
      && ((a7 & 1) != 0 || *(_DWORD *)(v13 + 24LL * v12 - 24) >= *(_DWORD *)(v9 + 8)) )
    {
      v14 = v12 - 1;
      break;
    }
    --v12;
  }
  v15 = v10;
  if ( v14 >= v10 )
    v15 = v14;
  if ( (a7 & 2) != 0 )
  {
    v16 = v10 - 1;
    do
      v17 = v13 + 24LL * ++v16;
    while ( *(_DWORD *)(v17 + 8) > a2 && v16 < v15 );
  }
  else
  {
    v16 = v15 + 1;
    do
      v17 = v13 + 24LL * --v16;
    while ( *(_DWORD *)(v17 + 8) < a2 && v16 > v10 );
  }
  if ( a9 )
  {
    *a9 = v16 | (unsigned __int64)((v15 | (v10 << 8)) << 8);
    if ( a8 )
      *a8 = *(_DWORD *)(v17 + 4);
  }
  return *(unsigned int *)(v17 + 8);
}
