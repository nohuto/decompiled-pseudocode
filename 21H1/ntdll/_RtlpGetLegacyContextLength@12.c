/*
 * XREFs of _RtlpGetLegacyContextLength@12 @ 0x4B35C4C3
 * Callers:
 *     _RtlGetExtendedContextLength2@16 @ 0x4B35B780 (_RtlGetExtendedContextLength2@16.c)
 * Callees:
 *     <none>
 */

int *__fastcall RtlpGetLegacyContextLength(int a1, int *a2, int *a3)
{
  int v3; // eax
  int v4; // esi
  int *result; // eax
  int v6; // [esp-4h] [ebp-8h]

  v3 = 0;
  v4 = 0;
  if ( (a1 & 0x10000) == 0 )
  {
    if ( (a1 & 0x100000) != 0 )
    {
      v3 = 1232;
    }
    else
    {
      if ( (a1 & 0x200000) != 0 )
      {
        v3 = 416;
        v6 = 8;
        goto LABEL_10;
      }
      if ( (a1 & 0x400000) == 0 )
        goto LABEL_11;
      v3 = 912;
    }
    v6 = 16;
    goto LABEL_10;
  }
  v3 = 716;
  v6 = 4;
LABEL_10:
  v4 = v6;
LABEL_11:
  if ( a2 )
    *a2 = v3;
  result = a3;
  if ( a3 )
    *a3 = v4;
  return result;
}
