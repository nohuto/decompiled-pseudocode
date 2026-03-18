/*
 * XREFs of ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x180167D34
 * Callers:
 *     ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x1800D1BF8 (-LoadRuntime@CMmcssTask@@AEAAJXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180158E84 (--1CComposition@@MEAA@XZ.c)
 *     ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x18016858C (--1CGlobalSurfaceManager@@MEAA@XZ.c)
 *     ??1CGlobalManipulationManager@@EEAA@XZ @ 0x180223090 (--1CGlobalManipulationManager@@EEAA@XZ.c)
 *     ??1CGlobalMit@@UEAA@XZ @ 0x1802340A8 (--1CGlobalMit@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMmcssTask::UnloadRuntime(CMmcssTask *this)
{
  _QWORD *v2; // rcx
  void (__fastcall *v3)(_QWORD); // rax
  HMODULE v4; // rcx

  v2 = (_QWORD *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    v3 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 8);
    if ( v3 && v2[17] )
    {
      v3(v2[17]);
      *(_DWORD *)(*((_QWORD *)this + 5) + 128LL) = 0;
      v2 = (_QWORD *)*((_QWORD *)this + 5);
    }
    operator delete(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  v4 = (HMODULE)*((_QWORD *)this + 6);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  FreeLibrary(v4);
  *((_QWORD *)this + 6) = 0LL;
}
