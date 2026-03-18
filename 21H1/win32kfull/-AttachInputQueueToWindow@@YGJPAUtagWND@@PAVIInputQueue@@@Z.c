/*
 * XREFs of ?AttachInputQueueToWindow@@YGJPAUtagWND@@PAVIInputQueue@@@Z @ 0xB3874
 * Callers:
 *     ?ValidateAndAttachQueueToInputWindow@@YGJPAUHWND__@@PAVIInputQueue@@PAPAUtagWND@@@Z @ 0xB37AA (-ValidateAndAttachQueueToInputWindow@@YGJPAUHWND__@@PAVIInputQueue@@PAPAUtagWND@@@Z.c)
 * Callees:
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCInputQueueProp@@@Z @ 0x6ECB4 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCInputQueueProp@@@Z.c)
 *     ?AttachInputQueue@CInputQueueProp@@QAEJPAVIInputQueue@@@Z @ 0xB38D4 (-AttachInputQueue@CInputQueueProp@@QAEJPAVIInputQueue@@@Z.c)
 *     ?SetProp@CWindowProp@@QAEHPAUtagWND@@@Z @ 0xB4F1C (-SetProp@CWindowProp@@QAEHPAUtagWND@@@Z.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 *     ??$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SGJPAPAVCInputQueueProp@@@Z @ 0xB5118 (--$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SGJPAPAVCInputQueueProp@@@Z.c)
 */

int __fastcall AttachInputQueueToWindow(int a1, struct IInputQueue *a2)
{
  CInputQueueProp *v4; // esi
  int v5; // edi
  void (__thiscall **v7)(CInputQueueProp *); // eax
  struct tagWND *v8; // [esp-4h] [ebp-14h]
  CInputQueueProp *v9; // [esp+Ch] [ebp-4h] BYREF

  v9 = 0;
  if ( CWindowProp::GetProp<CInputQueueProp>(a1, (int *)&v9) )
  {
    v4 = v9;
LABEL_3:
    v5 = CInputQueueProp::AttachInputQueue(v4, a2);
    if ( v5 < 0 && !*((_DWORD *)v4 + 3) )
    {
      (*(void (__thiscall **)(CInputQueueProp *))(*(_DWORD *)v4 + 4))(v4);
      InternalRemoveProp(1);
      v7 = *(void (__thiscall ***)(CInputQueueProp *))v4;
      *((_DWORD *)v4 + 1) = 0;
      (*v7)(v4);
    }
    return v5;
  }
  v5 = CWindowProp::CreateWindowProp<CInputQueueProp>(&v9);
  if ( v5 >= 0 )
  {
    v8 = (struct tagWND *)a1;
    v4 = v9;
    if ( !CWindowProp::SetProp(v9, v8) )
    {
      (**(void (__thiscall ***)(CInputQueueProp *))v4)(v4);
      v4 = 0;
      v5 = -1073741790;
    }
    if ( v5 >= 0 )
      goto LABEL_3;
  }
  return v5;
}
