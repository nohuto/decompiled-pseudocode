/*
 * XREFs of ?DeferNotifyDelegateCapture@@YGHPAUtagTHREADINPUTPOINTERLIST@@GKPAUtagWND@@@Z @ 0x15AC4C
 * Callers:
 *     __DelegateCapturePointers@8 @ 0x15A503 (__DelegateCapturePointers@8.c)
 * Callees:
 *     ?FindThreadPointerData@@YGPAUtagTHREADPOINTERDATA@@PAU_LIST_ENTRY@@G@Z @ 0x15AD87 (-FindThreadPointerData@@YGPAUtagTHREADPOINTERDATA@@PAU_LIST_ENTRY@@G@Z.c)
 */

int __userpurge DeferNotifyDelegateCapture@<eax>(
        int a1@<ecx>,
        struct tagTHREADINPUTPOINTERLIST *a2,
        int a3,
        unsigned int a4,
        struct tagWND *a5)
{
  struct tagTHREADPOINTERDATA *ThreadPointerData; // edi
  int v7; // esi
  int result; // eax
  struct _LIST_ENTRY *v9; // [esp+0h] [ebp-10h]
  unsigned __int16 v10; // [esp+4h] [ebp-Ch]
  _DWORD *v11; // [esp+Ch] [ebp-4h] BYREF

  ThreadPointerData = FindThreadPointerData(v9, v10);
  if ( !ThreadPointerData )
    return 0;
  v7 = 0;
  v11 = 0;
  CTouchProcessor::GetPointerCapture(_gpTouchProcessor, *((_DWORD *)ThreadPointerData + 4), 0, (void **)&v11, 0);
  if ( v11 )
    v7 = v11[20];
  if ( !v7
    || v7 != a3
    || a2 != (struct tagTHREADINPUTPOINTERLIST *)CTouchProcessor::GetPointerDownFrame(
                                                   _gpTouchProcessor,
                                                   *((_DWORD *)ThreadPointerData + 4)) )
  {
    return 0;
  }
  *((_DWORD *)ThreadPointerData + 7) |= 4u;
  result = 1;
  *(_DWORD *)(a1 + 20) = 1;
  return result;
}
