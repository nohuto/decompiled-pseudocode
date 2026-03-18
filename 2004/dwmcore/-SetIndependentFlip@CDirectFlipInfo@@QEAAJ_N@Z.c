/*
 * XREFs of ?SetIndependentFlip@CDirectFlipInfo@@QEAAJ_N@Z @ 0x180185818
 * Callers:
 *     ?PresentNeeded@COverlayContext@@QEAA_NXZ @ 0x180032E98 (-PresentNeeded@COverlayContext@@QEAA_NXZ.c)
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x180185110 (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirectFlipInfo::SetIndependentFlip(CDirectFlipInfo *this, char a2)
{
  __int64 *v2; // r14
  int v4; // edi
  int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx

  v2 = (__int64 *)*((_QWORD *)this + 2);
  v4 = *((_DWORD *)this + 24);
  v5 = *((_DWORD *)this + 15);
  v6 = *v2;
  LOBYTE(v7) = (*(__int64 (__fastcall **)(__int64 *))(*v2 + 256))(v2);
  LOBYTE(v8) = a2;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, _QWORD, int, int))(v6 + 272))(v2, v8, v7, 0LL, v5, v4);
  v11 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x20Au, 0LL);
  return v11;
}
