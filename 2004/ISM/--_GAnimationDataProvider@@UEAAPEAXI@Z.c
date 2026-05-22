/*
 * XREFs of ??_GAnimationDataProvider@@UEAAPEAXI@Z @ 0x180141230
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AnimationDataProvider@@UEAA@XZ @ 0x18014112C (--1AnimationDataProvider@@UEAA@XZ.c)
 */

AnimationDataProvider *__fastcall AnimationDataProvider::`scalar deleting destructor'(
        AnimationDataProvider *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bl

  v4 = a2;
  AnimationDataProvider::~AnimationDataProvider(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
