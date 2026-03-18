/*
 * XREFs of PiDqQueryEvaluateFilter @ 0x1407796C4
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x140775D50 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryEnumObject @ 0x1407792B4 (PiDqQueryEnumObject.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     FilterEval @ 0x1407795E4 (FilterEval.c)
 *     PnpFreeDevPropertyArray @ 0x140779620 (PnpFreeDevPropertyArray.c)
 *     PiPnpRtlEndOperation @ 0x140779A50 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140779DC4 (PiPnpRtlBeginOperation.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDqQueryEvaluateFilter(__int64 a1, __int64 a2, bool *a3)
{
  __int64 v3; // rax
  PVOID v5; // rbx
  __int64 v8; // rdx
  char *Pool2; // rsi
  int v10; // edi
  HANDLE Handle[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h]
  __int128 v14; // [rsp+50h] [rbp-10h]
  int v15; // [rsp+90h] [rbp+30h] BYREF
  PVOID P; // [rsp+A0h] [rbp+40h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v15 = 0;
  *(_OWORD *)Handle = 0LL;
  v5 = 0LL;
  v13 = 0LL;
  *a3 = 0;
  v14 = 0LL;
  v8 = *(unsigned int *)(v3 + 80);
  P = 0LL;
  Pool2 = (char *)ExAllocatePool2(256LL, 48 * v8, 1483763280LL);
  if ( Pool2 )
  {
    LODWORD(Handle[1]) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 80LL);
    *(_QWORD *)&v13 = Pool2;
    *(_QWORD *)&v14 = a2;
    *((_QWORD *)&v14 + 1) = a1;
    PiPnpRtlBeginOperation(&P);
    v10 = FilterEval(
            (__int64 (__fastcall *)(__int64, unsigned int *, unsigned int *, unsigned int *, __int64 *))PiDqPropertyCallback,
            (__int64)Handle,
            *(_DWORD *)(*(_QWORD *)(a1 + 24) + 80LL),
            *(_DWORD **)(*(_QWORD *)(a1 + 24) + 88LL),
            &v15);
    if ( v10 >= 0 )
      *a3 = v15 != 0;
    PnpFreeDevPropertyArray(DWORD2(v13), Pool2, 0x58706E50u);
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
