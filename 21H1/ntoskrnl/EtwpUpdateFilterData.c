/*
 * XREFs of EtwpUpdateFilterData @ 0x14067F120
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1405F31AC (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x14067EDA8 (EtwpUpdateGuidEnableInfo.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140303170 (KeGenericCallDpc.c)
 *     memset @ 0x140408F80 (memset.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1407BA084 (EtwpUpdateSchematizedFilterData.c)
 *     EtwpUpdateEventFilter @ 0x1407BCA64 (EtwpUpdateEventFilter.c)
 *     EtwpFreeEventNameFilter @ 0x14093C32C (EtwpFreeEventNameFilter.c)
 *     EtwpUpdateLevelKwFilter @ 0x14093C35C (EtwpUpdateLevelKwFilter.c)
 *     EtwpUpdatePidFilterData @ 0x14093C404 (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateStringFilterData @ 0x14093C4A8 (EtwpUpdateStringFilterData.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateFilterData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // r10d
  char v7; // bp
  char *v9; // r15
  char *PoolWithTag; // rax
  __int64 v12; // r14
  __int32 v13; // esi
  unsigned int v14; // eax
  __int32 v15; // ebp
  unsigned int v16; // edx
  __int64 v17; // rcx
  void *v18; // rbp
  __int64 v19; // r14
  __int32 v20; // esi
  __int64 v21; // r8
  unsigned int v22; // [rsp+20h] [rbp-78h]
  PVOID v23; // [rsp+28h] [rbp-70h]
  PVOID v24; // [rsp+30h] [rbp-68h]
  PVOID updated; // [rsp+38h] [rbp-60h]
  PVOID P; // [rsp+40h] [rbp-58h]
  PVOID v27; // [rsp+48h] [rbp-50h]
  __int64 v28; // [rsp+50h] [rbp-48h] BYREF
  int v29; // [rsp+58h] [rbp-40h]
  unsigned int v30; // [rsp+5Ch] [rbp-3Ch]
  __int64 v32; // [rsp+B0h] [rbp+18h]
  char v33; // [rsp+B8h] [rbp+20h]

  v32 = a3;
  v5 = 0;
  v6 = a2;
  v33 = 0;
  v7 = a4;
  P = 0LL;
  updated = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v27 = 0LL;
  if ( !a3 || !*(_DWORD *)(a3 + 116) )
    v7 = 1;
  v9 = *(char **)(a1 + 384);
  if ( v7 )
  {
    if ( v9 )
    {
      v19 = 104LL * a2;
      LOBYTE(a4) = v7;
      v20 = _InterlockedExchange((volatile __int32 *)&v9[v19], 0);
      EtwpUpdateSchematizedFilterData(v19 + *(_QWORD *)(a1 + 384), 0LL, 0LL, a4);
      if ( (v20 & 0x80000004) == 0x80000004 )
      {
        LOBYTE(v21) = v7;
        EtwpUpdatePidFilterData(v19 + *(_QWORD *)(a1 + 384), 0LL, v21);
      }
      if ( (v20 & 0x80000008) == 0x80000008 )
      {
        LOBYTE(v21) = v7;
        EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 384) + 16LL, 0LL, v21);
      }
      if ( (v20 & 0x80000010) == 0x80000010 )
      {
        LOBYTE(v21) = v7;
        EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 384) + 24LL, 0LL, v21);
      }
      if ( (v20 & 0x80000020) == 0x80000020 )
      {
        LOBYTE(v21) = v7;
        EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 384) + 32LL, 0LL, v21);
      }
      if ( (v20 & 0x80008000) == 0x80008000 )
      {
        LOBYTE(v21) = v7;
        EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 384) + 40LL, 0LL, v21);
      }
      if ( (v20 & 0x80001000) == 0x80001000 )
      {
        LOBYTE(v21) = v7;
        P = (PVOID)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 384) + 48LL, 0LL, v21);
      }
      if ( (v20 & 0x80000200) == 0x80000200 )
      {
        LOBYTE(v21) = v7;
        updated = (PVOID)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 384) + 72LL, 0LL, v21);
      }
      if ( (v20 & 0x80000400) == 0x80000400 )
      {
        LOBYTE(v21) = v7;
        v24 = (PVOID)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 384) + 96LL, 0LL, v21);
      }
      if ( (v20 & 0x80002000) == 0x80002000 )
      {
        LOBYTE(v21) = v7;
        v23 = (PVOID)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 384) + 56LL, 0LL, v21);
      }
      if ( (v20 & 0x80004000) == 0x80004000 )
      {
        LOBYTE(v21) = v7;
        EtwpUpdateLevelKwFilter(v19 + *(_QWORD *)(a1 + 384), 0LL, v21);
      }
      if ( (v20 & 0x80000100) == 0x80000100 )
      {
        LOBYTE(v21) = v7;
        v18 = (void *)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 384) + 80LL, 0LL, v21);
      }
      else
      {
        v18 = 0LL;
      }
      goto LABEL_31;
    }
    return v5;
  }
  if ( !v9 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x340uLL, 0x46777445u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    memset(PoolWithTag, 0, 0x340uLL);
    a3 = v32;
    v6 = a2;
    *(_QWORD *)(a1 + 384) = v9;
  }
  v12 = 104LL * v6;
  v13 = 0;
  v22 = 0;
  v14 = 0;
  v15 = _InterlockedExchange((volatile __int32 *)&v9[v12], 0);
  if ( !*(_DWORD *)(a3 + 116) )
    goto LABEL_17;
  do
  {
    v16 = *(_DWORD *)(v32 + 16LL * v14 + 132);
    v17 = v32 + *(_QWORD *)(v32 + 16LL * v14 + 120);
    v29 = *(_DWORD *)(v32 + 16LL * v14 + 128);
    v30 = v16;
    v28 = v17;
    if ( v16 > 0x80000200 )
    {
      switch ( v16 )
      {
        case 0x80000400:
          v24 = (PVOID)EtwpUpdateEventFilter(v12 + *(_QWORD *)(a1 + 384) + 96LL, a5 + 48, 0LL);
          v13 |= 0x80000400;
          goto LABEL_14;
        case 0x80001000:
          P = (PVOID)EtwpUpdateEventFilter(v12 + *(_QWORD *)(a1 + 384) + 48LL, a5 + 40, 0LL);
          v13 |= 0x80001000;
          goto LABEL_14;
        case 0x80002000:
          v23 = (PVOID)EtwpUpdateEventFilter(v12 + *(_QWORD *)(a1 + 384) + 56LL, a5 + 56, 0LL);
          v13 |= 0x80002000;
          goto LABEL_14;
        case 0x80004000:
          EtwpUpdateLevelKwFilter(v12 + *(_QWORD *)(a1 + 384), &v28, 0LL);
          v13 |= 0x80004000;
          break;
        case 0x80008000:
          EtwpUpdateStringFilterData(v12 + *(_QWORD *)(a1 + 384) + 40LL, a5 + 24, 0LL);
          v13 |= 0x80008000;
          break;
        default:
          goto LABEL_14;
      }
      goto LABEL_70;
    }
    if ( v16 == -2147483136 )
    {
      updated = (PVOID)EtwpUpdateEventFilter(v12 + *(_QWORD *)(a1 + 384) + 72LL, a5 + 32, 0LL);
      v13 |= 0x80000200;
LABEL_14:
      LOBYTE(a4) = v33;
      goto LABEL_15;
    }
    if ( v16 != 0x80000000 )
    {
      if ( v16 == -2147483644 )
      {
        EtwpUpdatePidFilterData(v12 + *(_QWORD *)(a1 + 384), &v28, 0LL);
        v13 |= 0x80000004;
      }
      else if ( v16 == -2147483640 )
      {
        EtwpUpdateStringFilterData(v12 + *(_QWORD *)(a1 + 384) + 16LL, a5, 0LL);
        v13 |= 0x80000008;
      }
      else if ( v16 == -2147483632 )
      {
        EtwpUpdateStringFilterData(v12 + *(_QWORD *)(a1 + 384) + 24LL, a5 + 8, 0LL);
        v13 |= 0x80000010;
      }
      else
      {
        if ( v16 != -2147483616 )
        {
          if ( v16 == -2147483392 )
          {
            v27 = (PVOID)EtwpUpdateEventFilter(v12 + *(_QWORD *)(a1 + 384) + 80LL, a5 + 72, 0LL);
            v13 |= 0x80000100;
          }
          goto LABEL_14;
        }
        EtwpUpdateStringFilterData(v12 + *(_QWORD *)(a1 + 384) + 32LL, a5 + 16, 0LL);
        v13 |= 0x80000020;
      }
LABEL_70:
      v6 = a2;
      goto LABEL_14;
    }
    EtwpUpdateSchematizedFilterData(v12 + *(_QWORD *)(a1 + 384), v6, &v28, 0LL);
    v6 = a2;
    LOBYTE(a4) = 1;
    v33 = 1;
LABEL_15:
    v14 = v22 + 1;
    v22 = v14;
  }
  while ( v14 < *(_DWORD *)(v32 + 116) );
  v5 = 0;
  if ( !(_BYTE)a4 )
  {
LABEL_17:
    LOBYTE(a4) = 1;
    EtwpUpdateSchematizedFilterData(v12 + *(_QWORD *)(a1 + 384), 0LL, 0LL, a4);
  }
  if ( (v15 & 0x80000004) == 0x80000004 && (v13 & 0x80000004) != 0x80000004 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdatePidFilterData(v12 + *(_QWORD *)(a1 + 384), 0LL, a3);
  }
  if ( (v15 & 0x80000008) == 0x80000008 && (v13 & 0x80000008) != 0x80000008 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(v12 + *(_QWORD *)(a1 + 384) + 16LL, 0LL, a3);
  }
  if ( (v15 & 0x80000010) == 0x80000010 && (v13 & 0x80000010) != 0x80000010 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(v12 + *(_QWORD *)(a1 + 384) + 24LL, 0LL, a3);
  }
  if ( (v15 & 0x80000020) == 0x80000020 && (v13 & 0x80000020) != 0x80000020 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(v12 + *(_QWORD *)(a1 + 384) + 32LL, 0LL, a3);
  }
  if ( (v15 & 0x80008000) == 0x80008000 && (v13 & 0x80008000) != 0x80008000 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(v12 + *(_QWORD *)(a1 + 384) + 40LL, 0LL, a3);
  }
  if ( (v15 & 0x80001000) == 0x80001000 && (v13 & 0x80001000) != 0x80001000 )
  {
    LOBYTE(a3) = 1;
    P = (PVOID)EtwpUpdateEventFilter(v12 + *(_QWORD *)(a1 + 384) + 48LL, 0LL, a3);
  }
  if ( (v15 & 0x80000200) == 0x80000200 && (v13 & 0x80000200) != 0x80000200 )
  {
    LOBYTE(a3) = 1;
    updated = (PVOID)EtwpUpdateEventFilter(v12 + *(_QWORD *)(a1 + 384) + 72LL, 0LL, a3);
  }
  if ( (v15 & 0x80000400) == 0x80000400 && (v13 & 0x80000400) != 0x80000400 )
  {
    LOBYTE(a3) = 1;
    v24 = (PVOID)EtwpUpdateEventFilter(v12 + *(_QWORD *)(a1 + 384) + 96LL, 0LL, a3);
  }
  if ( (v15 & 0x80002000) == 0x80002000 && (v13 & 0x80002000) != 0x80002000 )
  {
    LOBYTE(a3) = 1;
    v23 = (PVOID)EtwpUpdateEventFilter(v12 + *(_QWORD *)(a1 + 384) + 56LL, 0LL, a3);
  }
  if ( (v15 & 0x80004000) == 0x80004000 && (v13 & 0x80004000) != 0x80004000 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateLevelKwFilter(v12 + *(_QWORD *)(a1 + 384), 0LL, a3);
  }
  if ( (v15 & 0x80000100) != 0x80000100 || (v13 & 0x80000100) == 0x80000100 )
  {
    v18 = v27;
  }
  else
  {
    LOBYTE(a3) = 1;
    v18 = (void *)EtwpUpdateEventFilter(v12 + *(_QWORD *)(a1 + 384) + 80LL, 0LL, a3);
  }
  _InterlockedExchange((volatile __int32 *)(v12 + *(_QWORD *)(a1 + 384)), v13);
LABEL_31:
  if ( P || updated || v24 || v23 || v18 )
  {
    KeGenericCallDpc((__int64)KeAbCrossThreadDeleteNopDpcRoutine, 0LL);
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( updated )
      ExFreePoolWithTag(updated, 0);
    if ( v24 )
      EtwpFreeEventNameFilter(v24);
    if ( v23 )
      EtwpFreeEventNameFilter(v23);
    if ( v18 && _InterlockedExchangeAdd((volatile signed __int32 *)v18, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(v18, 0);
  }
  return v5;
}
