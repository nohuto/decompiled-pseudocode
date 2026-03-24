/*
 * XREFs of ??0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z @ 0x1C01306A8
 * Callers:
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C01358D4 (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C014793C (--0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 * Callees:
 *     ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0132B08 (-_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z @ 0x1C0132D7C (-_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z.c)
 */

CCD_SET_STRING_ID *__fastcall CCD_SET_STRING_ID::CCD_SET_STRING_ID(CCD_SET_STRING_ID *this, const struct _STRING *a2)
{
  _WORD *v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rax

  v2 = (_WORD *)((char *)this + 8);
  *(_DWORD *)this = 0;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 16) = 0;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *(_DWORD *)this = CCD_SET_STRING_ID::_CopyString((struct _STRING *)((char *)this + 8), a2);
  if ( *v2 > 0x4000u )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v7);
  }
  CCD_SET_STRING_ID::_ParseMonitorDescriptors(this);
  return this;
}
