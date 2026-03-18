/*
 * XREFs of ExCallCallBack @ 0x14063780C
 * Callers:
 *     NtFindAtom @ 0x1406376A0 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x140637B10 (PsInvokeWin32Callout.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x1402A5A10 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1402A5AD0 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExCallCallBack(signed __int64 *a1, __int64 a2, __int64 a3)
{
  struct _EX_RUNDOWN_REF *v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rdi
  unsigned int v8; // ebx

  v6 = ExReferenceCallBackBlock(a1);
  v7 = v6;
  if ( v6 )
  {
    v8 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v6[1].Count)(v6[2].Count, a2, a3);
    ExDereferenceCallBackBlock(a1, v7);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
