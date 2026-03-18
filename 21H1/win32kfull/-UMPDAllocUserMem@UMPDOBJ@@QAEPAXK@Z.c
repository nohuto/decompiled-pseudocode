/*
 * XREFs of ?UMPDAllocUserMem@UMPDOBJ@@QAEPAXK@Z @ 0x20AAEE
 * Callers:
 *     ?bSendLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAH@Z @ 0x20FDCC (-bSendLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAH@Z.c)
 * Callees:
 *     ?ResetHeap@UMPDOBJ@@QAEXXZ @ 0xF700F (-ResetHeap@UMPDOBJ@@QAEXXZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 */

unsigned int __thiscall UMPDOBJ::UMPDAllocUserMem(UMPDOBJ *this, unsigned int a2)
{
  unsigned int v4; // [esp+14h] [ebp-38h] BYREF
  _DWORD Src[7]; // [esp+18h] [ebp-34h] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v4 = 0;
  Src[2] = 0;
  Src[3] = 0;
  Src[0] = 24;
  Src[1] = 117;
  Src[4] = *(_DWORD *)this;
  Src[5] = a2;
  UMPDOBJ::Thunk(this, Src, 0x18u, &v4, (char *)4);
  ms_exc.registration.TryLevel = 0;
  if ( a2 && (v4 + a2 > _MmUserProbeAddress || v4 + a2 < v4) )
    *(_BYTE *)_MmUserProbeAddress = 0;
  ms_exc.registration.TryLevel = -2;
  UMPDOBJ::ResetHeap(this);
  return v4;
}
