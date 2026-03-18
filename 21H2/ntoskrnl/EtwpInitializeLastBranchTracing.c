/*
 * XREFs of EtwpInitializeLastBranchTracing @ 0x140864500
 * Callers:
 *     EtwpInitialize @ 0x140B0433C (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 EtwpInitializeLastBranchTracing()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 0;
  if ( ((unsigned __int8)&EtwpLastBranchLookAsideList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  dword_140C5A6A0 = 0;
  dword_140C5A6A4 = 0;
  EtwpLastBranchLookAsideList = 0LL;
  result = ((__int64 (__fastcall *)(int *, unsigned int *))off_140C01FF0[0])(&v1, &v2);
  if ( (_BYTE)result )
  {
    EtwpLastBranchStackSize = v1;
    result = v2;
    EtwpLastBranchSupportedOptions = v2;
  }
  return result;
}
