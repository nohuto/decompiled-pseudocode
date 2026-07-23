/*
 * XREFs of _RtlpFreeActivationContext@4 @ 0x4B2A926F
 * Callers:
 *     _RtlReleaseActivationContext@4 @ 0x4B2B2660 (_RtlReleaseActivationContext@4.c)
 *     @RtlpMoveActCtxToFreeList@4 @ 0x4B33D930 (@RtlpMoveActCtxToFreeList@4.c)
 * Callees:
 *     _RtlpUninitializeAssemblyStorageMap@4 @ 0x4B2A92C3 (_RtlpUninitializeAssemblyStorageMap@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

LOGICAL __thiscall RtlpFreeActivationContext(int this)
{
  void (__thiscall *v2)(_DWORD, int, int, _DWORD, _DWORD, _DWORD, char *); // edi
  LOGICAL result; // eax
  char v4; // [esp+Bh] [ebp-1h] BYREF

  v4 = 0;
  v2 = *(void (__thiscall **)(_DWORD, int, int, _DWORD, _DWORD, _DWORD, char *))(this + 20);
  if ( v2 )
    v2(*(_DWORD *)(this + 20), 1, this, *(_DWORD *)(this + 16), *(_DWORD *)(this + 24), 0, &v4);
  result = RtlpUninitializeAssemblyStorageMap(this + 92);
  if ( (*(_BYTE *)(this + 4) & 2) == 0 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)(this - 4));
  return result;
}
