/*
 * XREFs of ndisMiniportMessageIsr @ 0x1C0007960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008EB3C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008ECD4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

char __fastcall ndisMiniportMessageIsr(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rcx
  unsigned int v4; // r12d
  unsigned __int64 v6; // r13
  unsigned int v7; // edi
  unsigned int v8; // eax
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // r15
  unsigned __int64 v12; // rdi
  int v13; // r14d
  unsigned __int64 v14; // rsi
  int v15; // r14d
  __int64 ProcessorIndexFromNumber; // r8
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v20; // [rsp+38h] [rbp-28h]
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-18h]
  unsigned int Number; // [rsp+50h] [rbp-10h]
  char v24; // [rsp+A8h] [rbp+48h] BYREF
  char v25; // [rsp+B8h] [rbp+58h]

  v3 = *(_QWORD *)(a2 + 96);
  v4 = -1;
  v19 = 0;
  v24 = 0;
  v6 = a3;
  LOBYTE(v7) = 0;
  v8 = *(_DWORD *)(v3 + 48);
  v21 = 0LL;
  v22 = 0LL;
  Number = -1;
  if ( v8 || *(_DWORD *)(v3 + 80) )
  {
    v7 = *(_DWORD *)(v3 + 80);
    v22 = __PAIR64__(v7, v8);
    v21 = *(_QWORD *)(v3 + 40);
    if ( !v21 )
    {
      LOBYTE(v7) = BYTE4(v22);
      v21 = *(_QWORD *)(v3 + 40);
    }
  }
  if ( (v7 & 2) != 0 )
  {
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v21, 1u);
    LOBYTE(v7) = BYTE4(v22);
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, unsigned int *))(a2 + 176))(
         *(_QWORD *)(a2 + 8),
         (unsigned int)v6,
         &v24,
         &v19);
  v25 = v9;
  if ( (v7 & 2) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v21, 1u, 0xEuLL);
    v9 = v25;
  }
  if ( v9 && (v22 & 2) != 0 )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v21 + Number * ndisPcwPerCpuDataStride + 8);
  }
  if ( v24 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
    if ( KeInsertQueueDpc(
           (PRKDPC)(*(_QWORD *)(a2 + 224)
                  + ((unsigned __int64)(ndisMaxNumberOfProcessors + (_DWORD)v6 * (ndisMaxNumberOfProcessors + 1)) << 6)),
           (PVOID)v6,
           0LL) )
    {
      if ( (v22 & 0x100000000000LL) != 0 )
        ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v21, 0xCu);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
    }
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 96);
    v11 = 0LL;
    v12 = v19;
    v13 = 0;
    v20 = 0;
    if ( *(_DWORD *)(v10 + 48) || *(_DWORD *)(v10 + 80) )
    {
      v11 = *(_QWORD *)(v10 + 40);
      v13 = *(_DWORD *)(v10 + 48);
      if ( !v11 )
        v11 = *(_QWORD *)(v10 + 40);
    }
    if ( *(_BYTE *)(a2 + 193) )
      v14 = *(_QWORD *)(a2 + 224) + ((unsigned __int64)((unsigned int)v6 * (ndisMaxNumberOfProcessors + 1)) << 6);
    else
      v14 = *(_QWORD *)(a2 + 112);
    ProcNumber = 0;
    v15 = v13 & 0x1000000;
    if ( v15 )
      v20 = KeGetPcr()->Prcb.Number;
    if ( v19 )
    {
      do
      {
        if ( (v12 & 1) != 0 )
        {
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
          if ( (_DWORD)ProcessorIndexFromNumber != -1 )
          {
            if ( (_DWORD)ProcessorIndexFromNumber != v20 && v15 )
            {
              if ( v4 == -1 )
                v4 = KeGetPcr()->Prcb.Number;
              ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v11 + ndisPcwPerCpuDataStride * v4 + 96);
            }
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
            if ( !KeInsertQueueDpc((PRKDPC)(v14 + (ProcessorIndexFromNumber << 6)), (PVOID)v6, 0LL) )
              _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
          }
        }
        ++ProcNumber.Number;
        v12 >>= 1;
      }
      while ( v12 );
    }
  }
  return v25;
}
