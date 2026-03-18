/*
 * XREFs of ?AttachInputQueue@CInputQueueProp@@QAEJPAVIInputQueue@@@Z @ 0xB38D4
 * Callers:
 *     ?AttachInputQueueToWindow@@YGJPAUtagWND@@PAVIInputQueue@@@Z @ 0xB3874 (-AttachInputQueueToWindow@@YGJPAUtagWND@@PAVIInputQueue@@@Z.c)
 * Callees:
 *     ?Grow@?$CDynamicArray@PAVIInputQueue@@$0HHHAHDFF@@@IAEJI@Z @ 0xB392E (-Grow@-$CDynamicArray@PAVIInputQueue@@$0HHHAHDFF@@@IAEJI@Z.c)
 */

int __thiscall CInputQueueProp::AttachInputQueue(CInputQueueProp *this, struct IInputQueue *a2)
{
  _DWORD *v2; // edi
  int v3; // ebx
  void (__thiscall **v4)(_DWORD); // eax
  int v7; // [esp+10h] [ebp-4h] BYREF

  v2 = (_DWORD *)((char *)this + 8);
  v3 = CDynamicArray<IInputQueue *,2003858261>::Grow((char *)this + 8, this);
  if ( v3 >= 0 )
  {
    *(_DWORD *)(*v2 + 4 * v2[1]++) = a2;
    (**(void (__thiscall ***)(struct IInputQueue *))a2)(a2);
  }
  v4 = *(void (__thiscall ***)(_DWORD))a2;
  v7 = 0;
  if ( ((int (__thiscall *)(struct IInputQueue *, int *))v4[8])(a2, &v7) >= 0 )
    *((_DWORD *)this + 7) = v7;
  return v3;
}
