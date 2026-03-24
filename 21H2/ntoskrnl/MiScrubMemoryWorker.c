/*
 * XREFs of MiScrubMemoryWorker @ 0x1408DBFA0
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalGate @ 0x1402C2B70 (KeSignalGate.c)
 *     MiScrubNode @ 0x14056404C (MiScrubNode.c)
 *     MiInitializeScrubPacket @ 0x1408DBE50 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x1408DBF50 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiScrubMemoryWorker(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // esi
  __int64 v4; // r8
  _DWORD *v5; // r9
  unsigned __int64 v6; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)a1;
  v3 = MiInitializeScrubPacket((__int64 *)a1);
  if ( v3 >= 0 )
  {
    MiScrubNode(a1);
    MiReleaseScrubPacket(a1);
  }
  v6 = *(_QWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 12) = v3;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 40), v6);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return KeSignalGate(v1 + 8, 1LL, v4, v5);
  return result;
}
