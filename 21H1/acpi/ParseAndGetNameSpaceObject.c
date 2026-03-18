/*
 * XREFs of ParseAndGetNameSpaceObject @ 0x1C002155C
 * Callers:
 *     ParseNameObj @ 0x1C00216C0 (ParseNameObj.c)
 * Callees:
 *     ParseName @ 0x1C0021264 (ParseName.c)
 *     GetNameSpaceObject @ 0x1C00215DC (GetNameSpaceObject.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 */

__int64 __fastcall ParseAndGetNameSpaceObject(__int64 a1, char **a2, __int64 a3, _QWORD *a4, char a5)
{
  unsigned int NameSpaceObject; // ebx
  char Src[256]; // [rsp+30h] [rbp-138h] BYREF

  NameSpaceObject = ParseName(a1, a2, Src);
  if ( !NameSpaceObject )
  {
    NameSpaceObject = GetNameSpaceObject(Src);
    if ( NameSpaceObject == -1073741772 )
    {
      if ( a5 )
      {
        NameSpaceObject = 0;
        *a4 = 0LL;
      }
      else
      {
        LogError(3221225524LL);
        AcpiDiagTraceAmlError(a1, 3221225524LL);
        PrintDebugMessage(120, (unsigned int)Src, 0, 0, 0LL);
      }
    }
  }
  return NameSpaceObject;
}
