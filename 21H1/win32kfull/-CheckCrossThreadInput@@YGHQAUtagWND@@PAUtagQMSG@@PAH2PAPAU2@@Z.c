/*
 * XREFs of ?CheckCrossThreadInput@@YGHQAUtagWND@@PAUtagQMSG@@PAH2PAPAU2@@Z @ 0x9C586
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxRetrievePointerInputMessage@60 @ 0x15A7AB (_xxxRetrievePointerInputMessage@60.c)
 * Callees:
 *     _CalcWakeMask@12 @ 0x69C20 (_CalcWakeMask@12.c)
 *     ?ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z @ 0x14D651 (-ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z.c)
 */

int __userpurge CheckCrossThreadInput@<eax>(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagWND *const a3,
        struct tagQMSG *a4,
        int *a5,
        int *a6,
        struct tagQMSG **a7)
{
  int v9; // eax
  int v10; // eax
  char v12; // al
  struct tagTHREADINFO *v13; // [esp+0h] [ebp-14h]
  struct tagQMSG *v14; // [esp+4h] [ebp-10h]
  int v15; // [esp+10h] [ebp-4h]

  if ( *(_DWORD *)(_gptiCurrent + 368) || *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 44) != a1 || a1 == 1 )
    goto LABEL_7;
  v9 = *(_DWORD *)(a1 + 64);
  v15 = v9;
  if ( (v9 & 0x20) != 0 )
  {
    *(_DWORD *)a3 = 0;
    *a5 = a1;
    return 0;
  }
  if ( (v9 & 0x40) != 0
    || (v10 = a2[38]) == 0
    || (v10 & 2) == 0
    || (v12 = CalcWakeMask(*(_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 12), 0), (v12 & 2) == 0 || _gptiCurrent == a2[39]) )
  {
LABEL_7:
    *(_DWORD *)a3 = a2[2] != _gptiCurrent;
    *a5 = 0;
    return 0;
  }
  *(_DWORD *)(a1 + 64) = v15 | 0x20;
  ReassignInputMessage((struct tagTHREADINFO *)a1, v13, v14);
  *(_DWORD *)(a1 + 8) = *a2;
  *(_DWORD *)a4 = 0;
  *(_DWORD *)a3 = 0;
  return 1;
}
