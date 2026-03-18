/*
 * XREFs of ?UMPDMyDrvFree@@YGXPAVUMPDOBJ@@PAUDHPDEV__@@PAXK@Z @ 0x20FBD9
 * Callers:
 *     ?UMPDDrvQueryFont@@YGPAU_IFIMETRICS@@PAUDHPDEV__@@KKPAK@Z @ 0x20DBEF (-UMPDDrvQueryFont@@YGPAU_IFIMETRICS@@PAUDHPDEV__@@KKPAK@Z.c)
 *     ?UMPDDrvQueryFontTree@@YGPAXPAUDHPDEV__@@KKKPAK@Z @ 0x20DF1E (-UMPDDrvQueryFontTree@@YGPAXPAUDHPDEV__@@KKKPAK@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 */

void __userpurge UMPDMyDrvFree(
        int a1@<edx>,
        UMPDOBJ *a2@<ecx>,
        struct UMPDOBJ *a3,
        struct DHPDEV__ *a4,
        void *a5,
        unsigned int a6)
{
  _DWORD Src[8]; // [esp+Ch] [ebp-24h] BYREF

  Src[4] = *(_DWORD *)a2;
  Src[7] = a4;
  Src[2] = 0;
  Src[3] = 0;
  Src[0] = 32;
  Src[1] = 42;
  Src[5] = a1;
  Src[6] = a3;
  UMPDOBJ::Thunk(a2, Src, 0x20u, 0, 0);
}
