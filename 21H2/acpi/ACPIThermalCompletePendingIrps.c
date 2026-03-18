/*
 * XREFs of ACPIThermalCompletePendingIrps @ 0x1C0020E34
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C00209D8 (ACPIThermalLoopEx.c)
 *     ACPIThermalStopZoneWorker @ 0x1C006109C (ACPIThermalStopZoneWorker.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqssdddd @ 0x1C002112C (WPP_RECORDER_SF_qqssdddd.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 */

char __fastcall ACPIThermalCompletePendingIrps(__int64 a1)
{
  __int64 v1; // r15
  char v3; // bl
  KIRQL v4; // al
  __int64 *v5; // r12
  __int64 *v6; // rdi
  __int64 *v7; // rsi
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // rax
  __int64 **v11; // rcx
  __int64 **v12; // rax
  _QWORD *v13; // rdi
  _QWORD *v15; // rcx
  IRP *v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  void *v19; // r15
  void *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r13
  void *Pool2; // rax
  IRP *v25; // [rsp+30h] [rbp-51h]
  __int64 v26; // [rsp+38h] [rbp-49h]
  void *v27; // [rsp+40h] [rbp-41h]
  void *v28; // [rsp+48h] [rbp-39h]
  int Hour; // [rsp+50h] [rbp-31h]
  int Minute; // [rsp+58h] [rbp-29h]
  int Second; // [rsp+60h] [rbp-21h]
  int Milliseconds; // [rsp+68h] [rbp-19h]
  KIRQL v33; // [rsp+78h] [rbp-9h]
  _QWORD *v34; // [rsp+80h] [rbp-1h] BYREF
  __int64 *v35; // [rsp+88h] [rbp+7h]
  union _LARGE_INTEGER Time; // [rsp+90h] [rbp+Fh] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+98h] [rbp+17h] BYREF

  v1 = *(_QWORD *)(a1 + 200);
  v35 = (__int64 *)&v34;
  v3 = 0;
  v34 = &v34;
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalLock);
  v5 = (__int64 *)AcpiThermalList;
  v33 = v4;
  if ( (__int64 *)AcpiThermalList == &AcpiThermalList )
    goto LABEL_12;
  do
  {
    v6 = v5;
    v7 = v5;
    v5 = (__int64 *)*v5;
    v8 = v6[2];
    if ( ACPIInternalGetDeviceExtension(*(_QWORD *)(v8 + 40)) != a1 )
      continue;
    v9 = *(_DWORD *)(v8 + 24);
    if ( v9 == 2703488 )
    {
      if ( !_InterlockedExchange64(v6 - 8, 0LL) )
        continue;
      *(_DWORD *)(a1 + 192) |= 0x20000000u;
      v22 = *(v6 - 18);
      *(_OWORD *)v22 = *(_OWORD *)v1;
      *(_OWORD *)(v22 + 16) = *(_OWORD *)(v1 + 16);
      *(_OWORD *)(v22 + 32) = *(_OWORD *)(v1 + 32);
      *(_OWORD *)(v22 + 48) = *(_OWORD *)(v1 + 48);
      *(_OWORD *)(v22 + 64) = *(_OWORD *)(v1 + 64);
      *(_QWORD *)(v22 + 80) = *(_QWORD *)(v1 + 80);
      *(_DWORD *)(v22 + 88) = *(_DWORD *)(v1 + 88);
      *(v6 - 14) = 92LL;
    }
    else if ( v9 == 2703512 )
    {
      v23 = *(v6 - 18);
      *(_OWORD *)v23 = 0LL;
      if ( *(_QWORD *)(v1 + 312) )
      {
        Pool2 = (void *)ExAllocatePool2(64LL, *(unsigned __int16 *)(v1 + 306), 1416651585LL);
        *(_QWORD *)(v23 + 8) = Pool2;
        if ( Pool2 )
        {
          *(_WORD *)v23 = *(_WORD *)(v1 + 304);
          *(_WORD *)(v23 + 2) = *(_WORD *)(v1 + 306);
          memmove(Pool2, *(const void **)(v1 + 312), *(unsigned __int16 *)(v1 + 306));
        }
      }
      *(v6 - 14) = 16LL;
    }
    else
    {
      *(v6 - 14) = 0LL;
    }
    *((_DWORD *)v6 - 30) = 0;
    v10 = *v7;
    if ( *(__int64 **)(*v7 + 8) != v7
      || (v11 = (__int64 **)v7[1], *v11 != v7)
      || (*v11 = (__int64 *)v10, *(_QWORD *)(v10 + 8) = v11, v12 = (__int64 **)v35, (_QWORD **)*v35 != &v34) )
    {
LABEL_29:
      __fastfail(3u);
    }
    v7[1] = (__int64)v35;
    *v7 = (__int64)&v34;
    *v12 = v7;
    v35 = v7;
  }
  while ( v5 != &AcpiThermalList );
  v4 = v33;
LABEL_12:
  KeReleaseSpinLock(&AcpiThermalLock, v4);
  v13 = v34;
  while ( v13 != &v34 )
  {
    v15 = (_QWORD *)*v13;
    v16 = (IRP *)(v13 - 21);
    v17 = v13;
    v13 = v15;
    if ( (_QWORD *)v15[1] != v17 )
      goto LABEL_29;
    v18 = (_QWORD *)v17[1];
    if ( (_QWORD *)*v18 != v17 )
      goto LABEL_29;
    *v18 = v15;
    v19 = &unk_1C006FB8B;
    v15[1] = v18;
    v20 = &unk_1C006FB8B;
    TimeFields = 0LL;
    Time.QuadPart = MEMORY[0xFFFFF78000000008];
    RtlTimeToTimeFields(&Time, &TimeFields);
    v21 = *(_QWORD *)(a1 + 8);
    if ( (v21 & 0x200000000000LL) != 0 )
    {
      v19 = *(void **)(a1 + 608);
      if ( (v21 & 0x400000000000LL) != 0 )
        v20 = *(void **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Milliseconds = TimeFields.Milliseconds;
      Second = TimeFields.Second;
      Minute = TimeFields.Minute;
      Hour = TimeFields.Hour;
      v28 = v20;
      v27 = v19;
      v26 = a1;
      v25 = v16;
      WPP_RECORDER_SF_qqssdddd(WPP_GLOBAL_Control->DeviceExtension, TimeFields.Second, TimeFields.Minute, 11);
    }
    IofCompleteRequest(v16, 0);
    v3 = 1;
  }
  return v3;
}
