/*
 * XREFs of ?_SfnINBOXSTRING@@YGJJPAUtagWND@@IIJKP6GHXZKPAUtagSMS@@@Z @ 0x19FF69
 * Callers:
 *     _SfnINCBOXSTRING@32 @ 0x1A0007 (_SfnINCBOXSTRING@32.c)
 *     _SfnINLBOXSTRING@32 @ 0x1A0032 (_SfnINLBOXSTRING@32.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _SfnDWORD@32 @ 0x40E50 (_SfnDWORD@32.c)
 *     _SfnINSTRINGNULL@32 @ 0xA436C (_SfnINSTRINGNULL@32.c)
 *     _SfnINSTRING@32 @ 0x19002A (_SfnINSTRING@32.c)
 */

char *__userpurge _SfnINBOXSTRING@<eax>(
        int *a1@<edx>,
        int a2@<ecx>,
        int a3,
        struct tagWND *a4,
        unsigned int *a5,
        unsigned int a6,
        int a7,
        unsigned int a8,
        int (__stdcall *a9)(),
        unsigned int a10,
        struct tagSMS *a11)
{
  unsigned int v13; // ecx
  int v14; // eax

  if ( a1 )
    v13 = *a1;
  else
    v13 = 0;
  if ( !HMValidateHandleNoSecure(v13, 1) )
    return 0;
  v14 = *(_DWORD *)(_gptiCurrent + 808);
  if ( v14 == 1 )
    return (char *)SfnDWORD(a1, a3, (int)a4, (int)a5, a6, a7, a8, (int)a9);
  if ( v14 != 2 )
    return 0;
  if ( a3 == (a2 == 678 ? 399 : 332) )
    return (char *)SfnINSTRINGNULL(a1, a3, (int)a4, (int)a5, a6, a7, a8, (int)a9);
  return SfnINSTRING(a1, a3, (int)a4, a5, a6, a7, a8, (int)a9);
}
