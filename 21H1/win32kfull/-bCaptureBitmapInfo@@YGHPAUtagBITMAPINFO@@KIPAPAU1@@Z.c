/*
 * XREFs of ?bCaptureBitmapInfo@@YGHPAUtagBITMAPINFO@@KIPAPAU1@@Z @ 0x76FC6
 * Callers:
 *     _NtGdiCreateDIBitmapInternal@44 @ 0x74B78 (_NtGdiCreateDIBitmapInternal@44.c)
 *     _NtGdiSetDIBitsToDeviceInternal@64 @ 0x75458 (_NtGdiSetDIBitsToDeviceInternal@64.c)
 *     _NtGdiStretchDIBitsInternal@64 @ 0x75558 (_NtGdiStretchDIBitsInternal@64.c)
 *     _NtGdiCreateDIBSection@36 @ 0x768A6 (_NtGdiCreateDIBSection@36.c)
 *     _NtGdiCreateSessionMappedDIBSection@32 @ 0xE0450 (_NtGdiCreateSessionMappedDIBSection@32.c)
 * Callees:
 *     ?GreGetBitmapSizeInternal@@YGKPBUtagBITMAPINFO@@KI@Z @ 0x49006 (-GreGetBitmapSizeInternal@@YGKPBUtagBITMAPINFO@@KI@Z.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __userpurge bCaptureBitmapInfo@<eax>(
        int a1@<edx>,
        char *a2@<ecx>,
        size_t MaxCount,
        int *a4,
        unsigned int a5,
        struct tagBITMAPINFO **a6)
{
  void *v7; // ecx
  int v8; // edi
  size_t v9; // eax
  unsigned int v11; // [esp+0h] [ebp-10h]
  unsigned int v12; // [esp+4h] [ebp-Ch]

  if ( MaxCount >= 4 )
  {
    if ( a2 )
    {
      if ( MaxCount <= 0x2710000 )
      {
        v7 = (void *)AllocThreadBufferWithTag(MaxCount, 1886221383, 0);
        *a4 = (int)v7;
        if ( v7 )
        {
          if ( &a2[MaxCount] < a2 || (unsigned int)&a2[MaxCount] > _MmUserProbeAddress )
            *(_BYTE *)_MmUserProbeAddress = 0;
          memcpy(v7, a2, MaxCount);
          v8 = *a4;
          v9 = *(_DWORD *)*a4;
          if ( v9 >= 0x28 && MaxCount >= v9 && MaxCount == GreGetBitmapSizeInternal(a1, *a4, *(_DWORD *)*a4, v11, v12) )
            return 1;
          FreeThreadBufferWithTag(v8);
          *a4 = 0;
        }
      }
    }
  }
  return 0;
}
