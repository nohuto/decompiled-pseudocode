/*
 * XREFs of RegRSAccess @ 0x1C00294E4
 * Callers:
 *     AMLIRegEventHandler @ 0x1C00292D8 (AMLIRegEventHandler.c)
 * Callees:
 *     FindRSAccess @ 0x1C00295DC (FindRSAccess.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall RegRSAccess(unsigned int a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  __int64 RSAccess; // rdi
  KIRQL v10; // al
  KIRQL v11; // dl
  __int64 v12; // rax
  unsigned int v14; // edi
  unsigned int v15; // edx
  int v16; // ecx

  v4 = 0;
  if ( a1 < 2 )
  {
    v14 = -1072431088;
    LogError(3222536208LL);
    AcpiDiagTraceAmlError(0LL, 3222536208LL);
    v16 = 170;
    goto LABEL_17;
  }
  RSAccess = FindRSAccess(a1);
  if ( !RSAccess )
  {
    RSAccess = ExAllocatePool2(64LL, 48LL, 1382837569LL);
    if ( !RSAccess )
    {
      v14 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      v15 = 0;
      v16 = 169;
LABEL_18:
      PrintDebugMessage(v16, v15, 0, 0, 0LL);
      return v14;
    }
    v10 = ExAcquireSpinLockExclusive(&RSAccessLock);
    *(_OWORD *)RSAccess = 0LL;
    v11 = v10;
    v12 = gpRSAccessHead;
    *(_OWORD *)(RSAccess + 16) = 0LL;
    gpRSAccessHead = RSAccess;
    *(_OWORD *)(RSAccess + 32) = 0LL;
    *(_DWORD *)(RSAccess + 8) = a1;
    *(_QWORD *)RSAccess = v12;
    ExReleaseSpinLockExclusive(&RSAccessLock, v11);
  }
  if ( a4 )
  {
    if ( *(_QWORD *)(RSAccess + 32) && a2 )
    {
      v14 = -1072431090;
      LogError(3222536206LL);
      AcpiDiagTraceAmlError(0LL, 3222536206LL);
      v16 = 171;
LABEL_17:
      v15 = a1;
      goto LABEL_18;
    }
    *(_QWORD *)(RSAccess + 32) = a2;
    *(_QWORD *)(RSAccess + 40) = a3;
  }
  else
  {
    if ( *(_QWORD *)(RSAccess + 16) && a2 )
    {
      v14 = -1072431090;
      LogError(3222536206LL);
      AcpiDiagTraceAmlError(0LL, 3222536206LL);
      v16 = 168;
      goto LABEL_17;
    }
    *(_QWORD *)(RSAccess + 16) = a2;
    *(_QWORD *)(RSAccess + 24) = a3;
  }
  return v4;
}
