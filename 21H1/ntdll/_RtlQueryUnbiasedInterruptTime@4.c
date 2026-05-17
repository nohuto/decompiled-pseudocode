/*
 * XREFs of _RtlQueryUnbiasedInterruptTime@4 @ 0x4B2DC510
 * Callers:
 *     <none>
 * Callees:
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 *     _RtlNtStatusToDosErrorNoTeb@4 @ 0x4B2E5FE0 (_RtlNtStatusToDosErrorNoTeb@4.c)
 */

int __stdcall RtlQueryUnbiasedInterruptTime(_DWORD *a1)
{
  int v1; // edx
  int result; // eax
  struct _TEB *v3; // eax

  if ( a1 )
  {
    while ( MEMORY[0x7FFE000C] != MEMORY[0x7FFE0010] )
      _mm_pause();
    v1 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
    a1[1] = (unsigned __int64)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias) >> 32;
    result = 1;
    *a1 = v1;
  }
  else
  {
    v3 = (struct _TEB *)RtlNtStatusToDosErrorNoTeb(-1073741811);
    RtlSetLastWin32Error(v3);
    return 0;
  }
  return result;
}
