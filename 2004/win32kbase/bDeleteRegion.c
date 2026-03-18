/*
 * XREFs of bDeleteRegion @ 0x1C00C0D10
 * Callers:
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C00C06F4 (-vCleanupRegions@@YAXK@Z.c)
 * Callees:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C007EFD0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0082264 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0086240 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 */

_BOOL8 __fastcall bDeleteRegion(HRGN a1)
{
  BOOL v1; // ebx
  struct HOBJ__ *v3[5]; // [rsp+20h] [rbp-28h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v3, a1, 0);
  v1 = 0;
  if ( v3[0] && !*((_DWORD *)v3[0] + 8) )
    v1 = RGNOBJAPI::bDeleteRGNOBJAPI(v3) != 0;
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v3);
  return v1;
}
