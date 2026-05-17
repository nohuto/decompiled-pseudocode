/*
 * XREFs of _RtlUnlockHeapManagerForCloning@4 @ 0x4B3573F1
 * Callers:
 *     _RtlCloneUserProcess@20 @ 0x4B335760 (_RtlCloneUserProcess@20.c)
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpUnlockHeapManagerForCloning@8 @ 0x4B359836 (_RtlpUnlockHeapManagerForCloning@8.c)
 */

int __thiscall RtlUnlockHeapManagerForCloning(void *this)
{
  struct _PEB *v1; // edi
  unsigned int NumberOfHeaps; // esi
  _DWORD *v3; // edx
  char v5[16]; // [esp+14h] [ebp-4Ch] BYREF
  int v6; // [esp+24h] [ebp-3Ch]
  struct _PEB *v7; // [esp+30h] [ebp-30h]
  void *v8; // [esp+34h] [ebp-2Ch]
  unsigned int v9; // [esp+38h] [ebp-28h]
  int v10; // [esp+3Ch] [ebp-24h]
  void **ProcessHeaps; // [esp+40h] [ebp-20h]
  unsigned int v12; // [esp+44h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+48h] [ebp-18h]

  v8 = this;
  v1 = NtCurrentPeb();
  v7 = v1;
  if ( this )
  {
    RtlpHpLfhPerfFlags &= ~0x40u;
    ProcessHeaps = v1->ProcessHeaps;
    NumberOfHeaps = v1->NumberOfHeaps;
    v9 = NumberOfHeaps;
    v12 = 0;
    v10 = 0;
    while ( v12 < v1->NumberOfHeaps )
    {
      NtQueryVirtualMemory(-1, (int)ProcessHeaps[v12], 0, (int)v5, 28, 0);
      ms_exc.registration.TryLevel = 0;
      if ( v6 == 4096 && ((v3 = ProcessHeaps[v12], v3[24] == -285217025) || v3[2] == -571548178) )
        ProcessHeaps[v10++] = v3;
      else
        v9 = --NumberOfHeaps;
      ms_exc.registration.TryLevel = -2;
      ++v12;
    }
    v1->NumberOfHeaps = NumberOfHeaps;
  }
  return RtlpUnlockHeapManagerForCloning(v8, v1->NumberOfHeaps);
}
