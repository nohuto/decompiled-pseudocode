/*
 * XREFs of ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1C00C63D4
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00C607C (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C00C6A5C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSPRITE::vUpdateDpiScaling(DWMSPRITE *this, unsigned __int16 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  unsigned __int16 v6; // ax
  float v7; // xmm0_4
  __int16 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 96;
  if ( a2 )
  {
    v6 = *a2;
    goto LABEL_5;
  }
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    if ( !(unsigned int)UserIsWindowGdiScaled(v5, &v8) )
    {
      v6 = 96;
LABEL_5:
      v8 = v6;
      goto LABEL_6;
    }
  }
  else if ( (unsigned int)UserIsCurrentThreadGdiScaled() )
  {
    return;
  }
  v6 = v8;
LABEL_6:
  if ( v6 == 96 )
  {
    if ( (*((_DWORD *)this + 41) & 0x20) != 0 )
    {
      *((_DWORD *)this + 39) = 0;
      *((_DWORD *)this + 40) = 0;
      *((_DWORD *)this + 41) &= ~0x20u;
    }
  }
  else
  {
    v7 = (float)(unsigned __int16)GreGetScaledLogPixels(v6, a2, a3, a4) / 96.0;
    *((float *)this + 39) = v7;
    *((float *)this + 40) = v7;
    *((_DWORD *)this + 41) |= 0x20u;
  }
}
