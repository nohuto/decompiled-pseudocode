/*
 * XREFs of ?DetachInputQueueFromWindow@@YGXPAUtagWND@@PAVIInputQueue@@@Z @ 0xA9AA0
 * Callers:
 *     _UserDetachQueueFromInputWindow@8 @ 0xA9A54 (_UserDetachQueueFromInputWindow@8.c)
 * Callees:
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCInputQueueProp@@@Z @ 0x6ECB4 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCInputQueueProp@@@Z.c)
 *     ?Remove@?$CDynamicArray@PAVIInputQueue@@$0HHHAHDFF@@@QAE_NABQAVIInputQueue@@@Z @ 0xA9AE6 (-Remove@-$CDynamicArray@PAVIInputQueue@@$0HHHAHDFF@@@QAE_NABQAVIInputQueue@@@Z.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 */

void __fastcall DetachInputQueueFromWindow(int a1, int a2)
{
  _DWORD *v3; // esi
  void (__thiscall **v4)(_DWORD *); // eax
  int v5; // [esp+4h] [ebp-8h] BYREF
  _DWORD *v6; // [esp+8h] [ebp-4h] BYREF

  v6 = 0;
  if ( CWindowProp::GetProp<CInputQueueProp>(a1, (int *)&v6) )
  {
    v3 = v6;
    v5 = a2;
    if ( (unsigned __int8)CDynamicArray<IInputQueue *,2003858261>::Remove(&v5) )
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
    if ( !v3[3] )
    {
      (*(void (__thiscall **)(_DWORD *))(*v3 + 4))(v3);
      InternalRemoveProp(1);
      v4 = (void (__thiscall **)(_DWORD *))*v3;
      v3[1] = 0;
      (*v4)(v3);
    }
  }
}
