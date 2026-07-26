/*
 * XREFs of ndisMIsr @ 0x1C00C1C30
 * Callers:
 *     <none>
 * Callees:
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0037D34 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008EB3C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008ECD4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

char __fastcall ndisMIsr(__int64 a1, __int64 a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // r10
  __int64 v4; // r10
  char v5; // di
  unsigned int Number; // ecx
  __int64 v8; // [rsp+20h] [rbp-20h] BYREF
  char v9; // [rsp+28h] [rbp-18h]
  int v10; // [rsp+2Ch] [rbp-14h]
  unsigned int v11; // [rsp+30h] [rbp-10h]
  char v12; // [rsp+58h] [rbp+18h] BYREF
  char v13; // [rsp+60h] [rbp+20h] BYREF

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)(a2 + 104);
  v12 = 0;
  v13 = 0;
  NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)&v8, v2);
  v5 = v10;
  if ( (v10 & 2) != 0 )
  {
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v8, 1u);
    v5 = v10;
  }
  if ( (*(_DWORD *)(v4 + 120) & 1) != 0 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v4 + 3760) + 128LL))(*(_QWORD *)(v4 + 24));
    v13 = 1;
    v12 = 1;
  }
  else
  {
    (*(void (__fastcall **)(char *, char *, _QWORD))(a2 + 24))(&v12, &v13, *(_QWORD *)(v4 + 24));
  }
  if ( (v5 & 2) != 0 )
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v8, 1u, 14LL);
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 112));
    if ( KeInsertQueueDpc((PRKDPC)(a2 + 40), 0LL, 0LL) )
    {
      if ( (v10 & 0x1000) != 0 )
        ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v8, 0xCu);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 112));
    }
  }
  if ( v12 && (v9 & 2) != 0 )
  {
    Number = v11;
    if ( v11 == -1 )
      Number = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v8 + ndisPcwPerCpuDataStride * Number + 8);
  }
  return v12;
}
