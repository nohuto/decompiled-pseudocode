/*
 * XREFs of ?FONTOBJ_pvTrueTypeFontFileUMPD@@YGPAXPAU_FONTOBJ@@PAKPAPAX@Z @ 0x1F3498
 * Callers:
 *     _NtGdiFONTOBJ_pvTrueTypeFontFile@8 @ 0x21A3AE (_NtGdiFONTOBJ_pvTrueTypeFontFile@8.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?pvFileUMPD@RFONTOBJ@@QAEPAXPAKPAPAX@Z @ 0x209958 (-pvFileUMPD@RFONTOBJ@@QAEPAXPAKPAPAX@Z.c)
 */

void *__userpurge FONTOBJ_pvTrueTypeFontFileUMPD@<eax>(
        unsigned int *a1@<edx>,
        struct _FONTOBJ *a2@<ecx>,
        struct _FONTOBJ *a3,
        unsigned int *a4,
        void **a5)
{
  void **v5; // eax
  void *v6; // esi

  v5 = (void **)a3;
  a3 = a2;
  *v5 = 0;
  *a1 = 0;
  if ( a2 )
    v6 = RFONTOBJ::pvFileUMPD((RFONTOBJ *)&a3, a1, v5);
  else
    v6 = 0;
  a3 = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a3);
  return v6;
}
