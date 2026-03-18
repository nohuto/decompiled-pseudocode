/*
 * XREFs of ?CheckPlacementBounds@@YGXPAUtagRECT@@PAUtagPOINT@@1PAUtagMONITOR@@@Z @ 0xB277C
 * Callers:
 *     _xxxSetWindowPlacement@8 @ 0xB2DF4 (_xxxSetWindowPlacement@8.c)
 * Callees:
 *     _GetMonitorWorkRect@4 @ 0xB498E (_GetMonitorWorkRect@4.c)
 */

void __userpurge CheckPlacementBounds(
        _DWORD *a1@<edx>,
        int *a2@<ecx>,
        struct tagRECT *a3,
        struct tagPOINT *a4,
        struct tagPOINT *a5,
        struct tagMONITOR *a6)
{
  int *MonitorWorkRect; // eax
  int v8; // edi
  int v9; // edx
  int v10; // eax
  int v11; // esi
  int v12; // ecx
  int v13; // edi
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // edi
  int v18; // eax
  int v19; // ecx
  int v20; // ebx
  int v21; // edx
  int v22; // eax
  _DWORD *v23; // eax
  bool v24; // sf
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  _BYTE v29[20]; // [esp+10h] [ebp-38h] BYREF
  int v30; // [esp+24h] [ebp-24h]
  int v31; // [esp+28h] [ebp-20h]
  int v32; // [esp+2Ch] [ebp-1Ch]
  int v33; // [esp+30h] [ebp-18h]
  _DWORD *v34; // [esp+34h] [ebp-14h]
  int v35; // [esp+38h] [ebp-10h]
  int v36; // [esp+3Ch] [ebp-Ch]
  int v37; // [esp+40h] [ebp-8h]
  int v38; // [esp+44h] [ebp-4h]

  v34 = a1;
  MonitorWorkRect = (int *)GetMonitorWorkRect(v29);
  v35 = a2[1];
  v30 = *MonitorWorkRect;
  v31 = MonitorWorkRect[1];
  v32 = MonitorWorkRect[2];
  v33 = MonitorWorkRect[3];
  if ( v35 < v31 )
    v8 = -1;
  else
    v8 = v35 > v33;
  v9 = a2[3];
  if ( v9 < v31 )
    v10 = -1;
  else
    v10 = v9 > v33;
  v11 = v30;
  v36 = *a2;
  if ( v36 < v30 )
    v38 = -1;
  else
    v38 = v36 > v32;
  v12 = a2[2];
  if ( v12 < v30 )
    v37 = -1;
  else
    v37 = v12 > v32;
  if ( v8 * v10 > 0 || v38 * v37 > 0 )
  {
    v24 = v8 < 0;
    v13 = v31;
    if ( v24 )
    {
      a2[3] = v9 - v35;
      a2[1] = v13;
    }
    else if ( v10 > 0 )
    {
      v25 = v9 - v35;
      v26 = v33 - v25;
      if ( v33 - v25 <= v31 )
        v26 = v31;
      a2[1] = v26;
      a2[3] = v25 + v26;
    }
    if ( v38 >= 0 )
    {
      if ( v37 > 0 )
      {
        v27 = v12 - v36;
        v28 = v32 - v27;
        if ( v32 - v27 <= v11 )
          v28 = v11;
        *a2 = v28;
        a2[2] = v27 + v28;
      }
    }
    else
    {
      a2[2] = v12 - v36;
      *a2 = v11;
    }
  }
  else
  {
    v13 = v31;
  }
  v14 = *v34;
  if ( *v34 != -1 )
  {
    v15 = *(_DWORD *)(_gpsi + 1688);
    v36 = *(_DWORD *)(_gpsi + 1684);
    v16 = v34[1];
    v35 = v15;
    if ( v16 >= v31 )
    {
      v17 = v16 > v33;
      v15 = v35;
    }
    else
    {
      v17 = -1;
    }
    v18 = v16 + v15;
    if ( v18 >= v31 )
      v19 = v18 > v33;
    else
      v19 = -1;
    if ( v14 >= v11 )
      v20 = v14 > v32;
    else
      v20 = -1;
    v21 = v36 + v14;
    if ( v21 >= v11 )
      v22 = v21 > v32;
    else
      v22 = -1;
    if ( v17 * v19 > 0 || v20 * v22 > 0 )
    {
      v23 = v34;
      v34[1] = -1;
      *v23 = -1;
    }
    v13 = v31;
  }
  if ( a3->left != -1 && (v11 + a3->left >= v32 || v13 + a3->top >= v33) )
  {
    a3->left = 0;
    a3->top = 0;
  }
}
