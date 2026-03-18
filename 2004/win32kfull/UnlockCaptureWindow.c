/*
 * XREFs of UnlockCaptureWindow @ 0x1C0102BB0
 * Callers:
 *     zzzAttachToQueue @ 0x1C0038AB4 (zzzAttachToQueue.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01E0640 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C0090198 (UpdateRawMouseMode.c)
 */

__int64 __fastcall UnlockCaptureWindow(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rdx

  result = gpsiLock;
  v3 = (_QWORD *)(a1 + 104);
  if ( *v3 )
  {
    --*(_DWORD *)(gpsi + 6992LL);
    HMAssignmentUnlock(v3);
    return UpdateRawMouseMode(a1, v4);
  }
  return result;
}
