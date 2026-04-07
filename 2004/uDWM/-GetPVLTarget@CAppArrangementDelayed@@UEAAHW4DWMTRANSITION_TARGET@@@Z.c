/*
 * XREFs of ?GetPVLTarget@CAppArrangementDelayed@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800AEDD0
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B2620 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppArrangementDelayed::GetPVLTarget(__int64 a1, __int16 a2)
{
  unsigned int v2; // r9d
  int v3; // ecx
  int v4; // edx
  unsigned int *i; // r8

  v2 = -1;
  v3 = 0;
  v4 = a2 & 0xFFF;
  for ( i = `CAppArrangementDelayed::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable; (*i & 0xFFF) != v4; i += 2 )
  {
    if ( (unsigned int)++v3 >= 0x13 )
      return v2;
  }
  return `CAppArrangementDelayed::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable[2 * v3 + 1];
}
