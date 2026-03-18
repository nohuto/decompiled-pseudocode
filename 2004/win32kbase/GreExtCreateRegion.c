/*
 * XREFs of GreExtCreateRegion @ 0x1C007C1C0
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1C007A690 (NtGdiExtCreateRegion.c)
 * Callees:
 *     EngSetLastError @ 0x1C0049420 (EngSetLastError.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0079C20 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0079D00 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C007A854 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C007AAC0 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C007CF00 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 *     vConvertXformToMatrix @ 0x1C007CF90 (vConvertXformToMatrix.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00809E0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0080B34 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0081030 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0081350 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     PopThreadGuardedObject @ 0x1C0084420 (PopThreadGuardedObject.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0086FC0 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C009A120 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C009A700 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00C4BF0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00C5AFC (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

struct HOBJ__ *__fastcall GreExtCreateRegion(__int64 a1, unsigned int a2, struct _RECTL *a3)
{
  unsigned int right; // ebx
  struct HOBJ__ *v6; // rdi
  int v7; // ebx
  REGION *v8; // rsi
  REGION *v9; // r14
  struct HOBJ__ *v10; // rbx
  struct HOBJ__ *v12; // rbx
  REGION *v13; // rcx
  REGION *v14; // [rsp+20h] [rbp-99h] BYREF
  int v15; // [rsp+28h] [rbp-91h]
  REGION *v16; // [rsp+30h] [rbp-89h] BYREF
  int v17; // [rsp+38h] [rbp-81h]
  int v18; // [rsp+3Ch] [rbp-7Dh]
  __int64 v19; // [rsp+40h] [rbp-79h] BYREF
  int v20; // [rsp+48h] [rbp-71h]
  _BYTE v21[8]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v22; // [rsp+58h] [rbp-61h]
  _BYTE v23[32]; // [rsp+A0h] [rbp-19h] BYREF
  int v24; // [rsp+C0h] [rbp+7h]
  __m128 v25; // [rsp+D0h] [rbp+17h] BYREF
  __int128 v26; // [rsp+E0h] [rbp+27h]
  int v27; // [rsp+F0h] [rbp+37h]

  right = a3->right;
  if ( a3->left != 32 || right > 0xFFFFFFD || 16 * (right + 2) > a2 )
    return 0LL;
  v6 = 0LL;
  v15 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v14, 0x70u);
  if ( !v14 )
  {
    v13 = 0LL;
LABEL_43:
    REGION::vDeleteREGION(v13);
    v8 = 0LL;
    EngSetLastError(8u);
    goto LABEL_33;
  }
  if ( !(unsigned int)RGNOBJ::bSet((RGNOBJ *)&v14, right, a3 + 2) )
  {
    v13 = v14;
    goto LABEL_43;
  }
  if ( !a1 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v14) == 1 )
  {
    RGNOBJ::vTighten((RGNOBJ *)&v14);
    v8 = v14;
    if ( (((*((_DWORD *)v14 + 24) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((*((_DWORD *)v14 + 27) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((*((_DWORD *)v14 + 26) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((*((_DWORD *)v14 + 25) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
    {
      REGION::vDeleteREGION(v14);
      v12 = 0LL;
    }
    else
    {
      v12 = RGNOBJ::hrgnAssociate(&v14);
      if ( v12 )
      {
LABEL_32:
        v6 = v12;
        goto LABEL_33;
      }
      REGION::vDeleteREGION(v8);
    }
    v8 = 0LL;
    goto LABEL_32;
  }
  v25 = 0LL;
  v27 = 0;
  v26 = 0LL;
  vConvertXformToMatrix(a1, &v25);
  DWORD2(v26) *= 16;
  HIDWORD(v26) *= 16;
  v16 = (REGION *)&v25;
  v18 = 0;
  v25 = _mm_mul_ps(v25, (__m128)_xmm);
  *((float *)&v26 + 1) = *((float *)&v26 + 1) * 16.0;
  *(float *)&v26 = *(float *)&v26 * 16.0;
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v16, 8u);
  if ( (v27 & 0x43) != 0x43 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v21);
    if ( v22 )
    {
      v7 = RGNOBJ::bCreate((RGNOBJ *)&v14, (struct EPATHOBJ *)v21, (struct EXFORMOBJ *)&v16);
      REGION::vDeleteREGION(v14);
      v8 = 0LL;
      if ( v7 )
      {
        v20 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v19, (struct EPATHOBJ *)v21, 1u, 0LL);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v19);
        if ( !v19 )
        {
          EngSetLastError(8u);
          v10 = 0LL;
LABEL_21:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v19);
          goto LABEL_22;
        }
        v17 = 0;
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v16, 0x70u);
        v9 = v16;
        if ( v16 )
        {
          RGNMEMOBJ::iReduce((RGNMEMOBJ *)&v16, (struct RGNOBJ *)&v19);
          RGNOBJ::vTighten((RGNOBJ *)&v16);
          v9 = v16;
          if ( (((*((_DWORD *)v16 + 24) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
            && (((*((_DWORD *)v16 + 27) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
            && (((*((_DWORD *)v16 + 26) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
            && (((*((_DWORD *)v16 + 25) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
          {
            v10 = RGNOBJ::hrgnAssociate(&v16);
            if ( !v10 )
            {
              REGION::vDeleteREGION(v9);
              v9 = 0LL;
            }
            goto LABEL_19;
          }
          REGION::vDeleteREGION(v16);
          v9 = 0LL;
        }
        else
        {
          EngSetLastError(8u);
        }
        v10 = 0LL;
LABEL_19:
        if ( v17 == 1 )
          REGION::vDeleteREGION(v9);
        goto LABEL_21;
      }
    }
    else
    {
      EngSetLastError(8u);
      REGION::vDeleteREGION(v14);
      v8 = 0LL;
    }
    v10 = 0LL;
LABEL_22:
    EPATHOBJ::vUnlock((EPATHOBJ *)v21);
    if ( v24 )
    {
      PopThreadGuardedObject(v23);
      v24 = 0;
    }
    goto LABEL_24;
  }
  RGNOBJ::vTighten((RGNOBJ *)&v14);
  v8 = v14;
  if ( (((*((_DWORD *)v14 + 24) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((*((_DWORD *)v14 + 27) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((*((_DWORD *)v14 + 26) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((*((_DWORD *)v14 + 25) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
  {
    v10 = RGNOBJ::hrgnAssociate(&v14);
    if ( !v10 )
    {
      REGION::vDeleteREGION(v8);
      v8 = 0LL;
    }
    goto LABEL_24;
  }
  REGION::vDeleteREGION(v14);
  v8 = 0LL;
LABEL_33:
  v10 = v6;
LABEL_24:
  if ( v15 == 1 )
    REGION::vDeleteREGION(v8);
  return v10;
}
