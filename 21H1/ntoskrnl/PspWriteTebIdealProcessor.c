/*
 * XREFs of PspWriteTebIdealProcessor @ 0x14064C5BC
 * Callers:
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     PspUserThreadStartup @ 0x14064C130 (PspUserThreadStartup.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     KeGetProcessorNumberFromIndex @ 0x1402C1310 (KeGetProcessorNumberFromIndex.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void __fastcall PspWriteTebIdealProcessor(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _PROCESSOR_NUMBER *v6; // r15
  _PROCESSOR_NUMBER *v7; // r14
  _PROCESSOR_NUMBER *v8; // rax
  _KPROCESS *v9; // r12
  unsigned __int64 v10; // rcx
  char v11; // di
  char v12; // si
  _PROCESSOR_NUMBER *v13; // r13
  _PROCESSOR_NUMBER *i; // r12
  _PROCESSOR_NUMBER v15; // eax
  __int64 v16; // r8
  _DWORD *v17; // r9
  _PROCESSOR_NUMBER *v18; // rax
  signed __int32 v19[8]; // [rsp+0h] [rbp-C8h] BYREF
  char v20; // [rsp+20h] [rbp-A8h]
  char v21; // [rsp+21h] [rbp-A7h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+24h] [rbp-A4h] BYREF
  _PROCESSOR_NUMBER v23; // [rsp+28h] [rbp-A0h] BYREF
  _PROCESSOR_NUMBER *v24; // [rsp+30h] [rbp-98h]
  _PROCESSOR_NUMBER *v25; // [rsp+38h] [rbp-90h]
  _PROCESSOR_NUMBER *v26; // [rsp+40h] [rbp-88h]
  _PROCESSOR_NUMBER *p_ProcNumber; // [rsp+48h] [rbp-80h]
  _PROCESSOR_NUMBER *v28; // [rsp+50h] [rbp-78h]
  __int64 v29; // [rsp+58h] [rbp-70h]
  _OWORD v30[3]; // [rsp+60h] [rbp-68h] BYREF

  v29 = a2;
  memset(v30, 0, sizeof(v30));
  ProcNumber = 0;
  v23 = 0;
  v6 = 0LL;
  v25 = 0LL;
  v7 = 0LL;
  v26 = 0LL;
  v8 = *(_PROCESSOR_NUMBER **)(a2 + 240);
  v24 = v8;
  v28 = v8;
  v9 = *(_KPROCESS **)(a2 + 544);
  p_ProcNumber = &ProcNumber;
  v10 = v9[1].AffinityPadding[10];
  if ( v10 )
  {
    v18 = v8 + 2048;
    if ( *(_WORD *)(v10 + 8) == 0x8664 )
    {
      v7 = v18;
      v26 = v18;
    }
    else
    {
      v6 = v18;
      v25 = v18;
    }
  }
  v11 = 0;
  v21 = 0;
  if ( a2 != a1 )
  {
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 1272)) )
      return;
    v11 = 1;
    v21 = 1;
  }
  v12 = 0;
  v20 = 0;
  if ( v9 != *(_KPROCESS **)(a1 + 184) )
  {
    KiStackAttachProcess(v9, 0LL, (__int64)v30, a4);
    v12 = 1;
    v20 = 1;
  }
  KeGetProcessorNumberFromIndex(*(_DWORD *)(a2 + 196), &ProcNumber);
  v13 = v24;
  for ( i = p_ProcNumber; ; *i = v23 )
  {
    ProcNumber.Reserved = ProcNumber.Number;
    v15 = ProcNumber;
    v13[1489] = ProcNumber;
    if ( v7 )
      v7[1489] = v15;
    if ( v6 )
    {
      LOWORD(v24) = v15.Group;
      BYTE2(v24) = v15.Number & 0x1F;
      BYTE3(v24) = v15.Reserved & 0x1F;
      v6[989] = (_PROCESSOR_NUMBER)v24;
    }
    _InterlockedOr(v19, 0);
    KeGetProcessorNumberFromIndex(*(_DWORD *)(a2 + 196), &v23);
    if ( v23.Group == ProcNumber.Group && v23.Number == ProcNumber.Number )
      break;
  }
  if ( v12 )
    KiUnstackDetachProcess((__int64)v30, 0LL, v16, v17);
  if ( v11 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 1272));
}
