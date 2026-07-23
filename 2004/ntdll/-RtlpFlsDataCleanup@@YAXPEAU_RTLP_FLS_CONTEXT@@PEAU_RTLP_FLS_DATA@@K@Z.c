/*
 * XREFs of ?RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z @ 0x18005DCB4
 * Callers:
 *     LdrShutdownThread @ 0x180017450 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x18005DA50 (LdrShutdownProcess.c)
 *     RtlProcessFlsData @ 0x18005DCA0 (RtlProcessFlsData.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RtlpFlsDataCleanup(struct _RTLP_FLS_CONTEXT *a1, struct _RTLP_FLS_DATA *a2, char a3)
{
  unsigned int v5; // esi
  __int64 v6; // rbp
  unsigned int v7; // ecx
  unsigned int v8; // edx
  __int64 v9; // rcx
  _QWORD *v10; // r14
  __int64 v11; // rdx
  struct _RTLP_FLS_DATA **v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // edx
  __int64 v15; // rcx
  _RTL_SRWLOCK *v16; // rdi
  void (*Value)(void); // rax
  PVOID *v18; // rdi
  __int64 v19; // rsi

  if ( (a3 & 1) != 0 )
  {
    if ( (_DWORD)qword_18016B308 )
    {
      v5 = 17;
      v6 = (unsigned int)qword_18016B308;
      do
      {
        _BitScanReverse(&v7, v5);
        v8 = v5 ^ (1 << v7);
        v9 = *((_QWORD *)a2 + v7 - 2);
        if ( v9 )
        {
          v10 = (_QWORD *)(v9 + 8 * (v8 + 1LL));
          if ( v10 )
          {
            if ( *v10 )
            {
              _BitScanReverse(&v13, v5);
              v14 = v5 ^ (1 << v13);
              v15 = *((_QWORD *)&RtlpFlsContext + v13 - 3);
              if ( v15 )
                v16 = (_RTL_SRWLOCK *)(16LL * v14 + v15 + 8);
              else
                v16 = 0LL;
              RtlAcquireSRWLockShared(v16);
              Value = (void (*)(void))v16[1].Value;
              if ( (unsigned __int64)Value - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v10 )
              {
                Value();
                *v10 = 0LL;
              }
              RtlReleaseSRWLockShared(v16);
            }
          }
        }
        ++v5;
        --v6;
      }
      while ( v6 );
    }
    RtlAcquireSRWLockExclusive(&RtlpFlsContext);
    v11 = *(_QWORD *)a2;
    if ( *(struct _RTLP_FLS_DATA **)(*(_QWORD *)a2 + 8LL) != a2
      || (v12 = (struct _RTLP_FLS_DATA **)*((_QWORD *)a2 + 1), *v12 != a2) )
    {
      __fastfail(3u);
    }
    *v12 = (struct _RTLP_FLS_DATA *)v11;
    *(_QWORD *)(v11 + 8) = v12;
    RtlReleaseSRWLockExclusive(&RtlpFlsContext);
  }
  if ( (a3 & 2) != 0 )
  {
    v18 = (PVOID *)((char *)a2 + 16);
    v19 = 8LL;
    do
    {
      if ( *v18 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *v18);
      ++v18;
      --v19;
    }
    while ( v19 );
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
}
