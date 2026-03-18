/*
 * XREFs of ??_ECTransformedGeometryHelper@@EEAAPEAXI@Z @ 0x1800162D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CTransformedGeometryHelper *__fastcall CTransformedGeometryHelper::`vector deleting destructor'(
        CTransformedGeometryHelper *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 7) - v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x40uLL);
  return this;
}
