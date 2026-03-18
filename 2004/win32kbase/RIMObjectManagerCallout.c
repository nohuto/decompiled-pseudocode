/*
 * XREFs of RIMObjectManagerCallout @ 0x1C00667B8
 * Callers:
 *     W32CalloutDispatch @ 0x1C0065BE0 (W32CalloutDispatch.c)
 * Callees:
 *     RawInputManagerObjectDelete @ 0x1C00657A4 (RawInputManagerObjectDelete.c)
 *     RawInputManagerObjectOpen @ 0x1C0068AA4 (RawInputManagerObjectOpen.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMObjectManagerCallout(int a1, __int64 *a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v9; // ebx

  v2 = a1 - 27;
  if ( !v2 )
    return RawInputManagerObjectOpen(a2);
  v3 = v2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
        return RawInputManagerObjectDelete(a2);
      else
        return 3221225485LL;
    }
    else
    {
      if ( ObGetObjectType(a2[1]) != ExRawInputManagerObjectType )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(ExRawInputManagerObjectType, v5, v6, v7);
      return 0LL;
    }
  }
  else
  {
    v9 = 0;
    if ( *((_BYTE *)a2 + 24) && (unsigned int)PsGetProcessSessionIdEx(*a2) == -1 )
      return (unsigned int)-1073741790;
    return v9;
  }
}
