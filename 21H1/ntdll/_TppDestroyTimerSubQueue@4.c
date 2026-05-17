/*
 * XREFs of _TppDestroyTimerSubQueue@4 @ 0x4B2AB7C4
 * Callers:
 *     _TppPoolpFree@4 @ 0x4B2AB6C5 (_TppPoolpFree@4.c)
 *     _TppInitializeTimerQueue@8 @ 0x4B2B4037 (_TppInitializeTimerQueue@8.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

NTSTATUS __thiscall TppDestroyTimerSubQueue(int this)
{
  NTSTATUS result; // eax
  void *v3; // [esp-4h] [ebp-8h]

  NtClose(*(HANDLE *)(this + 20));
  v3 = *(void **)(this + 16);
  *(_DWORD *)(this + 56) = 0;
  result = NtClose(v3);
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 16) = 0;
  return result;
}
