/*
 * XREFs of GetExtendModeDecoration @ 0x1800F10E8
 * Callers:
 *     PerformSample @ 0x180034BA4 (PerformSample.c)
 *     AppendCustomSamplerShaderBody @ 0x1800F0F2C (AppendCustomSamplerShaderBody.c)
 * Callees:
 *     <none>
 */

char __fastcall GetExtendModeDecoration(char a1)
{
  switch ( a1 )
  {
    case 1:
      return 67;
    case 2:
      return 87;
    case 3:
      return 77;
  }
  return 0;
}
