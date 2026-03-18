/*
 * XREFs of ?bLeft@@YGHPAVEVECTORFX@@PAU_POINTFIX@@PA_J@Z @ 0x235406
 * Callers:
 *     ?vDetermineDrawVertex@WIDEPENOBJ@@QAEXAAVEVECTORFX@@AAVLINEDATA@@@Z @ 0x236A78 (-vDetermineDrawVertex@WIDEPENOBJ@@QAEXAAVEVECTORFX@@AAVLINEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __userpurge bLeft@<eax>(_DWORD *a1@<edx>, int *a2@<ecx>, struct EVECTORFX *a3, struct _POINTFIX *a4, __int64 *a5)
{
  __int64 v5; // kr08_8

  v5 = *a2 * (__int64)(a1[3] - a1[1]) - a2[1] * (__int64)(a1[2] - *a1);
  *(_QWORD *)a3 = v5;
  return v5 < 0;
}
