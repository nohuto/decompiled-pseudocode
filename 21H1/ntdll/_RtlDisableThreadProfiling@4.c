/*
 * XREFs of _RtlDisableThreadProfiling@4 @ 0x4B32CBD0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 */

int __stdcall RtlDisableThreadProfiling(int a1)
{
  int v1; // esi
  _BYTE v3[12]; // [esp+8h] [ebp-18h] BYREF
  int v4; // [esp+14h] [ebp-Ch]
  int v5; // [esp+18h] [ebp-8h]

  v4 = 0;
  v5 = a1;
  v1 = ZwSetInformationThread(-2, 32, (int)v3, 24);
  if ( v1 >= 0 )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, a1);
  return v1;
}
