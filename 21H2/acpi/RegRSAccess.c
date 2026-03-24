/*
 * XREFs of RegRSAccess @ 0x1C002C3B8
 * Callers:
 *     AMLIRegEventHandler @ 0x1C002C19C (AMLIRegEventHandler.c)
 * Callees:
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     FindRSAccess @ 0x1C002C490 (FindRSAccess.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 */

__int64 __fastcall RegRSAccess(unsigned int a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  _QWORD *RSAccess; // r10
  _QWORD *PoolWithTag; // rax
  unsigned int v12; // edi
  unsigned int v13; // edx
  int v14; // ecx

  v4 = 0;
  if ( a1 < 2 )
  {
    v12 = -1072431088;
    LogError(-1072431088);
    AcpiDiagTraceAmlError(0LL, -1072431088);
    v14 = 170;
    goto LABEL_17;
  }
  RSAccess = (_QWORD *)FindRSAccess(a1, a2);
  if ( !RSAccess )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x526C6D41u);
    RSAccess = PoolWithTag;
    if ( !PoolWithTag )
    {
      v12 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(0LL, -1073741670);
      v13 = 0;
      v14 = 169;
LABEL_18:
      PrintDebugMessage(v14, v13, 0, 0, 0LL);
      return v12;
    }
    *(_OWORD *)PoolWithTag = 0LL;
    *((_OWORD *)PoolWithTag + 1) = 0LL;
    *((_OWORD *)PoolWithTag + 2) = 0LL;
    *((_DWORD *)PoolWithTag + 2) = a1;
    *PoolWithTag = gpRSAccessHead;
    gpRSAccessHead = (__int64)PoolWithTag;
  }
  if ( a4 )
  {
    if ( RSAccess[4] && a2 )
    {
      v12 = -1072431090;
      LogError(-1072431090);
      AcpiDiagTraceAmlError(0LL, -1072431090);
      v14 = 171;
LABEL_17:
      v13 = a1;
      goto LABEL_18;
    }
    RSAccess[4] = a2;
    RSAccess[5] = a3;
  }
  else
  {
    if ( RSAccess[2] && a2 )
    {
      v12 = -1072431090;
      LogError(-1072431090);
      AcpiDiagTraceAmlError(0LL, -1072431090);
      v14 = 168;
      goto LABEL_17;
    }
    RSAccess[2] = a2;
    RSAccess[3] = a3;
  }
  return v4;
}
