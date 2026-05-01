/*
 * XREFs of ??_G?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@UEAAPEAXI@Z @ 0x180165950
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  void *v4; // rcx
  unsigned __int64 v5; // rdi

  *a1 = &CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::`vftable';
  v4 = (void *)a1[1];
  if ( v4 )
  {
    v5 = 0LL;
    if ( a1[2] )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1[1] + 8 * v5++));
      while ( v5 < a1[2] );
      v4 = (void *)a1[1];
    }
    CoTaskMemFree(v4);
    a1[1] = 0LL;
  }
  a1[2] = 0LL;
  a1[4] = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
