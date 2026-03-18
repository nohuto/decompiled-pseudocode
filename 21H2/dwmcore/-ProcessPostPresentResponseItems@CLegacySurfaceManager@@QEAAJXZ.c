/*
 * XREFs of ?ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ @ 0x1800D7A14
 * Callers:
 *     ?PostPresent@CGlobalSurfaceManager@@UEAAJ_N@Z @ 0x1800D79B0 (-PostPresent@CGlobalSurfaceManager@@UEAAJ_N@Z.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x180194CC4 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySurfaceManager::ProcessPostPresentResponseItems(CLegacySurfaceManager *this)
{
  int v1; // ebx
  __int64 i; // rbp
  __int64 v5; // r14
  int v6; // eax
  __int64 v7; // rcx
  int v8; // esi

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 42); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * i);
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
    v8 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x181u);
    if ( !v1 || v1 >= 0 && v8 < 0 )
      v1 = v8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  *((_DWORD *)this + 42) = 0;
  return (unsigned int)v1;
}
