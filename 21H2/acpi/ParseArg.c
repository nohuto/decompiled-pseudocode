/*
 * XREFs of ParseArg @ 0x1C000B10C
 * Callers:
 *     ParseCall @ 0x1C00123D0 (ParseCall.c)
 * Callees:
 *     ParseOpcode @ 0x1C000B180 (ParseOpcode.c)
 *     ParseIntObj @ 0x1C000B2AC (ParseIntObj.c)
 *     ParseSuperName @ 0x1C0015500 (ParseSuperName.c)
 *     PushTerm @ 0x1C0016BE8 (PushTerm.c)
 *     ParseString @ 0x1C0027434 (ParseString.c)
 *     ParseObjName @ 0x1C0028CA8 (ParseObjName.c)
 *     ParseInteger @ 0x1C0029E44 (ParseInteger.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseArg(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  int v5; // ebp
  __int64 v6; // rsi
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // r8
  _QWORD *v12; // r14
  __int64 v13; // r9
  __int64 v14; // rcx

  v4 = a2;
  v5 = a4;
  v6 = a3;
  switch ( a2 )
  {
    case 'B':
      v11 = 1LL;
      return (unsigned int)ParseInteger(a1 + 120, v6, v11);
    case 'C':
      return (unsigned int)ParseOpcode(a1, a4);
    case 'D':
      v11 = 4LL;
      return (unsigned int)ParseInteger(a1 + 120, v6, v11);
    case 'N':
      return (unsigned int)ParseObjName(a1, a1 + 120, a3, 0LL);
  }
  if ( a2 != 79 )
  {
    if ( a2 == 83 )
    {
      a3 = 0LL;
      return (unsigned int)ParseSuperName(a1, v6, a3);
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
      LOBYTE(a3) = 1;
      return (unsigned int)ParseSuperName(a1, v6, a3);
    }
    v11 = 2LL;
    return (unsigned int)ParseInteger(a1 + 120, v6, v11);
  }
  v12 = (_QWORD *)(a1 + 120);
  LOBYTE(a4) = 1;
  v9 = ParseIntObj(a1, a1 + 120, a3, a4);
  if ( v9 == -1072431103 )
  {
    LOBYTE(v13) = 1;
    v9 = ParseString(a1, v12, v6, v13);
    if ( v9 == -1072431103 )
    {
      v14 = *(unsigned __int8 *)*v12;
      if ( (unsigned __int8)(v14 - 17) <= 2u )
      {
        v8 = PushTerm(a1, *v12, v5, (unsigned int)*(&OpcodeTable + v14), v6);
        ++*v12;
        return v8;
      }
    }
  }
  return v9;
}
