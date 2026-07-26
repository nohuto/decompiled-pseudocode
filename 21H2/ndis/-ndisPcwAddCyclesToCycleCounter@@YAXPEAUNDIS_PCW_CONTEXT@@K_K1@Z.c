/*
 * XREFs of ?ndisPcwAddCyclesToCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K1@Z @ 0x1C008F248
 * Callers:
 *     ?ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0038124 (-ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwAddCyclesToCycleCounter(struct NDIS_PCW_CONTEXT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int Number; // eax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax

  Number = *((_DWORD *)a1 + 4);
  if ( Number == -1 )
  {
    Number = KeGetPcr()->Prcb.Number;
    *((_DWORD *)a1 + 4) = Number;
  }
  v5 = *(_QWORD *)a1 + ndisPcwOffsetToPerCpuData + (unsigned __int64)(ndisPcwPerCpuDataStride * Number);
  v6 = __rdtsc();
  *(_QWORD *)(v5 + 192) += (((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6) - a4;
  *(_QWORD *)(v5 + 392) = 0LL;
}
