/*
 * XREFs of ?ComputeMoveOutcome@@YG?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x170D2A
 * Callers:
 *     ?xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x175333 (-xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     ?HitTargetAndMonitorFromPoint@@YGHUtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1715B3 (-HitTargetAndMonitorFromPoint@@YGHUtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PAW4eTHRESHOLD_M.c)
 */

int __fastcall ComputeMoveOutcome(int a1, LONG *a2, LONG *a3, LONG a4, struct _MOVESIZEDATA *a5)
{
  int v7; // eax
  LONG y; // ebx
  LONG x; // esi
  int v10; // edx
  int v11; // eax
  bool v12; // zf
  int v13; // edx
  struct tagPOINT v15; // [esp-Ch] [ebp-20h]
  struct tagMONITOR **v17; // [esp+0h] [ebp-14h]
  enum eTHRESHOLD_MARGIN_DIRECTION *v18; // [esp+4h] [ebp-10h]
  struct tagPOINT v19; // [esp+Ch] [ebp-8h] BYREF

  v19.x = 0;
  v19.y = 0;
  v15.y = a4;
  v15.x = (LONG)&v19;
  v7 = HitTargetAndMonitorFromPoint(v15, a5, v17, v18);
  y = v19.y;
  *a2 = v19.y;
  x = v19.x;
  *a3 = v19.x;
  if ( !v7 )
  {
    v11 = 0;
    v12 = *(_DWORD *)(a1 + 208) == 4;
    goto LABEL_21;
  }
  v10 = *(_DWORD *)(a1 + 208);
  if ( x == 3 )
  {
    *a3 = 4;
    v11 = 0;
    v12 = v10 == 4;
LABEL_21:
    LOBYTE(v11) = v12;
    return v11 + 4;
  }
  if ( v10 == 4 )
    return 6;
  if ( y != *(_DWORD *)(a1 + 204) || x != v10 )
  {
    if ( y == *(_DWORD *)(a1 + 204) && x == v10 )
      return 0;
    return 3;
  }
  v13 = 1;
  if ( (*(_BYTE *)(a1 + 248) & 2) != 0
    && *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 12) + 200)
    && (x == 1 || x == 2)
    && !PtInRect((_DWORD *)(a1 + 232), a4, (int)a5) )
  {
    return 3;
  }
  return v13;
}
