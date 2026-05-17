/*
 * XREFs of _RtlpHpLargeAllocSizeInternal@12 @ 0x4B37A27E
 * Callers:
 *     _RtlpHpLargeAllocSize@16 @ 0x4B37A1ED (_RtlpHpLargeAllocSize@16.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall RtlpHpLargeAllocSizeInternal(signed __int32 a1, int a2, int *a3)
{
  int v3; // ecx
  signed __int32 v5; // [esp+0h] [ebp-4h] BYREF

  v5 = a1;
  if ( a3 )
  {
    v3 = 0;
    if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
    {
      v3 = 1;
      _InterlockedOr(&v5, 0);
    }
    *a3 = v3;
  }
  return (*(_DWORD *)(a2 + 16) & 0xFFFFF000) - *(unsigned __int16 *)(a2 + 12);
}
