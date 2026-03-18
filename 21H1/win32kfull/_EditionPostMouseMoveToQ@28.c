/*
 * XREFs of _EditionPostMouseMoveToQ@28 @ 0x477E6
 * Callers:
 *     <none>
 * Callees:
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     _AdjustPwndPtiPqForDelegation@24 @ 0x47910 (_AdjustPwndPtiPqForDelegation@24.c)
 */

int __stdcall EditionPostMouseMoveToQ(
        _DWORD *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        int a6,
        unsigned int a7)
{
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  _DWORD *v15; // eax
  int v16; // esi
  int v17; // ecx
  _DWORD *v18; // esi
  int i; // ecx
  int v20; // esi
  int j; // ecx
  int v22; // ecx
  int v23; // esi
  int v24; // esi
  int k; // ecx
  int v26; // esi
  int m; // ecx
  int v28; // esi
  int n; // ecx
  int v31; // [esp+4h] [ebp-18h] BYREF
  int v32; // [esp+8h] [ebp-14h]
  int v33; // [esp+Ch] [ebp-10h]
  int v34; // [esp+10h] [ebp-Ch]
  int v35; // [esp+14h] [ebp-8h] BYREF
  int v36; // [esp+18h] [ebp-4h] BYREF

  v35 = 0;
  v36 = 0;
  v31 = 0;
  if ( !AdjustPwndPtiPqForDelegation(&a1, &v35, &v36, 512, a7, &v31) )
    return 0;
  v7 = (int)a1;
  v8 = a1[16];
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 8);
  else
    v9 = 0;
  if ( v9 )
    v32 = v9 + 216;
  else
    v32 = gObjDummyLock;
  v10 = a1[12];
  if ( v10 )
    v33 = v10 + 216;
  else
    v33 = gObjDummyLock;
  v11 = a1[13];
  if ( v11 )
    v12 = v11 + 216;
  else
    v12 = gObjDummyLock;
  v13 = v36;
  v34 = v12;
  v14 = gObjDummyLock;
  if ( v36 )
    v14 = v36 + 216;
  v36 = v14;
  v15 = (_DWORD *)gObjDummyLock;
  if ( v35 )
    v15 = (_DWORD *)(v35 + 28);
  v16 = gpsiLock;
  v17 = 3;
  a1 = v15;
  while ( v17 )
  {
    v16 += 4;
    --v17;
  }
  v18 = a1;
  for ( i = 3; i; --i )
    ++v18;
  v20 = v36;
  for ( j = 3; j; --j )
    v20 += 4;
  v22 = 3;
  v23 = v7;
  while ( v22 )
  {
    v23 += 4;
    --v22;
  }
  v24 = v34;
  for ( k = 3; k; --k )
    v24 += 4;
  v26 = v33;
  for ( m = 3; m; --m )
    v26 += 4;
  v28 = v32;
  for ( n = 3; n; --n )
    v28 += 4;
  return PostInputMessage(v7, v35, (struct tagQMSG *)0x200, 0, a2, a3, a4, a5, a6, 0, a7, 0, 0, v31, v13);
}
