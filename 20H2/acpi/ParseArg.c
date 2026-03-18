/*
 * XREFs of ParseArg @ 0x1C0021E34
 * Callers:
 *     ParseCall @ 0x1C00067A0 (ParseCall.c)
 * Callees:
 *     ParseString @ 0x1C00020D8 (ParseString.c)
 *     ParseSuperName @ 0x1C0008F90 (ParseSuperName.c)
 *     ParseObjName @ 0x1C0021D54 (ParseObjName.c)
 *     ParseOpcode @ 0x1C00222D0 (ParseOpcode.c)
 *     ParseIntObj @ 0x1C00224C4 (ParseIntObj.c)
 *     PushTerm @ 0x1C0028CB4 (PushTerm.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     ParseInteger @ 0x1C002C7E0 (ParseInteger.c)
 */

__int64 __fastcall ParseArg(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  int v5; // ebp
  unsigned int v8; // eax
  unsigned int v9; // ebx
  char v11; // r8
  __int64 v12; // r8
  const void **v13; // r14
  __int64 v14; // rcx

  v4 = a2;
  v5 = a4;
  switch ( a2 )
  {
    case 'B':
      v12 = 1LL;
      return (unsigned int)ParseInteger(a1 + 120, a3, v12, a4);
    case 'C':
      return (unsigned int)ParseOpcode(a1, a4);
    case 'D':
      v12 = 4LL;
      return (unsigned int)ParseInteger(a1 + 120, a3, v12, a4);
    case 'N':
      return (unsigned int)ParseObjName(a1, (char **)(a1 + 120), a3, 0);
  }
  if ( a2 != 79 )
  {
    if ( a2 == 83 )
    {
      v11 = 0;
      return (unsigned int)ParseSuperName((_QWORD *)a1, a3, v11, a4);
    }
    if ( a2 != 87 )
    {
      if ( a2 != 115 )
      {
        v9 = -1072431101;
        LogError(3222536195LL);
        AcpiDiagTraceAmlError(a1, 3222536195LL);
        PrintDebugMessage(121, v4, 0, 0, 0LL);
        return v9;
      }
      v11 = 1;
      return (unsigned int)ParseSuperName((_QWORD *)a1, a3, v11, a4);
    }
    v12 = 2LL;
    return (unsigned int)ParseInteger(a1 + 120, a3, v12, a4);
  }
  v13 = (const void **)(a1 + 120);
  LOBYTE(a4) = 1;
  v9 = ParseIntObj(a1, a1 + 120, a3, a4);
  if ( v9 == -1072431103 )
  {
    v9 = ParseString(a1, v13, a3, 1);
    if ( v9 == -1072431103 )
    {
      v14 = *(unsigned __int8 *)*v13;
      if ( (unsigned __int8)(v14 - 17) <= 2u )
      {
        v8 = PushTerm(a1, (unsigned int)*v13, v5, (unsigned int)*(&OpcodeTable + v14), a3);
        *v13 = (char *)*v13 + 1;
        return v8;
      }
    }
  }
  return v9;
}
