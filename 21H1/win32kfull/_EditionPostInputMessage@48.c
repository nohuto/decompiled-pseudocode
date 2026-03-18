/*
 * XREFs of _EditionPostInputMessage@48 @ 0xF1632
 * Callers:
 *     <none>
 * Callees:
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     _AdjustPwndPtiPqForDelegation@24 @ 0x47910 (_AdjustPwndPtiPqForDelegation@24.c)
 *     ??$?0UtagObjLock@@U0@U0@U0@U0@U0@U0@@?$CMultiPerObjectLockExclusive@$06@@QAE@AAUtagObjLock@@000000@Z @ 0xAB276 (--$-0UtagObjLock@@U0@U0@U0@U0@U0@U0@@-$CMultiPerObjectLockExclusive@$06@@QAE@AAUtagObjLock@@0000.c)
 */

int __stdcall EditionPostInputMessage(
        int a1,
        int a2,
        struct tagQMSG *a3,
        struct tagWND *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        unsigned int a8,
        int a9,
        unsigned int a10,
        unsigned int a11,
        int a12)
{
  int v12; // edx
  _DWORD *v13; // ecx
  int v14; // esi
  struct tagINPUT_MESSAGE_SOURCE *v15; // ebx
  int v16; // edi
  int v17; // eax
  int v18; // eax
  int v19; // esi
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // esi
  int v25; // [esp-8h] [ebp-28h]
  char v26; // [esp+13h] [ebp-Dh] BYREF
  int v27; // [esp+14h] [ebp-Ch] BYREF
  int v28; // [esp+18h] [ebp-8h] BYREF
  int v29; // [esp+1Ch] [ebp-4h] BYREF

  v12 = *(_DWORD *)(a1 + 80);
  v13 = *(_DWORD **)a12;
  v14 = 0;
  v15 = 0;
  if ( *(char *)(*(_DWORD *)(v12 + 20) + 11) < 0 )
    return 0;
  if ( (unsigned int)a3 - 512 > 0xE )
  {
    if ( (unsigned int)a3 - 581 <= 0x12 )
    {
      a2 = *(_DWORD *)(a1 + 80);
      if ( v13 )
        goto LABEL_8;
    }
  }
  else if ( v13 && *v13 == 2 )
  {
LABEL_8:
    v15 = (struct tagINPUT_MESSAGE_SOURCE *)v13[1];
  }
  v28 = *(_DWORD *)(v12 + 8);
  v29 = 0;
  v27 = *(_DWORD *)(v28 + 236);
  if ( !AdjustPwndPtiPqForDelegation(&v27, &a2, &v28, (int)a3, a11, &v29) )
    return 0;
  v16 = v27;
  v17 = *(_DWORD *)(v27 + 64);
  if ( v17 )
    v14 = *(_DWORD *)(v17 + 8);
  if ( v14 )
    v27 = v14 + 216;
  else
    v27 = gObjDummyLock;
  v18 = *(_DWORD *)(v16 + 48);
  v19 = gObjDummyLock;
  if ( v18 )
    v19 = v18 + 216;
  v20 = *(_DWORD *)(v16 + 52);
  v21 = gObjDummyLock;
  if ( v20 )
    v21 = v20 + 216;
  v22 = gObjDummyLock;
  if ( a2 )
    v22 = a2 + 28;
  v25 = v19;
  v23 = v28;
  CMultiPerObjectLockExclusive<7>::CMultiPerObjectLockExclusive<7>(&v26, gpsiLock, v22, v28 + 216, v16, v21, v25, v27);
  return PostInputMessage(v16, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, v15, *(_DWORD *)(a12 + 4), v29, v23);
}
