/*
 * XREFs of ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C0005FA0
 * Callers:
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C0005DC0 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C001E580 (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 * Callees:
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C0148D70 (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 */

unsigned int __fastcall XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(XEPALOBJ *this, struct tagPALETTEENTRY a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  unsigned __int8 *v4; // rcx
  unsigned __int8 *v5; // r8
  unsigned __int8 *v6; // rbx
  unsigned __int8 *v7; // r11
  unsigned int v8; // r10d
  unsigned __int8 *v9; // r15
  unsigned __int8 *v10; // r14
  unsigned int v11; // r9d

  v2 = *(_QWORD *)this;
  v3 = *(unsigned int *)(*(_QWORD *)this + 28LL);
  if ( !(_DWORD)v3 )
    return XEPALOBJ::ulGetMatchFromPalentry(this, a2);
  v4 = 0LL;
  if ( (struct PALETTE *)v2 == ppalDefault )
    v5 = (unsigned __int8 *)&aPalDefaultVGA;
  else
    v5 = *(unsigned __int8 **)(v2 + 112);
  v6 = &v5[4 * v3];
  v7 = v5;
  v8 = 196608;
  do
  {
    v9 = v4;
    v10 = v5;
    v11 = *(_DWORD *)(*(_QWORD *)&pArrayOfSquares.peRed + 4 * (*v5 - (unsigned __int64)a2.peRed))
        + *(_DWORD *)(*(_QWORD *)&pArrayOfSquares.peRed + 4 * (v5[1] - (unsigned __int64)a2.peGreen))
        + *(_DWORD *)(*(_QWORD *)&pArrayOfSquares.peRed + 4 * (v5[2] - (unsigned __int64)a2.peBlue));
    if ( v11 < v8 )
    {
      v4 = v5;
      if ( !v11 )
        break;
    }
    v5 += 4;
    v4 = v10;
    if ( v11 >= v8 )
    {
      v11 = v8;
      v4 = v9;
    }
    v8 = v11;
  }
  while ( v5 < v6 );
  return (v4 - v7) >> 2;
}
