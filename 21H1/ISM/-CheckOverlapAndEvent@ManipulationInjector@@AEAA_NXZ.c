/*
 * XREFs of ?CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ @ 0x1800C22F8
 * Callers:
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800C35F4 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800C39C8 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 * Callees:
 *     ?CheckOverlap@ManipulationInjector@@AEAA_NI@Z @ 0x1800C2160 (-CheckOverlap@ManipulationInjector@@AEAA_NI@Z.c)
 */

char __fastcall ManipulationInjector::CheckOverlapAndEvent(
        ManipulationInjector *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v5; // di
  void *v6; // rcx

  v5 = ManipulationInjector::CheckOverlap(this, 0, a3, a4);
  if ( v5 )
  {
    v6 = (void *)*((_QWORD *)this + 98);
    if ( v6 )
    {
      if ( !*((_BYTE *)this + 12) )
        *((_BYTE *)this + 12) = WaitForSingleObject(v6, 0) == 0;
    }
  }
  return v5;
}
