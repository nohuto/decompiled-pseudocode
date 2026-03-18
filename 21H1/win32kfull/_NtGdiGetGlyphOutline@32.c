/*
 * XREFs of _NtGdiGetGlyphOutline@32 @ 0x841CA
 * Callers:
 *     <none>
 * Callees:
 *     _GreGetGlyphOutlineInternal@32 @ 0x85B86 (_GreGetGlyphOutlineInternal@32.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtGdiGetGlyphOutline(HDC a1, int a2, int a3, ULONG a4, size_t Size, char *a6, ULONG a7, int a8)
{
  int *v8; // esi
  int *v9; // esi
  void *v10; // esi
  int *v11; // edi
  int v13[5]; // [esp+10h] [ebp-44h] BYREF
  int v14; // [esp+24h] [ebp-30h] BYREF
  int v15; // [esp+28h] [ebp-2Ch]
  int v16; // [esp+2Ch] [ebp-28h]
  int v17; // [esp+30h] [ebp-24h]
  int GlyphOutlineInternal; // [esp+34h] [ebp-20h]
  void *Src; // [esp+38h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+3Ch] [ebp-18h]

  GlyphOutlineInternal = -1;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  memset(v13, 0, sizeof(v13));
  if ( Size && Size <= 0x2710000 )
    Src = (void *)AllocFreeTmpBuffer(Size);
  else
    Src = 0;
  if ( Src || !Size )
  {
    ms_exc.registration.TryLevel = 0;
    v8 = (int *)a7;
    if ( a7 >= _MmUserProbeAddress )
      v8 = (int *)_MmUserProbeAddress;
    v14 = *v8;
    v9 = v8 + 1;
    v15 = *v9++;
    v16 = *v9;
    v17 = v9[1];
    ms_exc.registration.TryLevel = -2;
    if ( Src )
      memset(Src, 0, Size);
    v10 = Src;
    GlyphOutlineInternal = GreGetGlyphOutlineInternal(a1, a3, (int)v13, Size, (int)Src, (int)&v14, a8);
    if ( GlyphOutlineInternal != -1 )
    {
      ms_exc.registration.TryLevel = 1;
      if ( v10 )
      {
        if ( (unsigned int)&a6[Size] > _MmUserProbeAddress || &a6[Size] <= a6 )
          *(_BYTE *)_MmUserProbeAddress = 0;
        memcpy(a6, Src, Size);
      }
      v11 = (int *)a4;
      if ( a4 >= _MmUserProbeAddress )
        v11 = (int *)_MmUserProbeAddress;
      qmemcpy(v11, v13, 0x14u);
      ms_exc.registration.TryLevel = -2;
    }
    if ( Src )
      FreeTmpBuffer(Src);
  }
  return GlyphOutlineInternal;
}
