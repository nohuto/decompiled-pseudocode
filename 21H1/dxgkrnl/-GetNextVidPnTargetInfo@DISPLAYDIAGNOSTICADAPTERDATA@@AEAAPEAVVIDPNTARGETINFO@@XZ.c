/*
 * XREFs of ?GetNextVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAPEAVVIDPNTARGETINFO@@XZ @ 0x1C0025F94
 * Callers:
 *     ?AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02B4FA0 (-AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

struct VIDPNTARGETINFO *__fastcall DISPLAYDIAGNOSTICADAPTERDATA::GetNextVidPnTargetInfo(
        DISPLAYDIAGNOSTICADAPTERDATA *this)
{
  __int64 v1; // rax

  v1 = *((unsigned int *)this + 489);
  if ( (unsigned int)v1 >= 4 )
    return 0LL;
  else
    return (DISPLAYDIAGNOSTICADAPTERDATA *)((char *)this + 248 * v1 + 964);
}
