/*
 * XREFs of IovpCallDriver2 @ 0x140A8BD60
 * Callers:
 *     VfAfterCallDriver @ 0x140A8CA78 (VfAfterCallDriver.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViErrorReport1 @ 0x1405FFB44 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405FFBC8 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405FFC5C (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405FFD00 (ViErrorReport6.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140A92074 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140A92124 (IovUtilIsDeviceObjectMarked.c)
 *     IovpSessionDataDereference @ 0x140A9CF00 (IovpSessionDataDereference.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140AA5BCC (VfIrpDatabaseEntryReleaseLock.c)
 */

_UNKNOWN **__fastcall IovpCallDriver2(__int64 a1, int *a2)
{
  _UNKNOWN **result; // rax
  _DWORD *v3; // rbp
  __int64 v6; // rsi
  KIRQL v7; // al
  bool v8; // zf
  int v9; // eax
  _QWORD *v10; // rdi
  __int64 LowerDeviceObjectWithTag; // rax
  void *v12; // r14
  _QWORD *v13; // rdx
  __int64 v14; // r8
  int v15; // ecx
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // r9d
  __int64 v19; // rcx
  unsigned int v20; // ecx
  __int64 v21; // rcx
  int v22; // r9d
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  int v27; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_DWORD **)a1;
  if ( !*(_QWORD *)a1 )
    return result;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 8));
  v8 = *(_QWORD *)(v6 + 216) == 0LL;
  *(_BYTE *)(v6 + 16) = v7;
  if ( !v8 && (*(_DWORD *)(a1 + 24) & 0x2000000) != 0 )
    *a2 = 259;
  v9 = *(_DWORD *)(a1 + 24);
  v10 = *(_QWORD **)(a1 + 160);
  if ( (v9 & 0x20000000) == 0 || *a2 == 259 || (v9 & 0x1000000) != 0 )
    goto LABEL_17;
  LowerDeviceObjectWithTag = IovUtilGetLowerDeviceObjectWithTag(*(_QWORD *)(a1 + 160));
  v12 = (void *)LowerDeviceObjectWithTag;
  if ( (*(_DWORD *)(a1 + 24) & 0x10000000) == 0 )
  {
    v13 = *(_QWORD **)(a1 + 64);
    v14 = *(_QWORD *)(v13[39] + 40LL);
    if ( !v14 )
      goto LABEL_30;
    v15 = *(_DWORD *)(v14 + 396);
    if ( (v15 & 0x10) == 0 )
    {
      if ( (v15 & 0x10000) != 0 )
        goto LABEL_12;
LABEL_30:
      if ( !v12 )
        goto LABEL_17;
      goto LABEL_16;
    }
    if ( v10 == v13 )
    {
      if ( !(unsigned int)IovUtilIsDeviceObjectMarked(v10, 0LL) )
        goto LABEL_30;
      v20 = 545;
    }
    else
    {
      if ( (unsigned int)IovUtilIsDeviceObjectMarked(v10, 0LL) || !(unsigned int)IovUtilIsDeviceObjectMarked(v10, 0LL) )
        goto LABEL_30;
      v20 = 547;
    }
    ViErrorReport10(v20, *(const void **)(a1 + 48), *(const void **)(a1 + 72), v10);
    goto LABEL_30;
  }
LABEL_12:
  if ( LowerDeviceObjectWithTag )
  {
    v16 = *(_QWORD *)(v10[1] + 80LL);
    if ( !v16 || !*(_QWORD *)(v16 + 104) )
      ViErrorReport10(0x21Du, *(const void **)(a1 + 48), *(const void **)(a1 + 72), v10);
LABEL_16:
    ObfDereferenceObjectWithTag(v12, 0x49667256u);
  }
LABEL_17:
  v17 = *(_DWORD *)(a1 + 24);
  if ( (v17 & 0x40000000) == 0 || (v3[8] & 2) != 0 )
    goto LABEL_36;
  v18 = *a2;
  if ( (v17 & 0x2000000) != 0 )
  {
    if ( v18 == 259 || (v17 & 0x1000000) != 0 )
      goto LABEL_36;
    v19 = 574LL;
  }
  else
  {
    if ( v18 != 259 && (v17 & 0x1000000) == 0 )
      goto LABEL_36;
    v19 = 588LL;
  }
  ViErrorReport6(v19, *(const void **)(a1 + 48), *(const void **)(a1 + 72), v18);
  v3[8] |= 2u;
LABEL_36:
  v21 = (unsigned int)*a2;
  if ( _bittest((const signed __int32 *)(a1 + 24), 0x1Eu) )
  {
    v22 = *(_DWORD *)(a1 + 56);
    if ( (_DWORD)v21 == v22 )
    {
      if ( (_DWORD)v21 == -1 )
        ViErrorReport6(549LL, *(const void **)(a1 + 48), *(const void **)(a1 + 72), -1);
    }
    else if ( (_DWORD)v21 != 259 )
    {
      v23 = v3[8];
      if ( (v23 & 1) == 0 )
      {
        ViErrorReport4(v21, *(const void **)(a1 + 48), (const void **)(a1 + 72), v22, *a2);
        v23 = v3[8];
      }
      v3[8] = v23 | 1;
    }
  }
  else
  {
    if ( (_DWORD)v21 != 259 )
    {
      v24 = *(_DWORD *)(v6 + 56);
      if ( (v24 & 0x400000) == 0 )
      {
        ViErrorReport1(0x226u, *(const void **)(a1 + 48), *(const void **)(a1 + 72));
        v24 = *(_DWORD *)(v6 + 56);
      }
      *(_DWORD *)(v6 + 56) = v24 | 0x400000;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) |= 0x4000000u;
    v25 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v25 + 8) != a1 + 32 || (v26 = *(_QWORD **)(a1 + 40), *v26 != a1 + 32) )
      __fastfail(3u);
    *v26 = v25;
    *(_QWORD *)(v25 + 8) = v26;
  }
  v27 = *(_DWORD *)(a1 + 24);
  if ( (v27 & 0x8000000) != 0 && *a2 != 259 && (v27 & 0x1000000) == 0 )
    *a2 = *(_DWORD *)(a1 + 60);
  IovpSessionDataDereference(v3);
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 20));
  return (_UNKNOWN **)VfIrpDatabaseEntryReleaseLock(v6);
}
