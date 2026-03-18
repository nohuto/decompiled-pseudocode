/*
 * XREFs of ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0027814
 * Callers:
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C0025980 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     CreateVisRgnTracker @ 0x1C0028A38 (CreateVisRgnTracker.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C004B334 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0119404 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     UserSetWindowedSwapChain @ 0x1C0150BE8 (UserSetWindowedSwapChain.c)
 * Callees:
 *     InternalSetProp @ 0x1C002481C (InternalSetProp.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowProp::SetProp(CWindowProp *this, __int64 a2)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rcx
  CWindowProp *v6; // rax
  CWindowProp *v7; // rdx
  unsigned __int16 v8; // ax
  __int64 result; // rax

  v4 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  v5 = *(_QWORD *)(a2 + 144);
  if ( v4 == word_1C033AF24 )
    *(_QWORD *)(*(_QWORD *)(a2 + 40) + 312LL) = 0LL;
  v6 = (CWindowProp *)RealInternalRemoveProp(v5, v4, 1LL);
  v7 = v6;
  if ( v6 && v6 != this )
    (**(void (__fastcall ***)(CWindowProp *))v6)(v6);
  v8 = (*(__int64 (__fastcall **)(CWindowProp *, CWindowProp *))(*(_QWORD *)this + 8LL))(this, v7);
  result = InternalSetProp(a2, v8, (__int64)this, 0x8001u);
  *((_QWORD *)this + 1) = a2 & -(__int64)((_DWORD)result != 0);
  return result;
}
