/*
 * XREFs of ?UpdateWindowInputSinkHints@CPreComputeContext@@AEAAXXZ @ 0x1800D0040
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x1800CF85C (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPreComputeContext::UpdateWindowInputSinkHints(CPreComputeContext *this)
{
  char *v1; // rbx
  __int64 *v2; // r8
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  v1 = (char *)this + 1768;
  v2 = (__int64 *)*((_QWORD *)this + 221);
  if ( *((_DWORD *)this + 448) )
  {
    v3 = *v2;
    v4 = *((_DWORD *)v2 + 2);
    UpdateWindowInputSinkHints(&v3);
  }
  *((_DWORD *)v1 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(v1, 16LL);
}
