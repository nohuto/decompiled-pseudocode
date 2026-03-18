/*
 * XREFs of NtGdiEnumFonts @ 0x1C00D8700
 * Callers:
 *     <none>
 * Callees:
 *     GreEnumFonts @ 0x1C00D88CC (GreEnumFonts.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall NtGdiEnumFonts(
        HDC a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        char *Src,
        int a6,
        ULONG64 a7,
        volatile void *Address)
{
  void *v10; // rdi
  unsigned int v11; // esi
  size_t v12; // r8
  unsigned int *v13; // r8
  unsigned int v14; // eax
  _DWORD *v15; // r8
  unsigned int v17; // [rsp+40h] [rbp-38h] BYREF
  void *v18; // [rsp+48h] [rbp-30h]

  v10 = 0LL;
  v18 = 0LL;
  v11 = 1;
  v17 = 0;
  if ( Src )
  {
    if ( a4 - 1 > 0x1F )
      return 0LL;
    v10 = (void *)AllocFreeTmpBuffer(2 * a4);
    v18 = v10;
    if ( v10 )
    {
      v12 = 2LL * a4;
      if ( &Src[v12] < Src || (unsigned __int64)&Src[v12] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v10, Src, v12);
      *((_WORD *)v10 + a4 - 1) = 0;
    }
    else
    {
      v11 = 0;
    }
  }
  if ( v11 )
  {
    v13 = (unsigned int *)a7;
    if ( a7 >= MmUserProbeAddress )
      v13 = (unsigned int *)MmUserProbeAddress;
    v14 = *v13;
    v17 = *v13;
    if ( Address )
      ProbeForWrite(Address, v14, 4u);
    if ( (unsigned int)PsGetWin32KFilterSet() == 5 && a1 == (HDC)-589410304LL )
      a1 = *(HDC *)(gpDispInfo + 56LL);
    v11 = GreEnumFonts(a1, a2, a6, &v17, (void *)Address);
    v15 = (_DWORD *)a7;
    if ( a7 >= MmUserProbeAddress )
      v15 = (_DWORD *)MmUserProbeAddress;
    *v15 = v17;
  }
  if ( v10 )
    FreeTmpBuffer(v10);
  return v11;
}
