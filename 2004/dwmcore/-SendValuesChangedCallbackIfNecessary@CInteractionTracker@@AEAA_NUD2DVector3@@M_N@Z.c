/*
 * XREFs of ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x1801CD0B8
 * Callers:
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x1801CCA84 (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1801CCD08 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 * Callees:
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x1801CE2BC (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 */

char __fastcall CInteractionTracker::SendValuesChangedCallbackIfNecessary(__int64 a1, __int64 a2, float a3)
{
  char v4; // si
  __int64 v6; // rcx
  char v7; // r10
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ecx
  int v11; // eax
  _QWORD v13[2]; // [rsp+60h] [rbp-38h] BYREF

  v4 = 1;
  if ( !CInteractionTracker::ShouldNotify((CInteractionTracker *)a1, 1u) )
    return 0;
  if ( v7 )
    goto LABEL_7;
  v8 = *(_QWORD *)(v6 + 504) - *(_QWORD *)a2;
  if ( !v8 )
    v8 = *(unsigned int *)(a1 + 512) - (unsigned __int64)*(unsigned int *)(a2 + 8);
  if ( !v8 && *(float *)(a1 + 516) == a3 )
    return 0;
LABEL_7:
  v9 = *(_QWORD *)(a1 + 48);
  if ( v9 )
    v10 = *(_DWORD *)(v9 + 68);
  else
    v10 = 0;
  v13[0] = v10;
  v13[1] = *(unsigned int *)(a1 + 56);
  CoreUICallSend(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1080LL) + 48LL), v13, 2LL, 8LL, 0, &unk_1802CCDF4);
  v11 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 504) = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 512) = v11;
  *(float *)(a1 + 516) = a3;
  return v4;
}
