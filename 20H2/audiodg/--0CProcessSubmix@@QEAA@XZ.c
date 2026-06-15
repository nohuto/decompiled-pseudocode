/*
 * XREFs of ??0CProcessSubmix@@QEAA@XZ @ 0x14004F460
 * Callers:
 *     ??0?$CComAggObject@VCProcessSubmix@@@ATL@@QEAA@PEAX@Z @ 0x14004F3B8 (--0-$CComAggObject@VCProcessSubmix@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSubmixImpl@@QEAA@XZ @ 0x14001043C (--0CSubmixImpl@@QEAA@XZ.c)
 */

CProcessSubmix *__fastcall CProcessSubmix::CProcessSubmix(CProcessSubmix *this)
{
  *((_DWORD *)this + 84) = 0;
  *(_OWORD *)((char *)this + 344) = 0LL;
  *(_OWORD *)((char *)this + 360) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_BYTE *)this + 384) = 0;
  CSubmixImpl::CSubmixImpl((CProcessSubmix *)((char *)this + 16));
  return this;
}
