/*
 * XREFs of MNDrawArrow @ 0x1C024C0AC
 * Callers:
 *     xxxMNSetTop @ 0x1C023B0B8 (xxxMNSetTop.c)
 *     xxxMNDrawFullNC @ 0x1C024C4A4 (xxxMNDrawFullNC.c)
 *     xxxMNInvertItem @ 0x1C024C7E0 (xxxMNInvertItem.c)
 * Callees:
 *     DrawFrameControl @ 0x1C0036FB0 (DrawFrameControl.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     BitBltSysBmp @ 0x1C00FE3CC (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00FE61C (GetOemBitmapInfoForDpi.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C011B8B8 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall MNDrawArrow(HDC a1, __int64 **a2, int a3)
{
  __int64 v6; // r13
  __int64 result; // rax
  HDC DCEx; // rbp
  __int64 v9; // rcx
  unsigned int DpiForSystem; // eax
  __int64 v11; // r8
  LONG v12; // esi
  int v13; // r8d
  LONG v14; // edi
  int v15; // r9d
  int v16; // r10d
  __int64 v17; // rax
  int v18; // edi
  int v19; // ebx
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  int v21; // ebx
  __int64 v22; // rcx
  unsigned int v23; // r12d
  unsigned int v24; // eax
  __int64 v25; // r8
  char *OemBitmapInfoForDpi; // rax
  int v27; // ecx
  struct tagRECT v28; // [rsp+30h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(**a2 + 16);
  result = *(_QWORD *)(**a2 + 40);
  if ( (*(_DWORD *)(result + 124) & 3) != 0 )
  {
    if ( a1 )
      DCEx = a1;
    else
      DCEx = (HDC)_GetDCEx(v6, 0LL, 66561LL);
    v9 = *(_QWORD *)(*(_QWORD *)(**a2 + 40) + 40LL);
    if ( *(int *)(v9 + 40) < 0 )
    {
      v12 = 7;
    }
    else
    {
      DpiForSystem = GetDpiForSystem(v9);
      v12 = *((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem, v11) + 2) + 3;
    }
    if ( a3 == -3 )
    {
      v13 = 65;
      v14 = 3;
      v15 = 2;
      v16 = 8;
    }
    else
    {
      v17 = *(_QWORD *)(v6 + 40);
      v18 = *(_DWORD *)(v17 + 100);
      v19 = *(_DWORD *)(v17 + 92);
      DPIMETRICS = GetDPIMETRICS((struct tagWND *)v6);
      v13 = 68;
      v15 = 3;
      v16 = 16;
      v14 = v18 - *((_DWORD *)DPIMETRICS + 7) - v19 - 3;
    }
    v21 = v16 | 0x100;
    v22 = **a2;
    v23 = v13 + 2;
    if ( (*(_DWORD *)(*(_QWORD *)(v22 + 40) + 124LL) & 3) != v15 )
    {
      v21 = v16;
      v23 = v13;
    }
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) + 24LL) )
    {
      v24 = GetDpiForSystem(v22);
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(65LL, v24, v25);
      v28.top = v14;
      v28.left = v12;
      v27 = *((__int16 *)OemBitmapInfoForDpi + 2);
      LODWORD(OemBitmapInfoForDpi) = *((__int16 *)OemBitmapInfoForDpi + 3);
      v28.right = v12 + v27;
      v28.bottom = v14 + (_DWORD)OemBitmapInfoForDpi;
      result = DrawFrameControl(DCEx, &v28, 2u, v21 | 0x800u);
    }
    else
    {
      BitBltSysBmp((__int64)DCEx, v12, v14, v23, 1);
      result = BitBltSysBmp((__int64)DCEx, v12, v14, v23, 1);
    }
    if ( !a1 )
      return _ReleaseDC(DCEx);
  }
  return result;
}
