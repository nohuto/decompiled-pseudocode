/*
 * XREFs of EtwpUpdateFilterData @ 0x1406BA5B0
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1406B8424 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1406BA238 (EtwpUpdateGuidEnableInfo.c)
 * Callees:
 *     KeGenericCallDpc @ 0x14029E250 (KeGenericCallDpc.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1407CFEB4 (EtwpUpdateSchematizedFilterData.c)
 *     EtwpUpdateEventFilter @ 0x1407D2884 (EtwpUpdateEventFilter.c)
 *     EtwpFreeEventNameFilter @ 0x140940D10 (EtwpFreeEventNameFilter.c)
 *     EtwpUpdateLevelKwFilter @ 0x140940D40 (EtwpUpdateLevelKwFilter.c)
 *     EtwpUpdatePidFilterData @ 0x140940DE0 (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateStringFilterData @ 0x140940E84 (EtwpUpdateStringFilterData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateFilterData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r10d
  char v6; // si
  char *v8; // rbp
  __int64 v9; // r14
  __int32 v10; // edi
  __int64 v11; // r8
  void *v12; // rbp
  char *PoolWithTag; // rax
  __int64 v15; // rsi
  __int32 v16; // edi
  __int64 v17; // rcx
  __int32 v18; // r14d
  __int64 v19; // rcx
  unsigned int v20; // edx
  int v21; // eax
  __int64 v22; // rcx
  PVOID v23; // r15
  PVOID v24; // rbx
  unsigned int v25; // [rsp+20h] [rbp-98h]
  PVOID v26; // [rsp+28h] [rbp-90h]
  PVOID v27; // [rsp+30h] [rbp-88h]
  int v28; // [rsp+38h] [rbp-80h]
  PVOID updated; // [rsp+40h] [rbp-78h]
  __int64 v30; // [rsp+48h] [rbp-70h]
  PVOID v31; // [rsp+50h] [rbp-68h] BYREF
  PVOID P; // [rsp+58h] [rbp-60h]
  __int32 v33; // [rsp+60h] [rbp-58h]
  __int64 v34; // [rsp+68h] [rbp-50h] BYREF
  int v35; // [rsp+70h] [rbp-48h]
  unsigned int v36; // [rsp+74h] [rbp-44h]
  __int64 v38; // [rsp+D0h] [rbp+18h]
  char v39; // [rsp+D8h] [rbp+20h]

  v38 = a3;
  v5 = a2;
  v25 = 0;
  v6 = a4;
  v39 = 0;
  P = 0LL;
  updated = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  if ( !a3 || !*(_DWORD *)(a3 + 116) )
    v6 = 1;
  v8 = *(char **)(a1 + 384);
  if ( !v6 )
  {
    if ( !v8 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x340uLL, 0x46777445u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225495LL;
      memset(PoolWithTag, 0, 0x340uLL);
      v5 = a2;
      *(_QWORD *)(a1 + 384) = v8;
    }
    v15 = 104LL * v5;
    v16 = 0;
    v17 = 0LL;
    v28 = 0;
    v18 = _InterlockedExchange((volatile __int32 *)&v8[v15], 0);
    v33 = v18;
    if ( !*(_DWORD *)(v38 + 116) )
      goto LABEL_62;
    while ( 1 )
    {
      v19 = 2 * v17;
      v20 = *(_DWORD *)(v38 + 8 * v19 + 132);
      v21 = *(_DWORD *)(v38 + 8 * v19 + 128);
      v22 = v38 + *(_QWORD *)(v38 + 8 * v19 + 120);
      v35 = v21;
      v36 = v20;
      v34 = v22;
      if ( v20 > 0x80000200 )
        break;
      if ( v20 == -2147483136 )
      {
        updated = (PVOID)EtwpUpdateEventFilter(v15 + *(_QWORD *)(a1 + 384) + 72LL, a5 + 32, 0LL);
        v16 |= 0x80000200;
        goto LABEL_59;
      }
      if ( v20 != 0x80000000 )
      {
        if ( v20 == -2147483644 )
        {
          EtwpUpdatePidFilterData(v15 + *(_QWORD *)(a1 + 384), &v34, 0LL);
          v16 |= 0x80000004;
        }
        else if ( v20 == -2147483640 )
        {
          EtwpUpdateStringFilterData(v15 + *(_QWORD *)(a1 + 384) + 16LL, a5, 0LL);
          v16 |= 0x80000008;
        }
        else if ( v20 == -2147483632 )
        {
          EtwpUpdateStringFilterData(v15 + *(_QWORD *)(a1 + 384) + 24LL, a5 + 8, 0LL);
          v16 |= 0x80000010;
        }
        else
        {
          if ( v20 != -2147483616 )
          {
            if ( v20 == -2147483392 )
            {
              v30 = EtwpUpdateEventFilter(v15 + *(_QWORD *)(a1 + 384) + 80LL, a5 + 72, 0LL);
              v16 |= 0x80000100;
            }
            goto LABEL_59;
          }
          EtwpUpdateStringFilterData(v15 + *(_QWORD *)(a1 + 384) + 32LL, a5 + 16, 0LL);
          v16 |= 0x80000020;
        }
LABEL_43:
        v5 = a2;
        goto LABEL_59;
      }
      EtwpUpdateSchematizedFilterData(v15 + *(_QWORD *)(a1 + 384), v5, &v34, 0LL);
      v5 = a2;
      LOBYTE(a3) = 1;
      v39 = 1;
LABEL_60:
      v17 = (unsigned int)(v28 + 1);
      v28 = v17;
      if ( (unsigned int)v17 >= *(_DWORD *)(v38 + 116) )
      {
        v18 = v33;
        if ( !(_BYTE)a3 )
        {
LABEL_62:
          LOBYTE(a4) = 1;
          EtwpUpdateSchematizedFilterData(v15 + *(_QWORD *)(a1 + 384), 0LL, 0LL, a4);
        }
        if ( (v18 & 0x80000004) == 0x80000004 && (v16 & 0x80000004) != 0x80000004 )
        {
          LOBYTE(a3) = 1;
          EtwpUpdatePidFilterData(v15 + *(_QWORD *)(a1 + 384), 0LL, a3);
        }
        if ( (v18 & 0x80000008) == 0x80000008 && (v16 & 0x80000008) != 0x80000008 )
        {
          LOBYTE(a3) = 1;
          EtwpUpdateStringFilterData(v15 + *(_QWORD *)(a1 + 384) + 16LL, 0LL, a3);
        }
        if ( (v18 & 0x80000010) == 0x80000010 && (v16 & 0x80000010) != 0x80000010 )
        {
          LOBYTE(a3) = 1;
          EtwpUpdateStringFilterData(v15 + *(_QWORD *)(a1 + 384) + 24LL, 0LL, a3);
        }
        if ( (v18 & 0x80000020) == 0x80000020 && (v16 & 0x80000020) != 0x80000020 )
        {
          LOBYTE(a3) = 1;
          EtwpUpdateStringFilterData(v15 + *(_QWORD *)(a1 + 384) + 32LL, 0LL, a3);
        }
        if ( (v18 & 0x80008000) == 0x80008000 && (v16 & 0x80008000) != 0x80008000 )
        {
          LOBYTE(a3) = 1;
          EtwpUpdateStringFilterData(v15 + *(_QWORD *)(a1 + 384) + 40LL, 0LL, a3);
        }
        if ( (v18 & 0x80001000) == 0x80001000 && (v16 & 0x80001000) != 0x80001000 )
        {
          LOBYTE(a3) = 1;
          P = (PVOID)EtwpUpdateEventFilter(v15 + *(_QWORD *)(a1 + 384) + 48LL, 0LL, a3);
        }
        if ( (v18 & 0x80000200) == 0x80000200 && (v16 & 0x80000200) != 0x80000200 )
        {
          LOBYTE(a3) = 1;
          updated = (PVOID)EtwpUpdateEventFilter(v15 + *(_QWORD *)(a1 + 384) + 72LL, 0LL, a3);
        }
        if ( (v18 & 0x80000400) == 0x80000400 && (v16 & 0x80000400) != 0x80000400 )
        {
          LOBYTE(a3) = 1;
          v27 = (PVOID)EtwpUpdateEventFilter(v15 + *(_QWORD *)(a1 + 384) + 96LL, 0LL, a3);
        }
        if ( (v18 & 0x80002000) == 0x80002000 && (v16 & 0x80002000) != 0x80002000 )
        {
          LOBYTE(a3) = 1;
          v26 = (PVOID)EtwpUpdateEventFilter(v15 + *(_QWORD *)(a1 + 384) + 56LL, 0LL, a3);
        }
        if ( (v18 & 0x80004000) == 0x80004000 && (v16 & 0x80004000) != 0x80004000 )
        {
          LOBYTE(a3) = 1;
          v25 = EtwpUpdateLevelKwFilter(v15 + *(_QWORD *)(a1 + 384), 0LL, a3, &v31);
        }
        if ( (v18 & 0x80000100) != 0x80000100 || (v16 & 0x80000100) == 0x80000100 )
        {
          v12 = (void *)v30;
        }
        else
        {
          LOBYTE(a3) = 1;
          v12 = (void *)EtwpUpdateEventFilter(v15 + *(_QWORD *)(a1 + 384) + 80LL, 0LL, a3);
        }
        _InterlockedExchange((volatile __int32 *)(v15 + *(_QWORD *)(a1 + 384)), v16);
LABEL_99:
        v23 = P;
        v24 = v31;
        if ( P || updated || v27 || v26 || v31 || v12 )
        {
          KeGenericCallDpc((__int64)KeAbCrossThreadDeleteNopDpcRoutine, 0LL);
          if ( v23 )
            ExFreePoolWithTag(v23, 0);
          if ( updated )
            ExFreePoolWithTag(updated, 0);
          if ( v27 )
            EtwpFreeEventNameFilter(v27);
          if ( v26 )
            EtwpFreeEventNameFilter(v26);
          if ( v24 )
            ExFreePoolWithTag(v24, 0);
          if ( v12 )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12, 0xFFFFFFFF) == 1 )
              ExFreePoolWithTag(v12, 0);
          }
        }
        return v25;
      }
    }
    switch ( v20 )
    {
      case 0x80000400:
        v27 = (PVOID)EtwpUpdateEventFilter(v15 + *(_QWORD *)(a1 + 384) + 96LL, a5 + 48, 0LL);
        v16 |= 0x80000400;
        break;
      case 0x80001000:
        P = (PVOID)EtwpUpdateEventFilter(v15 + *(_QWORD *)(a1 + 384) + 48LL, a5 + 40, 0LL);
        v16 |= 0x80001000;
        break;
      case 0x80002000:
        v26 = (PVOID)EtwpUpdateEventFilter(v15 + *(_QWORD *)(a1 + 384) + 56LL, a5 + 56, 0LL);
        v16 |= 0x80002000;
        break;
      case 0x80004000:
        v25 = EtwpUpdateLevelKwFilter(v15 + *(_QWORD *)(a1 + 384), &v34, 0LL, &v31);
        v16 |= 0x80004000;
        goto LABEL_43;
      case 0x80008000:
        EtwpUpdateStringFilterData(v15 + *(_QWORD *)(a1 + 384) + 40LL, a5 + 24, 0LL);
        v16 |= 0x80008000;
        goto LABEL_43;
    }
LABEL_59:
    LOBYTE(a3) = v39;
    goto LABEL_60;
  }
  if ( v8 )
  {
    v9 = 104LL * a2;
    LOBYTE(a4) = v6;
    v10 = _InterlockedExchange((volatile __int32 *)&v8[v9], 0);
    EtwpUpdateSchematizedFilterData(v9 + *(_QWORD *)(a1 + 384), 0LL, 0LL, a4);
    if ( (v10 & 0x80000004) == 0x80000004 )
    {
      LOBYTE(v11) = v6;
      EtwpUpdatePidFilterData(v9 + *(_QWORD *)(a1 + 384), 0LL, v11);
    }
    if ( (v10 & 0x80000008) == 0x80000008 )
    {
      LOBYTE(v11) = v6;
      EtwpUpdateStringFilterData(v9 + *(_QWORD *)(a1 + 384) + 16LL, 0LL, v11);
    }
    if ( (v10 & 0x80000010) == 0x80000010 )
    {
      LOBYTE(v11) = v6;
      EtwpUpdateStringFilterData(v9 + *(_QWORD *)(a1 + 384) + 24LL, 0LL, v11);
    }
    if ( (v10 & 0x80000020) == 0x80000020 )
    {
      LOBYTE(v11) = v6;
      EtwpUpdateStringFilterData(v9 + *(_QWORD *)(a1 + 384) + 32LL, 0LL, v11);
    }
    if ( (v10 & 0x80008000) == 0x80008000 )
    {
      LOBYTE(v11) = v6;
      EtwpUpdateStringFilterData(v9 + *(_QWORD *)(a1 + 384) + 40LL, 0LL, v11);
    }
    if ( (v10 & 0x80001000) == 0x80001000 )
    {
      LOBYTE(v11) = v6;
      P = (PVOID)EtwpUpdateEventFilter(v9 + *(_QWORD *)(a1 + 384) + 48LL, 0LL, v11);
    }
    if ( (v10 & 0x80000200) == 0x80000200 )
    {
      LOBYTE(v11) = v6;
      updated = (PVOID)EtwpUpdateEventFilter(v9 + *(_QWORD *)(a1 + 384) + 72LL, 0LL, v11);
    }
    if ( (v10 & 0x80000400) == 0x80000400 )
    {
      LOBYTE(v11) = v6;
      v27 = (PVOID)EtwpUpdateEventFilter(v9 + *(_QWORD *)(a1 + 384) + 96LL, 0LL, v11);
    }
    if ( (v10 & 0x80002000) == 0x80002000 )
    {
      LOBYTE(v11) = v6;
      v26 = (PVOID)EtwpUpdateEventFilter(v9 + *(_QWORD *)(a1 + 384) + 56LL, 0LL, v11);
    }
    if ( (v10 & 0x80004000) == 0x80004000 )
    {
      LOBYTE(v11) = v6;
      v25 = EtwpUpdateLevelKwFilter(v9 + *(_QWORD *)(a1 + 384), 0LL, v11, &v31);
    }
    if ( (v10 & 0x80000100) == 0x80000100 )
    {
      LOBYTE(v11) = v6;
      v12 = (void *)EtwpUpdateEventFilter(v9 + *(_QWORD *)(a1 + 384) + 80LL, 0LL, v11);
    }
    else
    {
      v12 = 0LL;
    }
    goto LABEL_99;
  }
  return 0LL;
}
