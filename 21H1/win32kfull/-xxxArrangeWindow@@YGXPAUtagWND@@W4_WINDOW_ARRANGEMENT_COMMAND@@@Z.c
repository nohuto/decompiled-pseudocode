/*
 * XREFs of ?xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x173243
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 *     _xxxHandleNCMouseGuys@16 @ 0x18587E (_xxxHandleNCMouseGuys@16.c)
 * Callees:
 *     ?DisableStackSwap@CKernelStackSwap@@QAEXXZ @ 0x4505C (-DisableStackSwap@CKernelStackSwap@@QAEXXZ.c)
 *     ?TryEnableStackSwap@CKernelStackSwap@@QAEXXZ @ 0x450C6 (-TryEnableStackSwap@CKernelStackSwap@@QAEXXZ.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z @ 0xF4E0E (-BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?ArrangeActionCompatibleWithStyle@@YGHPAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x170BFD (-ArrangeActionCompatibleWithStyle@@YGHPAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?EvaluateArrangeState@@YG?AW4_WARR_STATES@@PAUtagWND@@@Z @ 0x1710C7 (-EvaluateArrangeState@@YG-AW4_WARR_STATES@@PAUtagWND@@@Z.c)
 *     ?xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z @ 0x172C47 (-xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YGXPAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PAU_MOVESIZEDATA@@PAJ@Z @ 0x174574 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YGXPAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES.c)
 *     ?WindowArrangementAllowed@@YG_NPAUtagWND@@@Z @ 0x1857A0 (-WindowArrangementAllowed@@YG_NPAUtagWND@@@Z.c)
 */

void __fastcall xxxArrangeWindow(_DWORD *a1, int a2)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ebx
  unsigned __int16 v7; // cx
  struct _MOVESIZEDATA *v8; // edi
  struct tagWND *v9; // [esp+0h] [ebp-170h]
  int v10; // [esp+10h] [ebp-160h] BYREF
  _DWORD *v11; // [esp+14h] [ebp-15Ch]
  struct _MOVESIZEDATA *v12; // [esp+18h] [ebp-158h]
  char v13[4]; // [esp+1Ch] [ebp-154h] BYREF
  int v14; // [esp+20h] [ebp-150h]
  _DWORD v15[3]; // [esp+24h] [ebp-14Ch] BYREF
  _DWORD v16[79]; // [esp+30h] [ebp-140h] BYREF

  if ( WindowArrangementAllowed(v9)
    && (unsigned int)(a2 - 16) <= 7
    && (*(_DWORD *)*_gpDispInfo > 1u || a2 != 22 && a2 != 23)
    && (a2 != 18 || !ShellWindowManagement::BehaviorEnabled(a1[3], 2u)) )
  {
    v4 = EvaluateArrangeState(a1);
    v12 = (struct _MOVESIZEDATA *)v4;
    if ( v4 != 6 )
    {
      v5 = v4 + 6 * (a2 - 16);
      v6 = dword_258678[v5];
      if ( v6 != 8 )
      {
        if ( ArrangeActionCompatibleWithStyle(a1, dword_258678[v5]) )
        {
          v10 = 0;
          memset(v16, 0, 0x138u);
          v7 = 0;
          v11 = 0;
          memset(v15, 0, sizeof(v15));
          v13[0] = 0;
          v14 = 0;
          if ( (unsigned int)(v6 - 3) > 4 )
          {
            v8 = v12;
          }
          else
          {
            v11 = v16;
            if ( *(int **)(gActiveMoveSizeDataList + 4) != &gActiveMoveSizeDataList )
              __fastfail(3u);
            v16[0] = gActiveMoveSizeDataList;
            v16[1] = &gActiveMoveSizeDataList;
            *(_DWORD *)(gActiveMoveSizeDataList + 4) = v16;
            gActiveMoveSizeDataList = (int)v16;
            PushW32ThreadLock((int)v16, v15, (int)EditionRemoveFromMsdList);
            CKernelStackSwap::DisableStackSwap((CKernelStackSwap *)v13);
            v8 = v12;
            xxxInitializeMoveSizeDataProgrammaticArrangement(a1, v6, v12, v10, v16, &v10);
            v7 = v10;
          }
          xxxApplyArrangeAction((ULONG_PTR)a1, v8, v6, v7, v11);
          if ( v11 )
            PopAndFreeAlwaysW32ThreadLock((int)v15);
          if ( v14 )
            CKernelStackSwap::TryEnableStackSwap((CKernelStackSwap *)v13);
        }
      }
    }
  }
}
