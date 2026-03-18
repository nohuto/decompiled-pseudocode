/*
 * XREFs of ??0EBRUSHOBJ@@QAE@XZ @ 0xC054A
 * Callers:
 *     _NtGdiSetPixel@16 @ 0xC0162 (_NtGdiSetPixel@16.c)
 *     _NtGdiFillRgn@12 @ 0x1FE14A (_NtGdiFillRgn@12.c)
 *     _NtGdiFrameRgn@20 @ 0x1FE62D (_NtGdiFrameRgn@20.c)
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 * Callees:
 *     <none>
 */

EBRUSHOBJ *__thiscall EBRUSHOBJ::EBRUSHOBJ(EBRUSHOBJ *this)
{
  *((_DWORD *)this + 4) = -1;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 19) = 0;
  return this;
}
