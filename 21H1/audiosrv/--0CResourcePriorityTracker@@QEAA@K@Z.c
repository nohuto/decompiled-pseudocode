/*
 * XREFs of ??0CResourcePriorityTracker@@QEAA@K@Z @ 0x1800E3E20
 * Callers:
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x1800E6E10 (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180009324 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

CResourcePriorityTracker *__fastcall CResourcePriorityTracker::CResourcePriorityTracker(
        CResourcePriorityTracker *this,
        int a2)
{
  _QWORD *v4; // rax
  CResourcePriorityTracker *result; // rax

  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this, 0, 0);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *((_QWORD *)this + 5) = v4;
  result = this;
  *((_DWORD *)this + 14) = a2;
  return result;
}
