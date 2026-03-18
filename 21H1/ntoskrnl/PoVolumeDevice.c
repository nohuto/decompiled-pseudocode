/*
 * XREFs of PoVolumeDevice @ 0x14076B2DC
 * Callers:
 *     IoCreateDevice @ 0x140702940 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x14088FB00 (IoVerifyVolume.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     PopGetDope @ 0x140396804 (PopGetDope.c)
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
      v3 = (_QWORD *)qword_140C23C98;
      if ( *(__int64 **)qword_140C23C98 != &PopVolumeDevices )
        __fastfail(3u);
      *v2 = &PopVolumeDevices;
      *(_QWORD *)(Dope + 80) = v3;
      *v3 = v2;
      qword_140C23C98 = Dope + 72;
    }
    KeReleaseGuardedMutex(&PopVolumeLock);
  }
}
