/*
 * XREFs of _RtlpFreeAllAtom@8 @ 0x4B2A78D7
 * Callers:
 *     _RtlpDereferenceAtom@12 @ 0x4B2A78A1 (_RtlpDereferenceAtom@12.c)
 * Callees:
 *     _RtlpFreeHandleForAtom@8 @ 0x4B2A7933 (_RtlpFreeHandleForAtom@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpHashStringToAtom@28 @ 0x4B2E032F (_RtlpHashStringToAtom@28.c)
 */

signed int __fastcall RtlpFreeAllAtom(void *a1, int a2)
{
  signed int result; // eax
  PVOID v4; // esi
  _BYTE v5[4]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v6; // [esp+8h] [ebp-8h] BYREF
  PVOID BaseAddress; // [esp+Ch] [ebp-4h] BYREF

  BaseAddress = a1;
  result = RtlpHashStringToAtom(a1, &v6, 0, v5, &BaseAddress);
  if ( result >= 0 )
  {
    v4 = BaseAddress;
    if ( BaseAddress )
    {
      if ( v6 )
        *v6 = *(_DWORD *)BaseAddress;
      RtlpFreeHandleForAtom(a2, v4);
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    }
  }
  return result;
}
