/*
 * XREFs of ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x1801CCA84
 * Callers:
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ @ 0x1801CB518 (-NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ.c)
 * Callees:
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1801CCD08 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x1801CD0B8 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z.c)
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x1801CE2BC (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 */

void __fastcall CInteractionTracker::SendPendingCallbacks(CInteractionTracker *this)
{
  __int64 v2; // rcx
  bool v3; // di
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // r10
  int v7; // eax
  char v8; // al
  __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // rdx
  unsigned int v12; // edx
  __int64 v13; // rsi
  unsigned int v14; // ecx
  __int64 v15; // xmm0_8
  __int64 v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+50h] [rbp-20h] BYREF
  int v21; // [rsp+58h] [rbp-18h]
  __int64 v22; // [rsp+60h] [rbp-10h] BYREF
  __int64 v23; // [rsp+68h] [rbp-8h]

  if ( CInteractionTracker::ShouldNotify(this, 0) )
  {
    if ( !*(_DWORD *)(v2 + 496)
      || (v3 = 1, *(_DWORD *)(*((_QWORD *)this + 59) + 24LL * (unsigned int)(*(_DWORD *)(v2 + 496) - 1))) )
    {
      v3 = 0;
    }
    CInteractionTracker::SendPendingStateChangeCallbacks(this, v3);
    LOBYTE(v5) = *((_BYTE *)this + 532);
    v6 = 0;
    if ( (v5 & 6) != 0 )
    {
      v7 = *((_DWORD *)this + 20);
      LOBYTE(v5) = (v5 & 4) != 0;
      v20 = *((_QWORD *)this + 9);
      v21 = v7;
      v8 = CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v20, v4, v5);
      *((_BYTE *)this + 532) &= 0xF9u;
      v6 = v8;
      if ( !v3 )
        return;
      v9 = *((_QWORD *)this + 59);
      v10 = *((_DWORD *)this + 20);
      v11 = 3LL * (unsigned int)(*((_DWORD *)this + 124) - 1);
      *(_QWORD *)(v9 + 8 * v11 + 4) = *((_QWORD *)this + 9);
      *(_DWORD *)(v9 + 8 * v11 + 12) = v10;
      *(_DWORD *)(*((_QWORD *)this + 59) + 24LL * (unsigned int)(*((_DWORD *)this + 124) - 1) + 16) = *((_DWORD *)this + 32);
    }
    if ( v3 && *((char *)this + 532) >= 0 && !v6 )
      CInteractionTracker::SendPendingStateChangeCallbacks(this, 0);
  }
  else
  {
    v12 = *((_DWORD *)this + 124);
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 1080LL) + 48LL);
    v14 = 0;
    if ( v12 )
    {
      while ( *(_DWORD *)(*((_QWORD *)this + 59) + 24LL * v14) )
      {
        if ( ++v14 >= v12 )
          goto LABEL_23;
      }
      v15 = *((_QWORD *)this + 9);
      v21 = *((_DWORD *)this + 20);
      v16 = *((_QWORD *)this + 6);
      v20 = v15;
      if ( v16 )
        v17 = *(_DWORD *)(v16 + 68);
      else
        v17 = 0;
      v22 = v17;
      v23 = *((unsigned int *)this + 14);
      CoreUICallSend(v13, &v22, 2LL, 8LL, 0, &unk_1802CCDF4);
      v18 = *((_QWORD *)this + 6);
      if ( v18 )
        v19 = *(unsigned int *)(v18 + 68);
      else
        v19 = 0LL;
      v22 = v19;
      v23 = *((unsigned int *)this + 14);
      CoreUICallSend(
        v13,
        &v22,
        2LL,
        8LL,
        3,
        &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_7Gt_wATPZFc_PkcSd78VpZYfR44);
    }
LABEL_23:
    *((_DWORD *)this + 124) = 0;
  }
}
