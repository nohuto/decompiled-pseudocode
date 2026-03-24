/*
 * XREFs of Simulator_RemoveNode @ 0x1C0064220
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0063910 (Simulator_CallbackWorker.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C0003A50 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C0003DA4 (DereferenceObjectEx.c)
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     GetNameSpaceObject @ 0x1C002183C (GetNameSpaceObject.c)
 */

__int64 __fastcall Simulator_RemoveNode(__int64 a1)
{
  const UNICODE_STRING *v1; // rdx
  int NameSpaceObject; // ebx
  unsigned __int64 v3; // rbx
  struct _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(const UNICODE_STRING **)(a1 + 16);
  v6 = 0LL;
  DestinationString = 0LL;
  if ( RtlUnicodeStringToAnsiString(&DestinationString, v1, 1u) )
    return 3221225473LL;
  NameSpaceObject = GetNameSpaceObject(DestinationString.Buffer, 0LL, (__int64 *)&v6, 0);
  RtlFreeAnsiString(&DestinationString);
  if ( NameSpaceObject )
    return 3221225473LL;
  v3 = v6;
  if ( !v6 )
    return 3221225473LL;
  DereferenceObjectEx(v6);
  if ( (gdwfAMLI & 4) != 0 )
    AMLIDereferenceHandleEx(v3 + 120);
  else
    FreeNameSpaceObjects(v3);
  return 0LL;
}
