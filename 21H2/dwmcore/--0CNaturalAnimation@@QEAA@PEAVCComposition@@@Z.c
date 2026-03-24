/*
 * XREFs of ??0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18016AFD8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2008 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x1800627A8 (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x1801D79A8 (-ClearState@CNaturalAnimation@@AEAAXXZ.c)
 */

CNaturalAnimation *__fastcall CNaturalAnimation::CNaturalAnimation(CNaturalAnimation *this, struct CComposition *a2)
{
  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CNaturalAnimation::`vftable';
  *(_OWORD *)((char *)this + 312) = 0LL;
  *(_OWORD *)((char *)this + 328) = 0LL;
  *(_OWORD *)((char *)this + 344) = 0LL;
  *((_BYTE *)this + 564) |= 0x44u;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  CNaturalAnimation::ClearState(this);
  return this;
}
