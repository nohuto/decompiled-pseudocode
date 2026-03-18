/*
 * XREFs of ?DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z @ 0x1800A4330
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x1800A43C0 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180154254 (McTemplateU0q_EventWriteTransfer.c)
 */

__int64 __fastcall CKernelTransport::DispatchBatches(CKernelTransport *this, struct CComposition *a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  int ConnectionBatch; // eax
  struct UCE_RDP_HEADER *v7; // rcx
  struct UCE_RDP_HEADER *i; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  struct UCE_RDP_HEADER *v14; // [rsp+68h] [rbp+20h] BYREF

  v13 = a3;
  v4 = 0;
  v5 = 0;
  ConnectionBatch = NtDCompositionGetConnectionBatch(*((_QWORD *)this + 1), &v13, &v14);
  if ( ConnectionBatch < 0 )
  {
    v4 = ConnectionBatch | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, 0LL, 0, ConnectionBatch | 0x10000000, 0xC2u, 0LL);
  }
  else
  {
    for ( i = v14; i; v14 = i )
    {
      v12 = 0;
      v10 = CComposition::ProcessPartitionCommand(a2, i, &v12);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC7u, 0LL);
        return v4;
      }
      v7 = v14;
      v5 += v12;
      i = (struct UCE_RDP_HEADER *)*((_QWORD *)v14 + 1);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0q_EventWriteTransfer(v7, &EVTDESC_NUMBER_OF_COMMANDS_PROCESSED, v5);
  }
  return v4;
}
