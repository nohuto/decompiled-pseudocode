/*
 * XREFs of _NtGdiMakeFontDir@20 @ 0x2138ED
 * Callers:
 *     <none>
 * Callees:
 *     ___report_rangecheckfailure @ 0xED862 (___report_rangecheckfailure.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _GreMakeFontDir@12 @ 0x221195 (_GreMakeFontDir@12.c)
 */

int __stdcall NtGdiMakeFontDir(int a1, unsigned int a2, unsigned int a3, char *Src, size_t MaxCount)
{
  int FontDir; // ebx
  size_t v6; // esi
  unsigned int v7; // esi
  unsigned int v9; // [esp+14h] [ebp-328h]
  _WORD v10[262]; // [esp+18h] [ebp-324h] BYREF
  _WORD v11[128]; // [esp+224h] [ebp-118h] BYREF
  CPPEH_RECORD ms_exc; // [esp+324h] [ebp-18h]

  v9 = a2;
  memset(v11, 0, 0xFBu);
  FontDir = 0;
  v6 = MaxCount;
  if ( MaxCount <= 0x20A && a3 >= 0xFB )
  {
    ms_exc.registration.TryLevel = 0;
    if ( &Src[MaxCount] < Src || (unsigned int)&Src[MaxCount] > _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    memcpy(v10, Src, MaxCount);
    ms_exc.registration.TryLevel = -2;
    if ( MaxCount < 2 )
      v6 = 2;
    v7 = (v6 & 0xFFFFFFFE) - 2;
    if ( v7 >= 0x20A )
      __report_rangecheckfailure();
    *(_WORD *)((char *)v10 + v7) = 0;
    FontDir = GreMakeFontDir(a1, v11, v10);
    if ( FontDir )
    {
      ms_exc.registration.TryLevel = 1;
      if ( v9 + 251 > _MmUserProbeAddress || v9 + 251 <= v9 )
        *(_BYTE *)_MmUserProbeAddress = 0;
      qmemcpy((void *)a2, v11, 0xF8u);
      *(_WORD *)(a2 + 248) = v11[124];
      *(_BYTE *)(a2 + 250) = v11[125];
      ms_exc.registration.TryLevel = -2;
    }
  }
  return FontDir;
}
