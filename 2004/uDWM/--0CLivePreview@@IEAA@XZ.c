/*
 * XREFs of ??0CLivePreview@@IEAA@XZ @ 0x18004A5F8
 * Callers:
 *     ?Create@CLivePreview@@SAJPEAPEAV1@@Z @ 0x18004A3E8 (-Create@CLivePreview@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x1800163E4 (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CLivePreview *__fastcall CLivePreview::CLivePreview(CLivePreview *this)
{
  __int64 v1; // rcx
  CLivePreview *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)v1 = &CLivePreview::`vftable';
  *(_QWORD *)(v1 + 304) = 0LL;
  *(_QWORD *)(v1 + 312) = 0LL;
  *(_QWORD *)(v1 + 320) = 0LL;
  *(_DWORD *)(v1 + 328) = 0;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_QWORD *)(v1 + 352) = 0LL;
  *(_DWORD *)(v1 + 360) = 0;
  *(_QWORD *)(v1 + 368) = 0LL;
  *(_QWORD *)(v1 + 376) = 0LL;
  *(_QWORD *)(v1 + 384) = 0LL;
  *(_DWORD *)(v1 + 392) = 0;
  *(_QWORD *)(v1 + 400) = 0LL;
  *(_QWORD *)(v1 + 408) = 0LL;
  *(_QWORD *)(v1 + 416) = 0LL;
  *(_DWORD *)(v1 + 424) = 0;
  *(_QWORD *)(v1 + 432) = 0LL;
  *(_QWORD *)(v1 + 440) = 0LL;
  *(_QWORD *)(v1 + 448) = 0LL;
  *(_DWORD *)(v1 + 456) = 0;
  *(_DWORD *)(v1 + 560) = -1;
  *(_DWORD *)(v1 + 564) = -1;
  result = (CLivePreview *)v1;
  *(_QWORD *)(v1 + 464) = 0LL;
  *(_QWORD *)(v1 + 472) = 0LL;
  *(_QWORD *)(v1 + 480) = 0LL;
  *(_QWORD *)(v1 + 488) = 0LL;
  *(_QWORD *)(v1 + 496) = 0LL;
  *(_QWORD *)(v1 + 504) = 0LL;
  *(_QWORD *)(v1 + 512) = 0LL;
  *(_QWORD *)(v1 + 536) = 0LL;
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_QWORD *)(v1 + 528) = 0LL;
  *(_DWORD *)(v1 + 544) = 3;
  *(_WORD *)(v1 + 282) = 0;
  return result;
}
