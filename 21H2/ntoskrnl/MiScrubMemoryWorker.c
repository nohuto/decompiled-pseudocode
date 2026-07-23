/*
 * XREFs of MiScrubMemoryWorker @ 0x1408DC100
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 *     MiScrubNode @ 0x14056428C (MiScrubNode.c)
 *     MiInitializeScrubPacket @ 0x1408DBFB0 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x1408DC0B0 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiScrubMemoryWorker(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // esi
  unsigned __int64 v4; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)a1;
  v3 = MiInitializeScrubPacket((__int64 *)a1);
  if ( v3 >= 0 )
  {
    MiScrubNode(a1);
    MiReleaseScrubPacket(a1);
  }
  v4 = *(_QWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 12) = v3;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 40), v4);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return KeSignalGate(v1 + 8, 1);
  return result;
}
