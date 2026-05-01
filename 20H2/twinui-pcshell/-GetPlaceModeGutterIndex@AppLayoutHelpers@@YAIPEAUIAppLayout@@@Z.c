/*
 * XREFs of ?GetPlaceModeGutterIndex@AppLayoutHelpers@@YAIPEAUIAppLayout@@@Z @ 0x180484F2C
 * Callers:
 *     ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x1804105F0 (-TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180012934 (-IsBiDiLocale@@YAHK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppLayoutHelpers::GetPlaceModeGutterIndex(AppLayoutHelpers *this, struct IAppLayout *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  LANGID ThreadUILanguage; // ax

  v2 = (*(__int64 (__fastcall **)(AppLayoutHelpers *, __int64))(*(_QWORD *)this + 80LL))(this, 2LL);
  v3 = (unsigned int)(v2 - 1) >> 1;
  if ( (v2 & 1) == 0 )
  {
    ThreadUILanguage = GetThreadUILanguage();
    if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
      ++v3;
  }
  return v3;
}
