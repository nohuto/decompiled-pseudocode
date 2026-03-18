/*
 * XREFs of PspWritePebAffinityInfo @ 0x1405D938C
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x14065D8C8 (PspApplyJobLimitsToProcess.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406F98FC (PspSetupUserProcessAddressSpace.c)
 *     PspUpdateSingleProcessAffinity @ 0x140904120 (PspUpdateSingleProcessAffinity.c)
 * Callees:
 *     KeQueryGroupMaskProcess @ 0x14020433C (KeQueryGroupMaskProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void __fastcall PspWritePebAffinityInfo(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // r8
  _DWORD *v14; // r9
  signed __int32 v15[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v16; // [rsp+20h] [rbp-88h]
  unsigned int v17; // [rsp+24h] [rbp-84h]
  unsigned int GroupMaskProcess; // [rsp+28h] [rbp-80h]
  unsigned int v19; // [rsp+2Ch] [rbp-7Ch]
  __int64 v20; // [rsp+30h] [rbp-78h]
  __int64 v21; // [rsp+38h] [rbp-70h]
  __int64 v22; // [rsp+40h] [rbp-68h]
  __int64 v23; // [rsp+48h] [rbp-60h]
  _OWORD v24[3]; // [rsp+50h] [rbp-58h] BYREF

  v23 = a2;
  memset(v24, 0, sizeof(v24));
  v5 = 0;
  v16 = 0;
  v17 = 0;
  v6 = *(_QWORD *)(a2 + 1360);
  v21 = v6;
  if ( !v6 )
    return;
  if ( *(_QWORD *)(a2 + 1088) )
  {
    if ( a2 == *(_QWORD *)(a1 + 184) )
    {
      if ( a2 != *(_QWORD *)(a1 + 544) )
        v5 = 2;
      v16 = v5;
      if ( v5 < 2 )
      {
LABEL_19:
        if ( (v5 & 1) != 0 )
          KiStackAttachProcess((_KPROCESS *)a2, 0LL, (__int64)v24, a4);
        goto LABEL_3;
      }
    }
    else
    {
      v5 = 3;
      v16 = 3;
    }
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 1112)) )
      return;
    goto LABEL_19;
  }
LABEL_3:
  v19 = v5;
  v7 = 0LL;
  v8 = *(__int64 **)(a2 + 1408);
  if ( v8 )
    v7 = *v8;
  v22 = v7;
  do
  {
    do
    {
      GroupMaskProcess = KeQueryGroupMaskProcess(a2);
      _BitScanForward((unsigned int *)&v10, GroupMaskProcess);
      v17 = v10;
      v11 = *(_QWORD *)(a2 + 8 * v10 + 88);
      v20 = v11;
    }
    while ( !v11 );
    *(_QWORD *)(v6 + 312) = v11;
    if ( v9 )
      *(_DWORD *)(v9 + 192) = v11 | HIDWORD(v11);
    _InterlockedOr(v15, 0);
    v12 = KeQueryGroupMaskProcess(a2);
  }
  while ( (_DWORD)v14 != v12 || v13 != *(_QWORD *)(a2 + 8LL * v17 + 88) );
  if ( v5 )
  {
    if ( (v5 & 1) != 0 )
      KiUnstackDetachProcess((__int64)v24, 0LL, v13, v14);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 1112));
  }
}
