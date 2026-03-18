/*
 * XREFs of ??0CLightStack@@QEAA@XZ @ 0x1800912E0
 * Callers:
 *     ??0CPreComputeContext@@IEAA@PEAVCVisualTree@@@Z @ 0x18008E4E8 (--0CPreComputeContext@@IEAA@PEAVCVisualTree@@@Z.c)
 *     ??0CDrawingContext@@AEAA@XZ @ 0x180090C80 (--0CDrawingContext@@AEAA@XZ.c)
 *     ??0COcclusionContext@@QEAA@XZ @ 0x18009110C (--0COcclusionContext@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CLightStack *__fastcall CLightStack::CLightStack(CLightStack *this)
{
  *(_QWORD *)this = (char *)this + 32;
  *((_QWORD *)this + 1) = (char *)this + 32;
  *((_DWORD *)this + 4) = 4;
  *(_QWORD *)((char *)this + 20) = 4LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 23) = (char *)this + 216;
  *((_QWORD *)this + 24) = (char *)this + 216;
  *((_DWORD *)this + 50) = 3;
  *(_QWORD *)((char *)this + 204) = 3LL;
  return this;
}
