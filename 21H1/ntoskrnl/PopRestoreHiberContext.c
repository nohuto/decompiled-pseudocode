/*
 * XREFs of PopRestoreHiberContext @ 0x14098F728
 * Callers:
 *     PopHandleNextState @ 0x14098F3C0 (PopHandleNextState.c)
 * Callees:
 *     IoNotifyDump @ 0x1403813A4 (IoNotifyDump.c)
 *     IoInitializeDumpStack @ 0x14038A1A8 (IoInitializeDumpStack.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PopInternalAddToDumpFile @ 0x14055F450 (PopInternalAddToDumpFile.c)
 *     PopDecompressHiberBlocks @ 0x14098D8EC (PopDecompressHiberBlocks.c)
 *     PopCheckpointSystemSleep @ 0x14098F6C4 (PopCheckpointSystemSleep.c)
 *     PopHiberReadChecksums @ 0x1409AD6A8 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1409ADB84 (PopRequestRead.c)
 *     BgLibraryInitialize @ 0x1409EE854 (BgLibraryInitialize.c)
 */

struct _KPRCB *__fastcall PopRestoreHiberContext(ULONG_PTR BugCheckParameter3)
{
  struct _KPRCB *result; // rax
  unsigned int Number; // edi
  unsigned __int64 v4; // r15
  _QWORD *v5; // r13
  __int64 v6; // r12
  _QWORD *v7; // rdx
  _DWORD *v8; // rsi
  int v9; // ebp
  __int64 v10; // rdi
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rsi
  int v13; // eax
  char v14; // cl
  unsigned __int64 v15; // rax
  unsigned int v16; // r8d
  __int64 v17; // r10
  __int64 v18; // rsi
  __int64 v19; // r11
  __int64 v20; // rdi
  unsigned int v21; // ebp
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  __int64 v25; // r10
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  int v28; // eax
  ULONG_PTR v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  void (*v33)(void); // rax
  __int64 v34; // rax
  __int128 v35; // [rsp+30h] [rbp-58h] BYREF
  __int64 v36; // [rsp+40h] [rbp-48h]
  unsigned __int64 v37; // [rsp+90h] [rbp+8h]

  v35 = 0LL;
  v36 = 0LL;
  result = KeGetCurrentPrcb();
  Number = result->Number;
  if ( Number < *(_DWORD *)(BugCheckParameter3 + 256) )
  {
    v4 = 0LL;
    v5 = (_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 264) + ((unsigned __int64)Number << 7));
    v5[10] = 0LL;
    if ( Number == *(_DWORD *)(BugCheckParameter3 + 192) )
    {
      byte_140C50580 = 0;
      v12 = __rdtsc();
      if ( qword_140C50578 )
      {
        v13 = BgLibraryInitialize(qword_140C50578, 0xFFFFFFFFLL);
        v14 = byte_140C50580;
        if ( v13 >= 0 )
          v14 = 1;
        byte_140C50580 = v14;
      }
      v15 = __rdtsc();
      qword_140C23AC0 += (((unsigned __int64)HIDWORD(v15) << 32) | (unsigned int)v15) - v12;
    }
    if ( !Number )
    {
      v6 = 0LL;
      v7 = *(_QWORD **)(BugCheckParameter3 + 200);
      v37 = __rdtsc();
      if ( v7[11] == v7[69] )
        v6 = v7[72];
      *(_QWORD *)(BugCheckParameter3 + 400) = v6;
      v8 = qword_140C23678;
      v9 = *(_DWORD *)(BugCheckParameter3 + 280);
      v10 = *(_QWORD *)(BugCheckParameter3 + 272);
      memset(qword_140C23678, 0, 0x40uLL);
      v8[6] = 0;
      *(_QWORD *)v8 = v10;
      v8[2] = v9;
      *((_QWORD *)v8 + 2) = v6;
      *(_BYTE *)(BugCheckParameter3 + 4) = 1;
      IoNotifyDump(2);
      if ( *(_QWORD *)(BugCheckParameter3 + 400) )
      {
        *(_DWORD *)(BugCheckParameter3 + 184) = 9;
        *(_QWORD *)(BugCheckParameter3 + 160) = &v35;
        *(_QWORD *)&v35 = qword_140C235F8;
        *((_QWORD *)&v35 + 1) = qword_140C235F8;
        v36 = 0LL;
        ((void (__fastcall *)(_QWORD))off_140C00858[0])(0LL);
        v28 = IoInitializeDumpStack(*(_QWORD *)(BugCheckParameter3 + 168));
        v29 = v28;
        if ( v28 < 0 || PopSimulateHiberBugcheck == 4 )
        {
          PopCheckpointSystemSleep(28);
          PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0xCuLL, v29, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
        }
        v30 = __rdtsc();
        v11 = v37;
        qword_140C23AA0 = (((unsigned __int64)HIDWORD(v30) << 32) | (unsigned int)v30) - v37;
        v31 = *(_QWORD *)(BugCheckParameter3 + 168);
        *(_DWORD *)(BugCheckParameter3 + 328) = 0;
        *(_QWORD *)(BugCheckParameter3 + 344) = 0LL;
        if ( *(_QWORD *)(v31 + 128) )
          *(_BYTE *)(BugCheckParameter3 + 392) = 1;
        PopHiberReadChecksums(BugCheckParameter3);
        v32 = *(_QWORD *)(BugCheckParameter3 + 200);
        *(_DWORD *)(BugCheckParameter3 + 184) = 10;
        *(_QWORD *)(BugCheckParameter3 + 376) = *(_QWORD *)(v32 + 112) << 12;
        while ( *(_QWORD *)(BugCheckParameter3 + 400) )
        {
          PopRequestRead(BugCheckParameter3);
          if ( (unsigned int)PopDecompressHiberBlocks(
                               (_DWORD *)BugCheckParameter3,
                               v5,
                               1,
                               0,
                               (void (__fastcall *)(_DWORD *))PopDecompressCallback) == -2147483614
            && !*(_DWORD *)(BugCheckParameter3 + 328) )
          {
            _mm_pause();
          }
        }
        PopDecompressHiberBlocks((_DWORD *)BugCheckParameter3, v5, 1, 1, 0LL);
        v33 = *(void (**)(void))(*(_QWORD *)(BugCheckParameter3 + 168) + 72LL);
        if ( v33 )
          v33();
      }
      else
      {
        v11 = v37;
      }
      IoNotifyDump(3);
      ((void (__fastcall *)(__int64))off_140C00858[0])(1LL);
      _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
      while ( 1 )
      {
        v16 = *(_DWORD *)(BugCheckParameter3 + 256);
        if ( *(_DWORD *)(BugCheckParameter3 + 16) == v16 )
          break;
        _mm_pause();
      }
      v17 = 0LL;
      v18 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      v21 = 0;
      if ( v16 )
      {
        v22 = *(_QWORD *)(BugCheckParameter3 + 264);
        do
        {
          v23 = v4;
          v24 = (unsigned __int64)v21 << 7;
          qword_140C23A80 += *(_QWORD *)(v24 + v22 + 64);
          qword_140C23A90 += *(_QWORD *)(v24 + *(_QWORD *)(BugCheckParameter3 + 264) + 72);
          qword_140C23AB8 += *(_QWORD *)(v24 + *(_QWORD *)(BugCheckParameter3 + 264) + 80);
          v22 = *(_QWORD *)(BugCheckParameter3 + 264);
          v4 = *(_QWORD *)(v24 + v22 + 64) + *(_QWORD *)(v24 + v22 + 72);
          if ( v4 <= v23 )
            v4 = v23;
          v17 += *(_QWORD *)(v24 + v22 + 88);
          v18 += *(_QWORD *)(v24 + v22 + 96);
          ++v21;
          v19 += *(_QWORD *)(v24 + v22 + 104);
          v20 += *(_QWORD *)(v24 + v22 + 112);
          v16 = *(_DWORD *)(BugCheckParameter3 + 256);
        }
        while ( v21 < v16 );
      }
      v25 = v17 / (v19 + 1);
      v26 = v18 / (v20 + 1);
      if ( v26 > v25 )
      {
        v34 = 100 * (qword_140C23A88 * v16 / (v19 + v20 + 1) - v25) / (v26 - v25);
        if ( v34 > 99 )
        {
          dword_140C23624 = 99;
          goto LABEL_27;
        }
        dword_140C23624 = v34;
        if ( (int)v34 >= 1 )
          goto LABEL_27;
      }
      dword_140C23624 = 1;
LABEL_27:
      v27 = __rdtsc();
      qword_140C23AA8 = (((unsigned __int64)HIDWORD(v27) << 32) | (unsigned int)v27) - v11;
      result = (struct _KPRCB *)(qword_140C23AA8 - qword_140C23AA0 - v4);
      qword_140C23A78 = (__int64)result;
      return result;
    }
    while ( !*(_BYTE *)(BugCheckParameter3 + 4) )
      _mm_pause();
    result = (struct _KPRCB *)PopDecompressHiberBlocks((_DWORD *)BugCheckParameter3, v5, 0, 1, 0LL);
    _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
  }
  return result;
}
