/*
 * XREFs of ?RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z @ 0x18005F2B4
 * Callers:
 *     LdrShutdownThread @ 0x180017450 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x18005EFD0 (LdrShutdownProcess.c)
 *     RtlProcessFlsData @ 0x18005F2A0 (RtlProcessFlsData.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RtlpFlsDataCleanup(
        struct _RTLP_FLS_CONTEXT *a1,
        struct _RTLP_FLS_DATA *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  char v4; // r15
  struct _RTLP_FLS_DATA *v5; // rbx
  unsigned int v6; // esi
  __int64 v7; // rbp
  unsigned int v8; // ecx
  __int64 v9; // rcx
  _QWORD *v10; // r14
  __int64 v11; // rdx
  struct _RTLP_FLS_DATA **v12; // rax
  unsigned int v13; // ecx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  void (*v17)(void); // rax
  __int64 *v18; // rdi
  __int64 v19; // rsi

  v4 = a3;
  v5 = a2;
  if ( (a3 & 1) != 0 )
  {
    if ( (_DWORD)qword_18016D358 )
    {
      v6 = 17;
      v7 = (unsigned int)qword_18016D358;
      do
      {
        _BitScanReverse(&v8, v6);
        a2 = (struct _RTLP_FLS_DATA *)(v6 ^ (1 << v8));
        v9 = *((_QWORD *)v5 + v8 - 2);
        if ( v9 )
        {
          v10 = (_QWORD *)(v9 + 8 * ((unsigned int)a2 + 1LL));
          if ( v10 )
          {
            if ( *v10 )
            {
              _BitScanReverse(&v13, v6);
              v14 = v6 ^ (1 << v13);
              v15 = *((_QWORD *)&RtlpFlsContext + v13 - 3);
              if ( v15 )
                v16 = 16LL * (unsigned int)v14 + v15 + 8;
              else
                v16 = 0LL;
              RtlAcquireSRWLockShared((volatile signed __int64 *)v16, v14, a3, a4);
              v17 = *(void (**)(void))(v16 + 8);
              if ( (unsigned __int64)v17 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v10 )
              {
                v17();
                *v10 = 0LL;
              }
              RtlReleaseSRWLockShared((volatile signed __int64 *)v16);
            }
          }
        }
        ++v6;
        --v7;
      }
      while ( v7 );
    }
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpFlsContext, (unsigned __int64)a2, a3, a4);
    v11 = *(_QWORD *)v5;
    if ( *(struct _RTLP_FLS_DATA **)(*(_QWORD *)v5 + 8LL) != v5
      || (v12 = (struct _RTLP_FLS_DATA **)*((_QWORD *)v5 + 1), *v12 != v5) )
    {
      __fastfail(3u);
    }
    *v12 = (struct _RTLP_FLS_DATA *)v11;
    *(_QWORD *)(v11 + 8) = v12;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)&RtlpFlsContext);
  }
  if ( (v4 & 2) != 0 )
  {
    v18 = (__int64 *)((char *)v5 + 16);
    v19 = 8LL;
    do
    {
      if ( *v18 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *v18);
      ++v18;
      --v19;
    }
    while ( v19 );
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v5);
  }
}
