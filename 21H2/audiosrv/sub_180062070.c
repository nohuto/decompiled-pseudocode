/*
 * XREFs of sub_180062070 @ 0x180062070
 * Callers:
 *     sub_180061FC8 @ 0x180061FC8 (sub_180061FC8.c)
 * Callees:
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 */

__int64 __fastcall sub_180062070(_QWORD *a1)
{
  unsigned int v2; // ebx
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int LastError; // eax

  v2 = 0;
  if ( RtlDllShutdownInProgress() )
  {
    v2 = -2147023781;
LABEL_7:
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 4) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 2u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 10LL, &unk_1801726E8, v2);
    }
    return v2;
  }
  ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
  a1[10] = ThreadpoolCleanupGroup;
  if ( ThreadpoolCleanupGroup )
  {
    a1[4] = 0LL;
    a1[3] = ThreadpoolCleanupGroup;
  }
  else
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( (v2 & 0x80000000) != 0 )
    goto LABEL_7;
  return v2;
}
