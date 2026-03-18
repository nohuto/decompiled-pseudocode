/*
 * XREFs of _XEPATHOBJ_vConstructHPATH@8 @ 0x1E6411
 * Callers:
 *     ??0XEPATHOBJ@@QAE@PAUHPATH__@@@Z @ 0x1E4555 (--0XEPATHOBJ@@QAE@PAUHPATH__@@@Z.c)
 *     _XEPATHOBJ_vConstructHPATHWrap@8 @ 0x1E644C (_XEPATHOBJ_vConstructHPATHWrap@8.c)
 * Callees:
 *     ?vLock@EPATHOBJ@@QAEXPAUHPATH__@@@Z @ 0x1CCC42 (-vLock@EPATHOBJ@@QAEXPAUHPATH__@@@Z.c)
 */

void __fastcall XEPATHOBJ_vConstructHPATH(EPATHOBJ *this, struct HPATH__ *a2)
{
  char *v4; // edi

  *((_DWORD *)this + 2) = 0;
  v4 = (char *)this + 48;
  if ( !*((_DWORD *)this + 16) )
  {
    PushThreadGuardedObject((char *)this + 48, this, XEPATHOBJ_vDestructWrap);
    *((_DWORD *)v4 + 4) = 1;
  }
  EPATHOBJ::vLock(this, a2);
}
