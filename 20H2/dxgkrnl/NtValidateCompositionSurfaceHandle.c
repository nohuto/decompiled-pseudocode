/*
 * XREFs of NtValidateCompositionSurfaceHandle @ 0x1C00182A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0016104 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 */

__int64 __fastcall NtValidateCompositionSurfaceHandle(void *a1, _QWORD *a2, __int64 a3)
{
  int v4; // ebx
  __int64 v6; // [rsp+50h] [rbp+18h]
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  Object = 0LL;
  v6 = 0LL;
  v4 = CompositionSurfaceObject::ResolveHandle(a1, 1u, a3, (struct CompositionSurfaceObject **)&Object);
  if ( v4 >= 0 )
  {
    v6 = *((_QWORD *)Object + 3);
    ObfDereferenceObject(Object);
  }
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
