/*
 * XREFs of ?PostCOMPOSITEDInvalidateAPC@@YGHQAUtagWND@@PBUtagRECT@@@Z @ 0x153481
 * Callers:
 *     _FlushWEFCOMPOSITEDDCEBounds@4 @ 0x15375C (_FlushWEFCOMPOSITEDDCEBounds@4.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall PostCOMPOSITEDInvalidateAPC(_DWORD *a1, _DWORD *a2)
{
  PKTHREAD CurrentThread; // eax
  _DWORD v4[7]; // [esp+8h] [ebp-20h] BYREF

  v4[0] = 0;
  v4[1] = 0;
  v4[2] = *a1;
  v4[3] = *a2;
  v4[4] = a2[1];
  v4[5] = a2[2];
  v4[6] = a2[3];
  CurrentThread = KeGetCurrentThread();
  return UserPostNKAPCBuffer(
           CurrentThread,
           KernelAPCInvalidateCOMPOSITEDWnd,
           RundownAPCInvalidateCOMPOSITEDWnd,
           NormalAPCInvalidateCOMPOSITEDWnd,
           v4,
           28);
}
