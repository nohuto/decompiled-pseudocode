/*
 * XREFs of RtlpUnlockHeapManagerForCloning @ 0x1800F4824
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x1800F24F4 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800F2E78 (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlpCSparseBitmapUnlock @ 0x18000643C (RtlpCSparseBitmapUnlock.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlpHpUnlockHeapForCloning @ 0x18010E2D0 (RtlpHpUnlockHeapForCloning.c)
 */

__int64 __fastcall RtlpUnlockHeapManagerForCloning(unsigned int a1, __int64 a2, __int64 a3)
{
  struct _PEB *v3; // r14
  __int64 v5; // rsi
  __int64 v6; // rbp
  void **ProcessHeaps; // rax
  void *v8; // rbx
  volatile signed __int64 *v9; // rcx
  void *UniqueThread; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  int v14; // [rsp+20h] [rbp-28h] BYREF
  char v15; // [rsp+24h] [rbp-24h]
  void *v16; // [rsp+28h] [rbp-20h]

  v3 = NtCurrentPeb();
  if ( (_DWORD)a2 )
  {
    v5 = 0LL;
    v6 = (unsigned int)a2;
    do
    {
      ProcessHeaps = v3->ProcessHeaps;
      v8 = ProcessHeaps[v5];
      if ( *((_DWORD *)v8 + 4) == -571548178 )
      {
        if ( (*((_BYTE *)v8 + 20) & 1) == 0 )
          RtlpHpUnlockHeapForCloning(ProcessHeaps[v5], a1);
      }
      else if ( (*((_BYTE *)v8 + 112) & 1) == 0 )
      {
        if ( *((_BYTE *)v8 + 418) == 2 )
          v9 = (volatile signed __int64 *)*((_QWORD *)v8 + 51);
        else
          v9 = 0LL;
        if ( v9 )
        {
          if ( a1 )
            *v9 = 1LL;
          RtlReleaseSRWLockExclusive(v9);
        }
        if ( a1 )
        {
          a2 = *((_QWORD *)v8 + 44);
          *((_WORD *)v8 + 208) = 0;
          *(_QWORD *)(a2 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
          *(_DWORD *)(a2 + 8) = -2;
          *(_DWORD *)(a2 + 12) = 1;
          *(_QWORD *)(a2 + 24) = 0LL;
        }
        RtlLeaveCriticalSection(*((_QWORD *)v8 + 44), a2, a3);
      }
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_18016BC40 = -1LL;
    qword_180168CF0 = (__int64)UniqueThread;
    dword_180168CE8 = -2;
    dword_180168CEC = 1;
    qword_180168CF8 = 0LL;
    qword_18016BC38 = 1LL;
  }
  v14 = 1;
  v16 = &unk_18016BC20;
  v15 = -1;
  RtlpCSparseBitmapUnlock((__int64)&v14);
  return RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsListLock, v11, v12);
}
