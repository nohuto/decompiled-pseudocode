/*
 * XREFs of Controller_DisableController @ 0x1C0030CEC
 * Callers:
 *     Controller_InitiateRecovery @ 0x1C00317A0 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C0031AF8 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C0032568 (Controller_SetControllerGone.c)
 */

void __fastcall Controller_DisableController(__int64 a1)
{
  int v2; // edx
  __int16 v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  Controller_SetControllerGone(a1, 0LL);
  if ( *(_DWORD *)(a1 + 244) != 1
    || *(_BYTE *)(a1 + 537)
    || (_mm_srli_si128(*(__m128i *)(a1 + 336), 8).m128i_u8[0] & 0x10) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v2, 4, 175, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int16 *, __int64, int))(a1 + 288))(
      *(_QWORD *)(a1 + 280),
      0LL,
      &v3,
      4LL,
      2);
  }
  KeFlushQueuedDpcs();
}
