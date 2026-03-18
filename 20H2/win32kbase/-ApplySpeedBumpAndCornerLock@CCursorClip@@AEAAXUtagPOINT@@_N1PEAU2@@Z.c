/*
 * XREFs of ?ApplySpeedBumpAndCornerLock@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C019D660
 * Callers:
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C002EF9C (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z.c)
 * Callees:
 *     ?Feature_Servicing_CornerlockSpeedbumpFix__private_IsEnabled@@YAHXZ @ 0x1C00D15D0 (-Feature_Servicing_CornerlockSpeedbumpFix__private_IsEnabled@@YAHXZ.c)
 */

void __fastcall CCursorClip::ApplySpeedBumpAndCornerLock(
        CCursorClip *this,
        struct tagPOINT a2,
        char a3,
        char a4,
        struct tagPOINT *a5)
{
  LONG x; // ebx
  bool v9; // al
  int v10; // edx
  int v11; // ecx
  LONG v12; // r9d
  int v13; // ecx
  LONG v14; // r9d
  int v15; // ecx
  LONG v16; // r9d
  int v17; // ecx
  LONG v18; // r8d
  int v19; // r9d
  int v20; // r11d
  int v21; // r10d
  int v22; // ecx
  LONG v23; // ecx
  LONG v24; // eax
  LONG y; // [rsp+4Ch] [rbp+14h]

  y = a2.y;
  x = a2.x;
  *a5 = a2;
  if ( (unsigned int)Feature_Servicing_CornerlockSpeedbumpFix__private_IsEnabled() )
  {
    v9 = 0;
    if ( a3 )
    {
      if ( y < *((_DWORD *)this + 15) + 6 || y >= *((_DWORD *)this + 17) - 6 )
      {
        v10 = *((_DWORD *)this + 14);
        v11 = v10;
        if ( x > v10 )
          v11 = x;
        if ( v11 >= *((_DWORD *)this + 16) - 1 )
        {
          v10 = *((_DWORD *)this + 16) - 1;
        }
        else if ( x > v10 )
        {
          v10 = x;
        }
        a5->x = v10;
      }
      else
      {
        v10 = a5->x;
      }
      if ( x < *((_DWORD *)this + 14) + 6 || x >= *((_DWORD *)this + 16) - 6 )
      {
        v12 = *((_DWORD *)this + 15);
        v13 = v12;
        if ( y > v12 )
          v13 = y;
        if ( v13 >= *((_DWORD *)this + 17) - 1 )
        {
          v12 = *((_DWORD *)this + 17) - 1;
        }
        else if ( y > v12 )
        {
          v12 = y;
        }
        a5->y = v12;
      }
      v9 = v10 != x || a5->y != y;
    }
    if ( a4 && !v9 )
    {
      v14 = *((_DWORD *)this + 14);
      if ( (int)abs32(x - v14) < 6 || (int)abs32(x - *((_DWORD *)this + 16)) < 6 )
      {
        v15 = *((_DWORD *)this + 14);
        if ( x > v14 )
          v15 = x;
        if ( v15 >= *((_DWORD *)this + 16) - 1 )
        {
          v14 = *((_DWORD *)this + 16) - 1;
        }
        else if ( x > v14 )
        {
          v14 = x;
        }
        a5->x = v14;
      }
      v16 = *((_DWORD *)this + 15);
      if ( (int)abs32(y - v16) < 6 || (int)abs32(y - *((_DWORD *)this + 17)) < 6 )
      {
        v17 = *((_DWORD *)this + 15);
        if ( y > v16 )
          v17 = y;
        if ( v17 >= *((_DWORD *)this + 17) - 1 )
        {
          v16 = *((_DWORD *)this + 17) - 1;
        }
        else if ( y > v16 )
        {
          v16 = y;
        }
        a5->y = v16;
      }
    }
  }
  else
  {
    v18 = a5->y;
    v19 = a3 != 0 ? 6 : 0;
    v20 = a4 != 0 ? 6 : 0;
    if ( v18 < v19 + *((_DWORD *)this + 15)
      || v18 >= *((_DWORD *)this + 17) - v19
      || (v21 = a5->x, v22 = *((_DWORD *)this + 14), (int)abs32(a5->x - v22) < v20)
      || (int)abs32(v21 - *((_DWORD *)this + 16)) < v20 )
    {
      v23 = a5->x;
      if ( a5->x <= *((_DWORD *)this + 14) )
        v23 = *((_DWORD *)this + 14);
      v21 = *((_DWORD *)this + 16) - 1;
      if ( v23 < v21 )
        v21 = v23;
      a5->x = v21;
      v22 = *((_DWORD *)this + 14);
    }
    if ( v21 < v19 + v22
      || v21 >= *((_DWORD *)this + 16) - v19
      || (int)abs32(v18 - *((_DWORD *)this + 15)) < v20
      || (int)abs32(v18 - *((_DWORD *)this + 17)) < v20 )
    {
      if ( v18 <= *((_DWORD *)this + 15) )
        v18 = *((_DWORD *)this + 15);
      v24 = *((_DWORD *)this + 17) - 1;
      if ( v18 < v24 )
        v24 = v18;
      a5->y = v24;
    }
  }
}
