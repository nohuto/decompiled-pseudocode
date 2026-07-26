/*
 * XREFs of _lambda_90693e01559ab5daa9d90de50bdb401e_::operator() @ 0x1C01224F8
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___ @ 0x1C0122328 (KRegKey--QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d.c)
 * Callees:
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x1C01010C4 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 */

__int64 __fastcall lambda_90693e01559ab5daa9d90de50bdb401e_::operator()(__int64 a1, wchar_t *a2, unsigned int a3)
{
  unsigned __int64 v4; // rbx
  struct Rtl::KString *v5; // r9
  __int64 v7; // rax
  void *v8; // r8

  v4 = a3;
  v5 = Rtl::KString::Initialize(a2);
  if ( !v5 )
    return 3221225626LL;
  if ( v4 >= *(unsigned int *)(*(_QWORD *)a1 + 4LL) )
    __fastfail(5u);
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v8 = *(void **)(v7 + 8 * v4);
  *(_QWORD *)(v7 + 8 * v4) = v5;
  if ( v8 )
    ExFreePoolWithTag(v8, 0x7274534Bu);
  return 0LL;
}
