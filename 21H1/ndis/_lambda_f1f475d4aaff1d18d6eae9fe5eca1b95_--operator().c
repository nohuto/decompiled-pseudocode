/*
 * XREFs of _lambda_f1f475d4aaff1d18d6eae9fe5eca1b95_::operator() @ 0x1C0101090
 * Callers:
 *     KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___ @ 0x1C0100FB4 (KRegKey--QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___.c)
 * Callees:
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x1C01010F8 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 */

__int64 __fastcall lambda_f1f475d4aaff1d18d6eae9fe5eca1b95_::operator()(void ***a1, const wchar_t *a2, int a3)
{
  struct Rtl::KString *v4; // rdx
  void *v5; // rcx

  if ( !a3 || (a3 & 1) != 0 || *((_BYTE *)a2 + (unsigned int)(a3 - 1)) || *((_BYTE *)a2 + (unsigned int)(a3 - 2)) )
    return 3221225534LL;
  v4 = Rtl::KString::Initialize(a2);
  if ( !v4 )
    return 3221225626LL;
  v5 = **a1;
  **a1 = v4;
  if ( v5 )
    ExFreePoolWithTag(v5, 0x7274534Bu);
  return 0LL;
}
