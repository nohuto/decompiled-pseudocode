/*
 * XREFs of Control_WdfEvtTimerForTransferTimeout @ 0x1C00413D0
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     TR_QueueDpcForTransferCompletion @ 0x1C000C644 (TR_QueueDpcForTransferCompletion.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDi @ 0x1C00401BC (WPP_RECORDER_SF_DDi.c)
 */

void __fastcall Control_WdfEvtTimerForTransferTimeout(__int64 a1)
{
  char v1; // si
  char v2; // r14
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  KIRQL v7; // al
  __int64 v8; // rdx
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]

  v1 = 0;
  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2568))(WdfDriverGlobals, a1);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v3,
         off_1C0061388);
  v5 = *(_QWORD *)(v4 + 344);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = *(_QWORD *)(v4 + 56);
    v10 = *(_DWORD *)(v6 + 144);
    v9 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL);
    WPP_RECORDER_SF_DDi(
      *(_QWORD *)(v6 + 80),
      4u,
      *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
      0x28u,
      (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
      v9,
      v10,
      *(_QWORD *)(v5 + 24));
  }
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  *(_BYTE *)(v4 + 104) = v7;
  if ( *(_DWORD *)(v5 + 116) == 1 )
  {
    if ( (*(_DWORD *)(v4 + 352) & 8) != 0 )
      v1 = 1;
    else
      v2 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v7);
  if ( v2 )
  {
    v8 = *(_QWORD *)(v4 + 56);
    _m_prefetchw((const void *)(v8 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v8 + 32), 1u) & 1) == 0 )
      ESM_AddEvent((KSPIN_LOCK *)(v8 + 288), 130);
  }
  *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  if ( *(_DWORD *)(v5 + 116) == 2 && (!v2 || (*(_DWORD *)(v4 + 352) & 0xA) != 0) )
    v1 = 1;
  *(_DWORD *)(v5 + 116) = 3;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
  if ( v1 )
    TR_QueueDpcForTransferCompletion(v4);
}
