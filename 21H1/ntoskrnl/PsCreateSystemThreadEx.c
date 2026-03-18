/*
 * XREFs of PsCreateSystemThreadEx @ 0x140655580
 * Callers:
 *     MiZeroNodePages @ 0x1403ADD50 (MiZeroNodePages.c)
 *     MiZeroBootLargePages @ 0x1403C6804 (MiZeroBootLargePages.c)
 *     MiEnablePartitionMappedWrites @ 0x140643794 (MiEnablePartitionMappedWrites.c)
 *     ExpNodeCreateSystemThread @ 0x140655448 (ExpNodeCreateSystemThread.c)
 *     PsCreateSystemThread @ 0x140655530 (PsCreateSystemThread.c)
 *     NtGetMUIRegistryInfo @ 0x1406CC610 (NtGetMUIRegistryInfo.c)
 *     ExpWatchProductTypeWork @ 0x1406DF6A0 (ExpWatchProductTypeWork.c)
 *     IoCreateSystemThread @ 0x140759660 (IoCreateSystemThread.c)
 *     PopInitSystemSleeperThread @ 0x140765038 (PopInitSystemSleeperThread.c)
 *     KiStartDpcThread @ 0x140781AC0 (KiStartDpcThread.c)
 *     CmpCreateRegistryThread @ 0x140788804 (CmpCreateRegistryThread.c)
 *     MmStoreRegister @ 0x14079E3F0 (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x14079F050 (MiInsertPageFileInList.c)
 *     PfTStart @ 0x1407AA59C (PfTStart.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1407B3A14 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     PopFxCreateEmergencyWorkerThread @ 0x1407B5830 (PopFxCreateEmergencyWorkerThread.c)
 *     IopStartApcHardError @ 0x14088EAA0 (IopStartApcHardError.c)
 *     MiInitializePartitionThreads @ 0x1408C3304 (MiInitializePartitionThreads.c)
 *     EtwpCovSampCaptureContextStart @ 0x14093DAA8 (EtwpCovSampCaptureContextStart.c)
 *     ExpWatchLicenseInfoWork @ 0x1409476A0 (ExpWatchLicenseInfoWork.c)
 *     NtMapCMFModule @ 0x140954E10 (NtMapCMFModule.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeQueryActiveGroupCount @ 0x1402C9F20 (KeQueryActiveGroupCount.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateThread @ 0x140707180 (PspCreateThread.c)
 */

__int64 __fastcall PsCreateSystemThreadEx(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int128 *a8,
        _DWORD *a9)
{
  __int128 *v10; // rsi
  char v13; // r12
  _DWORD *v14; // rbx
  _DWORD *v15; // rdi
  int v16; // edi
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  unsigned int v20; // ebx
  __int128 v21; // xmm0
  int v22; // eax
  _QWORD *BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v25; // [rsp+78h] [rbp-88h]
  __int128 v26; // [rsp+80h] [rbp-80h] BYREF
  __m128i v27; // [rsp+90h] [rbp-70h]
  __int128 v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  __int64 v31; // [rsp+C0h] [rbp-40h]
  __int128 v32; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v33[32]; // [rsp+E0h] [rbp-20h] BYREF

  v10 = a8;
  v31 = a5;
  v30 = a6;
  v25 = a2;
  v29 = a7;
  memset(v33, 0, sizeof(v33));
  v26 = 0LL;
  v24 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v32 = 0LL;
  if ( KeGetCurrentIrql() > 1u )
    KeBugCheckEx(0xC8u, ((unsigned __int64)KeGetCurrentIrql() << 16) | 4, 0LL, 0LL, 0LL);
  v13 = 0;
  if ( a4 )
  {
    LODWORD(BugCheckParameter4) = 1917023056;
    v16 = ObpReferenceObjectByHandleWithTag(a4, 2LL, PsProcessType, 0, BugCheckParameter4, &v24, 0LL, 0LL);
    if ( v16 < 0 )
      return (unsigned int)v16;
    v14 = (_DWORD *)v24;
    v13 = 1;
  }
  else
  {
    v14 = (_DWORD *)*((_QWORD *)PspSystemPartition + 13);
    v24 = (__int64)v14;
  }
  v15 = v14 + 543;
  if ( (v14[543] & 0x1000) != 0 )
  {
    if ( a8 )
      goto LABEL_17;
    if ( !a9 )
    {
      v20 = (unsigned __int16)(_InterlockedExchangeAdd(&PspSystemThreadAssignment, 1u) + 1);
      v10 = &v32;
      WORD4(v32) = v20 % KeQueryActiveGroupCount();
      v14 = (_DWORD *)v24;
      *(_QWORD *)&v32 = qword_140CFC838[WORD4(v32)];
    }
    if ( v10 )
    {
LABEL_17:
      v21 = *v10;
      v22 = 4096;
      DWORD1(v33[0]) = 4096;
      v33[20] = v21;
    }
    else
    {
      v22 = DWORD1(v33[0]);
    }
    if ( a9 )
    {
      DWORD1(v33[0]) = v22 | 0x4000;
      HIDWORD(v33[15]) = *a9;
    }
  }
  if ( a3 )
  {
    v18 = *a3;
    v27 = (__m128i)a3[1];
    v26 = v18;
    v19 = a3[2];
    v27.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v27, 8)) | 0x200;
    v28 = v19;
  }
  else
  {
    LODWORD(v26) = 48;
    v28 = 0LL;
    *((_QWORD *)&v26 + 1) = 0LL;
    v27.m128i_i32[2] = 512;
    v27.m128i_i64[0] = 0LL;
  }
  v16 = PspCreateThread(
          a1,
          v25,
          &v26,
          0LL,
          v14,
          (unsigned __int64)v33 & -(__int64)((*v15 & 0x1000) != 0),
          v31,
          0LL,
          0LL,
          0,
          v30,
          v29,
          0LL);
  if ( v13 )
    ObfDereferenceObjectWithTag(v14, 0x72437350u);
  return (unsigned int)v16;
}
