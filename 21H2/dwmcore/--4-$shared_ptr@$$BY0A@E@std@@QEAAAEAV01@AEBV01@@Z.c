/*
 * XREFs of ??4?$shared_ptr@$$BY0A@E@std@@QEAAAEAV01@AEBV01@@Z @ 0x180240D20
 * Callers:
 *     ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x180241524 (-LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV-$shared_ptr@$$BY0A@E@std@@@Z.c)
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x180241AF4 (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000E7B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::shared_ptr<unsigned char [0]>::operator=(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  std::_Ref_count_base *v4; // rcx

  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a2[1];
  }
  *a1 = *a2;
  v4 = (std::_Ref_count_base *)a1[1];
  a1[1] = v2;
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  return a1;
}
