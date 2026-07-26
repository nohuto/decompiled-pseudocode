/*
 * XREFs of ndisMiniportIsr @ 0x1C0066ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0037F74 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     NdisMQueueDpcEx @ 0x1C0067440 (NdisMQueueDpcEx.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008F21C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008F3B4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

char __fastcall ndisMiniportIsr(__int64 a1, __int64 a2)
{
  char v3; // di
  char v4; // si
  unsigned int Number; // ecx
  _GROUP_AFFINITY TargetProcessors; // [rsp+20h] [rbp-30h] BYREF
  __int64 v8; // [rsp+30h] [rbp-20h] BYREF
  char v9; // [rsp+38h] [rbp-18h]
  int v10; // [rsp+3Ch] [rbp-14h]
  unsigned int v11; // [rsp+40h] [rbp-10h]
  char v12; // [rsp+78h] [rbp+28h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+30h] BYREF

  v13 = 0;
  v12 = 0;
  NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)&v8, *(struct _NDIS_MINIPORT_BLOCK **)(a2 + 96));
  v3 = v10;
  if ( (v10 & 2) != 0 )
  {
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v8, 1u);
    v3 = v10;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned int *))(a2 + 16))(*(_QWORD *)(a2 + 8), &v12, &v13);
  if ( (v3 & 2) != 0 )
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v8, 1u, 0xEuLL);
  if ( v4 && (v9 & 2) != 0 )
  {
    Number = v11;
    if ( v11 == -1 )
    {
      Number = KeGetPcr()->Prcb.Number;
      v11 = Number;
    }
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v8 + ndisPcwPerCpuDataStride * Number + 8);
  }
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
    if ( KeInsertQueueDpc((PRKDPC)(a2 + 32), 0LL, 0LL) )
    {
      if ( (v10 & 0x1000) != 0 )
        ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v8, 0xCu);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
    }
  }
  else
  {
    *(_QWORD *)&TargetProcessors.Group = 0LL;
    TargetProcessors.Mask = v13;
    NdisMQueueDpcEx((NDIS_HANDLE)a2, 0, &TargetProcessors, 0LL);
  }
  return v4;
}
