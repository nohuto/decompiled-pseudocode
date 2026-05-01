/*
 * XREFs of ??_GCTimer@LambdaHelpers@@EEAAPEAXI@Z @ 0x18024DA60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Cancel@CTimer@LambdaHelpers@@UEAAXXZ @ 0x18024E0E0 (-Cancel@CTimer@LambdaHelpers@@UEAAXXZ.c)
 */

LambdaHelpers::CTimer *__fastcall LambdaHelpers::CTimer::`scalar deleting destructor'(
        LambdaHelpers::CTimer *this,
        char a2)
{
  *(_QWORD *)this = &LambdaHelpers::CTimer::`vftable';
  LambdaHelpers::CTimer::Cancel(this);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
