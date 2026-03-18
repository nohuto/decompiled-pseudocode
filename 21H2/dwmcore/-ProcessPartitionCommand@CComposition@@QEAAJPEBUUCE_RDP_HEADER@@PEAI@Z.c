/*
 * XREFs of ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x180060EC0
 * Callers:
 *     ?DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z @ 0x180060E30 (-DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z.c)
 * Callees:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18005E6E4 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x180060F90 (-ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x180061024 (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 */

__int64 __fastcall CComposition::ProcessPartitionCommand(
        CComposition *this,
        const struct UCE_RDP_HEADER *a2,
        unsigned int *a3)
{
  unsigned int v3; // ebx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // eax
  unsigned int v10; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx

  v3 = 0;
  *a3 = 0;
  v6 = *(_DWORD *)a2 - 5;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          v9 = (*(__int64 (__fastcall **)(CComposition *, const struct UCE_RDP_HEADER *))(*(_QWORD *)this + 96LL))(
                 this,
                 a2);
          v3 = v9;
          if ( v9 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1BFu, 0LL);
        }
      }
      else
      {
        v12 = CComposition::ProcessDataOnChannel(this, a2, a3);
        v3 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1BBu, 0LL);
      }
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
        McTemplateU0q_EventWriteTransfer(this, &EVTDESC_CHANNEL_CLOSED_FOR_PROCESS, *((unsigned int *)a2 + 5));
      v16 = CComposition::CloseChannel(this, *((_DWORD *)a2 + 4));
      v3 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1C4u, 0LL);
    }
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
      McTemplateU0q_EventWriteTransfer(this, &EVTDESC_CHANNEL_OPENED_FOR_PROCESS, *((unsigned int *)a2 + 5));
    v14 = CComposition::OpenChannel(this, *((_DWORD *)a2 + 4), *((_DWORD *)a2 + 5), *((_QWORD *)a2 + 3));
    v3 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1B7u, 0LL);
  }
  return v3;
}
