/*
 * XREFs of ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x18019C2F0
 * Callers:
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x18019C290 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800CB958 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     McTemplateU0xxq_EventWriteTransfer @ 0x18017A82C (McTemplateU0xxq_EventWriteTransfer.c)
 */

__int64 __fastcall MagnifierCaptureBitsResponse::SendResponse(CChannelContext **this, unsigned int a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v9; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+34h] [rbp-24h]
  __int64 v12; // [rsp+44h] [rbp-14h]

  v10 = 17;
  v11 = 0LL;
  v12 = 0LL;
  *(_QWORD *)((char *)&v11 + 4) = a2;
  v5 = CChannelContext::PostMessageToChannel(this[5], (const struct MIL_MESSAGE *)&v10, a3);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x80u, 0LL);
  *((_BYTE *)this + 33) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    LODWORD(v9) = a2;
    McTemplateU0xxq_EventWriteTransfer(
      v6,
      &EVTDESC_ETWGUID_MAGNIFIERRENDERTARGET_CAPTUREBITS_Stop,
      *((_QWORD *)this[215] + 232),
      this[216],
      v9);
  }
  return v7;
}
