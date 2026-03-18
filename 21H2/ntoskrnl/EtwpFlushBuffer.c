/*
 * XREFs of EtwpFlushBuffer @ 0x140798C10
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x14079885C (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1409E971C (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpFileModeCompress @ 0x1403B4AB0 (EtwpFileModeCompress.c)
 *     EtwpFlushBufferToLogfile @ 0x1406C1524 (EtwpFlushBufferToLogfile.c)
 *     EtwpSendSessionNotification @ 0x1406EF58C (EtwpSendSessionNotification.c)
 *     EtwpPrepareHeader @ 0x140798D30 (EtwpPrepareHeader.c)
 *     EtwpFlushBufferToRealtime @ 0x140798DA8 (EtwpFlushBufferToRealtime.c)
 */

__int64 __fastcall EtwpFlushBuffer(__int64 a1, unsigned int *a2, char a3)
{
  unsigned int v3; // edi
  int v4; // esi
  unsigned int *v5; // rbp
  char v7; // r14
  signed int v8; // eax
  int v10; // eax
  signed int v11; // eax

  v3 = -1073741823;
  v4 = -1073741823;
  v5 = a2;
  v7 = a3 & 1;
  if ( (unsigned int)EtwpPrepareHeader(a1, a2) == -2147483614 && !v7 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 816) & 8) != 0 )
  {
    v8 = EtwpFlushBufferToRealtime(a1, v5);
    v3 = v8;
    if ( v8 < 0 )
      EtwpSendSessionNotification(a1, 4u, v8);
  }
  if ( *(_QWORD *)(a1 + 800) )
  {
    v10 = *(_DWORD *)(a1 + 12);
    if ( (v10 & 0x4000000) != 0 && (v10 & 1) != 0 && !(unsigned int)EtwpFileModeCompress(a1, (__int64)v5) )
      v5 = *(unsigned int **)(a1 + 1152);
    v11 = EtwpFlushBufferToLogfile(a1, v5);
    v4 = v11;
    if ( v11 < 0 )
      EtwpSendSessionNotification(a1, 3u, v11);
  }
  if ( (int)(v3 + 0x80000000) < 0 || v3 == -1073741432 || v4 >= 0 )
    return 0LL;
  if ( v4 != -1073741823 )
    return (unsigned int)v4;
  return v3;
}
