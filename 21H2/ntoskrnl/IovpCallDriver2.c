/*
 * XREFs of IovpCallDriver2 @ 0x1409D1144
 * Callers:
 *     VfAfterCallDriver @ 0x1409D1E84 (VfAfterCallDriver.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViErrorReport1 @ 0x1405A2148 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405A21CC (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405A2260 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405A2304 (ViErrorReport6.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x1409D799C (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1409D7A4C (IovUtilIsDeviceObjectMarked.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1409E192C (VfIrpDatabaseEntryReleaseLock.c)
 *     IovpSessionDataDereference @ 0x1409E2930 (IovpSessionDataDereference.c)
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
  unsigned int v17; // ecx
  int v18; // ecx
  int v19; // r9d
  __int64 v20; // rcx
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
  if ( (v9 & 0x20000000) != 0 && *a2 != 259 && (v9 & 0x1000000) == 0 )
  {
    LowerDeviceObjectWithTag = IovUtilGetLowerDeviceObjectWithTag(*(_QWORD *)(a1 + 160));
    v12 = (void *)LowerDeviceObjectWithTag;
    if ( (*(_DWORD *)(a1 + 24) & 0x10000000) != 0 )
    {
LABEL_12:
      if ( !LowerDeviceObjectWithTag )
        goto LABEL_19;
      v16 = *(_QWORD *)(v10[1] + 80LL);
      if ( v16 && *(_QWORD *)(v16 + 104) )
        goto LABEL_17;
      v17 = 541;
      goto LABEL_16;
    }
    v13 = *(_QWORD **)(a1 + 64);
    v14 = *(_QWORD *)(v13[39] + 40LL);
    if ( !v14 )
      goto LABEL_17;
    v15 = *(_DWORD *)(v14 + 396);
    if ( (v15 & 0x10) == 0 )
    {
      if ( (v15 & 0x10000) == 0 )
        goto LABEL_17;
      goto LABEL_12;
    }
    if ( v10 == v13 )
    {
      if ( (unsigned int)IovUtilIsDeviceObjectMarked(v10, 0LL) )
      {
        v17 = 545;
LABEL_16:
        ViErrorReport10(v17, *(const void **)(a1 + 48), *(const void **)(a1 + 72), v10);
      }
    }
    else if ( !(unsigned int)IovUtilIsDeviceObjectMarked(v10, 0LL)
           && (unsigned int)IovUtilIsDeviceObjectMarked(v10, 0LL) )
    {
      v17 = 547;
      goto LABEL_16;
    }
LABEL_17:
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x49667256u);
  }
LABEL_19:
  v18 = *(_DWORD *)(a1 + 24);
  if ( (v18 & 0x40000000) == 0 || (v3[8] & 2) != 0 )
    goto LABEL_35;
  v19 = *a2;
  if ( (v18 & 0x2000000) != 0 )
  {
    if ( v19 == 259 || (v18 & 0x1000000) != 0 )
      goto LABEL_35;
    v20 = 574LL;
  }
  else
  {
    if ( v19 != 259 && (v18 & 0x1000000) == 0 )
      goto LABEL_35;
    v20 = 588LL;
  }
  ViErrorReport6(v20, *(const void **)(a1 + 48), *(const void **)(a1 + 72), v19);
  v3[8] |= 2u;
LABEL_35:
  v21 = (unsigned int)*a2;
  if ( (*(_DWORD *)(a1 + 24) & 0x40000000) != 0 )
  {
    v22 = *(_DWORD *)(a1 + 56);
    if ( (_DWORD)v21 == v22 || (_DWORD)v21 == 259 )
    {
      if ( (_DWORD)v21 == -1 )
        ViErrorReport6(549LL, *(const void **)(a1 + 48), *(const void **)(a1 + 72), -1);
    }
    else
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
