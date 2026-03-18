/*
 * XREFs of NtDCompositionCreateSharedResourceHandle @ 0x1C00B74D0
 * Callers:
 *     <none>
 * Callees:
 *     CreateSharedResourceObject @ 0x1C00B7294 (CreateSharedResourceObject.c)
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C00B8150 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 */

__int64 __fastcall NtDCompositionCreateSharedResourceHandle(unsigned int a1, _QWORD *a2)
{
  int SharedResourceObject; // ebx
  PVOID v4; // rsi
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  SharedResourceObject = 0;
  Object = 0LL;
  Handle = 0LL;
  if ( a1 != 142 && a1 != 195 )
    SharedResourceObject = -1073741811;
  if ( SharedResourceObject >= 0 )
  {
    SharedResourceObject = CreateSharedResourceObject(a1, (struct DirectComposition::ResourceObject **)&Object);
    v4 = Object;
    if ( SharedResourceObject >= 0 )
    {
      SharedResourceObject = CompositionObject::CreateHandle((CompositionObject *)Object, 1u, 0, 1, &Handle);
      ObfDereferenceObject(v4);
      if ( SharedResourceObject >= 0 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_QWORD *)MmUserProbeAddress;
        *a2 = Handle;
      }
    }
  }
  return (unsigned int)SharedResourceObject;
}
