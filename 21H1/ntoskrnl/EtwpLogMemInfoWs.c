/*
 * XREFs of EtwpLogMemInfoWs @ 0x140932160
 * Callers:
 *     EtwpPerfMemInfoWork @ 0x140932A50 (EtwpPerfMemInfoWork.c)
 *     EtwpLogMemInfoRundown @ 0x1409393B0 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403F29F0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PsGetNextProcess @ 0x1405EF280 (PsGetNextProcess.c)
 *     SmProcessQueryStoreStats @ 0x1409255E8 (SmProcessQueryStoreStats.c)
 *     EtwpLogMemInfoWsHelper @ 0x140932484 (EtwpLogMemInfoWsHelper.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x140932758 (EtwpLogSessionWorkingSetInfo.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpLogMemInfoWs(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // r15
  unsigned int v4; // edi
  unsigned int v5; // r12d
  int v6; // r13d
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rsi
  __int64 v9; // rbx
  SYSTEM_INFORMATION_CLASS *v10; // r14
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  _DWORD *NextProcess; // rdi
  __int64 v14; // r13
  __int64 v15; // r14
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  unsigned int *v19; // rax
  unsigned int *v20; // r14
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  SYSTEM_INFORMATION_CLASS v24; // [rsp+28h] [rbp-59h]
  _DWORD *v25; // [rsp+30h] [rbp-51h]
  unsigned __int64 v26; // [rsp+38h] [rbp-49h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-41h] BYREF
  __int64 v28; // [rsp+48h] [rbp-39h]
  unsigned __int64 v29; // [rsp+50h] [rbp-31h]
  _QWORD SystemInformation[8]; // [rsp+58h] [rbp-29h] BYREF
  _DWORD v31[4]; // [rsp+98h] [rbp+17h] BYREF

  v29 = a2;
  v28 = a1;
  LODWORD(v3) = 64;
  v31[0] = 81;
  v31[1] = 119;
  v31[2] = 120;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v4 = 0;
  v26 = 0LL;
  v27 = 0LL;
  EtwpLogSessionWorkingSetInfo(a1);
  v5 = 4356;
  v6 = -1;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1104uLL, 0x74777445u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return;
  v9 = (__int64)(PoolWithTag + 1);
  *PoolWithTag = 0;
  v25 = PoolWithTag + 1089;
  v10 = (SYSTEM_INFORMATION_CLASS *)v31;
  do
  {
    v24 = *v10;
    if ( ZwQuerySystemInformation(*v10, SystemInformation, 0x40u, 0LL) )
      goto LABEL_31;
    *(_DWORD *)v9 = v6;
    v11 = SystemInformation[0] >> 12;
    *(_QWORD *)(v9 + 4) = SystemInformation[0] >> 12;
    *(_QWORD *)(v9 + 28) = v11;
    *(_QWORD *)(v9 + 12) = v11;
    *(_QWORD *)(v9 + 60) = 0LL;
    *(_QWORD *)(v9 + 20) = v11;
    *(_QWORD *)(v9 + 44) = 0LL;
    *(_QWORD *)(v9 + 36) = 0LL;
    *(_QWORD *)(v9 + 52) = 0LL;
    if ( v24 == SystemPagedPoolInformationEx )
    {
      v12 = v29;
      if ( v29 > v11 )
      {
        *(_QWORD *)(v9 + 12) = v29;
        *(_QWORD *)(v9 + 20) = v12;
      }
    }
    ++*v8;
    v9 += 68LL;
    --v6;
    ++v4;
    ++v10;
  }
  while ( v4 < 3 );
  NextProcess = PsIdleProcess;
  v14 = v28;
  if ( !PsIdleProcess )
  {
LABEL_30:
    EtwpLogMemInfoWsHelper(v14, v8);
    goto LABEL_31;
  }
  v15 = (__int64)v25;
  while ( 1 )
  {
    v16 = NextProcess[281];
    if ( (v16 & 0x4000000) != 0
      && ((v16 & 4) == 0 || !NextProcess[1] || NextProcess[380] || *((_DWORD **)NextProcess + 6) != NextProcess + 12) )
    {
      break;
    }
LABEL_27:
    if ( NextProcess == PsIdleProcess )
      NextProcess = 0LL;
    NextProcess = (_DWORD *)PsGetNextProcess(NextProcess);
    if ( !NextProcess )
      goto LABEL_30;
  }
  if ( v9 != v15 )
  {
LABEL_20:
    *(_DWORD *)v9 = NextProcess[272];
    *(_QWORD *)(v9 + 4) = *((_QWORD *)NextProcess + 223);
    *(_QWORD *)(v9 + 28) = *((_QWORD *)NextProcess + 224);
    *(_QWORD *)(v9 + 12) = *((_QWORD *)NextProcess + 201);
    *(_QWORD *)(v9 + 60) = *((_QWORD *)NextProcess + 293);
    *(_QWORD *)(v9 + 20) = *((_QWORD *)NextProcess + 147) >> 12;
    v21 = *(_QWORD *)(v9 + 12);
    if ( v21 >= *(_QWORD *)(v9 + 20) )
      v21 = *(_QWORD *)(v9 + 20);
    v22 = *(_QWORD *)(v9 + 4);
    *(_QWORD *)(v9 + 12) = v21;
    v23 = *(_QWORD *)(v9 + 28);
    if ( v23 >= v22 )
      v23 = v22;
    *(_QWORD *)(v9 + 36) = 0LL;
    *(_QWORD *)(v9 + 44) = 0LL;
    *(_QWORD *)(v9 + 28) = v23;
    *(_QWORD *)(v9 + 52) = *((_QWORD *)NextProcess + 233);
    if ( (int)SmProcessQueryStoreStats(NextProcess, &v26, &v27) >= 0 )
    {
      *(_QWORD *)(v9 + 36) = v26 >> 12;
      *(_QWORD *)(v9 + 44) = v27 >> 12;
    }
    v9 += 68LL;
    ++*v8;
    goto LABEL_27;
  }
  if ( (unsigned int)v3 >= 0x100 )
  {
    EtwpLogMemInfoWsHelper(v14, v8);
    *v8 = 0;
    v9 = (__int64)(v8 + 1);
    goto LABEL_20;
  }
  v17 = 68 * v3;
  v18 = v5;
  v3 = (unsigned int)(2 * v3);
  v5 += v17;
  v19 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x74777445u);
  v20 = v19;
  if ( v19 )
  {
    memmove(v19, v8, v18);
    ExFreePoolWithTag(v8, 0);
    v8 = v20;
    v9 = (__int64)&v20[17 * *v20 + 1];
    v15 = (__int64)&v20[17 * v3 + 1];
    goto LABEL_20;
  }
  ObfDereferenceObjectWithTag(NextProcess, 0x6E457350u);
LABEL_31:
  ExFreePoolWithTag(v8, 0);
}
