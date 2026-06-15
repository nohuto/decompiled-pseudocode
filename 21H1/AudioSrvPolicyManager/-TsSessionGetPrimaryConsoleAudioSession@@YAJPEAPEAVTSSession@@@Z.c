/*
 * XREFs of ?TsSessionGetPrimaryConsoleAudioSession@@YAJPEAPEAVTSSession@@@Z @ 0x18002E1C8
 * Callers:
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x18002FE80 (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 *     ?TsSessionOnApmResumeSuspendStateChanged@@YAXXZ @ 0x18002FF98 (-TsSessionOnApmResumeSuspendStateChanged@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TsSessionGetPrimaryConsoleAudioSession(struct TSSession **a1)
{
  _QWORD *v2; // rax
  struct TSSession *v3; // rdx
  unsigned int v4; // ebx

  EnterCriticalSection(&stru_180056188);
  v2 = qword_180056208;
  *a1 = 0LL;
  while ( v2 )
  {
    v3 = (struct TSSession *)v2[2];
    v2 = (_QWORD *)*v2;
    if ( *(_DWORD *)v3 && *((_DWORD *)v3 + 86) )
    {
      *a1 = v3;
      break;
    }
  }
  v4 = *a1 == 0LL ? 0x490 : 0;
  LeaveCriticalSection(&stru_180056188);
  return v4;
}
