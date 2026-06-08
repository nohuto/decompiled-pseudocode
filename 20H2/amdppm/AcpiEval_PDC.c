/*
 * XREFs of AcpiEval_PDC @ 0x1C0025CE4
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0028EB0 (ProcLibDeviceStart.c)
 * Callees:
 *     memcpy_s @ 0x1C0001EE8 (memcpy_s.c)
 *     AcpiEvaluateMethod @ 0x1C0026EFC (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PDC(__int64 a1, const void *a2, unsigned __int16 a3)
{
  rsize_t v5; // rbp
  unsigned int v6; // ebx
  char *PoolWithTag; // rax
  void *v8; // rsi
  int v9; // ebx
  int v11; // [rsp+60h] [rbp+18h] BYREF
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0;
  P = 0LL;
  v5 = a3;
  v6 = a3 + 24;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v6, 0x72637250u);
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
  memcpy_s(PoolWithTag + 20, v5, a2, v5);
  _InterlockedOr((volatile signed __int32 *)(a1 + 1092), 0x20000u);
  v9 = AcpiEvaluateMethod(a1, 0, (_DWORD)v8, (unsigned int)&P, (__int64)&v11);
  ExFreePoolWithTag(v8, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 < 0 )
    goto LABEL_6;
  return (unsigned int)v9;
}
