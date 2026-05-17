/*
 * XREFs of _EtwpEnqueueFreeBuffer@8 @ 0x4B2F07E2
 * Callers:
 *     _EtwpFlushActiveBuffers@8 @ 0x4B2EDD0E (_EtwpFlushActiveBuffers@8.c)
 *     _EtwpSwitchBuffer@12 @ 0x4B2EFDE8 (_EtwpSwitchBuffer@12.c)
 *     _EtwpAllocateFreeBuffers@8 @ 0x4B2F06F0 (_EtwpAllocateFreeBuffers@8.c)
 *     _EtwpBufferingModeFlush@4 @ 0x4B38140A (_EtwpBufferingModeFlush@4.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall EtwpEnqueueFreeBuffer(int a1, _DWORD *a2)
{
  unsigned int *v2; // edi
  unsigned int v3; // esi
  int v4; // ecx
  _DWORD *result; // eax
  int v7; // [esp+10h] [ebp-10h]
  unsigned int v8; // [esp+18h] [ebp-8h]

  a2[11] = 0;
  a2[8] = 0;
  v2 = (unsigned int *)(a1 + 296);
  do
  {
    v3 = *v2;
    v8 = v2[1];
    v7 = *v2 + 1;
    v4 = (unsigned __int64)(*(_QWORD *)v2 + 1LL) >> 32;
  }
  while ( _InterlockedCompareExchange64((volatile signed __int64 *)v2, __PAIR64__(v8, v3) + 1, __SPAIR64__(v8, v3)) != __PAIR64__(v8, v3) );
  a2[7] = v4;
  a2[6] = v7;
  result = *(_DWORD **)(a1 + 176);
  *result = a2 + 8;
  *(_DWORD *)(a1 + 176) = a2 + 8;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 160));
  return result;
}
