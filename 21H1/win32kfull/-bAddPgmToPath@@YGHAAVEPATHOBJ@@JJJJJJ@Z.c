/*
 * XREFs of ?bAddPgmToPath@@YGHAAVEPATHOBJ@@JJJJJJ@Z @ 0x223D8E
 * Callers:
 *     ?bExtraRectsToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z @ 0x223E25 (-bExtraRectsToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bAddPolygon@EPATHOBJ@@QAEHPAVEXFORMOBJ@@PAU_POINTL@@H@Z @ 0x221FE9 (-bAddPolygon@EPATHOBJ@@QAEHPAVEXFORMOBJ@@PAU_POINTL@@H@Z.c)
 */

BOOL __userpurge bAddPgmToPath@<eax>(
        LONG a1@<edx>,
        EPATHOBJ *a2@<ecx>,
        struct EPATHOBJ *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  struct _POINTL v10; // [esp+14h] [ebp-24h] BYREF
  char *v11; // [esp+20h] [ebp-18h]
  int v12; // [esp+24h] [ebp-14h]
  char *v13; // [esp+28h] [ebp-10h]
  int v14; // [esp+2Ch] [ebp-Ch]
  char *v15; // [esp+30h] [ebp-8h]

  v10.x = a1;
  v12 = a1 + a4 + a6;
  v10.y = (LONG)a3;
  v13 = (char *)a3 + a5 + a7;
  v11 = (char *)a3 + a5;
  v14 = a6 + a1;
  v15 = (char *)a3 + a7;
  return EPATHOBJ::bAddPolygon(a2, (struct EXFORMOBJ *)(a1 + a4), &v10, a1 + a4);
}
