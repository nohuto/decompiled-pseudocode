/*
 * XREFs of _xxxMNDrawFullNC@12 @ 0x1A99B8
 * Callers:
 *     _xxxMNSetTop@8 @ 0x19A800 (_xxxMNSetTop@8.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _MNGetpItemFromIndex@8 @ 0x1D032 (_MNGetpItemFromIndex@8.c)
 *     _MNIsUAHMenu@4 @ 0x1E9CA (_MNIsUAHMenu@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 *     _GreSetBrushOrg@16 @ 0x721EA (_GreSetBrushOrg@16.c)
 *     _DrawEdge@16 @ 0x90568 (_DrawEdge@16.c)
 *     ?GetDPIMETRICS@@YGPBUtagDPIMETRICS@@PAUtagWND@@@Z @ 0xB68B6 (-GetDPIMETRICS@@YGPBUtagDPIMETRICS@@PAUtagWND@@@Z.c)
 *     _xxxSendUAHMenuMessage@16 @ 0xB6938 (_xxxSendUAHMenuMessage@16.c)
 *     _DrawFrame@16 @ 0xC2994 (_DrawFrame@16.c)
 *     _MNIsFlatMenu@0 @ 0x1846E0 (_MNIsFlatMenu@0.c)
 *     _MNDrawArrow@12 @ 0x1A96CC (_MNDrawArrow@12.c)
 *     _MNDrawEdge@16 @ 0x1A9824 (_MNDrawEdge@16.c)
 *     _GreGetBrushOrg@8 @ 0x1FD3AA (_GreGetBrushOrg@8.c)
 */

DC *__fastcall xxxMNDrawFullNC(_DWORD *a1, HDC a2, int *a3)
{
  HDC v4; // esi
  DC **v5; // eax
  DC *result; // eax
  HDC DCEx; // edi
  int v8; // edx
  int v9; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD *v12; // ecx
  int v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // esi
  const struct tagDPIMETRICS *DPIMETRICS; // eax
  const struct tagDPIMETRICS *v18; // eax
  int v19; // [esp+10h] [ebp-34h] BYREF
  struct XDCOBJ *v20; // [esp+14h] [ebp-30h]
  int v21; // [esp+18h] [ebp-2Ch]
  int v22; // [esp+1Ch] [ebp-28h]
  _DWORD v23[3]; // [esp+20h] [ebp-24h] BYREF
  int v24; // [esp+2Ch] [ebp-18h]
  int v25; // [esp+30h] [ebp-14h]
  HDC v26; // [esp+34h] [ebp-10h]
  struct XDCOBJ *v27; // [esp+38h] [ebp-Ch]
  _DWORD *v28; // [esp+3Ch] [ebp-8h]
  int v29; // [esp+4Ch] [ebp+8h]
  int v30; // [esp+4Ch] [ebp+8h]

  v4 = a2;
  v28 = a1;
  v26 = a2;
  v5 = (DC **)*a3;
  v24 = 0;
  v25 = 0;
  result = *v5;
  v27 = 0;
  if ( *((_DWORD *)result + 5) )
  {
    if ( a2 )
      DCEx = a2;
    else
      DCEx = (HDC)_GetDCEx(a1, 0, 66561);
    if ( MNIsUAHMenu(*(_DWORD **)(*(_DWORD *)*a3 + 20)) && *(_DWORD *)(*(_DWORD *)*a3 + 8) != v8 )
    {
      v9 = *a3;
      v23[2] = v8;
      v29 = *(_DWORD *)(*(_DWORD *)v9 + 8);
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v23[0] = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = v23;
      v23[1] = v29;
      if ( v29 )
        HMLockObject(v29);
      v27 = (struct XDCOBJ *)xxxSendUAHMenuMessage(
                               *(void **)(*(_DWORD *)*a3 + 8),
                               *(_DWORD *)(*(_DWORD *)*a3 + 20),
                               (int)DCEx);
      ThreadUnlock1();
    }
    result = 0;
    if ( *(_DWORD *)(*(_DWORD *)*a3 + 20) )
    {
      if ( v27 )
      {
        MNDrawArrow(DCEx, a3, -3);
        result = MNDrawArrow(DCEx, a3, -4);
      }
      else
      {
        v20 = 0;
        v19 = 0;
        v12 = (_DWORD *)v28[5];
        v21 = v12[15] - v12[13];
        v22 = v12[16] - v12[14];
        if ( MNIsFlatMenu() )
        {
          MNDrawEdge(*(_DWORD *)(*(_DWORD *)*a3 + 20), v4, &v19, 0x2000);
          v13 = v22;
        }
        else
        {
          DrawEdge(DCEx, &v19, 5u, 8207);
          DrawFrame(DCEx, &v19, 1, 120);
          ++v19;
          --v21;
          v20 = (struct XDCOBJ *)((char *)v20 + 1);
          v13 = v22 - 1;
        }
        v27 = (struct XDCOBJ *)(v13 - *((_DWORD *)GetDPIMETRICS(v28) + 6));
        GreGetBrushOrg(DCEx);
        if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)*a3 + 20) + 20) + 12) )
        {
          v14 = MNGetpItemFromIndex(
                  *(_DWORD *)(*(_DWORD *)*a3 + 20),
                  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)*a3 + 20) + 72));
          GreSetBrushOrg(DCEx, 0, -*(_DWORD *)(*(_DWORD *)v14 + 40), 0);
          v15 = GreSelectBrush(DCEx, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)*a3 + 20) + 20) + 12));
        }
        else
        {
          v15 = GreSelectBrush(DCEx, *(_DWORD *)(_gpsi + 4308));
        }
        v16 = v21 - v19;
        v30 = v15;
        DPIMETRICS = GetDPIMETRICS(v28);
        NtGdiPatBlt(DCEx, v19, v20, v16, *((_DWORD *)DPIMETRICS + 6), (struct EXFORMOBJ *)0xF00021);
        MNDrawArrow(DCEx, a3, -3);
        v18 = GetDPIMETRICS(v28);
        NtGdiPatBlt(DCEx, v19, v27, v16, *((_DWORD *)v18 + 6), (struct EXFORMOBJ *)0xF00021);
        MNDrawArrow(DCEx, a3, -4);
        GreSetBrushOrg(DCEx, v24, v25, 0);
        result = (DC *)GreSelectBrush(DCEx, v30);
        v4 = v26;
      }
      if ( !v4 )
        return (DC *)_ReleaseDC(DCEx);
    }
    else if ( !v4 && DCEx )
    {
      return (DC *)_ReleaseDC(DCEx);
    }
  }
  return result;
}
