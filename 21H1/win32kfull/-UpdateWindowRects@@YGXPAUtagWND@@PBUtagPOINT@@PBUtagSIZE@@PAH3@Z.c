/*
 * XREFs of ?UpdateWindowRects@@YGXPAUtagWND@@PBUtagPOINT@@PBUtagSIZE@@PAH3@Z @ 0xBAE9A
 * Callers:
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 * Callees:
 *     _PostShellHookMessages@8 @ 0x17142 (_PostShellHookMessages@8.c)
 *     _CalcWindowFullScreen@4 @ 0x34B60 (_CalcWindowFullScreen@4.c)
 */

void __userpurge UpdateWindowRects(
        _DWORD *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagWND *a3,
        const struct tagPOINT *a4,
        const struct tagSIZE *a5,
        int *a6,
        int *a7)
{
  LONG v8; // esi
  _DWORD *v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // eax
  int v15; // ebx
  int v16; // edx
  LONG v17; // eax
  _DWORD *v18; // ecx
  _DWORD *v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // [esp+Ch] [ebp-Ch]
  int v26; // [esp+10h] [ebp-8h]
  int v27; // [esp+14h] [ebp-4h]

  v8 = 0;
  v25 = 0;
  a5->cx = 0;
  a4->x = 0;
  if ( a1 )
  {
    v10 = (_DWORD *)a2[5];
    v11 = *a1 - v10[13];
    v12 = a1[1] - v10[14];
    v26 = v11;
    v27 = v12;
    if ( v11 || v12 )
    {
      v13 = v10[36];
      v25 = 1;
      if ( (v13 & 0x8000) != 0 )
      {
        v10[36] = v13 & 0xFFFF7FFF;
        PostShellHookMessages();
      }
    }
  }
  else
  {
    v26 = 0;
    v27 = 0;
  }
  if ( a3 )
  {
    v14 = (_DWORD *)a2[5];
    v15 = *(_DWORD *)a3 + v14[13] - v14[15];
    v16 = *((_DWORD *)a3 + 1) + v14[14] - v14[16];
    if ( v15 || v16 )
      v8 = 1;
  }
  else
  {
    v15 = 0;
    v16 = 0;
  }
  v17 = v25;
  if ( v25 || v8 )
  {
    v18 = (_DWORD *)a2[5];
    v18[13] += v26;
    v18[14] += v27;
    v18[15] += v15 + v26;
    v18[16] += v16 + v27;
    v19 = (_DWORD *)a2[5];
    v19[17] += v26;
    v19[18] += v27;
    v19[19] += v15 + v26;
    v19[20] += v16 + v27;
    if ( v15 < 0 )
    {
      v20 = a2[5];
      v21 = *(_DWORD *)(v20 + 52);
      if ( *(_DWORD *)(v20 + 68) < v21 )
      {
        *(_DWORD *)(v20 + 68) = v21;
        *(_DWORD *)(a2[5] + 76) = *(_DWORD *)(a2[5] + 52);
      }
    }
    if ( v16 < 0 )
    {
      v22 = a2[5];
      v23 = *(_DWORD *)(v22 + 56);
      if ( *(_DWORD *)(v22 + 72) < v23 )
      {
        *(_DWORD *)(v22 + 72) = v23;
        *(_DWORD *)(a2[5] + 80) = *(_DWORD *)(a2[5] + 56);
      }
    }
    v24 = *(_DWORD *)(a2[5] + 108);
    if ( v24 )
      GreOffsetRgn(v24, v26, v27);
    CalcWindowFullScreen(a2);
    v17 = v25;
  }
  a4->x = v8;
  a5->cx = v17;
}
