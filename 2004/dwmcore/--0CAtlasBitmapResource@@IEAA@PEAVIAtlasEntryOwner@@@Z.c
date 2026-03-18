/*
 * XREFs of ??0CAtlasBitmapResource@@IEAA@PEAVIAtlasEntryOwner@@@Z @ 0x18020961C
 * Callers:
 *     ?Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1802097C4 (-Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CAtlasBitmapResource *__fastcall CAtlasBitmapResource::CAtlasBitmapResource(
        CAtlasBitmapResource *this,
        struct IAtlasEntryOwner *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  CAtlasBitmapResource *result; // rax

  *((_QWORD *)this + 3) = &CAtlasBitmapResource::`vbtable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 5) = &CAtlasBitmapResource::`vbtable'{for `IBitmapRealization'};
  *((_QWORD *)this + 14) = &CInk::`vbtable'{for `IContent'};
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  *((_QWORD *)this + 2) = &ISpriteImage::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)this = &CAtlasBitmapResource::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CAtlasBitmapResource::`vftable'{for `IPixelFormat's `IBitmapResource'};
  *((_QWORD *)this + 4) = &CAtlasBitmapResource::`vftable'{for `IBitmapRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CAtlasBitmapResource::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CAtlasBitmapResource::`vftable'{for `IPixelFormat's `IBitmapRealization'};
  v3 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v3 + 20) = v3 - 64;
  v4 = *(int *)(*((_QWORD *)this + 3) + 8LL);
  result = this;
  *(_DWORD *)((char *)this + v4 + 20) = v4 - 80;
  *((_DWORD *)this + 16) = -1;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = a2;
  *((_WORD *)this + 36) = 0;
  return result;
}
