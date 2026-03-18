/*
 * XREFs of PsCreateSystemThreadEx @ 0x1406EE080
 * Callers:
 *     MiZeroNodePages @ 0x1403AA320 (MiZeroNodePages.c)
 *     MiZeroBootLargePages @ 0x1403CA254 (MiZeroBootLargePages.c)
 *     ExpWatchProductTypeWork @ 0x1406BF270 (ExpWatchProductTypeWork.c)
 *     NtGetMUIRegistryInfo @ 0x1406C1890 (NtGetMUIRegistryInfo.c)
 *     ExpNodeCreateSystemThread @ 0x1406EDF4C (ExpNodeCreateSystemThread.c)
 *     PsCreateSystemThread @ 0x1406EE030 (PsCreateSystemThread.c)
 *     MiEnablePartitionMappedWrites @ 0x14070A580 (MiEnablePartitionMappedWrites.c)
 *     IoCreateSystemThread @ 0x140769D50 (IoCreateSystemThread.c)
 *     PopInitSystemSleeperThread @ 0x140775A28 (PopInitSystemSleeperThread.c)
 *     CmpCreateRegistryThread @ 0x1407900E4 (CmpCreateRegistryThread.c)
 *     KiStartDpcThread @ 0x140795154 (KiStartDpcThread.c)
 *     MmStoreRegister @ 0x1407B1700 (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x1407B2360 (MiInsertPageFileInList.c)
 *     PfTStart @ 0x1407BB63C (PfTStart.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1407C53B4 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     PopFxCreateEmergencyWorkerThread @ 0x1407C7230 (PopFxCreateEmergencyWorkerThread.c)
 *     IopStartApcHardError @ 0x1408958B0 (IopStartApcHardError.c)
 *     MiInitializePartitionThreads @ 0x1408CA494 (MiInitializePartitionThreads.c)
 *     EtwpCovSampCaptureContextStart @ 0x140944AE8 (EtwpCovSampCaptureContextStart.c)
 *     ExpWatchLicenseInfoWork @ 0x14094E800 (ExpWatchLicenseInfoWork.c)
 *     NtMapCMFModule @ 0x14095C2A0 (NtMapCMFModule.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeQueryActiveGroupCount @ 0x1403379E0 (KeQueryActiveGroupCount.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140611900 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateThread @ 0x140686404 (PspCreateThread.c)
 */

__int64 __fastcall PsCreateSystemThreadEx(
        __int64 a1,
        int a2,
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
  __int64 v14; // rbx
  _DWORD *v15; // rdi
  int Thread; // edi
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  unsigned int v20; // ebx
  __int128 v21; // xmm0
  int v22; // eax
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  int v24; // [rsp+78h] [rbp-88h]
  __int128 v25; // [rsp+80h] [rbp-80h] BYREF
  __m128i v26; // [rsp+90h] [rbp-70h]
  __int128 v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  __int64 v30; // [rsp+C0h] [rbp-40h]
  __int128 v31; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v32[33]; // [rsp+E0h] [rbp-20h] BYREF

  v10 = a8;
  v30 = a5;
  v29 = a6;
  v24 = a2;
  v28 = a7;
  memset(v32, 0, 0x208uLL);
  v25 = 0LL;
  v23 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v31 = 0LL;
  if ( KeGetCurrentIrql() > 1u )
    KeBugCheckEx(0xC8u, ((unsigned __int64)KeGetCurrentIrql() << 16) | 4, 0LL, 0LL, 0LL);
  v13 = 0;
  if ( a4 )
  {
    Thread = ObpReferenceObjectByHandleWithTag(a4, 2, (__int64)PsProcessType, 0, 0x72437350u, &v23, 0LL, 0LL);
    if ( Thread < 0 )
      return (unsigned int)Thread;
    v14 = v23;
    v13 = 1;
  }
  else
  {
    v14 = *((_QWORD *)PspSystemPartition + 13);
    v23 = v14;
  }
  v15 = (_DWORD *)(v14 + 2172);
  if ( (*(_DWORD *)(v14 + 2172) & 0x1000) != 0 )
  {
    if ( a8 )
      goto LABEL_17;
    if ( !a9 )
    {
      v20 = (unsigned __int16)(_InterlockedExchangeAdd(&PspSystemThreadAssignment, 1u) + 1);
      v10 = &v31;
      WORD4(v31) = v20 % KeQueryActiveGroupCount();
      v14 = v23;
      *(_QWORD *)&v31 = qword_140CFC848[WORD4(v31)];
    }
    if ( v10 )
    {
LABEL_17:
      v21 = *v10;
      v22 = 4096;
      DWORD1(v32[0]) = 4096;
      v32[20] = v21;
    }
    else
    {
      v22 = DWORD1(v32[0]);
    }
    if ( a9 )
    {
      DWORD1(v32[0]) = v22 | 0x4000;
      HIDWORD(v32[15]) = *a9;
    }
  }
  if ( a3 )
  {
    v18 = *a3;
    v26 = (__m128i)a3[1];
    v25 = v18;
    v19 = a3[2];
    v26.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v26, 8)) | 0x200;
    v27 = v19;
  }
  else
  {
    LODWORD(v25) = 48;
    v27 = 0LL;
    *((_QWORD *)&v25 + 1) = 0LL;
    v26.m128i_i32[2] = 512;
    v26.m128i_i64[0] = 0LL;
  }
  Thread = PspCreateThread(
             a1,
             v24,
             (ULONG_PTR)&v25,
             0LL,
             (_KPROCESS *)v14,
             (unsigned __int64)v32 & -(__int64)((*v15 & 0x1000) != 0),
             v30,
             0LL,
             0LL,
             0,
             v29,
             v28,
             0LL);
  if ( v13 )
    ObfDereferenceObjectWithTag((PVOID)v14, 0x72437350u);
  return (unsigned int)Thread;
}
