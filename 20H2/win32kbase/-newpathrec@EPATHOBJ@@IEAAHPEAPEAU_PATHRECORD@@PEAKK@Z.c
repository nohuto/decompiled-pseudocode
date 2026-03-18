/*
 * XREFs of ?newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z @ 0x1C0094924
 * Callers:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C00940E0 (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 *     ?bClone@EPATHOBJ@@QEAAHAEAV1@@Z @ 0x1C00C50B0 (-bClone@EPATHOBJ@@QEAAHAEAV1@@Z.c)
 * Callees:
 *     newpathalloc @ 0x1C0087CC0 (newpathalloc.c)
 */

__int64 __fastcall EPATHOBJ::newpathrec(EPATHOBJ *this, struct _PATHRECORD **a2, unsigned int *a3, unsigned int a4)
{
  __int64 v7; // r10
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  __int64 result; // rax

  v8 = *((_QWORD *)this + 1);
  *a3 = 0;
  v7 = *(_QWORD *)(v8 + 24);
  LODWORD(v8) = 0;
  if ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 8) + 24LL;
    v10 = v7 + *(unsigned int *)(v7 + 16);
    if ( v10 > v9 )
    {
      v8 = (__int64)(v10 - v9) >> 3;
      *a3 = v8;
    }
  }
  if ( (unsigned int)v8 >= 8 || (unsigned int)v8 >= a4 )
    goto LABEL_5;
  result = (__int64)newpathalloc();
  v7 = result;
  if ( result )
  {
    *(_QWORD *)result = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
    *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = result;
    *a3 = ((unsigned __int64)(unsigned int)(result + *(_DWORD *)(result + 16) - *(_DWORD *)(result + 8)) - 24) >> 3;
LABEL_5:
    *a2 = *(struct _PATHRECORD **)(v7 + 8);
    return 1LL;
  }
  return result;
}
