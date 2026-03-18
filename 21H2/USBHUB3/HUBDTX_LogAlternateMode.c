/*
 * XREFs of HUBDTX_LogAlternateMode @ 0x1C002A65C
 * Callers:
 *     HUBDSM_CheckingIfAlternateModeStringDescriptorShouldBeQueried @ 0x1C0020020 (HUBDSM_CheckingIfAlternateModeStringDescriptorShouldBeQueried.c)
 *     HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor @ 0x1C0020830 (HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0002204 (WPP_RECORDER_SF_DD.c)
 *     McTemplateK0phuzu_EtwWriteTransfer @ 0x1C0026D64 (McTemplateK0phuzu_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0026F14 (WPP_RECORDER_SF_DDD.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     memmove @ 0x1C0043840 (memmove.c)
 *     memset @ 0x1C0043B00 (memset.c)
 */

int __fastcall HUBDTX_LogAlternateMode(__int64 a1, _BYTE *a2)
{
  __int64 *v2; // r12
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int8 v7; // r15
  __int64 v8; // rbx
  _UNKNOWN **v9; // rax
  const EVENT_DESCRIPTOR *v10; // rdx
  __int64 v12; // [rsp+20h] [rbp-158h]
  __int64 v13; // [rsp+28h] [rbp-150h]
  __int64 v14; // [rsp+38h] [rbp-140h]
  _BYTE v15[256]; // [rsp+40h] [rbp-138h] BYREF

  v2 = *(__int64 **)(a1 + 2640);
  v5 = *v2;
  v6 = *((unsigned __int8 *)v2 + 8);
  v7 = (*(_BYTE *)((v6 >> 2) + *v2 + 8) >> (2 * (v2[1] & 3))) & 3;
  if ( a2 )
  {
    v8 = (unsigned __int8)(*a2 - 2);
    memset(v15, 0, v8 + 2);
    memmove(v15, a2 + 2, (unsigned int)v8);
  }
  if ( v7 == 3 )
  {
    *((_BYTE *)v2 + 10) = 1;
    v9 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      LODWORD(v9) = WPP_RECORDER_SF_DD(
                      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                      4u,
                      5u,
                      0x59u,
                      (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
                      *(unsigned __int16 *)(v5 + 4 * v6 + 44),
                      *(unsigned __int8 *)(v5 + 4 * v6 + 46));
    if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
    {
      LOBYTE(v14) = 3;
      v10 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_ALTERNATE_MODE_ENTERED;
LABEL_12:
      LOBYTE(v13) = *(_BYTE *)(v5 + 4 * v6 + 46);
      LOWORD(v12) = *(_WORD *)(v5 + 4 * v6 + 44);
      LODWORD(v9) = McTemplateK0phuzu_EtwWriteTransfer(
                      (__int64)v15,
                      v10,
                      (const GUID *)(a1 + 1516),
                      *(_QWORD *)(a1 + 24),
                      v12,
                      v13,
                      (unsigned __int64)v15 & -(__int64)(a2 != 0LL),
                      v14);
    }
  }
  else
  {
    *((_BYTE *)v2 + 9) = 1;
    v9 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      LODWORD(v9) = WPP_RECORDER_SF_DDD(
                      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                      4u,
                      *(unsigned __int16 *)(v5 + 4 * v6 + 44),
                      0x5Au,
                      (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
                      *(unsigned __int16 *)(v5 + 4 * v6 + 44),
                      *(unsigned __int8 *)(v5 + 4 * v6 + 46),
                      v7);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
    {
      LOBYTE(v14) = v7;
      v10 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_ALTERNATE_MODE_FAILED;
      goto LABEL_12;
    }
  }
  return (int)v9;
}
