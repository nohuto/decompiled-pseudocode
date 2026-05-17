/*
 * XREFs of _RtlpTraceDatabaseFree@8 @ 0x4B36A49D
 * Callers:
 *     _RtlTraceDatabaseDestroy@4 @ 0x4B36A2A0 (_RtlTraceDatabaseDestroy@4.c)
 * Callees:
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 */

bool __thiscall RtlpTraceDatabaseFree(void *this)
{
  void *v2; // [esp+0h] [ebp-8h] BYREF
  int v3; // [esp+4h] [ebp-4h] BYREF

  v3 = 0;
  v2 = this;
  return NtFreeVirtualMemory(-1, (int)&v2, (int)&v3, 0x8000) >= 0;
}
