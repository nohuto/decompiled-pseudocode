/*
 * XREFs of ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01F0A94
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     IsTouchpadPointerInputMessage @ 0x1C01E17A8 (IsTouchpadPointerInputMessage.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C01F09BC (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     GetPTPShellListener @ 0x1C0213738 (GetPTPShellListener.c)
 */

__int64 __fastcall IsPTPAllowedOnThread(struct tagTHREADINFO *a1, int a2, __int16 a3)
{
  unsigned int v6; // ebx
  struct _LIST_ENTRY *ThreadPointerData; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx

  v6 = *((_WORD *)a1 + 617) & 1;
  if ( !v6
    && CTouchProcessor::IsPointerMessageTouchpad(gpTouchProcessor, a1, 0LL, a3)
    && IsTouchpadPointerInputMessage(a2) )
  {
    ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)a1 + 68, a3);
    v6 = 0;
    if ( ThreadPointerData )
    {
      v11 = GetPTPShellListener(v8, ThreadPointerData) ? *(_QWORD *)GetPTPShellListener(v10, v9) : 0LL;
      if ( *(_QWORD *)(v9 + 40) == v11 )
        return 1;
    }
  }
  return v6;
}
