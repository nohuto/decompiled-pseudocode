/*
 * XREFs of NtQueryCompositionInputQueueAndTransform @ 0x1C00B8370
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C001B7B0 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C002EAC0 (UserIsCurrentProcessDwm.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C00B8510 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00B8578 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

__int64 __fastcall NtQueryCompositionInputQueueAndTransform(void *a1, unsigned int a2, unsigned __int64 a3, _OWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int Transform; // ebx
  PVOID Object; // [rsp+20h] [rbp-B8h] BYREF
  _OWORD v14[4]; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v15; // [rsp+70h] [rbp-68h] BYREF
  __int128 v16; // [rsp+80h] [rbp-58h]
  __int128 v17; // [rsp+90h] [rbp-48h]
  __int64 v18; // [rsp+A0h] [rbp-38h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  memset(v14, 0, sizeof(v14));
  Transform = 0;
  if ( !UserIsCurrentProcessDwm(v9, v8) )
    Transform = -1073741790;
  if ( Transform >= 0 )
  {
    Object = 0LL;
    LOBYTE(v10) = 1;
    Transform = CompositionInputObject::ResolveHandle(a1, 1LL, v10, (struct CompositionInputObject **)&Object);
    if ( Transform >= 0 )
      Transform = CompositionInputObject::QueryInputQueueForInputType(Object, a2, &v15);
    if ( Transform >= 0 )
      Transform = CompositionInputObject::QueryTransform(
                    (CompositionInputObject *)Object,
                    (struct tagINPUT_TRANSFORM *)v14);
    if ( Object )
      ObfDereferenceObject(Object);
    if ( Transform >= 0 )
    {
      if ( a3 + 56 < a3 || a3 + 56 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)a3 = v15;
      *(_OWORD *)(a3 + 16) = v16;
      *(_OWORD *)(a3 + 32) = v17;
      *(_QWORD *)(a3 + 48) = v18;
      if ( a4 + 4 < a4 || (unsigned __int64)(a4 + 4) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a4 = v14[0];
      a4[1] = v14[1];
      a4[2] = v14[2];
      a4[3] = v14[3];
    }
  }
  return (unsigned int)Transform;
}
