/*
 * XREFs of ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C0025980
 * Callers:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C0025B44 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 * Callees:
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0022594 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ?AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z @ 0x1C0025A0C (-AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0027814 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C004EFEC (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ??$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SAJPEAPEAVCInputQueueProp@@@Z @ 0x1C0117838 (--$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SAJPEAPEAVCInputQueueProp@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AttachInputQueueToWindow(struct tagWND *a1, struct IInputQueue *a2)
{
  CInputQueueProp *v4; // rbx
  int v5; // edi
  struct tagWND *v7; // rdx
  CInputQueueProp *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( CWindowProp::GetProp<CInputQueueProp>((__int64)a1, (__int64 *)&v8) )
  {
    v4 = v8;
LABEL_3:
    v5 = CInputQueueProp::AttachInputQueue(v4, a2);
    if ( v5 < 0 && !*((_DWORD *)v4 + 6) )
      CWindowProp::RemoveAndDeleteProp(v4);
    return (unsigned int)v5;
  }
  v5 = CWindowProp::CreateWindowProp<CInputQueueProp>(&v8);
  if ( v5 >= 0 )
  {
    v7 = a1;
    v4 = v8;
    if ( !(unsigned int)CWindowProp::SetProp(v8, v7) )
    {
      (**(void (__fastcall ***)(CInputQueueProp *))v4)(v4);
      v4 = 0LL;
      v5 = -1073741790;
    }
    if ( v5 >= 0 )
      goto LABEL_3;
  }
  return (unsigned int)v5;
}
