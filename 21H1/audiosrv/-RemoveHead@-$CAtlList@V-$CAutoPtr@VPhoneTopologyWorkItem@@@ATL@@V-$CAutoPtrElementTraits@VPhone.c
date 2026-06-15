/*
 * XREFs of ?RemoveHead@?$CAtlList@V?$CAutoPtr@VPhoneTopologyWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VPhoneTopologyWorkItem@@@2@@ATL@@QEAA?AV?$CAutoPtr@VPhoneTopologyWorkItem@@@2@XZ @ 0x1801411D8
 * Callers:
 *     ?WorkItemThreadProc@PhoneTopology@@AEAAXXZ @ 0x180141A3C (-WorkItemThreadProc@PhoneTopology@@AEAAXXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8FE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@V?$CAutoPtr@VPhoneTopologyWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VPhoneTopologyWorkItem@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180140354 (-FreeNode@-$CAtlList@V-$CAutoPtr@VPhoneTopologyWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VPhoneTo.c)
 */

_QWORD *__fastcall ATL::CAtlList<ATL::CAutoPtr<PhoneTopologyWorkItem>,ATL::CAutoPtrElementTraits<PhoneTopologyWorkItem>>::RemoveHead(
        __int64 **a1,
        _QWORD *a2)
{
  __int64 *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax

  v3 = *a1;
  if ( !*a1 )
    ATL::AtlThrowImpl(-2147467259);
  v4 = v3[2];
  v3[2] = 0LL;
  *a2 = v4;
  v5 = *v3;
  *a1 = (__int64 *)*v3;
  if ( v5 )
    *(_QWORD *)(v5 + 8) = 0LL;
  else
    a1[1] = 0LL;
  ATL::CAtlList<ATL::CAutoPtr<PhoneTopologyWorkItem>,ATL::CAutoPtrElementTraits<PhoneTopologyWorkItem>>::FreeNode(
    (__int64)a1,
    v3);
  return a2;
}
