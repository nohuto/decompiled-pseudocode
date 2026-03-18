/*
 * XREFs of ??0CAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1800CDC6C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CAnimation *__fastcall CAnimation::CAnimation(CAnimation *this, struct CComposition *a2)
{
  __int64 v2; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *(_QWORD *)this = &CAnimation::`vftable'{for `CResource'};
  *((_QWORD *)this + 8) = &CAnimation::`vftable'{for `IAnimationResource'};
  *((_QWORD *)this + 14) = &CAnimation::`vftable';
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 70) = -1;
  *((_QWORD *)this + 34) = (char *)this + 112;
  v2 = *((_QWORD *)a2 + 76);
  *((_QWORD *)this + 18) = v2;
  *((_QWORD *)this + 25) = v2;
  *((_QWORD *)this + 27) = v2;
  return this;
}
