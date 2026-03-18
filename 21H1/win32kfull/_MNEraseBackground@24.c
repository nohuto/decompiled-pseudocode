/*
 * XREFs of _MNEraseBackground@24 @ 0x1A98B1
 * Callers:
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 * Callees:
 *     _MNGetpItemFromIndex@8 @ 0x1D032 (_MNGetpItemFromIndex@8.c)
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GreSetBrushOrg@16 @ 0x721EA (_GreSetBrushOrg@16.c)
 *     _GetProcessDpiMetrics@0 @ 0x91BCE (_GetProcessDpiMetrics@0.c)
 *     _GreGetBrushOrg@8 @ 0x1FD3AA (_GreGetBrushOrg@8.c)
 */

int __fastcall MNEraseBackground(HDC a1, int a2, int a3, struct XDCOBJ *a4, int a5, int a6)
{
  int v7; // esi
  int v9; // eax
  unsigned int v10; // edx
  int v11; // ecx
  int ProcessDpiMetrics; // eax
  unsigned int v13; // edx
  int v14; // ebx
  int v16; // [esp+10h] [ebp-10h] BYREF
  int v17; // [esp+14h] [ebp-Ch]
  int v18; // [esp+18h] [ebp-8h]
  int v19; // [esp+1Ch] [ebp-4h]

  v18 = 1;
  v7 = 0;
  v16 = 0;
  v17 = 0;
  GreGetBrushOrg(a1);
  v9 = *(_DWORD *)(*(_DWORD *)(a2 + 20) + 20);
  if ( (*(_BYTE *)(a2 + 80) & 3) != 0 )
  {
    if ( (v9 & 8) != 0 )
    {
      v10 = *(_DWORD *)(a2 + 72);
      v16 = 0;
      v11 = -*(_DWORD *)(*(_DWORD *)MNGetpItemFromIndex(a2, v10) + 40);
    }
    else
    {
      v7 = -3;
      v16 = -3;
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        ProcessDpiMetrics = GetProcessDpiMetrics();
      else
        ProcessDpiMetrics = Get96DpiMetrics();
      v13 = *(_DWORD *)(a2 + 72);
      v19 = ProcessDpiMetrics;
      v11 = -3 - *(_DWORD *)(*(_DWORD *)MNGetpItemFromIndex(a2, v13) + 40) - *(_DWORD *)(ProcessDpiMetrics + 24);
    }
    goto LABEL_10;
  }
  if ( (v9 & 8) != 0 )
  {
    v7 = 3;
    v16 = 3;
    v11 = 3;
LABEL_10:
    v17 = v11;
    GreSetBrushOrg(a1, v7, v11, &v16);
    goto LABEL_12;
  }
  v18 = 0;
LABEL_12:
  v14 = GreSelectBrush(a1, *(_DWORD *)(*(_DWORD *)(a2 + 20) + 12));
  NtGdiPatBlt(a1, a3, a4, a5, a6, (struct EXFORMOBJ *)0xF00021);
  if ( v18 )
    GreSetBrushOrg(a1, v16, v17, 0);
  return GreSelectBrush(a1, v14);
}
