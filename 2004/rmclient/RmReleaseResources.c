/*
 * XREFs of RmReleaseResources @ 0x1800103A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x18000FD30 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 *     ?RmReleaseResources@ResourceManagerProxy@@QEAAJ_K@Z @ 0x1800100C4 (-RmReleaseResources@ResourceManagerProxy@@QEAAJ_K@Z.c)
 */

CLIENT_CALL_RETURN __fastcall RmReleaseResources(__int64 a1)
{
  CLIENT_CALL_RETURN result; // rax
  ResourceManagerProxy *v3; // rcx
  struct ResourceManagerProxy *v4; // [rsp+38h] [rbp+10h] BYREF

  result.Simple = GetResourceManagerProxy(&v4);
  if ( SLODWORD(result.Simple) >= 0 )
  {
    result.Pointer = ResourceManagerProxy::RmReleaseResources(v3, a1).Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
      return 0LL;
  }
  return result;
}
