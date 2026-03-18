/*
 * XREFs of ?FixBogusSWP@@YGXPAUtagWND@@PAH1HHI@Z @ 0x13F7B7
 * Callers:
 *     _xxxSetWindowPosAndBand@32 @ 0x33008 (_xxxSetWindowPosAndBand@32.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z @ 0x33616 (-_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _GetMonitorWorkRect@4 @ 0xB498E (_GetMonitorWorkRect@4.c)
 *     _GetMonitorRect@4 @ 0xB49BE (_GetMonitorRect@4.c)
 *     ?IsRectBogus@@YGHHHHH@Z @ 0x13F8E6 (-IsRectBogus@@YGHHHHH@Z.c)
 */

void __userpurge FixBogusSWP(
        int *a1@<edx>,
        int a2@<ecx>,
        struct tagWND *a3,
        int *a4,
        int *a5,
        char a6,
        int a7,
        unsigned int a8)
{
  int v9; // ecx
  _DWORD *v10; // eax
  int *v11; // ecx
  int *v12; // ebx
  int *MonitorRect; // eax
  int *v14; // esi
  int v15; // eax
  int *MonitorWorkRect; // eax
  int v17; // ecx
  int *v18; // eax
  int v19; // edx
  int *v20; // edi
  int *v21; // [esp-4h] [ebp-54h]
  unsigned int v22; // [esp+0h] [ebp-50h]
  int v23; // [esp+0h] [ebp-50h]
  int v24; // [esp+4h] [ebp-4Ch]
  int v25; // [esp+4h] [ebp-4Ch]
  _DWORD v26[5]; // [esp+10h] [ebp-40h] BYREF
  int v27; // [esp+24h] [ebp-2Ch] BYREF
  int v28; // [esp+28h] [ebp-28h]
  int v29; // [esp+2Ch] [ebp-24h]
  int v30; // [esp+30h] [ebp-20h]
  int v31; // [esp+34h] [ebp-1Ch] BYREF
  int v32; // [esp+38h] [ebp-18h]
  int v33; // [esp+3Ch] [ebp-14h]
  int v34; // [esp+40h] [ebp-10h]
  int v35; // [esp+44h] [ebp-Ch]
  struct tagMONITOR *v36; // [esp+48h] [ebp-8h]
  int *v37; // [esp+4Ch] [ebp-4h]
  int v38; // [esp+64h] [ebp+14h]

  v9 = *(_DWORD *)(a2 + 64);
  v37 = a1;
  v35 = a2;
  v36 = _MonitorFromWindowInternal(2, v9, 0, v22, v24);
  if ( v36 != *(struct tagMONITOR **)(GetDispInfo() + 52) )
  {
    if ( (a6 & 1) != 0 )
    {
      v10 = *(_DWORD **)(a2 + 20);
      v11 = (int *)(v10[15] - v10[13]);
      v12 = (int *)(v10[16] - v10[14]);
    }
    else
    {
      v12 = a5;
      v11 = a4;
    }
    v38 = (int)v11;
    if ( IsRectBogus((int)v11, (int)v12, v23, v25) )
    {
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      MonitorRect = GetMonitorRect(v36, v26);
      v27 = *MonitorRect;
      v14 = MonitorRect + 1;
      v15 = *(_DWORD *)(v35 + 64);
      v28 = *v14++;
      v21 = (int *)(*(_DWORD *)(v15 + 20) + 52);
      v29 = *v14;
      v30 = v14[1];
      IntersectRect(&v31, &v27, v21);
      MonitorWorkRect = GetMonitorWorkRect(v36, v26);
      v27 = *MonitorWorkRect;
      v28 = MonitorWorkRect[1];
      v29 = MonitorWorkRect[2];
      v30 = MonitorWorkRect[3];
      *v37 = v31 + (v33 - v31 - v38) / 2;
      v17 = (v34 - v32 - (int)v12) / 2 + v32;
      v18 = v37;
      *(_DWORD *)a3 = v17;
      v19 = *v18;
      if ( *v18 + v38 <= v29 )
      {
        v20 = v37;
      }
      else
      {
        v19 = v29 - v38;
        v20 = v37;
        *v37 = v29 - v38;
        v17 = *(_DWORD *)a3;
      }
      if ( (int)v12 + v17 > v30 )
      {
        v17 = v30 - (_DWORD)v12;
        *(_DWORD *)a3 = v30 - (_DWORD)v12;
        v19 = *v20;
      }
      if ( v19 < v27 )
      {
        *v20 = v27;
        v17 = *(_DWORD *)a3;
      }
      if ( v17 < v28 )
        *(_DWORD *)a3 = v28;
    }
  }
}
