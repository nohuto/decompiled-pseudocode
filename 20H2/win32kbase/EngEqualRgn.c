/*
 * XREFs of EngEqualRgn @ 0x1C014CCB0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectOwner @ 0x1C001F270 (GreGetObjectOwner.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003DA14 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0040820 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z @ 0x1C00A1144 (-GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00D0688 (--0EngModeState@@QEAA@XZ.c)
 */

BOOL __stdcall EngEqualRgn(HANDLE hrgn1, HANDLE hrgn2)
{
  int v4; // ebx
  _BYTE v6[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[32]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v8);
  if ( (unsigned int)GreGetObjectOwner((unsigned int)hrgn1, 4)
    || (unsigned int)GreGetObjectOwner((unsigned int)hrgn2, 4) )
  {
    v4 = 0;
  }
  else
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, (HRGN)hrgn1, 1);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, (HRGN)hrgn2, 1);
    v4 = GreEqualRgn((struct RGNOBJAPI *)v7, (struct RGNOBJAPI *)v6);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
  }
  if ( v8 )
    *(_DWORD *)(v8 + 328) &= ~0x20u;
  return v4;
}
