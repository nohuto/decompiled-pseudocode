/*
 * XREFs of ?ptlXform@EBOX@@QAE?AU_POINTL@@AAVEPOINTFL@@@Z @ 0x215265
 * Callers:
 *     ?bPartialQuadrantArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@AAVEFLOAT@@34@Z @ 0x214E87 (-bPartialQuadrantArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@AAVEFLOAT@@34@Z.c)
 * Callees:
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     _addff3_c@12 @ 0xEF0B5 (_addff3_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 */

struct EPOINTFL *__userpurge EBOX::ptlXform@<eax>(
        EBOX *this@<ecx>,
        __int64 a2@<edx:eax>,
        struct EPOINTFL *a3,
        _DWORD *a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  struct EPOINTFL *result; // eax
  int v9; // edx
  int v10; // [esp+Ch] [ebp-18h] BYREF
  int v11; // [esp+10h] [ebp-14h] BYREF
  int v12[2]; // [esp+14h] [ebp-10h] BYREF
  int v13[2]; // [esp+1Ch] [ebp-8h] BYREF

  LODWORD(a2) = v13;
  ltoef_c(a2, *((_DWORD *)this + 12), v13);
  LODWORD(v5) = v12;
  ltoef_c(v5, *((_DWORD *)this + 14), v12);
  mulff3_c(v13, v13, a4);
  mulff3_c(v12, v12, a4 + 2);
  addff3_c(v13, v13, v12);
  eftol_c(v13, &v10, 1);
  LODWORD(v6) = v13;
  ltoef_c(v6, *((_DWORD *)this + 13), v13);
  LODWORD(v7) = v12;
  ltoef_c(v7, *((_DWORD *)this + 15), v12);
  mulff3_c(v13, v13, a4);
  mulff3_c(v12, v12, a4 + 2);
  addff3_c(v13, v13, v12);
  eftol_c(v13, &v11, 1);
  result = a3;
  v9 = *((_DWORD *)this + 11) + v11;
  *(_DWORD *)a3 = *((_DWORD *)this + 10) + v10;
  *((_DWORD *)a3 + 1) = v9;
  return result;
}
