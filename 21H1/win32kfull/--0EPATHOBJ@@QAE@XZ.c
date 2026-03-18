/*
 * XREFs of ??0EPATHOBJ@@QAE@XZ @ 0x1E40E7
 * Callers:
 *     _NtGdiFastPolyPolyline@16 @ 0xF7700 (_NtGdiFastPolyPolyline@16.c)
 *     ??0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0x1E410A (--0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z.c)
 *     ??0PATHSTACKOBJ@@QAE@XZ @ 0x1E4387 (--0PATHSTACKOBJ@@QAE@XZ.c)
 *     ??0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z @ 0x1E448D (--0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z.c)
 *     ??0XEPATHOBJ@@QAE@PAUHPATH__@@@Z @ 0x1E4555 (--0XEPATHOBJ@@QAE@PAUHPATH__@@@Z.c)
 * Callees:
 *     <none>
 */

EPATHOBJ *__thiscall EPATHOBJ::EPATHOBJ(EPATHOBJ *this)
{
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 7) = 0;
  return this;
}
