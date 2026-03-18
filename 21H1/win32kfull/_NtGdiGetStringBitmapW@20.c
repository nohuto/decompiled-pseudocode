/*
 * XREFs of _NtGdiGetStringBitmapW@20 @ 0x1F966E
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?GreGetStringBitmapW@@YGIPAUHDC__@@PAGIPAUSTRINGBITMAP@@I@Z @ 0x1F7DA3 (-GreGetStringBitmapW@@YGIPAUHDC__@@PAGIPAUSTRINGBITMAP@@I@Z.c)
 */

size_t __stdcall NtGdiGetStringBitmapW(HDC a1, HDC a2, int a3, SIZE_T a4, volatile void *Address)
{
  size_t v5; // esi
  HDC v7; // ecx
  SIZE_T StringBitmapW; // eax
  void *v9; // edi
  struct STRINGBITMAP *v10; // [esp+0h] [ebp-30h]
  unsigned int v11; // [esp+4h] [ebp-2Ch]
  int v12; // [esp+10h] [ebp-20h] BYREF
  void *Src; // [esp+14h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  v12 = 0;
  Src = 0;
  v5 = 1;
  if ( a3 != 1 )
    return 0;
  if ( a4 )
  {
    if ( a4 > 0x2710000 || (Src = (void *)AllocFreeTmpBuffer(a4)) == 0 )
      v5 = 0;
  }
  if ( v5 )
  {
    ms_exc.registration.TryLevel = 0;
    v7 = a2;
    if ( (unsigned int)a2 >= _MmUserProbeAddress )
      v7 = (HDC)_MmUserProbeAddress;
    v12 = *(_WORD *)v7;
    ms_exc.registration.TryLevel = -2;
    StringBitmapW = GreGetStringBitmapW((unsigned __int16 *)&v12, a1, v7, (unsigned __int16 *)Src, a4, v10, v11);
    v5 = StringBitmapW;
    if ( StringBitmapW )
    {
      if ( StringBitmapW <= a4 )
      {
        v9 = Src;
        if ( Src )
        {
          ms_exc.registration.TryLevel = 1;
          ProbeForWrite(Address, StringBitmapW, 1u);
          memcpy((void *)Address, v9, v5);
          ms_exc.registration.TryLevel = -2;
        }
      }
    }
  }
  if ( Src )
    FreeTmpBuffer(Src);
  return v5;
}
