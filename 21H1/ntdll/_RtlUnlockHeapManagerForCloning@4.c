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
  ULONG_PTR *v5; // [esp+0h] [ebp-60h]
  char MemoryInformation[16]; // [esp+14h] [ebp-4Ch] BYREF
  int v7; // [esp+24h] [ebp-3Ch]
  struct _PEB *v8; // [esp+30h] [ebp-30h]
  void *v9; // [esp+34h] [ebp-2Ch]
  unsigned int v10; // [esp+38h] [ebp-28h]
  int v11; // [esp+3Ch] [ebp-24h]
  void **ProcessHeaps; // [esp+40h] [ebp-20h]
  unsigned int v13; // [esp+44h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+48h] [ebp-18h]

  v9 = this;
  v1 = NtCurrentPeb();
  v8 = v1;
  if ( this )
  {
    RtlpHpLfhPerfFlags &= ~0x40u;
    ProcessHeaps = v1->ProcessHeaps;
    NumberOfHeaps = v1->NumberOfHeaps;
    v10 = NumberOfHeaps;
    v13 = 0;
    v11 = 0;
    while ( v13 < v1->NumberOfHeaps )
    {
      NtQueryVirtualMemory(
        (HANDLE)0xFFFFFFFF,
        ProcessHeaps[v13],
        MemoryBasicInformation,
        MemoryInformation,
        0x1CuLL,
        v5);
      ms_exc.registration.TryLevel = 0;
      if ( v7 == 4096 && ((v3 = ProcessHeaps[v13], v3[24] == -285217025) || v3[2] == -571548178) )
        ProcessHeaps[v11++] = v3;
      else
        v10 = --NumberOfHeaps;
      ms_exc.registration.TryLevel = -2;
      ++v13;
    }
    v1->NumberOfHeaps = NumberOfHeaps;
  }
  return RtlpUnlockHeapManagerForCloning(v9, v1->NumberOfHeaps);
}
