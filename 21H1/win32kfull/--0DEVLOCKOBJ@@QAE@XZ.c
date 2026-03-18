/*
 * XREFs of ??0DEVLOCKOBJ@@QAE@XZ @ 0xF6A67
 * Callers:
 *     ?GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z @ 0x57040 (-GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YGXPAX@Z @ 0x5EBA0 (-NtGdiFlushUserBatchInternal@@YGXPAX@Z.c)
 *     _GreSetDeviceGammaRamp@16 @ 0xCEB1A (_GreSetDeviceGammaRamp@16.c)
 *     _GreGetDeviceGammaRamp@8 @ 0xD0F8E (_GreGetDeviceGammaRamp@8.c)
 *     ?GreExtEscapeInternal@@YGHAAVDCOBJ@@HHPADH1@Z @ 0x1D739B (-GreExtEscapeInternal@@YGHAAVDCOBJ@@HHPADH1@Z.c)
 * Callees:
 *     ?vInit@DEVLOCKOBJ@@QAEXXZ @ 0x78C50 (-vInit@DEVLOCKOBJ@@QAEXXZ.c)
 */

DEVLOCKOBJ *__thiscall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DEVLOCKOBJ *v1; // ecx

  *((_WORD *)this + 16) = 256;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  DEVLOCKOBJ::vInit(this);
  return v1;
}
