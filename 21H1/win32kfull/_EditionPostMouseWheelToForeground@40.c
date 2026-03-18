/*
 * XREFs of _EditionPostMouseWheelToForeground@40 @ 0x14E0AE
 * Callers:
 *     <none>
 * Callees:
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     _AdjustPwndPtiPqForDelegation@24 @ 0x47910 (_AdjustPwndPtiPqForDelegation@24.c)
 */

int __stdcall EditionPostMouseWheelToForeground(
        struct tagQMSG *a1,
        struct tagWND *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10)
{
  int result; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // edi
  int v19; // esi
  int i; // ecx
  int v21; // ecx
  int v22; // esi
  int v23; // esi
  int j; // ecx
  int v25; // ecx
  int v26; // esi
  int v27; // esi
  int k; // ecx
  int v29; // esi
  int m; // ecx
  int v31; // esi
  int n; // ecx
  int v33; // [esp+4h] [ebp-18h] BYREF
  int v34; // [esp+8h] [ebp-14h]
  int v35; // [esp+Ch] [ebp-10h]
  int v36; // [esp+10h] [ebp-Ch] BYREF
  int v37; // [esp+14h] [ebp-8h] BYREF
  int v38; // [esp+18h] [ebp-4h] BYREF

  v36 = 0;
  v38 = _gpqForeground;
  v37 = 0;
  v33 = 0;
  result = AdjustPwndPtiPqForDelegation(&v38, &v36, &v37, (int)a1, a9, &v33);
  if ( result )
  {
    v11 = v38;
    v12 = *(_DWORD *)(v38 + 64);
    if ( v12 )
      v13 = *(_DWORD *)(v12 + 8);
    else
      v13 = 0;
    if ( v13 )
      v34 = v13 + 216;
    else
      v34 = gObjDummyLock;
    v14 = *(_DWORD *)(_gpqForeground + 48);
    if ( v14 )
      v35 = v14 + 216;
    else
      v35 = gObjDummyLock;
    v15 = *(_DWORD *)(_gpqForeground + 52);
    if ( v15 )
      v16 = v15 + 216;
    else
      v16 = gObjDummyLock;
    v17 = v37;
    v38 = v16;
    if ( v37 )
      v37 += 216;
    else
      v37 = gObjDummyLock;
    v18 = gObjDummyLock;
    if ( v36 )
      v18 = v36 + 28;
    v19 = gpsiLock;
    for ( i = 3; i; --i )
      v19 += 4;
    v21 = 3;
    v22 = v18;
    while ( v21 )
    {
      v22 += 4;
      --v21;
    }
    v23 = v37;
    for ( j = 3; j; --j )
      v23 += 4;
    v25 = 3;
    v26 = v11;
    while ( v25 )
    {
      v26 += 4;
      --v25;
    }
    v27 = v38;
    for ( k = 3; k; --k )
      v27 += 4;
    v29 = v35;
    for ( m = 3; m; --m )
      v29 += 4;
    v31 = v34;
    for ( n = 3; n; --n )
      v31 += 4;
    return PostInputMessage(v11, 0, a1, a2, a3, a4, a5, a6, a7, a8, a9, 0, a10, v33, v17);
  }
  return result;
}
