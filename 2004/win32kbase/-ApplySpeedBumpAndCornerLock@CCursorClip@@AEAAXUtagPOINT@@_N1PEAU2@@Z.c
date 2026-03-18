/*
 * XREFs of ?ApplySpeedBumpAndCornerLock@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C019FB60
 * Callers:
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C0010D2C (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCursorClip::ApplySpeedBumpAndCornerLock(
        CCursorClip *this,
        struct tagPOINT a2,
        char a3,
        char a4,
        struct tagPOINT *a5)
{
  int v6; // r11d
  LONG y; // r8d
  int v8; // ebx
  int v9; // ecx
  int v10; // r9d
  LONG x; // ecx
  LONG v12; // eax

  v6 = a3 != 0 ? 6 : 0;
  *a5 = a2;
  y = a5->y;
  v8 = a4 != 0 ? 6 : 0;
  if ( y < v6 + *((_DWORD *)this + 15)
    || y >= *((_DWORD *)this + 17) - v6
    || (v9 = *((_DWORD *)this + 14), v10 = a2.x, (int)abs32(a2.x - v9) < v8)
    || (int)abs32(a2.x - *((_DWORD *)this + 16)) < v8 )
  {
    x = a5->x;
    if ( a5->x <= *((_DWORD *)this + 14) )
      x = *((_DWORD *)this + 14);
    v10 = *((_DWORD *)this + 16) - 1;
    if ( x < v10 )
      v10 = x;
    a5->x = v10;
    v9 = *((_DWORD *)this + 14);
  }
  if ( v10 < v6 + v9
    || v10 >= *((_DWORD *)this + 16) - v6
    || (int)abs32(y - *((_DWORD *)this + 15)) < v8
    || (int)abs32(y - *((_DWORD *)this + 17)) < v8 )
  {
    if ( y <= *((_DWORD *)this + 15) )
      y = *((_DWORD *)this + 15);
    v12 = *((_DWORD *)this + 17) - 1;
    if ( y < v12 )
      v12 = y;
    a5->y = v12;
  }
}
