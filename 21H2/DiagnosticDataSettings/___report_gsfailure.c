/*
 * XREFs of ___report_gsfailure @ 0x100048E1
 * Callers:
 *     @__security_check_cookie@4 @ 0x10004280 (@__security_check_cookie@4.c)
 * Callees:
 *     ___raise_securityfailure @ 0x10004893 (___raise_securityfailure.c)
 */

void __cdecl __noreturn __report_gsfailure()
{
  int v0; // ebx
  int v1; // edi
  int v2; // esi
  int v3; // edx
  int v4; // ecx
  unsigned int v5; // kr00_4
  int vars0; // [esp+324h] [ebp+0h]
  int retaddr; // [esp+328h] [ebp+4h]
  char v8; // [esp+32Ch] [ebp+8h] BYREF

  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(2u);
  dword_100051C8 = 0;
  dword_100051C4 = v4;
  dword_100051C0 = v3;
  dword_100051BC = v0;
  dword_100051B8 = v2;
  dword_100051B4 = v1;
  word_100051E0 = __SS__;
  word_100051D4 = __CS__;
  word_100051B0 = __DS__;
  word_100051AC = __ES__;
  word_100051A8 = __FS__;
  word_100051A4 = __GS__;
  v5 = __readeflags();
  dword_100051D8 = v5;
  dword_100051CC = vars0;
  dword_100051D0 = retaddr;
  dword_100051DC = (int)&v8;
  dword_10005118 = 65537;
  dword_100050D4 = retaddr;
  dword_100050C8 = -1073740791;
  dword_100050CC = 1;
  dword_100050D8 = 1;
  dword_100050DC = 2;
  __raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
