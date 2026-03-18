/*
 * XREFs of PoVolumeDevice @ 0x140810F24
 * Callers:
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x1409367E0 (IoVerifyVolume.c)
 * Callees:
 *     PopGetDope @ 0x14025A904 (PopGetDope.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 */

void __fastcall PoVolumeDevice(__int64 a1)
{
  __int64 Dope; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rcx

  Dope = PopGetDope(a1);
  if ( Dope )
  {
    ExAcquireFastMutex(&PopVolumeLock);
    v2 = (_QWORD *)(Dope + 72);
    if ( !*(_QWORD *)(Dope + 72) )
    {
      v3 = (_QWORD *)qword_140C231A8;
      if ( *(__int64 **)qword_140C231A8 != &PopVolumeDevices )
        __fastfail(3u);
      *v2 = &PopVolumeDevices;
      *(_QWORD *)(Dope + 80) = v3;
      *v3 = v2;
      qword_140C231A8 = Dope + 72;
    }
    KeReleaseGuardedMutex(&PopVolumeLock);
  }
}
