/*
 * XREFs of _lambda_9268d9d4379208cfe1cd98081c6e861f_::operator() @ 0x18012E3EC
 * Callers:
 *     s_adGetDeviceGraphWnfStateName @ 0x18012E860 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800CB1E0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall lambda_9268d9d4379208cfe1cd98081c6e861f_::operator()(_QWORD **a1)
{
  int Pointer; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Pointer = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 5u, 0LL, **a1, *a1[1]).Pointer;
  v2 = Pointer;
  if ( Pointer >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x34B,
    (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
    (const char *)(unsigned int)Pointer);
  return v2;
}
