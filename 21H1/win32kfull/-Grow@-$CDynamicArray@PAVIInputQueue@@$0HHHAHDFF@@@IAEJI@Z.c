/*
 * XREFs of ?Grow@?$CDynamicArray@PAVIInputQueue@@$0HHHAHDFF@@@IAEJI@Z @ 0xB392E
 * Callers:
 *     ?AttachInputQueue@CInputQueueProp@@QAEJPAVIInputQueue@@@Z @ 0xB38D4 (-AttachInputQueue@CInputQueueProp@@QAEJPAVIInputQueue@@@Z.c)
 * Callees:
 *     _RtlULongLongToULong@12 @ 0xAB66C (_RtlULongLongToULong@12.c)
 *     _RtlUIntAdd@12 @ 0xB39BC (_RtlUIntAdd@12.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __thiscall CDynamicArray<IInputQueue *,2003858261>::Grow(_DWORD *this, int a2)
{
  NTSTATUS v3; // edi
  void *v4; // ebx
  UINT v5; // eax
  UINT v7; // [esp+0h] [ebp-10h]
  ULONG *v8; // [esp+0h] [ebp-10h]
  UINT *v9; // [esp+4h] [ebp-Ch]
  UINT uAugend; // [esp+Ch] [ebp-4h] BYREF

  uAugend = 0;
  v3 = RtlUIntAdd((UINT)&uAugend, v7, v9);
  if ( v3 >= 0 && uAugend > this[2] )
  {
    v3 = RtlULongLongToULong(4LL * uAugend, v8);
    if ( v3 >= 0 )
    {
      v4 = (void *)Win32AllocPool(0, 2003858261);
      if ( v4 )
      {
        if ( *this )
        {
          memcpy(v4, (const void *)*this, 4 * this[1]);
          Win32FreePool(*this);
        }
        v5 = uAugend;
        *this = v4;
        this[2] = v5;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return v3;
}
