/*
 * XREFs of AcpiEval_PDC @ 0x1C0032E64
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0022D64 (ProcLibDeviceStart.c)
 * Callees:
 *     memcpy_s @ 0x1C0004548 (memcpy_s.c)
 *     AcpiEvaluateMethod @ 0x1C0021480 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PDC(__int64 a1, const void *a2, unsigned __int16 a3)
{
  rsize_t v5; // rbp
  unsigned int v6; // ebx
  __int64 *PoolWithTag; // rax
  __int64 *v8; // rsi
  int v9; // ebx
  int v11; // [rsp+60h] [rbp+18h] BYREF
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0;
  P = 0LL;
  v5 = a3;
  v6 = a3 + 24;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, v6, 0x72637250u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
LABEL_6:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x20000u);
    return (unsigned int)v9;
  }
  *(_DWORD *)PoolWithTag = 1130980673;
  *((_DWORD *)PoolWithTag + 1) = 1128550495;
  *((_DWORD *)PoolWithTag + 2) = v6;
  *((_DWORD *)PoolWithTag + 3) = 1;
  *((_WORD *)PoolWithTag + 9) = v5;
  *((_WORD *)PoolWithTag + 8) = 2;
  memcpy_s((char *)PoolWithTag + 20, v5, a2, v5);
  _InterlockedOr((volatile signed __int32 *)(a1 + 1092), 0x20000u);
  v9 = AcpiEvaluateMethod(a1, 0, v8, (unsigned int **)&P, &v11);
  ExFreePoolWithTag(v8, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 < 0 )
    goto LABEL_6;
  return (unsigned int)v9;
}
