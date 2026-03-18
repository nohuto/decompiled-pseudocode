/*
 * XREFs of _NtGdiExtCreatePen@44 @ 0x212537
 * Callers:
 *     <none>
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _GreExtCreatePen@44 @ 0xA90C4 (_GreExtCreatePen@44.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtGdiExtCreatePen(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        char *a6,
        unsigned int a7,
        char *Src,
        size_t MaxCount,
        int a10,
        int a11)
{
  PATHOBJ *v11; // ebx
  char *v12; // esi
  int Pen; // edi
  char *v14; // edx

  v11 = 0;
  v12 = 0;
  Pen = 1;
  if ( Src )
  {
    if ( a7 <= 0x9C4000 )
      v11 = (PATHOBJ *)PALLOCMEM2(4 * a7, 1886221383, 0);
    Pen = v11 != 0;
  }
  if ( a3 == 6 )
  {
    if ( MaxCount <= 0x2710000 )
      v12 = (char *)AllocFreeTmpBuffer(MaxCount);
    Pen = v12 != 0 ? Pen : 0;
  }
  if ( Pen )
  {
    if ( Src )
    {
      v14 = &Src[4 * a7];
      if ( v14 < Src || (unsigned int)v14 > _MmUserProbeAddress )
        *(_BYTE *)_MmUserProbeAddress = 0;
      memcpy(v11, Src, 4 * a7);
    }
    if ( a3 == 6 )
    {
      if ( &a6[MaxCount] < a6 || (unsigned int)&a6[MaxCount] > _MmUserProbeAddress )
        *(_BYTE *)_MmUserProbeAddress = 0;
      memcpy(v12, a6, MaxCount);
      a6 = v12;
    }
    Pen = (int)GreExtCreatePen(a1, a2, a3, a4, a5, (int)a6, a7, (int *)v11, MaxCount, a10, a11);
  }
  if ( v12 )
    FreeTmpBuffer(v12);
  if ( v11 )
    Win32FreePool(v11);
  return Pen;
}
