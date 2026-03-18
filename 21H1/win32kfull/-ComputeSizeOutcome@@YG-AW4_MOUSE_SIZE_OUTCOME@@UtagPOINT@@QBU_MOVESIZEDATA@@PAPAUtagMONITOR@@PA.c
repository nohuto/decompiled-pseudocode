/*
 * XREFs of ?ComputeSizeOutcome@@YG?AW4_MOUSE_SIZE_OUTCOME@@UtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x170E05
 * Callers:
 *     ?SnapSizeRect@@YGXPAU_MOVESIZEDATA@@PAUtagCHECKPOINT@@PAUtagMONITOR@@PAK@Z @ 0x172387 (-SnapSizeRect@@YGXPAU_MOVESIZEDATA@@PAUtagCHECKPOINT@@PAUtagMONITOR@@PAK@Z.c)
 * Callees:
 *     ?HitTargetAndMonitorFromPoint@@YGHUtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1715B3 (-HitTargetAndMonitorFromPoint@@YGHUtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PAW4eTHRESHOLD_M.c)
 */

int __fastcall ComputeSizeOutcome(_DWORD *a1, LONG *a2, LONG *a3, LONG a4, struct _MOVESIZEDATA *a5)
{
  int v7; // eax
  LONG y; // ebx
  LONG x; // edx
  int v10; // eax
  int v11; // ecx
  int result; // eax
  struct tagPOINT v13; // [esp-Ch] [ebp-20h]
  struct tagMONITOR **v15; // [esp+0h] [ebp-14h]
  enum eTHRESHOLD_MARGIN_DIRECTION *v16; // [esp+4h] [ebp-10h]
  struct tagPOINT v17; // [esp+Ch] [ebp-8h] BYREF

  v17.x = 0;
  v17.y = 0;
  v13.y = a4;
  v13.x = (LONG)&v17;
  v7 = HitTargetAndMonitorFromPoint(v13, a5, v15, v16);
  y = v17.y;
  x = v17.x;
  *a2 = v17.y;
  *a3 = x;
  if ( !v7 )
  {
    result = 4;
    if ( a1[52] != 4 )
      return result;
    return 1;
  }
  if ( x == 3 || !x )
  {
    v10 = a1[41];
    if ( v10 == 1 || v10 == 2 )
      return 1;
  }
  v11 = a1[52];
  if ( v11 == 4 )
    return 5;
  if ( y == a1[51] && x == v11 )
    return 2;
  if ( y != a1[51] || x != v11 )
    return 3;
  return 0;
}
