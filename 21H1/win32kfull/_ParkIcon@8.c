/*
 * XREFs of _ParkIcon@8 @ 0xB4C44
 * Callers:
 *     _NtUserGetWindowMinimizeRect@8 @ 0xA7B36 (_NtUserGetWindowMinimizeRect@8.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 * Callees:
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _IsTrayWindow@4 @ 0x40204 (_IsTrayWindow@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _GetRect@12 @ 0x6E5F2 (_GetRect@12.c)
 *     _InternalGetRealClientRect@20 @ 0xA23FA (_InternalGetRealClientRect@20.c)
 */

int __fastcall ParkIcon(_DWORD *a1, int *a2)
{
  int v4; // edi
  int result; // eax
  int v6; // edx
  int v7; // esi
  int v8; // ecx
  int v9; // edi
  int v10; // ebx
  int v11; // ecx
  int v12; // ebx
  char v13; // al
  int Prop; // eax
  int v15; // [esp+Ch] [ebp-54h]
  int v16; // [esp+10h] [ebp-50h]
  int v17; // [esp+14h] [ebp-4Ch]
  int v18; // [esp+18h] [ebp-48h]
  int v19; // [esp+1Ch] [ebp-44h]
  int v20; // [esp+20h] [ebp-40h]
  int v21; // [esp+24h] [ebp-3Ch]
  int v22; // [esp+28h] [ebp-38h]
  int v23; // [esp+2Ch] [ebp-34h]
  int v24; // [esp+30h] [ebp-30h]
  int v25; // [esp+34h] [ebp-2Ch]
  int v28; // [esp+40h] [ebp-20h] BYREF
  int v29; // [esp+44h] [ebp-1Ch]
  int v30; // [esp+48h] [ebp-18h]
  int v31; // [esp+4Ch] [ebp-14h]
  int v32; // [esp+50h] [ebp-10h] BYREF
  int v33; // [esp+54h] [ebp-Ch]
  int v34; // [esp+58h] [ebp-8h]
  int v35; // [esp+5Ch] [ebp-4h]

  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v4 = *(_DWORD *)(_gpsi + 1684);
  v17 = v4;
  v16 = *(_DWORD *)(_gpsi + 1688);
  if ( IsTrayWindow(a1) )
  {
    result = -32000;
    *a2 = -32000;
    a2[1] = -32000;
    return result;
  }
  v25 = a1[14];
  v21 = 0;
  InternalGetRealClientRect(v25, &v28, 1, 0, 1);
  v6 = *(_DWORD *)(_gpsi + 1720);
  if ( (v6 & 1) != 0 )
  {
    v23 = v30 - v4;
    v7 = v30 - v4;
    v19 = -v4;
  }
  else
  {
    v23 = v28 + *(_DWORD *)(_gpsi + 1684) - *(_DWORD *)(_gpsi + 1724);
    v7 = v23;
    v19 = v4;
  }
  v32 = v7;
  if ( (v6 & 2) != 0 )
  {
    v24 = v29 + *(_DWORD *)(_gpsi + 1688) - *(_DWORD *)(_gpsi + 1728);
    v9 = v24;
    v8 = v16;
    v20 = v16;
  }
  else
  {
    v8 = v16;
    v24 = v31 - v16;
    v9 = v31 - v16;
    v20 = -v16;
  }
  v33 = v9;
  if ( (v6 & 4) != 0 )
  {
    v18 = 0;
    v11 = v31 / v8;
    v15 = v11;
    if ( v11 < 1 )
    {
      v11 = 1;
      v15 = 1;
    }
    v10 = v17;
  }
  else
  {
    v10 = v17;
    v18 = 1;
    v11 = v30 / v17;
    v15 = v30 / v17;
    if ( v30 / v17 < 1 )
    {
      v11 = 1;
      v15 = 1;
    }
  }
  v22 = v11;
  do
  {
    v34 = v7 + v10;
    v35 = v9 + v16;
    v12 = *(_DWORD *)(v25 + 60);
    if ( !v12 )
      break;
    do
    {
      v13 = *(_BYTE *)(*(_DWORD *)(v12 + 20) + 23);
      if ( (v13 & 0x10) == 0 || (_DWORD *)v12 == a1 )
        goto LABEL_13;
      if ( (v13 & 0x20) != 0 )
      {
        GetRect(v12, &v28, 66);
      }
      else
      {
        Prop = _GetProp(v12, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
        if ( !Prop || (*(_BYTE *)(Prop + 48) & 0x21) != 0x21 )
          goto LABEL_13;
        v28 = *(_DWORD *)(Prop + 32);
        v30 = v28 + v17;
        v29 = *(_DWORD *)(Prop + 36);
        v31 = v16 + v29;
      }
      ++v21;
      if ( IntersectRect(&v28, &v28, &v32) )
        break;
LABEL_13:
      v12 = *(_DWORD *)(v12 + 48);
    }
    while ( v12 );
    v7 = v32;
    v9 = v33;
    if ( !v12 )
      break;
    if ( --v15 )
    {
      if ( v18 )
      {
        v7 = v19 + v32;
        v32 += v19;
        goto LABEL_18;
      }
LABEL_28:
      v9 = v20 + v33;
    }
    else
    {
      v15 = v22;
      if ( v18 )
      {
        v7 = v23;
        v32 = v23;
        goto LABEL_28;
      }
      v7 = v19 + v32;
      v9 = v24;
      v32 += v19;
    }
    v33 = v9;
LABEL_18:
    v10 = v17;
  }
  while ( v21 < 5000 );
  result = (int)a2;
  *a2 = v7;
  a2[1] = v9;
  return result;
}
