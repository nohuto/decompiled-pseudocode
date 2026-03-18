/*
 * XREFs of EtwpCaptureString @ 0x14067A844
 * Callers:
 *     EtwpFlushTrace @ 0x140678E30 (EtwpFlushTrace.c)
 *     EtwpStartLogger @ 0x1406798DC (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContext @ 0x14067A62C (EtwpAcquireLoggerContext.c)
 *     EtwpUpdateTrace @ 0x14077FAB8 (EtwpUpdateTrace.c)
 *     EtwpSetSoftRestartInformation @ 0x140944B54 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     RtlCreateUnicodeString @ 0x140690CB0 (RtlCreateUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpCaptureString(unsigned __int16 *a1, UNICODE_STRING *a2)
{
  unsigned int v4; // edi
  char PreviousMode; // bl
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  WCHAR *PoolWithTag; // rax
  WCHAR *v9; // rbx

  v4 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  RtlInitUnicodeString(a2, 0LL);
  if ( PreviousMode )
  {
    v6 = *a1;
    if ( (_WORD)v6 )
    {
      v7 = *((_QWORD *)a1 + 1);
      if ( (v7 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v7 + v6 > 0x7FFFFFFF0000LL || v7 + v6 < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, *a1 + 2LL, 0x50777445u);
  v9 = PoolWithTag;
  if ( !PoolWithTag
    || (memmove(PoolWithTag, *((const void **)a1 + 1), *a1),
        v9[(unsigned __int64)*a1 >> 1] = 0,
        !RtlCreateUnicodeString(a2, v9)) )
  {
    v4 = -1073741801;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v4;
}
