/*
 * XREFs of ??0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@@Z @ 0x1800D7614
 * Callers:
 *     ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800D7330 (--0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18016EB3C (--0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003594C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

COverlayContext *__fastcall COverlayContext::COverlayContext(COverlayContext *this, struct IOverlayMonitorTarget *a2)
{
  COverlayContext *result; // rax

  *(_QWORD *)this = a2;
  *((_DWORD *)this + 4) = 0;
  *((_OWORD *)this + 3) = 0LL;
  *((_OWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = (char *)this + 120;
  *((_QWORD *)this + 13) = (char *)this + 120;
  *((_QWORD *)this + 14) = (char *)this + 3704;
  *((_QWORD *)this + 463) = (char *)this + 3728;
  *((_QWORD *)this + 464) = (char *)this + 3728;
  *((_QWORD *)this + 465) = (char *)this + 7312;
  *((_QWORD *)this + 914) = (char *)this + 7336;
  *((_QWORD *)this + 915) = (char *)this + 7336;
  *((_QWORD *)this + 916) = (char *)this + 10920;
  *((_DWORD *)this + 2760) = 0;
  `vector constructor iterator'(
    (char *)this + 11044,
    16LL,
    8LL,
    (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
  *((_QWORD *)this + 1399) = 0LL;
  *((_QWORD *)this + 1401) = 0LL;
  *((_QWORD *)this + 1402) = 0LL;
  *((_QWORD *)this + 1397) = 0LL;
  *((_QWORD *)this + 1398) = 0LL;
  *((_QWORD *)this + 1400) = 0LL;
  *((_QWORD *)this + 1403) = 0LL;
  *((_QWORD *)this + 1404) = 0LL;
  *((_DWORD *)this + 2810) = 0;
  *(_OWORD *)((char *)this + 11244) = 0LL;
  *(_QWORD *)((char *)this + 11260) = 0LL;
  *((_DWORD *)this + 2817) = 0;
  *((_DWORD *)this + 2818) = -1;
  *((_DWORD *)this + 2819) = 0;
  *((_QWORD *)this + 1410) = 0LL;
  *((_DWORD *)this + 2822) = 256;
  *((_QWORD *)this + 1412) = 0LL;
  *((_QWORD *)this + 1413) = (char *)this + 11312;
  *((_DWORD *)this + 2828) = 0;
  result = this;
  *((_QWORD *)this + 1422) = 0LL;
  *((_QWORD *)this + 1423) = 0LL;
  *((_QWORD *)this + 1424) = 0LL;
  *((_DWORD *)this + 2850) = 0;
  *((_DWORD *)this + 4520) = -1;
  *((_QWORD *)this + 1426) = 0LL;
  *((_WORD *)this + 5708) = 1;
  *((_BYTE *)this + 11420) = 0;
  *(_QWORD *)((char *)this + 11436) = 0LL;
  *((_DWORD *)this + 2861) = 0;
  *((_WORD *)this + 5724) = 0;
  *((_BYTE *)this + 11450) = 0;
  return result;
}
