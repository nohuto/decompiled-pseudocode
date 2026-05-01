/*
 * XREFs of ??_GStartExperienceWallpaperBackground@@UEAAPEAXI@Z @ 0x1801D3260
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1StartExperienceWallpaperBackground@@UEAA@XZ @ 0x1801F9D18 (--1StartExperienceWallpaperBackground@@UEAA@XZ.c)
 */

StartExperienceWallpaperBackground *__fastcall StartExperienceWallpaperBackground::`scalar deleting destructor'(
        StartExperienceWallpaperBackground *this,
        char a2)
{
  StartExperienceWallpaperBackground::~StartExperienceWallpaperBackground(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
