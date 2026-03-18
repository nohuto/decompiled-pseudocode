/*
 * XREFs of ?bPerformLazyValidation@PFFOBJ@@SGHHKPAGKPAUtagDESIGNVECTOR@@K@Z @ 0xDE1BE
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2 (-bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z.c)
 * Callees:
 *     <none>
 */

BOOL __userpurge PFFOBJ::bPerformLazyValidation@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        int a3,
        unsigned int a4,
        unsigned __int16 *a5,
        unsigned int a6,
        struct tagDESIGNVECTOR *a7,
        unsigned int a8)
{
  return !a2 && (a1 & 0xFFFFFFFE) == 0 && a3 && a4 && !a5 && !a6;
}
