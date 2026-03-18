/*
 * XREFs of ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020D1FC
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DB00 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C0223854 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C0094BC0 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?DisableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C015CAEC (-DisableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 *     ?TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C015CB58 (-TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C020A344 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C020A9FC (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020CA90 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C020E8B4 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C02236F8 (-WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 */

void __fastcall xxxArrangeWindow(__int64 a1, int a2)
{
  __int64 v2; // rdi
  signed int v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // edi
  int v7; // r12d
  __int64 v8; // r15
  struct _MOVESIZEDATA *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v14[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h]
  __int128 v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h]
  _QWORD v18[44]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = a2;
  if ( WindowArrangementAllowed((struct tagWND *)a1)
    && (unsigned int)(v2 - 16) <= 7
    && (*(_DWORD *)*gpDispInfo > 1u || (unsigned int)(v2 - 22) > 1)
    && ((_DWORD)v2 != 18
     || !ShellWindowManagement::BehaviorEnabled(*(ShellWindowManagement **)(a1 + 24), (const struct tagDESKTOP *)2)) )
  {
    v4 = EvaluateArrangeState(a1);
    v5 = v4;
    if ( v4 != 6 )
    {
      v6 = dword_1C02F4D80[6 * v2 - 96 + v4];
      if ( v6 != 8 )
      {
        if ( (unsigned int)ArrangeActionCompatibleWithStyle(a1, v6) )
        {
          v7 = 0;
          v13 = 0;
          memset(v18, 0, 0x158uLL);
          v8 = 0LL;
          v17 = 0LL;
          v9 = 0LL;
          v14[0] = 0;
          v15 = 0LL;
          v16 = 0LL;
          if ( v6 - 3 <= 4 )
          {
            v9 = (struct _MOVESIZEDATA *)v18;
            if ( *(__int64 **)(gActiveMoveSizeDataList + 8) != &gActiveMoveSizeDataList )
              __fastfail(3u);
            v18[1] = &gActiveMoveSizeDataList;
            v18[0] = gActiveMoveSizeDataList;
            *(_QWORD *)(gActiveMoveSizeDataList + 8) = v18;
            gActiveMoveSizeDataList = (__int64)v18;
            PushW32ThreadLock((__int64)v18, &v16, (__int64)EditionRemoveFromMsdList);
            CKernelStackSwap::DisableStackSwap((CKernelStackSwap *)v14);
            xxxInitializeMoveSizeDataProgrammaticArrangement(a1, v6, v5, 0LL, v18, &v13);
            v7 = v13;
            v8 = v15;
          }
          xxxApplyArrangeAction((struct tagWND *)a1, v5, v6, v7, v9);
          if ( v9 )
            PopAndFreeAlwaysW32ThreadLock((__int64)&v16);
          if ( v8 )
            CKernelStackSwap::TryEnableStackSwap((CKernelStackSwap *)v14, v10, v11, v12);
        }
      }
    }
  }
}
