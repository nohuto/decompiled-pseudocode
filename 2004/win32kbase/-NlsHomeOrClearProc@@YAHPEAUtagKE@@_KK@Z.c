/*
 * XREFs of ?NlsHomeOrClearProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A8890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NlsHomeOrClearProc(struct tagKE *a1)
{
  __int16 v1; // dx
  __int16 v2; // dx
  __int16 v3; // dx

  v1 = *((_WORD *)a1 + 1);
  if ( (v1 & 0x800) == 0 )
  {
    v2 = v1 & 0x8F00;
    if ( (fNlsKbdConfiguration & 4) != 0 )
      v3 = v2 | 0x24;
    else
      v3 = v2 | 0xC;
    *((_WORD *)a1 + 1) = v3;
  }
  return 1LL;
}
