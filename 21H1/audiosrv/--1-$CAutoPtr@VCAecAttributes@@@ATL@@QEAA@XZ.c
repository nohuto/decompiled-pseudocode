/*
 * XREFs of ??1?$CAutoPtr@VCAecAttributes@@@ATL@@QEAA@XZ @ 0x1800F0504
 * Callers:
 *     _CAecAttributes::CreateInstance_::_1_::dtor$1 @ 0x1800F0738 (_CAecAttributes--CreateInstance_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<CAecAttributes>::~CAutoPtr<CAecAttributes>(LPVOID **a1)
{
  LPVOID *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CoTaskMemFree(v1[2]);
    v1[2] = 0LL;
    operator delete(v1, (const struct std::nothrow_t *)0x20);
  }
  *a1 = 0LL;
}
