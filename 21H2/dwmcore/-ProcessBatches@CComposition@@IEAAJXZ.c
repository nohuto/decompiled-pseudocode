/*
 * XREFs of ?ProcessBatches@CComposition@@IEAAJXZ @ 0x18007D1EC
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007D2F8 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180111C8E (McTemplateU0qqq_EventWriteTransfer.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180111D0C (McTemplateU0x_EventWriteTransfer.c)
 */

__int64 __fastcall CComposition::ProcessBatches(CComposition *this)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // edi
  __int64 i; // rsi
  __int64 v6; // rbp
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // ebx

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0x_EventWriteTransfer(this, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Start, this);
  v2 = (*(__int64 (__fastcall **)(_QWORD, CComposition *, _QWORD))(**((_QWORD **)this + 81) + 32LL))(
         *((_QWORD *)this + 81),
         this,
         *((_QWORD *)this + 62));
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0LL, v2, 0xE39u);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 116); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 55) + 8 * i);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 88);
      if ( v7 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
        {
          McTemplateU0qqq_EventWriteTransfer(
            v3,
            (unsigned int)&CHANNELBATCHES_PROCESSED,
            *(_DWORD *)(v6 + 16),
            *(_DWORD *)(v6 + 20),
            *(_DWORD *)(v6 + 88));
          v7 = *(_DWORD *)(v6 + 88);
        }
        dword_1803D31E8 += v7;
        ++*(_DWORD *)(*(_QWORD *)(v6 + 48) + 36LL);
        *(_DWORD *)(v6 + 88) = 0;
      }
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0x_EventWriteTransfer(v3, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Stop, this);
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 161) + 24LL))(*((_QWORD *)this + 161), 3LL);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0xE46u);
  if ( !v4 || v4 >= 0 && v10 < 0 )
    return (unsigned int)v10;
  return (unsigned int)v4;
}
