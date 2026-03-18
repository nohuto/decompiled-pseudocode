/*
 * XREFs of AMLIApplyNamespaceOverride @ 0x1C0028690
 * Callers:
 *     ParseLoad @ 0x1C0028400 (ParseLoad.c)
 *     ParseUnload @ 0x1C006C0C0 (ParseUnload.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C0019AC8 (GetNameSpaceObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C0065D84 (AMLIApplyNextNamespaceOverride.c)
 */

__int64 AMLIApplyNamespaceOverride()
{
  int NameSpaceObject; // ebx
  unsigned __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  if ( (gOverrideFlags & 0x20) != 0 && gpnsNameSpaceOverrideRoot )
  {
    NameSpaceObject = GetNameSpaceObject("\\", 0LL, (__int64 *)&v2, 0);
    if ( NameSpaceObject >= 0 )
    {
      NameSpaceObject = AMLIApplyNextNamespaceOverride(gpnsNameSpaceOverrideRoot, v2);
      DereferenceObjectEx(v2);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)NameSpaceObject;
}
