/*
 * XREFs of _xxxClientShutdown@8 @ 0xD0CA6
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     ?xxxClientShutdown2@@YGJPAUtagBWL@@II@Z @ 0xD0CFC (-xxxClientShutdown2@@YGJPAUtagBWL@@II@Z.c)
 */

int __fastcall xxxClientShutdown(int a1, struct tagBWL *a2)
{
  int v3; // edi
  struct tagBWL *v4; // esi
  unsigned int v6; // [esp+0h] [ebp-Ch]
  unsigned int v7; // [esp+4h] [ebp-8h]

  v3 = 2;
  v4 = (struct tagBWL *)BuildHwndList(
                          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 248) + 4) + 12) + 60),
                          2,
                          *(_DWORD *)(a1 + 8));
  if ( !v4 )
    return 1;
  if ( ((unsigned __int8)a2 & 2) != 0 )
    v3 = xxxClientShutdown2(a2, v6, v7);
  else
    xxxClientShutdown2(a2, v6, v7);
  FreeHwndList(v4);
  return v3;
}
