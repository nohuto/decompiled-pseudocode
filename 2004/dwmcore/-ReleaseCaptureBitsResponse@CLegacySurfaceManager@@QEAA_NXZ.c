/*
 * XREFs of ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x18017A708
 * Callers:
 *     ?PostPresent@CGlobalSurfaceManager@@UEAAJ_N@Z @ 0x1800BF590 (-PostPresent@CGlobalSurfaceManager@@UEAAJ_N@Z.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x180165C58 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 *     ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x180194D00 (-SendResponse@CaptureBitsResponse@@UEAAJJ@Z.c)
 * Callees:
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x180035438 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CLegacySurfaceManager::ReleaseCaptureBitsResponse(CLegacySurfaceManager *this)
{
  char v2; // bl
  CResponseItem *v3; // rcx

  v2 = 0;
  v3 = (CResponseItem *)*((_QWORD *)this + 26);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 220) )
    {
      (*(void (__fastcall **)(CResponseItem *))(*(_QWORD *)v3 + 32LL))(v3);
      v3 = (CResponseItem *)*((_QWORD *)this + 26);
      *((_BYTE *)this + 220) = 0;
    }
    CResponseItem::QueueResponse(v3);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 8LL))(*((_QWORD *)this + 26));
    *((_QWORD *)this + 26) = 0LL;
    *((_DWORD *)this + 54) = 0;
    return 1;
  }
  return v2;
}
