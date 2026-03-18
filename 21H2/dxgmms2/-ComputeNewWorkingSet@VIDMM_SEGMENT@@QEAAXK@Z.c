/*
 * XREFs of ?ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z @ 0x1C009A720
 * Callers:
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0098DD4 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C009A5E0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SEGMENT::ComputeNewWorkingSet(VIDMM_SEGMENT *this, unsigned int a2)
{
  __int64 v2; // r9

  if ( a2 )
  {
    v2 = *((_QWORD *)this + 6) - *((_QWORD *)this + 9);
    *((_QWORD *)this + 13) = v2 * (unsigned __int64)(unsigned int)dword_1C006E370 / 0x64 / a2;
    *((_QWORD *)this + 14) = v2 * (unsigned __int64)(unsigned int)dword_1C006E374 / 0x64 / a2;
  }
}
