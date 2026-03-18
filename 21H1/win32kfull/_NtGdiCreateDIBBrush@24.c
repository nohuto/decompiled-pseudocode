/*
 * XREFs of _NtGdiCreateDIBBrush@24 @ 0x21E0FD
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _GreCreateDIBBrush@24 @ 0x21DE30 (_GreCreateDIBBrush@24.c)
 */

int __stdcall NtGdiCreateDIBBrush(char *Src, unsigned int a2, size_t MaxCount, int a4, int a5, HBITMAP a6)
{
  int DIBBrush; // edi
  void *v8; // [esp+10h] [ebp-1Ch]

  v8 = 0;
  if ( MaxCount <= 0x2710000 )
    v8 = (void *)AllocFreeTmpBuffer(MaxCount);
  DIBBrush = 0;
  if ( v8 )
  {
    if ( MaxCount && ((unsigned int)&Src[MaxCount] > _MmUserProbeAddress || &Src[MaxCount] < Src) )
      *(_BYTE *)_MmUserProbeAddress = 0;
    memcpy(v8, Src, MaxCount);
    DIBBrush = GreCreateDIBBrush((int)v8, a2, MaxCount, a4, a5, a6);
    FreeTmpBuffer(v8);
  }
  return DIBBrush;
}
