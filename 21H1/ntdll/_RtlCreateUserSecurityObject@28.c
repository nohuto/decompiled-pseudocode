/*
 * XREFs of _RtlCreateUserSecurityObject@28 @ 0x4B335F30
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlCreateAndSetSD@20 @ 0x4B335C50 (_RtlCreateAndSetSD@20.c)
 */

int __stdcall RtlCreateUserSecurityObject(int a1, unsigned int a2, int a3, int a4, int a5, int a6, _DWORD *a7)
{
  void *ProcessHeap; // edi
  int result; // eax
  int v9; // esi
  _BYTE *v10; // [esp+4h] [ebp-4h] BYREF

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  result = RtlCreateAndSetSD(a1, a2, a3, a4, &v10);
  if ( result >= 0 )
  {
    v9 = RtlpNewSecurityObject(0, v10, a7, 0, 0, a5, 0, (void *)0xFFFFFFFC, a6, 0);
    RtlFreeHeap((int)ProcessHeap, 0, (int)v10);
    return v9;
  }
  return result;
}
