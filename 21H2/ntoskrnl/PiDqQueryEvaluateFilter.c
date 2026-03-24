/*
 * XREFs of PiDqQueryEvaluateFilter @ 0x140633724
 * Callers:
 *     PiDqQueryEnumObject @ 0x140633B34 (PiDqQueryEnumObject.c)
 *     PiDqQueryApplyObjectEvent @ 0x1407634C4 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     memset @ 0x140414200 (memset.c)
 *     FilterEval @ 0x140633644 (FilterEval.c)
 *     PnpFreeDevPropertyArray @ 0x140633680 (PnpFreeDevPropertyArray.c)
 *     PiPnpRtlEndOperation @ 0x140633ED8 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140634680 (PiPnpRtlBeginOperation.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDqQueryEvaluateFilter(__int64 a1, __int64 a2, bool *a3)
{
  __int64 v3; // rax
  PVOID v5; // rbx
  __int64 v8; // rdx
  PVOID PoolWithTag; // rsi
  int v10; // edi
  HANDLE Handle[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h]
  __int128 v14; // [rsp+50h] [rbp-10h]
  int v15; // [rsp+90h] [rbp+30h] BYREF
  PVOID P; // [rsp+A0h] [rbp+40h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v15 = 0;
  v5 = 0LL;
  *(_OWORD *)Handle = 0LL;
  *a3 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v8 = *(unsigned int *)(v3 + 80);
  P = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 48 * v8, 0x58706E50u);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 48LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 80LL));
    LODWORD(Handle[1]) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 80LL);
    *(_QWORD *)&v13 = PoolWithTag;
    *(_QWORD *)&v14 = a2;
    *((_QWORD *)&v14 + 1) = a1;
    PiPnpRtlBeginOperation(&P);
    v10 = FilterEval(
            (__int64 (__fastcall *)(__int64, unsigned int *, unsigned int *, unsigned int *, __int64 *))&PiDqPropertyCallback,
            (__int64)Handle,
            *(_DWORD *)(*(_QWORD *)(a1 + 24) + 80LL),
            *(_DWORD **)(*(_QWORD *)(a1 + 24) + 88LL),
            &v15);
    if ( v10 >= 0 )
      *a3 = v15 != 0;
    PnpFreeDevPropertyArray(DWORD2(v13), (char *)PoolWithTag, 0x58706E50u);
    v5 = P;
  }
  else
  {
    v10 = -1073741670;
  }
  if ( (unsigned __int64)Handle[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(Handle[0]);
  if ( v5 )
    PiPnpRtlEndOperation(v5);
  return (unsigned int)v10;
}
