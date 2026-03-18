/*
 * XREFs of ?EnableIndependentFlip@CDirectFlipInfo@@QEAAJXZ @ 0x1801DF4A4
 * Callers:
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x1801DEEC8 (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetVidPnSourceId@CDirectFlipInfo@@IEBAIXZ @ 0x1801DF6C8 (-GetVidPnSourceId@CDirectFlipInfo@@IEBAIXZ.c)
 */

__int64 __fastcall CDirectFlipInfo::EnableIndependentFlip(CDirectFlipInfo *this)
{
  __int64 v1; // rsi
  __int64 (__fastcall *v3)(__int64, _QWORD, _QWORD, _QWORD); // rdi
  unsigned int VidPnSourceId; // eax
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  v1 = *((_QWORD *)this + 2);
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v1 + 336LL);
  VidPnSourceId = CDirectFlipInfo::GetVidPnSourceId(this);
  v5 = v3(v1, *((_QWORD *)this + 3), VidPnSourceId, 0LL);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, 0x227u);
  return v7;
}
