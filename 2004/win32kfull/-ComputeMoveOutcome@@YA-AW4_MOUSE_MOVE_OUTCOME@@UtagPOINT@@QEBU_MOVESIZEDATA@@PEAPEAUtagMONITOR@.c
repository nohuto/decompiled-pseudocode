/*
 * XREFs of ?ComputeMoveOutcome@@YA?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020B3C0
 * Callers:
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C0210714 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C00B20DC (PtInRect.c)
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020BE38 (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 */

__int64 __fastcall ComputeMoveOutcome(unsigned __int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v6; // ebp
  int v9; // eax
  struct tagMONITOR *v10; // r8
  int v11; // edx
  int v12; // ecx
  bool v13; // cf
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  int v17; // [rsp+50h] [rbp+18h] BYREF
  struct tagMONITOR *v18; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0;
  v17 = 0;
  v18 = 0LL;
  v9 = HitTargetAndMonitorFromPoint(
         (struct tagPOINT)a1,
         (const struct _MOVESIZEDATA *const)a2,
         &v18,
         (enum eTHRESHOLD_MARGIN_DIRECTION *)&v17);
  v10 = v18;
  v11 = v17;
  *a3 = v18;
  *a4 = v11;
  if ( !v9 )
  {
    v13 = *(_DWORD *)(a2 + 240) != 4;
    return 5 - (unsigned int)v13;
  }
  v12 = *(_DWORD *)(a2 + 240);
  if ( v11 == 3 )
  {
    *a4 = 4;
    v13 = v12 != 4;
    return 5 - (unsigned int)v13;
  }
  if ( v12 != 4 )
  {
    if ( v10 == *(struct tagMONITOR **)(a2 + 232) && v11 == v12 )
    {
      v14 = 1;
      if ( (*(_DWORD *)(a2 + 280) & 2) != 0
        && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL) + 328LL)
        && (unsigned int)(v11 - 1) <= 1
        && !PtInRect((_DWORD *)(a2 + 264), a1) )
      {
        return v15;
      }
      return v14;
    }
    if ( v10 != *(struct tagMONITOR **)(a2 + 232) || v11 != v12 )
      return 3LL;
  }
  if ( v12 == 4 )
    return 6;
  return v6;
}
