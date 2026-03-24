/*
 * XREFs of ParseName @ 0x1C00214C4
 * Callers:
 *     ParseAndGetNameSpaceObject @ 0x1C00217BC (ParseAndGetNameSpaceObject.c)
 *     ParseObjName @ 0x1C0021FB4 (ParseObjName.c)
 *     ParseFieldConnection @ 0x1C006BA34 (ParseFieldConnection.c)
 * Callees:
 *     ParseNameTail @ 0x1C00215A0 (ParseNameTail.c)
 *     RtlStringCchCopyA @ 0x1C0022F50 (RtlStringCchCopyA.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1C0065D60 (ConPrintf.c)
 */

__int64 __fastcall ParseName(__int64 a1, char **a2, char *a3)
{
  char *v4; // rdi
  char **v5; // rbx
  char v6; // cl
  unsigned int v7; // ebx
  _BYTE *v9; // rcx
  char *v10; // rdx
  __int64 v11; // rax

  v4 = a3;
  v5 = a2;
  v6 = **a2;
  if ( v6 == 92 )
  {
    RtlStringCchCopyA(a3, 0x100uLL, "\\");
    ++*v5;
LABEL_9:
    a3 = v4;
    a2 = v5;
    goto LABEL_4;
  }
  if ( v6 == 94 )
  {
    RtlStringCchCopyA(a3, 0x100uLL, "^");
    ++*v5;
    v9 = v4 + 1;
    v10 = *v5;
    v11 = 1LL;
    do
    {
      if ( *v10 != 94 )
        break;
      *v9 = 94;
      v11 = (unsigned int)(v11 + 1);
      ++*v5;
      ++v9;
      v10 = *v5;
    }
    while ( (unsigned int)v11 < 0xFF );
    v4[v11] = 0;
    if ( **v5 == 94 )
    {
      v7 = -1073741562;
      LogError(3221225734LL);
      AcpiDiagTraceAmlError(a1, 3221225734LL);
      PrintDebugMessage(129, (_DWORD)v4, 0, 0, 0LL);
      return v7;
    }
    goto LABEL_9;
  }
  *a3 = 0;
LABEL_4:
  v7 = ParseNameTail(a1, a2, a3);
  if ( !v7 && (gDebugger & 0xD0) != 0 )
    ConPrintf("%s");
  return v7;
}
