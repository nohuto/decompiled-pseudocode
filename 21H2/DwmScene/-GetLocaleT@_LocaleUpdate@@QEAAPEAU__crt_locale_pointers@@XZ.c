/*
 * XREFs of ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x180010B80
 * Callers:
 *     sub_18007BB80 @ 0x18007BB80 (sub_18007BB80.c)
 *     sub_180080510 @ 0x180080510 (sub_180080510.c)
 *     sub_1800FE7B0 @ 0x1800FE7B0 (sub_1800FE7B0.c)
 *     sub_18012A9CF @ 0x18012A9CF (sub_18012A9CF.c)
 *     sub_18012AA15 @ 0x18012AA15 (sub_18012AA15.c)
 *     sub_18012AA8E @ 0x18012AA8E (sub_18012AA8E.c)
 *     sub_18012AACC @ 0x18012AACC (sub_18012AACC.c)
 *     sub_180130A29 @ 0x180130A29 (sub_180130A29.c)
 *     sub_180130A6F @ 0x180130A6F (sub_180130A6F.c)
 *     sub_180130AE8 @ 0x180130AE8 (sub_180130AE8.c)
 *     sub_180130B26 @ 0x180130B26 (sub_180130B26.c)
 *     sub_180130CA8 @ 0x180130CA8 (sub_180130CA8.c)
 *     sub_180130CEE @ 0x180130CEE (sub_180130CEE.c)
 *     sub_180130D68 @ 0x180130D68 (sub_180130D68.c)
 *     sub_180130DA6 @ 0x180130DA6 (sub_180130DA6.c)
 * Callees:
 *     <none>
 */

struct __crt_locale_pointers *__fastcall _LocaleUpdate::GetLocaleT(_LocaleUpdate *this)
{
  return (struct __crt_locale_pointers *)((char *)this + 8);
}
