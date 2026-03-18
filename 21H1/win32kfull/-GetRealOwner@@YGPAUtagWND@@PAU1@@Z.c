/*
 * XREFs of ?GetRealOwner@@YGPAUtagWND@@PAU1@@Z @ 0x1C9C2
 * Callers:
 *     ?AddSelfAndOwnees@@YGPAUtagSMWP@@PAU1@PAUtagWND@@11HI@Z @ 0x1C4D6 (-AddSelfAndOwnees@@YGPAUtagSMWP@@PAU1@PAUtagWND@@11HI@Z.c)
 *     ?ZOrderByOwner2@@YGPAUtagSMWP@@PAU1@H@Z @ 0x32B6C (-ZOrderByOwner2@@YGPAUtagSMWP@@PAU1@H@Z.c)
 *     ?GetRootOwner@@YGPAUtagWND@@PAU1@@Z @ 0x979A6 (-GetRootOwner@@YGPAUtagWND@@PAU1@@Z.c)
 * Callees:
 *     <none>
 */

struct tagWND *__thiscall GetRealOwner(_DWORD *this)
{
  _DWORD *v1; // eax
  bool v2; // zf
  _DWORD *i; // edx

  v1 = (_DWORD *)this[16];
  v2 = this == v1;
  for ( i = (_DWORD *)this[14]; !v2; v2 = v1 == i )
  {
    this = v1;
    if ( !v1 )
      break;
    v1 = (_DWORD *)v1[14];
  }
  return (struct tagWND *)this;
}
