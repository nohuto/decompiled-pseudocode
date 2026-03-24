/*
 * XREFs of ?Dispose@CHolographicViewer@@UEAAJXZ @ 0x18025A260
 * Callers:
 *     ??1CHolographicViewer@@MEAA@XZ @ 0x18025A038 (--1CHolographicViewer@@MEAA@XZ.c)
 *     ?DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18025A1F0 (-DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CB404 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CHolographicViewer::Dispose(CHolographicViewer *this)
{
  void *v2; // rcx

  AcquireSRWLockExclusive((PSRWLOCK)this + 14);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 10);
  v2 = (void *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 9) = 0LL;
  }
  _InterlockedExchange((volatile __int32 *)this + 26, 3);
  ReleaseSRWLockExclusive((PSRWLOCK)this + 14);
  return 0LL;
}
