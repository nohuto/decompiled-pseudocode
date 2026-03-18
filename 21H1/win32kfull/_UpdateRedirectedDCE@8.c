/*
 * XREFs of _UpdateRedirectedDCE@8 @ 0x83AE6
 * Callers:
 *     _UnredirectDCEs@4 @ 0x1BEB2 (_UnredirectDCEs@4.c)
 *     _ChangeRedirectionParentInDCEs@8 @ 0x7324A (_ChangeRedirectionParentInDCEs@8.c)
 *     _RedirectDCEs@4 @ 0x73D3A (_RedirectDCEs@4.c)
 * Callees:
 *     _GetRedirectionBitmap@4 @ 0x30300 (_GetRedirectionBitmap@4.c)
 *     _GreSelectRedirectionBitmap@8 @ 0x322B0 (_GreSelectRedirectionBitmap@8.c)
 *     _GetStyleWindow@8 @ 0x387E8 (_GetStyleWindow@8.c)
 *     _GreHintDCWnd@20 @ 0x83BD0 (_GreHintDCWnd@20.c)
 *     _RevalidateDCE@4 @ 0x83C68 (_RevalidateDCE@4.c)
 */

int __stdcall UpdateRedirectedDCE(int *a1, int a2)
{
  HDEV RedirectionBitmap; // ebx
  int StyleWindow; // eax
  int *v4; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  int result; // eax
  int v11; // ecx
  int v12; // [esp-4h] [ebp-14h]

  RedirectionBitmap = 0;
  StyleWindow = GetStyleWindow(a1[2], 2848);
  v4 = (int *)StyleWindow;
  if ( StyleWindow )
    RedirectionBitmap = (HDEV)GetRedirectionBitmap(StyleWindow);
  v5 = GreSelectRedirectionBitmap(a1[1], RedirectionBitmap);
  v6 = 1;
  if ( !v5 )
    GreSelectVisRgn(a1[1], 0, 1);
  v7 = a1[8];
  v8 = a1[1];
  if ( v4 )
  {
    v9 = v7 | 0x4000;
    v12 = 5;
  }
  else
  {
    v9 = v7 & 0xFFFFBFFF;
    v12 = 6;
  }
  a1[8] = v9;
  result = GreGetBounds(v8, 0, v12);
  if ( (int *)a1[4] == v4 )
  {
    v6 = a2;
  }
  else
  {
    a1[4] = (int)v4;
    result = GreHintDCWnd(a1[1], *(HWND *)a1[2], 0, 0, 0);
    if ( !v4 )
      return RevalidateDCE(a1);
    v11 = v4[5];
    if ( (*(_BYTE *)(v11 + 18) & 8) != 0 )
      result = GreHintDCWnd(
                 a1[1],
                 *(HWND *)a1[2],
                 *v4,
                 ((unsigned __int8)~*(_BYTE *)(v11 + 19) >> 1) & 1,
                 (*(_WORD *)(v11 + 30) & 0x3FFF) == 669);
  }
  if ( v4 )
  {
    result = a1[2];
    if ( (int *)result == v4 )
      a1[3] = result;
  }
  if ( v6 )
    return RevalidateDCE(a1);
  return result;
}
