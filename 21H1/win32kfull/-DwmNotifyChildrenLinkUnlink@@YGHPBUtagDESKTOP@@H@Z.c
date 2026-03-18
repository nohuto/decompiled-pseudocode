/*
 * XREFs of ?DwmNotifyChildrenLinkUnlink@@YGHPBUtagDESKTOP@@H@Z @ 0xE1784
 * Callers:
 *     _DwmNotifyChildrenAddRemove@8 @ 0xE1756 (_DwmNotifyChildrenAddRemove@8.c)
 * Callees:
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _DwmAsyncChildUnlink@12 @ 0x72FB6 (_DwmAsyncChildUnlink@12.c)
 *     _DwmAsyncOwnerChange@12 @ 0x732BC (_DwmAsyncOwnerChange@12.c)
 *     _DwmAsyncChildLink@20 @ 0x994CC (_DwmAsyncChildLink@20.c)
 */

int __fastcall DwmNotifyChildrenLinkUnlink(int a1, int a2)
{
  int v2; // esi
  int v3; // ebx
  int v4; // eax
  unsigned int v5; // eax
  int *v6; // esi
  void *v7; // eax
  int *v8; // esi
  _DWORD *v9; // eax
  void *v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int *i; // edi
  int v14; // eax
  int v15; // esi
  int *v16; // eax
  int v17; // edx
  void *v18; // eax
  _DWORD *v19; // eax
  void *v20; // eax
  int v22; // eax
  int v23; // esi
  int *v24; // eax
  int v25; // edx
  void *v26; // eax
  _DWORD *v27; // eax
  void *v28; // eax
  void *v29; // eax
  int v30; // eax
  int *v31; // esi
  void *v32; // eax
  void *v33; // eax
  int v34; // [esp-Ch] [ebp-2Ch]
  int v35; // [esp-Ch] [ebp-2Ch]
  int v36; // [esp-Ch] [ebp-2Ch]
  int v37; // [esp-8h] [ebp-28h]
  int v38; // [esp-8h] [ebp-28h]
  int v39; // [esp-4h] [ebp-24h]
  int v40; // [esp-4h] [ebp-24h]
  int v41; // [esp-4h] [ebp-24h]
  int v42; // [esp-4h] [ebp-24h]
  int v43; // [esp-4h] [ebp-24h]
  int v44; // [esp-4h] [ebp-24h]
  int v45; // [esp-4h] [ebp-24h]
  int v46; // [esp-4h] [ebp-24h]
  int v47; // [esp-4h] [ebp-24h]
  struct tagBWL *v48; // [esp+10h] [ebp-10h]
  struct tagBWL *v49; // [esp+10h] [ebp-10h]
  unsigned int *v50; // [esp+14h] [ebp-Ch]

  v2 = a1;
  v3 = 1;
  v4 = BuildHwndList(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 12) + 60), 3, 0);
  v48 = (struct tagBWL *)v4;
  if ( !v4 )
    return 0;
  v50 = (unsigned int *)(v4 + 16);
  v5 = *(_DWORD *)(v4 + 16);
  if ( v5 != 1 )
  {
    do
    {
      v22 = HMValidateHandleNoSecure(v5, 1);
      v23 = v22;
      if ( v22 )
      {
        if ( a2 )
        {
          v24 = *(int **)(v22 + 52);
          if ( v24 )
            v25 = *v24;
          else
            v25 = 0;
          v43 = *(_DWORD *)(*(_DWORD *)(v23 + 20) + 148);
          v38 = v25;
          v36 = **(_DWORD **)(v23 + 56);
          v26 = (void *)ReferenceDwmApiPort();
          DwmAsyncChildLink(v26, *(_DWORD *)v23, v36, v38, v43);
          v27 = *(_DWORD **)(v23 + 64);
          if ( v27 )
            v27 = (_DWORD *)*v27;
          v44 = (int)v27;
          v28 = (void *)ReferenceDwmApiPort();
          DwmAsyncOwnerChange(v28, *(_DWORD *)v23, v44);
        }
        else
        {
          v47 = **(_DWORD **)(v22 + 56);
          v33 = (void *)ReferenceDwmApiPort();
          DwmAsyncChildUnlink(v33, *(_DWORD *)v23, v47);
        }
      }
      v5 = *++v50;
    }
    while ( *v50 != 1 );
    v2 = a1;
  }
  FreeHwndList(v48);
  if ( a2 )
  {
    v6 = *(int **)(v2 + 52);
    v39 = *(_DWORD *)(v6[5] + 148);
    v34 = **(_DWORD **)(*(_DWORD *)(a1 + 4) + 12);
    v7 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildLink(v7, *v6, v34, 1, v39);
    v8 = *(int **)(a1 + 52);
    v9 = (_DWORD *)v8[16];
    if ( v9 )
      v9 = (_DWORD *)*v9;
    v40 = (int)v9;
    v10 = (void *)ReferenceDwmApiPort();
    DwmAsyncOwnerChange(v10, *v8, v40);
  }
  else
  {
    v30 = *(_DWORD *)(v2 + 4);
    v31 = *(int **)(v2 + 52);
    v46 = **(_DWORD **)(v30 + 12);
    v32 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildUnlink(v32, *v31, v46);
  }
  v11 = *(_DWORD *)(*(_DWORD *)(a1 + 52) + 60);
  if ( v11 )
  {
    v12 = BuildHwndList(v11, 3, 0);
    v49 = (struct tagBWL *)v12;
    if ( v12 )
    {
      for ( i = (unsigned int *)(v12 + 16); *i != 1; ++i )
      {
        v14 = HMValidateHandleNoSecure(*i, 1);
        v15 = v14;
        if ( v14 )
        {
          if ( a2 )
          {
            v16 = *(int **)(v14 + 52);
            if ( v16 )
              v17 = *v16;
            else
              v17 = 0;
            v41 = *(_DWORD *)(*(_DWORD *)(v15 + 20) + 148);
            v37 = v17;
            v35 = **(_DWORD **)(v15 + 56);
            v18 = (void *)ReferenceDwmApiPort();
            DwmAsyncChildLink(v18, *(_DWORD *)v15, v35, v37, v41);
            v19 = *(_DWORD **)(v15 + 64);
            if ( v19 )
              v19 = (_DWORD *)*v19;
            v42 = (int)v19;
            v20 = (void *)ReferenceDwmApiPort();
            DwmAsyncOwnerChange(v20, *(_DWORD *)v15, v42);
          }
          else
          {
            v45 = **(_DWORD **)(v14 + 56);
            v29 = (void *)ReferenceDwmApiPort();
            DwmAsyncChildUnlink(v29, *(_DWORD *)v15, v45);
          }
        }
      }
      FreeHwndList(v49);
      return v3;
    }
    return 0;
  }
  return v3;
}
