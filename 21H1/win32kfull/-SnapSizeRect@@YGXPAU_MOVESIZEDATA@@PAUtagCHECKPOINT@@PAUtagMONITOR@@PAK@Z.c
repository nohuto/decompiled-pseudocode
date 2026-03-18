/*
 * XREFs of ?SnapSizeRect@@YGXPAU_MOVESIZEDATA@@PAUtagCHECKPOINT@@PAUtagMONITOR@@PAK@Z @ 0x172387
 * Callers:
 *     ?SizeRect@@YGHPAU_MOVESIZEDATA@@KPAUtagMONITOR@@PAK@Z @ 0x17220B (-SizeRect@@YGHPAU_MOVESIZEDATA@@KPAUtagMONITOR@@PAK@Z.c)
 * Callees:
 *     ?ComputeSizeOutcome@@YG?AW4_MOUSE_SIZE_OUTCOME@@UtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x170E05 (-ComputeSizeOutcome@@YG-AW4_MOUSE_SIZE_OUTCOME@@UtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PA.c)
 *     ?HandleNoTargetToDockTargetSizing@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PAK@Z @ 0x171265 (-HandleNoTargetToDockTargetSizing@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRE.c)
 *     ?HandleSizingAwayFromDockTarget@@YGXPAU_MOVESIZEDATA@@QBUtagCHECKPOINT@@PAK@Z @ 0x1713DE (-HandleSizingAwayFromDockTarget@@YGXPAU_MOVESIZEDATA@@QBUtagCHECKPOINT@@PAK@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@H@Z @ 0x172097 (-SetCurrentHitTargetMonitor@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@H@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x172710 (-VerticalSizeRectFromHitTarget@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 */

void __userpurge SnapSizeRect(
        int a1@<edx>,
        int a2@<ecx>,
        struct _MOVESIZEDATA *a3,
        struct tagCHECKPOINT *a4,
        struct tagMONITOR *a5,
        unsigned int *a6)
{
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  const struct tagCHECKPOINT *v13; // [esp+0h] [ebp-10h]
  unsigned int *v14; // [esp+4h] [ebp-Ch]
  LONG v15; // [esp+8h] [ebp-8h] BYREF
  LONG v16; // [esp+Ch] [ebp-4h] BYREF

  v15 = 0;
  v16 = 0;
  v8 = ComputeSizeOutcome((_DWORD *)a2, &v15, &v16, *(_DWORD *)(a2 + 268), *(struct _MOVESIZEDATA **)(a2 + 272)) - 2;
  if ( v8 )
  {
    v10 = v8 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
          HandleNoTargetToDockTargetSizing(a2, v15, (int)a3, v16, a4);
      }
      else
      {
        HandleSizingAwayFromDockTarget(a1, (_DWORD *)a2, a4, v13, v14);
      }
    }
    else
    {
      v12 = v15;
      *(_DWORD *)(a2 + 208) = v16;
      SetCurrentHitTargetMonitor(v12, (_DWORD *)a2, (struct _MOVESIZEDATA *)1, v13, (int)v14);
    }
  }
  else
  {
    VerticalSizeRectFromHitTarget(a2, v15, v16, a3, *(_DWORD *)(a2 + 268), v9);
  }
}
