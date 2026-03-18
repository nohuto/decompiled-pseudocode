/*
 * XREFs of PopDecompressHiberBlocks @ 0x140A4CD9C
 * Callers:
 *     PopRestoreHiberContext @ 0x140A4C960 (PopRestoreHiberContext.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     MmMapMemoryDumpMdlEx2 @ 0x14038C498 (MmMapMemoryDumpMdlEx2.c)
 *     RtlDecompressBufferProgress @ 0x14038C720 (RtlDecompressBufferProgress.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopInternalAddToDumpFile @ 0x1405C6658 (PopInternalAddToDumpFile.c)
 *     PopCheckpointSystemSleep @ 0x140A4B974 (PopCheckpointSystemSleep.c)
 *     PopReadProducerConsumerBuffer @ 0x140A4D208 (PopReadProducerConsumerBuffer.c)
 *     ProducerConsumerCopyFromContextBuffer @ 0x140A4D27C (ProducerConsumerCopyFromContextBuffer.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140A4D310 (ConsumerPeekAndConsumeBuffer.c)
 *     PopHiberCheckForDebugBreak @ 0x140A4D92C (PopHiberCheckForDebugBreak.c)
 *     ProducerConsumerBufferComplete @ 0x140A4D96C (ProducerConsumerBufferComplete.c)
 *     BgDisplayProgressIndicator @ 0x140AAD188 (BgDisplayProgressIndicator.c)
 */

__int64 __fastcall PopDecompressHiberBlocks(
        _DWORD *BugCheckParameter3,
        _QWORD *a2,
        int a3,
        char a4,
        void (__fastcall *a5)(_DWORD *))
{
  char *v8; // r12
  unsigned int v9; // esi
  int v10; // r9d
  __int64 Number; // rcx
  __int64 v12; // rax
  __int64 v13; // r13
  _DWORD *ProducerConsumerBuffer; // r12
  unsigned int v15; // edi
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  _QWORD *v18; // r9
  _QWORD *v19; // r8
  int v20; // eax
  unsigned __int64 v21; // rdi
  __int64 v22; // r10
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // edi
  unsigned int v26; // ecx
  __int64 v27; // r9
  unsigned __int64 v28; // rax
  _DWORD *v29; // r13
  unsigned __int64 v30; // r12
  int v31; // ecx
  unsigned __int64 v32; // rax
  unsigned int v33; // ecx
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rax
  unsigned int v40; // [rsp+54h] [rbp-ACh] BYREF
  int v41; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v42; // [rsp+60h] [rbp-A0h]
  int v43; // [rsp+68h] [rbp-98h] BYREF
  void (__fastcall *v44)(_DWORD *); // [rsp+70h] [rbp-90h]
  char *v45; // [rsp+78h] [rbp-88h]
  unsigned __int64 v46; // [rsp+80h] [rbp-80h]
  __int64 v47; // [rsp+88h] [rbp-78h]
  _DWORD *v48; // [rsp+90h] [rbp-70h]
  __int64 v49; // [rsp+98h] [rbp-68h]
  _QWORD v50[22]; // [rsp+A0h] [rbp-60h] BYREF
  char v51; // [rsp+150h] [rbp+50h] BYREF

  v44 = a5;
  memset(v50, 0, sizeof(v50));
  LODWORD(v8) = (_DWORD)qword_140C22C58;
  v9 = 0;
  v43 = 0;
  v47 = 0LL;
  v41 = 0;
  v45 = (char *)qword_140C22C58;
  while ( 1 )
  {
    PopHiberCheckForDebugBreak();
    if ( !qword_140C22E98 && BugCheckParameter3[48] == KeGetCurrentPrcb()->Number && byte_140C22C00 )
      qword_140C22E98 = KeQueryPerformanceCounter(0LL).QuadPart;
    Number = KeGetCurrentPrcb()->Number;
    if ( BugCheckParameter3[48] == (_DWORD)Number
      && !byte_140C22C01
      && ((unsigned int)dword_140C22BE4 > 0x640 || !byte_140C22C00) )
    {
      v35 = __rdtsc();
      if ( byte_140C547E0 )
      {
        LOBYTE(Number) = 1;
        BgDisplayProgressIndicator(Number);
        byte_140C54905 = 1;
      }
      v36 = __rdtsc();
      qword_140C22E80 += (((unsigned __int64)HIDWORD(v36) << 32) | (unsigned int)v36) - v35;
    }
    v40 = 4;
    v12 = ConsumerPeekAndConsumeBuffer((_DWORD)v8, (unsigned int)&v40, a3, v10, (__int64)a2);
    v13 = v12;
    if ( !v12 )
      break;
    ProducerConsumerBuffer = (_DWORD *)PopReadProducerConsumerBuffer(
                                         v12,
                                         4,
                                         (unsigned int)&v43,
                                         (_DWORD)v8,
                                         (__int64)a2,
                                         1);
    v48 = ProducerConsumerBuffer;
    v15 = 8 * (unsigned __int8)*ProducerConsumerBuffer;
    v16 = PopReadProducerConsumerBuffer((int)v13 + 4, v15, (unsigned int)&v51, (_DWORD)v45, (__int64)a2, 1);
    v18 = &v50[6];
    v19 = (_QWORD *)v16;
    v20 = *ProducerConsumerBuffer;
    v42 = v13 + v15 + 4LL;
    v21 = 0LL;
    if ( (_BYTE)v20 )
    {
      v22 = (unsigned __int8)v20;
      do
      {
        v23 = *v19 >> 4;
        v17 = v23 + (*v19 & 0xFLL) + 1;
        v21 += (*v19 & 0xFLL) + 1;
        while ( v23 < v17 )
          *v18++ = v23++;
        ++v19;
        --v22;
      }
      while ( v22 );
    }
    if ( v21 > (unsigned int)BugCheckParameter3[71] )
    {
      PopCheckpointSystemSleep(31);
      PopInternalAddToDumpFile((__int64)BugCheckParameter3, 0x1C8u, 0LL);
      KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL);
    }
    v24 = a2[1];
    v25 = (_DWORD)v21 << 12;
    v49 = v25;
    v50[0] = 0LL;
    LODWORD(v50[1]) = (unsigned __int16)(8 * (((unsigned __int64)v25 >> 12) + 6));
    v50[4] = 0LL;
    v50[5] = v25;
    MmMapMemoryDumpMdlEx2(v24, v17, (__int64)v50, 1);
    v26 = (*ProducerConsumerBuffer >> 8) & 0x3FFFFF;
    v8 = v45;
    v46 = __rdtsc();
    if ( v26 == v25 )
    {
      ProducerConsumerCopyFromContextBuffer(v50[3], v25, v45, v42);
      a2[9] += __rdtsc() - v46;
      v37 = __rdtsc();
      ProducerConsumerBufferComplete(v8, v8 + 48, v13, v40);
      v38 = __rdtsc();
      a2[10] += (((unsigned __int64)HIDWORD(v38) << 32) | (unsigned int)v38) - v37;
    }
    else
    {
      ProducerConsumerCopyFromContextBuffer(a2[3], v26, v45, v42);
      v27 = v40;
      v42 = __rdtsc();
      a2[9] += v42 - v46;
      ProducerConsumerBufferComplete(v8, v8 + 48, v13, v27);
      v28 = __rdtsc();
      a2[10] += (((unsigned __int64)HIDWORD(v28) << 32) | (unsigned int)v28) - v42;
      if ( v44 )
      {
        v44(BugCheckParameter3);
        v47 = qword_140C22E70;
      }
      v29 = v48;
      v30 = __rdtsc();
      v31 = RtlDecompressBufferProgress(
              *((_WORD *)&PopCompressMethodMap + ((unsigned __int64)(unsigned int)*v48 >> 30)),
              v50[3],
              v25,
              a2[3],
              (*v48 >> 8) & 0x3FFFFF,
              (__int64)&v41,
              a2[2],
              (__int64)v44,
              (__int64)BugCheckParameter3);
      v32 = __rdtsc();
      if ( v31 < 0 || v41 != v25 )
      {
        BugCheckParameter3[47] = -1073741246;
        PopCheckpointSystemSleep(31);
        PopInternalAddToDumpFile((__int64)BugCheckParameter3, 0x1C8u, 0LL);
        KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL);
      }
      a2[8] += v32 - v30;
      if ( v44 )
        a2[8] = v47 + a2[8] - qword_140C22E70;
      LODWORD(v8) = (_DWORD)v45;
      v33 = *v29 >> 30;
      *(_QWORD *)((char *)a2 + (-(__int64)(v33 < 2) & 0xFFFFFFFFFFFFFFF8uLL) + 112) += v49;
      *(_QWORD *)((char *)a2 + (-(__int64)(v33 < 2) & 0xFFFFFFFFFFFFFFF8uLL) + 96) += v32 - v42;
    }
    if ( !a4 )
      return v9;
  }
  return (unsigned int)-2147483614;
}
