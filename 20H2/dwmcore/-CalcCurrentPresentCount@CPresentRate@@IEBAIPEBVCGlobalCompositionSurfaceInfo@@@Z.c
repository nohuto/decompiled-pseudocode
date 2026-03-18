/*
 * XREFs of ?CalcCurrentPresentCount@CPresentRate@@IEBAIPEBVCGlobalCompositionSurfaceInfo@@@Z @ 0x18020A43C
 * Callers:
 *     ?PresentRateSupportsOverlay@CGlobalCompositionSurfaceInfo@@UEAA_NXZ @ 0x1800EB5B0 (-PresentRateSupportsOverlay@CGlobalCompositionSurfaceInfo@@UEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 */

__int64 __fastcall CPresentRate::CalcCurrentPresentCount(
        CPresentRate *this,
        const struct CGlobalCompositionSurfaceInfo *a2)
{
  unsigned int v2; // ebx
  _DWORD v5[4]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v6; // [rsp+30h] [rbp-D8h]
  unsigned int v7; // [rsp+3Ch] [rbp-CCh]
  HGDIOBJ ho; // [rsp+40h] [rbp-C8h]

  v2 = 0;
  if ( !*((_BYTE *)a2 + 260) || *((_BYTE *)a2 + 261) || *((int *)a2 + 64) < 2 )
  {
    return *((unsigned int *)a2 + 39);
  }
  else
  {
    memset_0(v5, 0, 0xC8uLL);
    if ( (int)NtQueryCompositionSurfaceRenderingRealization(*((_QWORD *)a2 + 4), v5) >= 0 )
    {
      if ( v5[0] == 200 && v6 == *((_QWORD *)a2 + 17) )
        v2 = v7;
      if ( (unsigned __int64)ho >= 2 )
        DeleteObject(ho);
    }
  }
  return v2;
}
