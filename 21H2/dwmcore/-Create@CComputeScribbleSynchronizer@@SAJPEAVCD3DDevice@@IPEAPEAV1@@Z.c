/*
 * XREFs of ?Create@CComputeScribbleSynchronizer@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x1801ECF64
 * Callers:
 *     ?Initialize@CComputeScribbleFramebuffer@@AEAAJXZ @ 0x1801EB930 (-Initialize@CComputeScribbleFramebuffer@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??1CComputeScribbleSynchronizer@@QEAA@XZ @ 0x1801EB25C (--1CComputeScribbleSynchronizer@@QEAA@XZ.c)
 *     ?Initialize@CComputeScribbleSynchronizer@@AEAAJPEAVCD3DDevice@@@Z @ 0x1801ED148 (-Initialize@CComputeScribbleSynchronizer@@AEAAJPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CComputeScribbleSynchronizer::Create(
        struct CD3DDevice *a1,
        int a2,
        struct CComputeScribbleSynchronizer **a3)
{
  _QWORD *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  void *v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  v6 = operator new(0x38uLL);
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
    v6[3] = 0LL;
    v6[5] = 0LL;
    *((_DWORD *)v6 + 12) = a2;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = CComputeScribbleSynchronizer::Initialize((CComputeScribbleSynchronizer *)v6, a1);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *a3 = (struct CComputeScribbleSynchronizer *)v6;
    return 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblesynchronizer.cpp",
      (const char *)(unsigned int)v7);
    if ( v6 )
    {
      CComputeScribbleSynchronizer::~CComputeScribbleSynchronizer((CComputeScribbleSynchronizer *)v6, v9);
      operator delete(v6);
    }
  }
  return v8;
}
