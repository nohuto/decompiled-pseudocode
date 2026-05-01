/*
 * XREFs of ?Release@?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@UEAAKXZ @ 0x1802A5B80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<ViewEventDispatcher::PerApplicationData>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi
  HSTRING v3; // rcx

  v2 = _InterlockedDecrement(a1 + 6);
  if ( !v2 && a1 )
  {
    v3 = (HSTRING)*((_QWORD *)a1 + 1);
    if ( v3 )
      WindowsDeleteString(v3);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x20);
  }
  return v2;
}
