/*
 * XREFs of ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800144A4
 * Callers:
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x180014358 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x1800143B0 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001C0F0 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001E0C0 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180025FA8 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026264 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180026914 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800299D0 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180089BE4 (-RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z @ 0x1800B6B60 (-NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CWindowData *,0>::Remove(__int64 *a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  __int64 i; // r11
  __int64 result; // rax
  __int64 v6; // rdx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0LL;
  for ( i = *a1; (unsigned int)v3 < v2; v3 = (unsigned int)(v3 + 1) )
  {
    if ( *a2 == *(_QWORD *)(i + 8 * v3) )
      break;
  }
  if ( (unsigned int)v3 >= v2 )
    return 0LL;
  for ( ; (unsigned int)v3 < v2 - 1; v2 = *((_DWORD *)a1 + 6) )
  {
    v6 = (unsigned int)v3;
    LODWORD(v3) = v3 + 1;
    *(_QWORD *)(i + 8 * v6) = *(_QWORD *)(i + 8LL * (unsigned int)v3);
  }
  result = 1LL;
  *((_DWORD *)a1 + 6) = v2 - 1;
  return result;
}
