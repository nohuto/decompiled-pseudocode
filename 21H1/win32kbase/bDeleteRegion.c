/*
 * XREFs of bDeleteRegion @ 0x1C00A9EB0
 * Callers:
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C00A9CB8 (-vCleanupRegions@@YAXK@Z.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C007B944 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C007F290 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008B250 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 */

_BOOL8 __fastcall bDeleteRegion(HRGN a1)
{
  BOOL v1; // ebx
  __int64 *v3[5]; // [rsp+20h] [rbp-28h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v3, a1, 0);
  v1 = 0;
  if ( v3[0] && !*((_DWORD *)v3[0] + 8) )
    v1 = RGNOBJAPI::bDeleteRGNOBJAPI(v3) != 0;
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v3);
  return v1;
}
