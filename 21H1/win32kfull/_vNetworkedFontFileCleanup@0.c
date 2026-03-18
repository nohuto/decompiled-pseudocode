/*
 * XREFs of _vNetworkedFontFileCleanup@0 @ 0xD4D52
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall vNetworkedFontFileCleanup()
{
  PVOID result; // eax
  struct _RTL_AVL_TABLE *v1; // esi
  HANDLE *i; // eax
  HANDLE *v3; // edi

  result = (PVOID)RtlGetCurrentServiceSessionId();
  if ( (PVOID)_gSessionId == result )
  {
    result = gpxsGlobals;
    if ( gpxsGlobals )
    {
      *(_DWORD *)gpxsGlobals = 0;
      result = gpxsGlobals;
      v1 = (struct _RTL_AVL_TABLE *)*((_DWORD *)gpxsGlobals + 1);
      if ( v1 )
      {
        for ( i = (HANDLE *)RtlEnumerateGenericTableAvl(v1, 1u); ; i = (HANDLE *)RtlEnumerateGenericTableAvl(v1, 0) )
        {
          v3 = i;
          if ( !i )
            break;
          ZwClose(*i);
          RtlDeleteElementGenericTableAvl(v1, v3);
        }
        Win32FreePool(*((_DWORD *)gpxsGlobals + 1));
        result = gpxsGlobals;
        *((_DWORD *)gpxsGlobals + 1) = 0;
      }
    }
  }
  return result;
}
