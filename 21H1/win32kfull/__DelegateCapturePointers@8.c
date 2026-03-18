/*
 * XREFs of __DelegateCapturePointers@8 @ 0x15A503
 * Callers:
 *     _EditionDelegateCapturePointers@8 @ 0x15A000 (_EditionDelegateCapturePointers@8.c)
 *     ?DelegateCapturePointersMitOn@@YGHIPAI0@Z @ 0x15EEA2 (-DelegateCapturePointersMitOn@@YGHIPAI0@Z.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x6FF02 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z.c)
 *     ?DelegateDiscardMessages@@YGXPAUtagQ@@HPAUtagDELEGATEPOINTERMAP@@@Z @ 0x159CFC (-DelegateDiscardMessages@@YGXPAUtagQ@@HPAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     _WPP_RECORDER_SF_LHL@32 @ 0x15A38B (_WPP_RECORDER_SF_LHL@32.c)
 *     ?DeferNotifyDelegateCapture@@YGHPAUtagTHREADINPUTPOINTERLIST@@GKPAUtagWND@@@Z @ 0x15AC4C (-DeferNotifyDelegateCapture@@YGHPAUtagTHREADINPUTPOINTERLIST@@GKPAUtagWND@@@Z.c)
 */

int __usercall _DelegateCapturePointers@<eax>(int a1@<edx>, unsigned int a2@<ecx>, unsigned int a3@<esi>)
{
  unsigned int v4; // edi
  unsigned int *v5; // esi
  struct tagTHREADINPUTPOINTERLIST *v7; // [esp-Ch] [ebp-28h]
  unsigned __int16 v8; // [esp-8h] [ebp-24h]
  unsigned int v9; // [esp-4h] [ebp-20h]
  int v10; // [esp-4h] [ebp-20h]
  struct tagWND *v11; // [esp+0h] [ebp-1Ch]
  struct tagDELEGATEPOINTERMAP *v12; // [esp+0h] [ebp-1Ch]
  _DWORD v13[3]; // [esp+8h] [ebp-14h] BYREF
  int v14; // [esp+14h] [ebp-8h]
  int v15; // [esp+18h] [ebp-4h]

  v4 = 0;
  if ( a2 )
  {
    v9 = a3;
    v5 = (unsigned int *)(a1 + 4);
    do
    {
      if ( v5[27] )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_LHL(a2, 19, a2, v4, *((_WORD *)v5 - 2), *v5);
        v8 = v5[21];
        v7 = (struct tagTHREADINPUTPOINTERLIST *)*v5;
        v15 = *(_DWORD *)(v5[21] + 8);
        v14 = DeferNotifyDelegateCapture(v7, v8, v9, v11);
        if ( v14 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(19, 20, &WPP_b43beeb5a22232e36856aa8311da4939_Traceguids);
          SetWakeBit(v15, 4096);
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(19, 21, &WPP_b43beeb5a22232e36856aa8311da4939_Traceguids);
          CTouchProcessor::SetPointerInfoNodeFlagFromEdition(
            _gpTouchProcessor,
            *v5,
            *((_WORD *)v5 - 2),
            (unsigned int)&loc_1FFFFC + 4);
        }
        CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v13, *(_DWORD *)(v15 + 236));
        DelegateDiscardMessages(v14, *(_DWORD *)(v15 + 236), (unsigned int)v5, (struct tagQ *)(v5 - 1), v10, v12);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_LHL(a2, 18, a2, v4, *((_WORD *)v5 - 2), *v5);
      }
      ++v4;
      v5 += 30;
    }
    while ( v4 < a2 );
  }
  return 1;
}
