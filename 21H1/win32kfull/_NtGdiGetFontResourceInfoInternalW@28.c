/*
 * XREFs of _NtGdiGetFontResourceInfoInternalW@28 @ 0x212E5B
 * Callers:
 *     <none>
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?bCheckAndCapThePath@@YGHPAGPBGKK@Z @ 0xDEE26 (-bCheckAndCapThePath@@YGHPAGPBGKK@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _GetFontResourceInfoInternalW@28 @ 0x24757E (_GetFontResourceInfoInternalW@28.c)
 */

int __stdcall NtGdiGetFontResourceInfoInternalW(
        WCHAR *a1,
        unsigned int a2,
        unsigned __int16 *a3,
        size_t MaxCount,
        ULONG a5,
        char *a6,
        int a7)
{
  unsigned __int16 *v7; // eax
  _DWORD *v8; // ecx
  unsigned int v10; // [esp+0h] [ebp-148h]
  unsigned int v11; // [esp+4h] [ebp-144h]
  int v12; // [esp+20h] [ebp-128h] BYREF
  void *Src; // [esp+24h] [ebp-124h]
  unsigned __int16 *v14; // [esp+28h] [ebp-120h]
  int FontResourceInfoInternalW; // [esp+2Ch] [ebp-11Ch]
  _BYTE v16[92]; // [esp+30h] [ebp-118h] BYREF
  _BYTE v17[164]; // [esp+8Ch] [ebp-BCh] BYREF
  CPPEH_RECORD ms_exc; // [esp+130h] [ebp-18h]

  v14 = 0;
  FontResourceInfoInternalW = 0;
  v12 = 0;
  Src = 0;
  memset(v16, 0, sizeof(v16));
  ms_exc.registration.TryLevel = 0;
  if ( a2 <= 1 )
    goto LABEL_9;
  if ( a2 > 0x50 )
  {
    if ( a2 > 0x1388000 )
      goto LABEL_7;
    v7 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * a2);
  }
  else
  {
    v7 = (unsigned __int16 *)v17;
  }
  v14 = v7;
LABEL_7:
  if ( v14 )
    FontResourceInfoInternalW = bCheckAndCapThePath(a1, v14, a2, a3, v10, v11);
LABEL_9:
  ms_exc.registration.TryLevel = -2;
  if ( MaxCount <= 0x5C )
  {
    Src = v16;
  }
  else if ( MaxCount > 0x2710000 || (Src = PALLOCMEM2(MaxCount, 1886221383, 1)) == 0 )
  {
    FontResourceInfoInternalW = 0;
  }
  if ( FontResourceInfoInternalW )
  {
    FontResourceInfoInternalW = GetFontResourceInfoInternalW(
                                  v14,
                                  a2,
                                  (unsigned int)a3,
                                  MaxCount,
                                  (int)&v12,
                                  (int)Src,
                                  a7);
    if ( FontResourceInfoInternalW )
    {
      ms_exc.registration.TryLevel = 1;
      v8 = (_DWORD *)a5;
      if ( a5 >= _MmUserProbeAddress )
        v8 = (_DWORD *)_MmUserProbeAddress;
      *v8 = v12;
      if ( MaxCount )
      {
        if ( (unsigned int)&a6[MaxCount] > _MmUserProbeAddress || &a6[MaxCount] <= a6 )
          *(_BYTE *)_MmUserProbeAddress = 0;
        memcpy(a6, Src, MaxCount);
      }
      ms_exc.registration.TryLevel = -2;
    }
  }
  if ( v14 && v14 != (unsigned __int16 *)v17 )
    FreeTmpBuffer(v14);
  if ( Src && Src != v16 )
    Win32FreePool((PATHOBJ *)Src);
  return FontResourceInfoInternalW;
}
