/*
 * XREFs of KiUmsExceptionFilter @ 0x1408BDEC4
 * Callers:
 *     KiParkUmsThread @ 0x140526160 (KiParkUmsThread.c)
 *     KeUpdateUmsThreadState @ 0x1408BD8BC (KeUpdateUmsThreadState.c)
 *     NtUmsThreadYield @ 0x1408BDEF0 (NtUmsThreadYield.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUmsExceptionFilter(_DWORD *a1, int **a2)
{
  int *v2; // r8
  int v3; // eax

  v2 = *a2;
  v3 = **a2;
  if ( v3 == -1073741818 && (unsigned int)v2[6] >= 3 )
    v3 = v2[12];
  *a1 = v3;
  return 1LL;
}
