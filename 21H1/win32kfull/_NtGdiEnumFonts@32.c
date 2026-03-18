/*
 * XREFs of _NtGdiEnumFonts@32 @ 0x88792
 * Callers:
 *     <none>
 * Callees:
 *     _GreEnumFonts@28 @ 0x888D8 (_GreEnumFonts@28.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtGdiEnumFonts(
        HDC a1,
        int a2,
        int a3,
        unsigned int a4,
        char *Src,
        int a6,
        ULONG a7,
        volatile void *Address)
{
  int v8; // esi
  SIZE_T *v10; // ecx
  SIZE_T v11; // eax
  _DWORD *v12; // ecx
  SIZE_T v14; // [esp+10h] [ebp-20h] BYREF
  void *v15; // [esp+14h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]
  signed int Srca; // [esp+48h] [ebp+18h]

  v15 = 0;
  v8 = 1;
  v14 = 0;
  if ( Src )
  {
    if ( !a4 || a4 > 0x20 )
      return 0;
    Srca = 2 * a4;
    v15 = (void *)AllocFreeTmpBuffer(2 * a4);
    if ( v15 )
    {
      ms_exc.registration.TryLevel = 0;
      if ( &Src[Srca] < Src || (unsigned int)&Src[Srca] > _MmUserProbeAddress )
        *(_BYTE *)_MmUserProbeAddress = 0;
      memcpy(v15, Src, Srca);
      *(_WORD *)((char *)v15 + Srca - 2) = 0;
      ms_exc.registration.TryLevel = -2;
    }
    else
    {
      v8 = 0;
    }
  }
  if ( v8 )
  {
    ms_exc.registration.TryLevel = 1;
    v10 = (SIZE_T *)a7;
    if ( a7 >= _MmUserProbeAddress )
      v10 = (SIZE_T *)_MmUserProbeAddress;
    v11 = *v10;
    v14 = *v10;
    if ( Address )
      ProbeForWrite(Address, v11, 4u);
    ms_exc.registration.TryLevel = -2;
    if ( PsGetWin32KFilterSet() == 5 && a1 == (HDC)-589410304 )
      a1 = *(HDC *)(_gpDispInfo + 28);
    v8 = GreEnumFonts(a1, a3, (int)v15, a6, (struct PDEVOBJ *)&v14, (struct DCOBJ *)Address);
    ms_exc.registration.TryLevel = 2;
    v12 = (_DWORD *)a7;
    if ( a7 >= _MmUserProbeAddress )
      v12 = (_DWORD *)_MmUserProbeAddress;
    *v12 = v14;
    ms_exc.registration.TryLevel = -2;
  }
  if ( v15 )
    FreeTmpBuffer(v15);
  return v8;
}
