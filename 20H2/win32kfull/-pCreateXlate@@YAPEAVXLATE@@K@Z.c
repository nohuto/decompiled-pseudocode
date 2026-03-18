/*
 * XREFs of ?pCreateXlate@@YAPEAVXLATE@@K@Z @ 0x1C02BE69C
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C010E424 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x1C02BE0AC (--0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z.c)
 * Callees:
 *     <none>
 */

struct XLATE *__fastcall pCreateXlate(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct XLATE *result; // rax
  int v6; // edx
  char *v7; // rcx

  result = (struct XLATE *)AllocThreadBufferWithTag((unsigned int)(4 * a1 + 88), 1953265735LL, 0LL, a4);
  if ( result )
  {
    v6 = 0;
    *(_DWORD *)result = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
    v7 = (char *)result + 84;
    if ( !a1 )
    {
      v6 = 512;
      v7 = 0LL;
    }
    *((_DWORD *)result + 1) = a1 != 0 ? 2 : 0;
    *((_QWORD *)result + 2) = v7;
    *((_DWORD *)result + 19) = v6;
    *((_DWORD *)result + 9) = -1;
    *((_DWORD *)result + 2) = 0;
    *((_DWORD *)result + 3) = a1;
    *((_QWORD *)result + 5) = 0LL;
    *((_QWORD *)result + 6) = 0LL;
    *((_QWORD *)result + 7) = 0LL;
  }
  return result;
}
