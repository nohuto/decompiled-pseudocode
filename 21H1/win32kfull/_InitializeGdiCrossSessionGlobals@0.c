/*
 * XREFs of _InitializeGdiCrossSessionGlobals@0 @ 0xEC520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall InitializeGdiCrossSessionGlobals()
{
  struct _RTL_AVL_TABLE *v1; // eax
  struct _RTL_AVL_TABLE *v2; // eax

  if ( _gSessionId != RtlGetCurrentServiceSessionId() )
    return 1;
  *(_DWORD *)gpxsGlobals = GreCreateSemaphore();
  if ( *(_DWORD *)gpxsGlobals )
  {
    *((_DWORD *)gpxsGlobals + 1) = Win32AllocPoolNonPaged(56, 1717988935);
    v1 = (struct _RTL_AVL_TABLE *)*((_DWORD *)gpxsGlobals + 1);
    if ( v1 )
    {
      RtlInitializeGenericTableAvl(
        v1,
        GDINetworkedFontFileNodeCompare,
        GDINetworkedFontFileNodeAlloc,
        GDINetworkedFontFileNodeFree,
        0);
      *((_DWORD *)gpxsGlobals + 2) = GreCreateSemaphore();
      if ( *((_DWORD *)gpxsGlobals + 2) )
      {
        *((_DWORD *)gpxsGlobals + 3) = Win32AllocPoolNonPaged(56, 1717990471);
        v2 = (struct _RTL_AVL_TABLE *)*((_DWORD *)gpxsGlobals + 3);
        if ( v2 )
        {
          RtlInitializeGenericTableAvl(
            v2,
            GDITrustedFontFileCompare,
            GDITrustedFontFileAlloc,
            GDITrustedFontFileFree,
            0);
          return 1;
        }
      }
    }
  }
  return 0;
}
