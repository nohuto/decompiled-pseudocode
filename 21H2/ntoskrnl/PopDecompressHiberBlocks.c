/*
 * XREFs of PopDecompressHiberBlocks @ 0x140995874
 * Callers:
 *     PopRestoreHiberContext @ 0x1409944E8 (PopRestoreHiberContext.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     MmMapMemoryDumpMdlEx2 @ 0x140383B80 (MmMapMemoryDumpMdlEx2.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopInternalAddToDumpFile @ 0x140565184 (PopInternalAddToDumpFile.c)
 *     RtlDecompressBufferProgress @ 0x1405920E0 (RtlDecompressBufferProgress.c)
 *     PopCheckpointSystemSleep @ 0x140994484 (PopCheckpointSystemSleep.c)
 *     ProducerConsumerBufferComplete @ 0x1409956AC (ProducerConsumerBufferComplete.c)
 *     PopHiberCheckForDebugBreak @ 0x14099581C (PopHiberCheckForDebugBreak.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x1409959AC (ConsumerPeekAndConsumeBuffer.c)
 *     PopReadProducerConsumerBuffer @ 0x1409B2620 (PopReadProducerConsumerBuffer.c)
 *     ProducerConsumerCopyFromContextBuffer @ 0x1409B2E70 (ProducerConsumerCopyFromContextBuffer.c)
 *     BgDisplayProgressIndicator @ 0x1409F5334 (BgDisplayProgressIndicator.c)
 */

__int64 __fastcall PopDecompressHiberBlocks(
        _DWORD *BugCheckParameter3,
        _QWORD *a2,
        int a3,
        char a4,
        void (__fastcall *a5)(_DWORD *))
{
  __int64 v8; // r12
  unsigned int v9; // esi
  int v10; // r9d
  __int64 Number; // rcx
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  _DWORD *ProducerConsumerBuffer; // r12
  unsigned int v18; // edi
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  _QWORD *v21; // r9
  _QWORD *v22; // r8
  int v23; // eax
  unsigned __int64 v24; // rdi
  __int64 v25; // r10
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // edi
  unsigned int v29; // ecx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rax
  unsigned int v32; // r9d
  unsigned __int64 v33; // rax
  _DWORD *v34; // r13
  unsigned __int64 v35; // r12
  int v36; // ecx
  unsigned __int64 v37; // rax
  unsigned int v38; // ecx
  unsigned int v40; // [rsp+54h] [rbp-ACh] BYREF
  int v41; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v42; // [rsp+60h] [rbp-A0h]
  int v43; // [rsp+68h] [rbp-98h] BYREF
  void (__fastcall *v44)(_DWORD *); // [rsp+70h] [rbp-90h]
  void *v45; // [rsp+78h] [rbp-88h]
  unsigned __int64 v46; // [rsp+80h] [rbp-80h]
  __int64 v47; // [rsp+88h] [rbp-78h]
  _DWORD *v48; // [rsp+90h] [rbp-70h]
  __int64 v49; // [rsp+98h] [rbp-68h]
  _QWORD v50[22]; // [rsp+A0h] [rbp-60h] BYREF
  char v51; // [rsp+150h] [rbp+50h] BYREF

  v44 = a5;
  memset(v50, 0, sizeof(v50));
  LODWORD(v8) = (_DWORD)qword_140C23EF8;
  v9 = 0;
  v43 = 0;
  v47 = 0LL;
  v41 = 0;
  v45 = qword_140C23EF8;
  while ( 1 )
  {
    PopHiberCheckForDebugBreak();
    if ( !qword_140C24138 && BugCheckParameter3[48] == KeGetCurrentPrcb()->Number && byte_140C23EA0 )
      qword_140C24138 = KeQueryPerformanceCounter(0LL).QuadPart;
    Number = KeGetCurrentPrcb()->Number;
    if ( BugCheckParameter3[48] == (_DWORD)Number
      && !byte_140C23EA1
      && (!byte_140C23EA0 || (unsigned int)dword_140C23E84 > 0x640) )
    {
      v15 = __rdtsc();
      if ( byte_140C50690 )
      {
        LOBYTE(Number) = 1;
        BgDisplayProgressIndicator(Number);
        byte_140C50785 = 1;
      }
      v16 = __rdtsc();
      qword_140C24120 += (((unsigned __int64)HIDWORD(v16) << 32) | (unsigned int)v16) - v15;
    }
    v40 = 4;
    v12 = ConsumerPeekAndConsumeBuffer(v8, (unsigned int)&v40, a3, v10, (__int64)a2);
    v13 = v12;
    if ( !v12 )
      break;
    ProducerConsumerBuffer = (_DWORD *)PopReadProducerConsumerBuffer(v12, 4, (unsigned int)&v43, v8, (__int64)a2, 1);
    v48 = ProducerConsumerBuffer;
    v18 = 8 * (unsigned __int8)*ProducerConsumerBuffer;
    v19 = PopReadProducerConsumerBuffer((int)v13 + 4, v18, (unsigned int)&v51, (_DWORD)v45, (__int64)a2, 1);
    v21 = &v50[6];
    v22 = (_QWORD *)v19;
    v23 = *ProducerConsumerBuffer;
    v42 = v13 + v18 + 4LL;
    v24 = 0LL;
    if ( (_BYTE)v23 )
    {
      v25 = (unsigned __int8)v23;
      do
      {
        v26 = *v22 >> 4;
        v20 = v26 + (*v22 & 0xFLL) + 1;
        v24 += (*v22 & 0xFLL) + 1;
        while ( v26 < v20 )
          *v21++ = v26++;
        ++v22;
        --v25;
      }
      while ( v25 );
    }
    if ( v24 > (unsigned int)BugCheckParameter3[71] )
    {
      PopCheckpointSystemSleep(31);
      PopInternalAddToDumpFile((__int64)BugCheckParameter3, 0x1C8u, 0LL);
      KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL);
    }
    v27 = a2[1];
    v28 = (_DWORD)v24 << 12;
    v49 = v28;
    v50[0] = 0LL;
    LODWORD(v50[1]) = (unsigned __int16)(8 * (((unsigned __int64)v28 >> 12) + 6));
    v50[4] = 0LL;
    v50[5] = v28;
    MmMapMemoryDumpMdlEx2(v27, v20, (__int64)v50, 1);
    v29 = (*ProducerConsumerBuffer >> 8) & 0x3FFFFF;
    v8 = (__int64)v45;
    v46 = __rdtsc();
    if ( v29 == v28 )
    {
      ProducerConsumerCopyFromContextBuffer(v50[3], v28, v45, v42);
      a2[9] += __rdtsc() - v46;
      v30 = __rdtsc();
      ProducerConsumerBufferComplete(v8, v8 + 48, v13, v40);
      v31 = __rdtsc();
      a2[10] += (((unsigned __int64)HIDWORD(v31) << 32) | (unsigned int)v31) - v30;
    }
    else
    {
      ProducerConsumerCopyFromContextBuffer(a2[3], v29, v45, v42);
      v32 = v40;
      v42 = __rdtsc();
      a2[9] += v42 - v46;
      ProducerConsumerBufferComplete(v8, v8 + 48, v13, v32);
      v33 = __rdtsc();
      a2[10] += (((unsigned __int64)HIDWORD(v33) << 32) | (unsigned int)v33) - v42;
      if ( v44 )
      {
        v44(BugCheckParameter3);
        v47 = qword_140C24110;
      }
      v34 = v48;
      v35 = __rdtsc();
      v36 = RtlDecompressBufferProgress(
              *((_WORD *)&PopCompressMethodMap + ((unsigned __int64)(unsigned int)*v48 >> 30)),
              v50[3],
              v28,
              a2[3],
              (*v48 >> 8) & 0x3FFFFF,
              (__int64)&v41,
              a2[2],
              (__int64)v44,
              (__int64)BugCheckParameter3);
      v37 = __rdtsc();
      if ( v36 < 0 || v41 != v28 )
      {
        BugCheckParameter3[47] = -1073741246;
        PopCheckpointSystemSleep(31);
        PopInternalAddToDumpFile((__int64)BugCheckParameter3, 0x1C8u, 0LL);
        KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL);
      }
      a2[8] += v37 - v35;
      if ( v44 )
        a2[8] = v47 + a2[8] - qword_140C24110;
      LODWORD(v8) = (_DWORD)v45;
      v38 = *v34 >> 30;
      *(_QWORD *)((char *)a2 + (-(__int64)(v38 < 2) & 0xFFFFFFFFFFFFFFF8uLL) + 112) += v49;
      *(_QWORD *)((char *)a2 + (-(__int64)(v38 < 2) & 0xFFFFFFFFFFFFFFF8uLL) + 96) += v37 - v42;
    }
    if ( !a4 )
      return v9;
  }
  return (unsigned int)-2147483614;
}
