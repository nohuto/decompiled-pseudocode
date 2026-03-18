/*
 * XREFs of MiScrubMemoryWorker @ 0x1408DE7E0
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalGate @ 0x1403331D0 (KeSignalGate.c)
 *     MiScrubNode @ 0x14056257C (MiScrubNode.c)
 *     MiInitializeScrubPacket @ 0x1408DE690 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x1408DE790 (MiReleaseScrubPacket.c)
 */

char __fastcall MiScrubMemoryWorker(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // esi
  __int64 v4; // r8
  _DWORD *v5; // r9
  unsigned __int64 v6; // rax
  signed __int32 v7; // eax

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
  v7 = _InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
  if ( v7 == 1 )
    LOBYTE(v7) = KeSignalGate(v1 + 8, 1LL, v4, v5);
  return v7;
}
