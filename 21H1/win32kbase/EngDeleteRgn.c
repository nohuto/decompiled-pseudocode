/*
 * XREFs of EngDeleteRgn @ 0x1C0155420
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectOwner @ 0x1C000EF40 (GreGetObjectOwner.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C007B944 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C007F290 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008B250 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00CFFEC (--0EngModeState@@QEAA@XZ.c)
 */

void __stdcall EngDeleteRgn(HANDLE hrgn)
{
  __int64 *v2[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+50h] [rbp+8h] BYREF

  EngModeState::EngModeState((EngModeState *)&v3);
  if ( !(unsigned int)GreGetObjectOwner((unsigned int)hrgn, 4) )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v2, (HRGN)hrgn, 1);
    if ( v2[0] )
      RGNOBJAPI::bDeleteRGNOBJAPI(v2);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v2);
  }
  if ( v3 )
    *(_DWORD *)(v3 + 328) &= ~0x20u;
}
