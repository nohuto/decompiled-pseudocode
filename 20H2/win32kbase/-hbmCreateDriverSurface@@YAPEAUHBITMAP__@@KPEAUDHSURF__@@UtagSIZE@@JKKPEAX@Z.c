/*
 * XREFs of ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00ADDA4
 * Callers:
 *     EngCreateDeviceSurface @ 0x1C00ADCD0 (EngCreateDeviceSurface.c)
 *     EngCreateRedirectionDeviceBitmap @ 0x1C00ADD30 (EngCreateRedirectionDeviceBitmap.c)
 *     EngCreateBitmap @ 0x1C00ADD70 (EngCreateBitmap.c)
 *     EngCreateDeviceBitmap @ 0x1C0140DF0 (EngCreateDeviceBitmap.c)
 * Callees:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C003B6E0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00CF3AC (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

__int64 __fastcall hbmCreateDriverSurface(
        unsigned int a1,
        struct DHSURF__ *a2,
        struct tagSIZE a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        void *a7)
{
  int v7; // edx
  int v8; // r8d
  __int64 v9; // rbx
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD))CreateDriverSurfMem)(
    v11,
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7);
  v9 = 0LL;
  if ( v11[0] )
    v9 = *(_QWORD *)(v11[0] + 32LL);
  SURFMEM::~SURFMEM((SURFMEM *)v11, v7, v8);
  return v9;
}
