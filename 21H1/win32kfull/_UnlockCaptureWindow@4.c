/*
 * XREFs of _UnlockCaptureWindow@4 @ 0x9D16E
 * Callers:
 *     _zzzAttachToQueue@16 @ 0xC7DF0 (_zzzAttachToQueue@16.c)
 *     ?CancelInputState@@YGXPAUtagTHREADINFO@@K@Z @ 0x14CC2B (-CancelInputState@@YGXPAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     _UpdateRawMouseMode@4 @ 0x448A8 (_UpdateRawMouseMode@4.c)
 */

int __stdcall UnlockCaptureWindow(int *a1)
{
  int *v1; // esi
  int i; // ecx
  int result; // eax
  int *v4; // esi
  int j; // ecx

  v1 = a1;
  for ( i = 3; i; --i )
    result = *v1++;
  v4 = (int *)gpsiLock;
  for ( j = 3; j; --j )
    result = *v4++;
  if ( a1[14] )
  {
    --*(_DWORD *)(_gpsi + 6236);
    HMAssignmentUnlock(a1 + 14);
    return UpdateRawMouseMode(a1);
  }
  return result;
}
