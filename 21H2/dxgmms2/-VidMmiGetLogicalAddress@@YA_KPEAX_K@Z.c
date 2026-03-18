/*
 * XREFs of ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1C00E1F98
 * Callers:
 *     ?RegisterSchLog@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_SCH_LOG@@@Z @ 0x1C0047874 (-RegisterSchLog@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_SCH_LOG@@@Z.c)
 *     ?RemoveSchLog@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SCH_LOG@@@Z @ 0x1C0047948 (-RemoveSchLog@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SCH_LOG@@@Z.c)
 * Callees:
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C00027A0 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 */

__int64 __fastcall VidMmiGetLogicalAddress(void *a1, __int64 a2)
{
  __int64 result; // rax

  result = SysMmGetLogicalAddress(a1);
  if ( result )
    result += a2;
  return result;
}
