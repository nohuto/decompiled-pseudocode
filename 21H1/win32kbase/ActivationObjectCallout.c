/*
 * XREFs of ActivationObjectCallout @ 0x1C005C714
 * Callers:
 *     W32CalloutDispatch @ 0x1C005D9C0 (W32CalloutDispatch.c)
 * Callees:
 *     ActivationObjectOpen @ 0x1C0132FB8 (ActivationObjectOpen.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ActivationObjectCallout(int a1, _QWORD *a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 ObjectType; // rax
  unsigned int v9; // ebx

  v2 = a1 - 37;
  if ( !v2 )
    return ActivationObjectOpen(a2);
  v3 = v2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( !v4 )
    {
      ObjectType = ObGetObjectType(a2[1]);
      v6 = ExActivationObjectType;
      if ( ObjectType == ExActivationObjectType )
        return 0LL;
      goto LABEL_6;
    }
    if ( v4 == 1 )
    {
      v5 = ObGetObjectType(*a2);
      v6 = ExActivationObjectType;
      if ( v5 == ExActivationObjectType )
        return 0LL;
LABEL_6:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
      return 0LL;
    }
    return 3221225485LL;
  }
  else
  {
    v9 = 0;
    if ( *((_BYTE *)a2 + 24) )
    {
      if ( (unsigned int)PsGetProcessSessionIdEx(*a2) == -1 )
        return (unsigned int)-1073741790;
    }
    return v9;
  }
}
