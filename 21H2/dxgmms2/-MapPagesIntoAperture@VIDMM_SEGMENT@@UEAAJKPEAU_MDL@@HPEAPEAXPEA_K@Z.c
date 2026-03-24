/*
 * XREFs of ?MapPagesIntoAperture@VIDMM_SEGMENT@@UEAAJKPEAU_MDL@@HPEAPEAXPEA_K@Z @ 0x1C00C60D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_SEGMENT::MapPagesIntoAperture(VIDMM_SEGMENT *this, __int64 a2, struct _MDL *a3)
{
  _QWORD *v3; // rax

  v3 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
  v3[5] = 0LL;
  v3[6] = 0LL;
  v3[7] = 0LL;
  v3[3] = 270LL;
  v3[4] = 13LL;
  WdLogEvent5_WdCriticalError(v3);
  return 3221225473LL;
}
