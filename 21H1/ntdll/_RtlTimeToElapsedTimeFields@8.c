/*
 * XREFs of _RtlTimeToElapsedTimeFields@8 @ 0x4B344E50
 * Callers:
 *     <none>
 * Callees:
 *     TimeToDaysAndFraction @ 0x4B344F4F (TimeToDaysAndFraction.c)
 */

unsigned int __stdcall RtlTimeToElapsedTimeFields(int a1, int a2)
{
  unsigned int v2; // edi
  unsigned int result; // eax
  __int16 v4; // [esp+Ch] [ebp-8h]
  unsigned int v5; // [esp+10h] [ebp-4h] BYREF

  TimeToDaysAndFraction(&v5);
  v2 = v5 / 0x3E8;
  *(_WORD *)(a2 + 12) = v5 % 0x3E8;
  *(_DWORD *)a2 = 0;
  *(_WORD *)(a2 + 4) = v4;
  *(_WORD *)(a2 + 6) = v2 / 0x3C / 0x3C;
  *(_WORD *)(a2 + 8) = v2 / 0x3C % 0x3C;
  result = v2 / 0x3C;
  *(_WORD *)(a2 + 10) = v2 % 0x3C;
  return result;
}
