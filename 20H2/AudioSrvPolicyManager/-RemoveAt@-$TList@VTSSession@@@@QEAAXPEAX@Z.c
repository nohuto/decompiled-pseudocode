/*
 * XREFs of ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x18002B478
 * Callers:
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x1800289C8 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180028C94 (-TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x1800292E8 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     TS_AudioProtocolNotifyRundown @ 0x18002AE20 (TS_AudioProtocolNotifyRundown.c)
 * Callees:
 *     <none>
 */

void __fastcall TList<TSSession>::RemoveAt(__int64 a1, _QWORD *a2)
{
  if ( a2 == qword_18004FF98 )
    qword_18004FF98 = (void *)*a2;
  else
    *(_QWORD *)a2[1] = *a2;
  if ( a2 == (_QWORD *)qword_18004FFA0 )
    qword_18004FFA0 = a2[1];
  else
    *(_QWORD *)(*a2 + 8LL) = a2[1];
  --dword_18004FFA8;
  *a2 = 0LL;
  a2[1] = 0LL;
  operator delete(a2, (const struct std::nothrow_t *)0x18);
}
