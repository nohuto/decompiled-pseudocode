/*
 * XREFs of ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800AF718
 * Callers:
 *     ?Initialize@CInteraction@@MEAAJXZ @ 0x1800AF620 (-Initialize@CInteraction@@MEAAJXZ.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x1801CA144 (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 * Callees:
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x1800AF838 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x1800AF898 (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ??0CInteractionContextTransformHelper@@QEAA@XZ @ 0x1800AF8EC (--0CInteractionContextTransformHelper@@QEAA@XZ.c)
 */

CInteractionContextWrapper *__fastcall CInteractionContextWrapper::CInteractionContextWrapper(
        CInteractionContextWrapper *this)
{
  CInteractionContextWrapper *result; // rax

  *((_QWORD *)this + 28) = 1LL;
  *(_QWORD *)this = &CInteractionContextWrapper::`vftable'{for `IInteractionContextWrapper'};
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = &CInteractionContextWrapper::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 55) = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 32) = 1065353216LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *(_QWORD *)((char *)this + 276) = 1065353216LL;
  *(_QWORD *)((char *)this + 284) = 0LL;
  *((_DWORD *)this + 73) = 0;
  *((_QWORD *)this + 37) = 1065353216LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 0;
  *((_DWORD *)this + 79) = 1065353216;
  *((_WORD *)this + 160) = 32085;
  *((_DWORD *)this + 81) = 0;
  *((_DWORD *)this + 82) = 16843008;
  CInteractionContextTransformHelper::CInteractionContextTransformHelper((CInteractionContextWrapper *)((char *)this + 336));
  *((_BYTE *)this + 536) = 0;
  *((_DWORD *)this + 140) = 0;
  *((_BYTE *)this + 564) = 0;
  *((_QWORD *)this + 69) = (char *)this + 544;
  *((_QWORD *)this + 68) = (char *)this + 544;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 568));
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  QpcTimeConverter::QpcTimeConverter((CInteractionContextWrapper *)((char *)this + 624));
  CInteractionContextWrapper::ResetCachedInteractionOutput(this, 0);
  result = this;
  *((_BYTE *)this + 92) = 0;
  *((_BYTE *)this + 156) = 0;
  return result;
}
