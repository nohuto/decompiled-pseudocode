/*
 * XREFs of PoVolumeDevice @ 0x14078028C
 * Callers:
 *     IoCreateDevice @ 0x14071B4E0 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x140893EE0 (IoVerifyVolume.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     PopGetDope @ 0x140399D04 (PopGetDope.c)
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
      v3 = (_QWORD *)qword_140C23F08;
      if ( *(__int64 **)qword_140C23F08 != &PopVolumeDevices )
        __fastfail(3u);
      *v2 = &PopVolumeDevices;
      *(_QWORD *)(Dope + 80) = v3;
      *v3 = v2;
      qword_140C23F08 = Dope + 72;
    }
    KeReleaseGuardedMutex(&PopVolumeLock);
  }
}
