/*
 * XREFs of PktMonCompEnableCallback @ 0x1C0013E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PktMonCompEnableCallback(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(v1 + 12) ^= (*(_DWORD *)(v1 + 12) ^ *(unsigned __int8 *)(a1 + 16)) & 1;
  result = *(unsigned int *)(v1 + 12);
  *(_DWORD *)(v1 + 12) = result ^ ((unsigned __int8)result ^ (unsigned __int8)(2 * *(_BYTE *)(a1 + 17))) & 2;
  return result;
}
