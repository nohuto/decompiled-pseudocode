/*
 * XREFs of _vTrustedFontFileTableCleanup@0 @ 0xD4D38
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall vTrustedFontFileTableCleanup()
{
  PVOID result; // eax
  struct _RTL_AVL_TABLE *v1; // esi
  struct _UNICODE_STRING *i; // eax
  struct _UNICODE_STRING *v3; // edi

  result = (PVOID)RtlGetCurrentServiceSessionId();
  if ( (PVOID)_gSessionId == result )
  {
    result = gpxsGlobals;
    if ( gpxsGlobals )
    {
      *((_DWORD *)gpxsGlobals + 2) = 0;
      result = gpxsGlobals;
      v1 = (struct _RTL_AVL_TABLE *)*((_DWORD *)gpxsGlobals + 3);
      if ( v1 )
      {
        for ( i = (struct _UNICODE_STRING *)RtlEnumerateGenericTableAvl(v1, 1u);
              ;
              i = (struct _UNICODE_STRING *)RtlEnumerateGenericTableAvl(v1, 0) )
        {
          v3 = i;
          if ( !i )
            break;
          RtlFreeUnicodeString(i);
          RtlDeleteElementGenericTableAvl(v1, v3);
        }
        Win32FreePool(*((_DWORD *)gpxsGlobals + 3));
        result = gpxsGlobals;
        *((_DWORD *)gpxsGlobals + 3) = 0;
      }
    }
  }
  return result;
}
