/*
 * XREFs of ?PointerMsgIdFromHookCall@@YGKPAUtagTHREADINFO@@IJ@Z @ 0x159F54
 * Callers:
 *     _xxxPointerCallHook@20 @ 0x15A676 (_xxxPointerCallHook@20.c)
 * Callees:
 *     _IsMiPPointerMessage@8 @ 0x14E3B9 (_IsMiPPointerMessage@8.c)
 *     ?GetThreadPointerData@@YGKPAUtagTHREADINPUTPOINTERLIST@@GPAKPAHPAPAUHWND__@@@Z @ 0x15ADC8 (-GetThreadPointerData@@YGKPAUtagTHREADINPUTPOINTERLIST@@GPAKPAHPAPAUHWND__@@@Z.c)
 */

unsigned int __userpurge PointerMsgIdFromHookCall@<eax>(
        int a1@<edx>,
        struct tagTHREADINFO *a2,
        unsigned int a3,
        int a4)
{
  int v4; // esi
  int v5; // edx
  int v6; // edx
  unsigned int *v7; // ecx
  int *v9; // [esp+0h] [ebp-Ch]
  HWND *v10; // [esp+4h] [ebp-8h]

  v4 = 0;
  v5 = a1 - 3;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 8 && !IsMiPPointerMessage(*((void **)a2 + 3)) )
        return *((_DWORD *)a2 + 1);
    }
    else if ( !IsMiPPointerMessage(*((void **)a2 + 2)) )
    {
      return *(_DWORD *)a2;
    }
  }
  else if ( !IsMiPPointerMessage(*((void **)a2 + 1)) )
  {
    return GetThreadPointerData(0, 0, v7, v9, v10);
  }
  return v4;
}
