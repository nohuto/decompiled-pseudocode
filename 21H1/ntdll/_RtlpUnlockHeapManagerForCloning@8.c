/*
 * XREFs of _RtlpUnlockHeapManagerForCloning@8 @ 0x4B359836
 * Callers:
 *     _RtlLockHeapManagerForCloning@0 @ 0x4B356BD9 (_RtlLockHeapManagerForCloning@0.c)
 *     _RtlUnlockHeapManagerForCloning@4 @ 0x4B3573F1 (_RtlUnlockHeapManagerForCloning@4.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpUnlockHeapForCloning@8 @ 0x4B379A6D (_RtlpHpUnlockHeapForCloning@8.c)
 *     _RtlpCSparseBitmapUnlock@4 @ 0x4B380071 (_RtlpCSparseBitmapUnlock@4.c)
 */

NTSTATUS __fastcall RtlpUnlockHeapManagerForCloning(int a1, unsigned int a2)
{
  struct _PEB *v3; // ecx
  unsigned int v4; // edi
  void **ProcessHeaps; // eax
  void *v6; // esi
  _RTL_SRWLOCK *v7; // eax
  _DWORD *v8; // ecx
  void *UniqueThread; // eax
  void *v10; // eax
  struct _PEB *i; // [esp+Ch] [ebp-14h]
  int v14; // [esp+14h] [ebp-Ch] BYREF
  char v15; // [esp+18h] [ebp-8h]
  void *v16; // [esp+1Ch] [ebp-4h]

  v3 = NtCurrentPeb();
  v4 = 0;
  for ( i = v3; v4 < a2; ++v4 )
  {
    ProcessHeaps = v3->ProcessHeaps;
    v6 = ProcessHeaps[v4];
    if ( *((_DWORD *)v6 + 2) == -571548178 )
    {
      if ( (*((_BYTE *)v6 + 12) & 1) == 0 )
      {
        RtlpHpUnlockHeapForCloning(ProcessHeaps[v4], a1);
LABEL_16:
        v3 = i;
      }
    }
    else if ( (*((_BYTE *)v6 + 64) & 1) == 0 )
    {
      if ( *((_BYTE *)v6 + 234) == 2 )
        v7 = (_RTL_SRWLOCK *)*((_DWORD *)v6 + 57);
      else
        v7 = 0;
      if ( v7 )
      {
        if ( a1 )
          v7->Value = 1;
        RtlReleaseSRWLockExclusive(v7);
      }
      if ( a1 )
      {
        v8 = (_DWORD *)*((_DWORD *)v6 + 50);
        *((_WORD *)v6 + 116) = 0;
        UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        v8[4] = 0;
        v8[3] = UniqueThread;
        v8[1] = -2;
        v8[2] = 1;
      }
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)v6 + 50));
      goto LABEL_16;
    }
  }
  if ( a1 )
  {
    v10 = NtCurrentTeb()->ClientId.UniqueThread;
    RtlpProcessHeapsListLock.LockSemaphore = 0;
    dword_4B3A6DD8 = -1;
    RtlpProcessHeapsListLock.OwningThread = v10;
    RtlpProcessHeapsListLock.LockCount = -2;
    RtlpProcessHeapsListLock.RecursionCount = 1;
    dword_4B3A6DD4 = 1;
  }
  v16 = &unk_4B3A6DC8;
  v14 = 1;
  v15 = -1;
  RtlpCSparseBitmapUnlock(&v14);
  return RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
}
