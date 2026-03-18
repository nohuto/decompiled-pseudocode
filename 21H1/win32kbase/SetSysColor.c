/*
 * XREFs of SetSysColor @ 0x1C00A8878
 * Callers:
 *     xxxSetSysColors @ 0x1C00A8604 (xxxSetSysColors.c)
 * Callees:
 *     GreGetNearestColor @ 0x1C00A89F0 (GreGetNearestColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C00A8AF8 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00A8C30 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00A8C74 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     GreSetBrushOwner @ 0x1C00A8CA0 (GreSetBrushOwner.c)
 *     hCreateSolidBrushInternal @ 0x1C00A92D0 (hCreateSolidBrushInternal.c)
 *     HmgMarkUndeletable @ 0x1C00A9F30 (HmgMarkUndeletable.c)
 *     GreSetMagicColors @ 0x1C01534DC (GreSetMagicColors.c)
 */

__int64 __fastcall SetSysColor(__int64 a1, unsigned int NearestColor, char a3)
{
  __int64 v4; // rdi
  HBRUSH v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // rdx
  __int64 SolidBrushInternal; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned int)a1;
  PsEnterPriorityRegion(a1);
  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresRender);
  *((_DWORD *)gpsi + v4 + 1111) = NearestColor;
  if ( (a3 & 4) != 0
    && (*(_DWORD *)(gpDispInfo + 132) & 2) != 0
    && ((_DWORD)v4 == 1 || (_DWORD)v4 == 15 || (_DWORD)v4 == 16 || (_DWORD)v4 == 20) )
  {
    GreSetMagicColors(*(HDC *)(gpDispInfo + 56));
  }
  if ( (a3 & 8) != 0
    || (a3 & 2) != 0
    && (_DWORD)v4 != 1
    && ((unsigned int)v4 <= 9
     || (unsigned int)v4 > 0xC && (_DWORD)v4 != 24 && ((unsigned int)v4 <= 0x1A || (unsigned int)v4 > 0x1C)) )
  {
    NearestColor = GreGetNearestColor(*(HDC *)(gpDispInfo + 56));
  }
  *((_DWORD *)gpsi + v4 + 1142) = NearestColor;
  v6 = (HBRUSH)*((_QWORD *)gpsi + v4 + 587);
  if ( v6 )
  {
    GreSetSolidBrushInternal(v6, NearestColor, 0, 1);
  }
  else
  {
    SolidBrushInternal = hCreateSolidBrushInternal(NearestColor, 0, 0LL, 0);
    *((_QWORD *)gpsi + v4 + 587) = SolidBrushInternal;
    if ( SolidBrushInternal )
    {
      LOBYTE(v9) = 16;
      HmgMarkUndeletable(SolidBrushInternal, v9);
    }
    GreSetBrushOwner(*((HBRUSH *)gpsi + v4 + 587), 0);
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v11, *((HBRUSH *)gpsi + v4 + 587));
    if ( v11[0] )
      *(_DWORD *)(v11[0] + 40LL) |= 0x40200u;
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v11);
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresRender);
  return PsLeavePriorityRegion(v7);
}
