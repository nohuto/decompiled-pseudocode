/*
 * XREFs of ?vFindAndReplaceRFONT@@YGXAAVPDEVOBJ@@00@Z @ 0x1FC54A
 * Callers:
 *     ?bUnHookBmpDrv@@YGHAAVXDCOBJ@@@Z @ 0x1FAAC3 (-bUnHookBmpDrv@@YGHAAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YGHAAVXDCOBJ@@@Z @ 0x1FC439 (-bUnHookRedir@@YGHAAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

void __userpurge vFindAndReplaceRFONT(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        struct PDEVOBJ *a3,
        struct PDEVOBJ *a4,
        struct PDEVOBJ *a5)
{
  _DWORD *v7; // esi
  _DWORD *v8; // ecx
  _DWORD *v9; // ecx
  _DWORD *v10; // ecx
  _DWORD *v11; // ecx
  int v12; // [esp+Ch] [ebp-4h] BYREF

  v12 = _ghsemRFONTList;
  GreAcquireSemaphore(_ghsemRFONTList);
  v7 = *(_DWORD **)a2;
  if ( (*(_DWORD *)(*(_DWORD *)a2 + 24) & 0x800000) != 0 )
    v8 = *(_DWORD **)(v7[579] + 940);
  else
    v8 = (_DWORD *)v7[235];
  if ( v8 )
  {
    do
    {
      if ( v8[17] == *a1 )
        v8[17] = *(_DWORD *)a3;
      if ( v8[18] == *a1 )
        v8[18] = *(_DWORD *)a3;
      v8 = (_DWORD *)v8[167];
    }
    while ( v8 );
    v7 = *(_DWORD **)a2;
  }
  if ( (v7[6] & 0x800000) != 0 )
    v9 = *(_DWORD **)(v7[579] + 944);
  else
    v9 = (_DWORD *)v7[236];
  if ( v9 )
  {
    do
    {
      if ( v9[17] == *a1 )
        v9[17] = *(_DWORD *)a3;
      if ( v9[18] == *a1 )
        v9[18] = *(_DWORD *)a3;
      v9 = (_DWORD *)v9[167];
    }
    while ( v9 );
    v7 = *(_DWORD **)a2;
  }
  if ( (v7[6] & 0x800000) != 0 )
    v10 = *(_DWORD **)(v7[579] + 940);
  else
    v10 = (_DWORD *)v7[235];
  if ( v10 )
  {
    do
    {
      if ( v10[17] == *a1 )
        v10[17] = *(_DWORD *)a3;
      if ( v10[18] == *a1 )
        v10[18] = *(_DWORD *)a3;
      v10 = (_DWORD *)v10[136];
    }
    while ( v10 );
    v7 = *(_DWORD **)a2;
  }
  if ( (v7[6] & 0x800000) != 0 )
    v11 = *(_DWORD **)(v7[579] + 944);
  else
    v11 = (_DWORD *)v7[236];
  while ( v11 )
  {
    if ( v11[17] == *a1 )
      v11[17] = *(_DWORD *)a3;
    if ( v11[18] == *a1 )
      v11[18] = *(_DWORD *)a3;
    v11 = (_DWORD *)v11[136];
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v12);
}
