/*
 * XREFs of ?CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEAA?AU1@AEBU1@@Z @ 0x1C002803C
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00275DC (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  unsigned int v4; // r9d
  unsigned int v5; // r11d
  unsigned int v7; // eax
  unsigned int v8; // r8d
  unsigned int v9; // edx
  unsigned int v11; // eax

  v4 = *a1;
  v5 = a2[1] & 0x80000000;
  *a2 = 0;
  a2[1] = v5 & 0x7FFFFFFF;
  v7 = *a3;
  v8 = v4 - *a3;
  if ( v4 >= v7 )
    goto LABEL_2;
  v11 = -1;
  if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                        - xmmword_1C0256450) <= 0xFFFFFFFF )
    v11 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
        - xmmword_1C0256450;
  if ( v8 <= v11 )
LABEL_2:
    *a2 = v8;
  v9 = a3[1] & 0x7FFFFFFF;
  if ( (a1[1] & 0x7FFFFFFF) > v9 )
    a2[1] = (v5 | (a1[1] - v9)) & 0x7FFFFFFF;
  return a2;
}
