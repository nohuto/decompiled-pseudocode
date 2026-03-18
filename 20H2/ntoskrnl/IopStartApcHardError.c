/*
 * XREFs of IopStartApcHardError @ 0x1408958B0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140292560 (IofCompleteRequest.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x1406EE080 (PsCreateSystemThreadEx.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall IopStartApcHardError(PIRP *P)
{
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  Handle = 0LL;
  if ( (int)PsCreateSystemThreadEx((__int64)&Handle, 0, 0LL, 0LL, 0LL, (__int64)IopApcHardError, (__int64)P, 0LL, 0LL) >= 0 )
  {
    ZwClose(Handle);
  }
  else
  {
    IofCompleteRequest(P[4], 1);
    ExFreePoolWithTag(P, 0);
  }
}
