/*
 * XREFs of EtwpFlushBuffer @ 0x14063990C
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x140638A20 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpFlushBufferToLogfile @ 0x14060A094 (EtwpFlushBufferToLogfile.c)
 *     EtwpPrepareHeader @ 0x1406399D4 (EtwpPrepareHeader.c)
 *     EtwpFlushBufferToRealtime @ 0x14063AA24 (EtwpFlushBufferToRealtime.c)
 *     EtwpSendSessionNotification @ 0x1406B87C8 (EtwpSendSessionNotification.c)
 */

__int64 __fastcall EtwpFlushBuffer(__int64 a1, unsigned int *a2, char a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  char v7; // bp
  int v8; // eax
  int v10; // eax

  v3 = -1073741823;
  v4 = -1073741823;
  v7 = a3 & 1;
  if ( (unsigned int)EtwpPrepareHeader() == -2147483614 && !v7 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 832) & 8) != 0 )
  {
    v8 = EtwpFlushBufferToRealtime(a1, a2);
    v3 = v8;
    if ( v8 < 0 )
      EtwpSendSessionNotification(a1, 4LL, (unsigned int)v8);
  }
  if ( *(_QWORD *)(a1 + 816) )
  {
    v10 = EtwpFlushBufferToLogfile(a1, a2);
    v4 = v10;
    if ( v10 < 0 )
      EtwpSendSessionNotification(a1, 3LL, (unsigned int)v10);
  }
  if ( (int)(v3 + 0x80000000) < 0 || v3 == -1073741432 || v4 >= 0 )
    return 0LL;
  if ( v4 != -1073741823 )
    return (unsigned int)v4;
  return v3;
}
