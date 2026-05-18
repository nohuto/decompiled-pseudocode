/*
 * XREFs of ?SignalDwmExited@@YA_NXZ @ 0x180001718
 * Callers:
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x180002660 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 * Callees:
 *     <none>
 */

bool SignalDwmExited(void)
{
  int v1; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0xFFFFFFFF00000001uLL;
  RtlPublishWnfStateData(WNF_SEB_MIXED_REALITY, 0LL, &v2, 8LL, 0LL);
  v1 = 0;
  return (int)RtlPublishWnfStateData(WNF_DWM_RUNNING, 0LL, &v1, 4LL, 0LL) >= 0;
}
