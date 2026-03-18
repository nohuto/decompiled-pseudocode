/*
 * XREFs of ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x1801CF9A8
 * Callers:
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x1801CF374 (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1801CF5F8 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 * Callees:
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x1801D0C20 (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 */

char __fastcall CInteractionTracker::SendValuesChangedCallbackIfNecessary(__int64 a1, __int64 *a2, float a3)
{
  char v4; // si
  __int64 v6; // rcx
  char v7; // r10
  unsigned __int64 v8; // rcx
  __int64 v9; // xmm0_8
  __int64 v10; // rax
  unsigned int v11; // ecx
  int v12; // eax
  int v14; // [rsp+20h] [rbp-78h]
  __int64 v15; // [rsp+50h] [rbp-48h] BYREF
  int v16; // [rsp+58h] [rbp-40h]
  _QWORD v17[2]; // [rsp+60h] [rbp-38h] BYREF

  v4 = 1;
  if ( !CInteractionTracker::ShouldNotify((CInteractionTracker *)a1, 1u) )
    return 0;
  if ( v7 )
    goto LABEL_7;
  v8 = *(_QWORD *)(v6 + 504) - *a2;
  if ( !v8 )
    v8 = *(unsigned int *)(a1 + 512) - (unsigned __int64)*((unsigned int *)a2 + 2);
  if ( !v8 && *(float *)(a1 + 516) == a3 )
    return 0;
LABEL_7:
  v9 = *a2;
  v16 = *((_DWORD *)a2 + 2);
  v10 = *(_QWORD *)(a1 + 48);
  v15 = v9;
  if ( v10 )
    v11 = *(_DWORD *)(v10 + 68);
  else
    v11 = 0;
  v17[0] = v11;
  v17[1] = *(unsigned int *)(a1 + 56);
  LOWORD(v14) = 0;
  CoreUICallSend(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1080LL) + 48LL),
    v17,
    2LL,
    8LL,
    v14,
    &unk_1802CFAE4,
    (unsigned int)&v15,
    a3);
  v12 = *((_DWORD *)a2 + 2);
  *(_QWORD *)(a1 + 504) = *a2;
  *(_DWORD *)(a1 + 512) = v12;
  *(float *)(a1 + 516) = a3;
  return v4;
}
