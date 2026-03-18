/*
 * XREFs of ??0DEVLOCKOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0x5A866
 * Callers:
 *     _GreExtSelectClipRgnInternal@16 @ 0xF7316 (_GreExtSelectClipRgnInternal@16.c)
 *     _NtGdiFastPolyPolyline@16 @ 0xF7700 (_NtGdiFastPolyPolyline@16.c)
 * Callees:
 *     <none>
 */

DEVLOCKOBJ *__thiscall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this, struct XDCOBJ *a2, int a3)
{
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_WORD *)this + 16) = 256;
  DEVLOCKOBJ::bLock(this, a2, a3);
  return this;
}
