/*
 * XREFs of ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x1801CF374
 * Callers:
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ @ 0x1801CDE18 (-NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ.c)
 * Callees:
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1801CF5F8 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x1801CF9A8 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z.c)
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x1801D0C20 (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
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
  __int64 v15; // rdi
  __int64 v16; // xmm0_8
  __int64 v17; // rax
  unsigned int v18; // ecx
  float v19; // xmm0_4
  int v20; // edx
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rax
  int v24; // [rsp+20h] [rbp-50h]
  int v25; // [rsp+20h] [rbp-50h]
  __int64 v26; // [rsp+38h] [rbp-38h]
  __int64 v27; // [rsp+50h] [rbp-20h] BYREF
  int v28; // [rsp+58h] [rbp-18h]
  __int64 v29; // [rsp+60h] [rbp-10h] BYREF
  __int64 v30; // [rsp+68h] [rbp-8h]

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
      v27 = *((_QWORD *)this + 9);
      v28 = v7;
      v8 = CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v27, v4, v5);
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
      while ( 1 )
      {
        v15 = v14;
        if ( !*(_DWORD *)(*((_QWORD *)this + 59) + 24LL * v14) )
          break;
        if ( ++v14 >= v12 )
          goto LABEL_23;
      }
      v16 = *((_QWORD *)this + 9);
      v28 = *((_DWORD *)this + 20);
      v17 = *((_QWORD *)this + 6);
      v27 = v16;
      if ( v17 )
        v18 = *(_DWORD *)(v17 + 68);
      else
        v18 = 0;
      v19 = *((float *)this + 32);
      v29 = v18;
      v30 = *((unsigned int *)this + 14);
      LOWORD(v24) = 0;
      CoreUICallSend(v13, &v29, 2LL, 8LL, v24, &unk_1802CFAE4, (unsigned int)&v27, v19);
      v20 = *(unsigned __int8 *)(*((_QWORD *)this + 59) + 24 * v15 + 20);
      v21 = *((_QWORD *)this + 6);
      v22 = *((_DWORD *)this + 45);
      if ( v21 )
        v23 = *(unsigned int *)(v21 + 68);
      else
        v23 = 0LL;
      v29 = v23;
      v30 = *((unsigned int *)this + 14);
      LODWORD(v26) = v20;
      LOWORD(v25) = 3;
      CoreUICallSend(
        v13,
        &v29,
        2LL,
        8LL,
        v25,
        &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_7Gt_wATPZFc_PkcSd78VpZYfR44,
        v22,
        v26);
    }
LABEL_23:
    *((_DWORD *)this + 124) = 0;
  }
}
