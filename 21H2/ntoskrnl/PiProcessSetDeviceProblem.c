/*
 * XREFs of PiProcessSetDeviceProblem @ 0x140731744
 * Callers:
 *     PnpDeviceActionWorker @ 0x140381DA0 (PnpDeviceActionWorker.c)
 * Callees:
 *     PiPnpRtlEndOperation @ 0x140628F64 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140629498 (PiPnpRtlBeginOperation.c)
 *     PipIsProblemReadonly @ 0x140731AF4 (PipIsProblemReadonly.c)
 *     PipSetDevNodeProblem @ 0x1407396AC (PipSetDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x1407457DC (PipSetDevNodeFlags.c)
 *     PipSetDevNodeUserFlags @ 0x14074C4EC (PipSetDevNodeUserFlags.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiProcessSetDeviceProblem(__int64 a1)
{
  __int64 v1; // rax
  _DWORD *v2; // rbp
  __int64 v3; // rbx
  unsigned int v4; // r14d
  unsigned int v5; // edx
  unsigned int v6; // r9d
  unsigned int v7; // esi
  int v8; // ecx
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rdx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD **)(a1 + 32);
  P = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  if ( (unsigned int)(*(_DWORD *)(v3 + 300) - 787) <= 1 )
  {
    v4 = -1073741738;
  }
  else
  {
    v4 = 0;
    PiPnpRtlBeginOperation(&P);
    v5 = v2[5];
    v6 = v2[6];
    v7 = (v5 >> 18) & 1 | 4;
    if ( (v5 & 0x100) == 0 )
      v7 = (v2[5] >> 18) & 1;
    v8 = (v2[5] >> 1) & 0x4000 | 0x2000;
    if ( (v5 & 0x400) == 0 )
      v8 = (v2[5] >> 1) & 0x4000;
    v9 = v8;
    if ( v6 == 14 )
    {
      v10 = *(_DWORD *)(v3 + 300);
      if ( v10 != 786 && v10 != 770 )
        v9 = v8 & 0xFFFFDFFF;
      v7 |= 4u;
    }
    if ( !v9 )
    {
      v11 = 0LL;
      goto LABEL_15;
    }
    if ( ((*(_DWORD *)(v3 + 300) - 770) & 0xFFFFFFEF) == 0
      && ((v9 & 0x4000) != 0 || v6 < 0x3A && !(unsigned int)PipIsProblemReadonly(v3, v6)) )
    {
      PipSetDevNodeProblem(v3, v6, (unsigned int)v2[8]);
      v11 = v9;
LABEL_15:
      PipSetDevNodeFlags(v3, v11);
      PipSetDevNodeUserFlags(v3, v7);
      goto LABEL_16;
    }
    v4 = -1073741584;
  }
LABEL_16:
  if ( (v2[7] & 1) != 0 )
    ExFreePoolWithTag(v2, 0x55706E50u);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return v4;
}
