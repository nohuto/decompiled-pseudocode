/*
 * XREFs of EtwpInitializeLastBranchTracing @ 0x1407D479C
 * Callers:
 *     EtwpInitialize @ 0x140A43414 (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
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
  dword_140C53DA0 = 0;
  dword_140C53DA4 = 0;
  EtwpLastBranchLookAsideList = 0LL;
  result = ((__int64 (__fastcall *)(int *, unsigned int *))off_140C009A0[0])(&v1, &v2);
  if ( (_BYTE)result )
  {
    EtwpLastBranchStackSize = v1;
    result = v2;
    EtwpLastBranchSupportedOptions = v2;
  }
  return result;
}
