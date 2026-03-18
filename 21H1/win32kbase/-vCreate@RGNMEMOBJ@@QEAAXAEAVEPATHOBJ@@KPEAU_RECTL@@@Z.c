/*
 * XREFs of ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0092310
 * Callers:
 *     GreExtCreateRegion @ 0x1C0076840 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00C5024 (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C014A6C0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?bFlatten@EPATHOBJ@@QEAAHXZ @ 0x1C001A7B0 (-bFlatten@EPATHOBJ@@QEAAHXZ.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0076090 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008BC60 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C0091DF8 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C0092750 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?vCloseAllFigures@EPATHOBJ@@QEAAXXZ @ 0x1C0092830 (-vCloseAllFigures@EPATHOBJ@@QEAAXXZ.c)
 *     bConstructGET @ 0x1C00C3ED0 (bConstructGET.c)
 *     ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C00C41F8 (-bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z.c)
 *     vAdvanceAETEdges @ 0x1C00C4390 (vAdvanceAETEdges.c)
 *     vXSortAETEdges @ 0x1C00C4BF0 (vXSortAETEdges.c)
 *     vMoveNewEdges @ 0x1C00C53E0 (vMoveNewEdges.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1C00C5844 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

void __fastcall RGNMEMOBJ::vCreate(RGNMEMOBJ *this, struct EPATHOBJ *a2, unsigned int a3, struct _RECTL *a4)
{
  int v7; // eax
  unsigned int v8; // edi
  _DWORD *v9; // r9
  __m128i *v10; // rcx
  char *v11; // r14
  int v12; // r15d
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rdi
  struct REGION *Region; // rax
  unsigned int v19; // edi
  _QWORD *v20; // rax
  int v21; // esi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v23; // rax
  int v24; // eax
  int v25; // edx
  REGION *v26; // rcx
  LONG top; // eax
  LONG bottom; // eax
  __int64 v29; // rax
  __int128 v31; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v32; // [rsp+38h] [rbp-C8h]
  __int128 v33; // [rsp+48h] [rbp-B8h]
  _OWORD v34[3]; // [rsp+58h] [rbp-A8h] BYREF
  char v35; // [rsp+90h] [rbp-70h] BYREF

  if ( !*((_QWORD *)a2 + 1) )
    return;
  *(_QWORD *)this = 0LL;
  v7 = *(_DWORD *)a2;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  memset(v34, 0, sizeof(v34));
  if ( (v7 & 1) != 0 && !(unsigned int)EPATHOBJ::bFlatten(a2) )
    return;
  EPATHOBJ::vCloseAllFigures(a2);
  v8 = *((_DWORD *)a2 + 1);
  if ( v8 < 2 )
    return;
  if ( !a4
    || (v10 = (__m128i *)*((_QWORD *)a2 + 1), a4->top < (int)HIDWORD(v10[3].m128i_i64[0]))
    && a4->bottom > _mm_srli_si128(v10[48LL], 8).m128i_i32[1] )
  {
    if ( (unsigned int)RGNMEMOBJ::bFastFillWrapper(this, a2) )
    {
      RGNOBJ::vTighten(this);
      v9 = *(_DWORD **)this;
      if ( (*(_DWORD *)(*(_QWORD *)this + 96LL) & 0xF8000000) != 0
        && (*(_DWORD *)(*(_QWORD *)this + 96LL) & 0xF8000000) != -134217728
        || (v9[27] & 0xF8000000) != 0 && (v9[27] & 0xF8000000) != -134217728
        || (v9[26] & 0xF8000000) != 0 && (v9[26] & 0xF8000000) != -134217728
        || (v9[25] & 0xF8000000) != 0 && (v9[25] & 0xF8000000) != -134217728 )
      {
        REGION::vDeleteREGION(*(REGION **)this);
        *(_QWORD *)this = 0LL;
      }
      return;
    }
  }
  if ( v8 >= 0x14 )
  {
    v29 = v8 + 1;
    if ( (unsigned int)v29 < v8 )
      return;
    if ( (unsigned __int64)(48 * v29) > 0xFFFFFFFF )
      return;
    v11 = (char *)PALLOCMEM2(48 * v29, 0x67646547u, 0);
    if ( !v11 )
      return;
    v12 = 1;
  }
  else
  {
    v11 = &v35;
    v12 = 0;
  }
  v13 = *((_QWORD *)a2 + 1);
  v14 = *(unsigned int *)(v13 + 52);
  v15 = *(unsigned int *)(v13 + 60);
  if ( (int)v15 < (int)v14 )
    goto LABEL_55;
  if ( a4 )
  {
    top = a4->top;
    if ( (int)v14 > top )
      top = *(_DWORD *)(v13 + 52);
    v14 = (unsigned int)top;
    bottom = a4->bottom;
    if ( (int)v15 >= bottom )
      v15 = (unsigned int)bottom;
  }
  v16 = (int)v15 - (__int64)(int)v14;
  if ( v16 <= 0 )
    v16 = 0LL;
  v17 = 32 * (v16 >> 4) + 432;
  if ( v17 > 0x7FFFFFFF )
    goto LABEL_55;
  Region = RGNMEMOBJ::AllocateRegion((unsigned int)v17);
  *(_QWORD *)this = Region;
  if ( !Region )
    goto LABEL_55;
  *((_DWORD *)Region + 6) = v17;
  v19 = 0x80000000;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)this + 88LL);
  v20 = (_QWORD *)(*(_QWORD *)this + 48LL);
  v20[1] = v20;
  *v20 = v20;
  v21 = bConstructGET(a2, v34, v11, a4);
  if ( !v21 )
    goto LABEL_60;
  CurrentThread = KeGetCurrentThread();
  LODWORD(v32) = 0;
  *(_QWORD *)&v31 = &v31;
  HIDWORD(v31) = 0x7FFFFFFF;
  while ( !PsIsThreadTerminating(CurrentThread) )
  {
    if ( (__int128 *)v31 != &v31 )
    {
      vAdvanceAETEdges(&v31);
      if ( (__int128 *)v31 != &v31 )
      {
        if ( *(__int128 **)v31 != &v31 )
          vXSortAETEdges(&v31);
LABEL_29:
        v23 = *(_QWORD *)&v34[0];
        goto LABEL_30;
      }
    }
    v23 = *(_QWORD *)&v34[0];
    if ( *(_OWORD **)&v34[0] == v34 )
      goto LABEL_38;
    v25 = v19;
    v19 = *(_DWORD *)(*(_QWORD *)&v34[0] + 16LL);
    if ( v19 != v25 )
    {
      if ( !(unsigned int)RGNMEMOBJ::bAddNullScan(this, v25, v19) )
        goto LABEL_60;
      goto LABEL_29;
    }
LABEL_30:
    if ( *(_DWORD *)(v23 + 16) == v19 )
      vMoveNewEdges(v34, &v31, v19);
    v24 = RGNMEMOBJ::bAddScans(this, v19++, (struct EDGE *)&v31, a3);
    v21 = v24;
    if ( !v24 )
      goto LABEL_60;
  }
  v21 = 0;
LABEL_38:
  if ( !v21 || !(unsigned int)RGNMEMOBJ::bAddNullScan(this, v19, 0x7FFFFFFF) )
  {
LABEL_60:
    v26 = *(REGION **)this;
    goto LABEL_61;
  }
  RGNOBJ::vTighten(this);
  v14 = *(_QWORD *)this;
  v15 = 4160749568LL;
  if ( ((*(_DWORD *)(*(_QWORD *)this + 96LL) & 0xF8000000) == 0
     || (*(_DWORD *)(*(_QWORD *)this + 96LL) & 0xF8000000) == -134217728)
    && (((*(_DWORD *)(v14 + 108) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((*(_DWORD *)(v14 + 104) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((*(_DWORD *)(v14 + 100) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
  {
    goto LABEL_55;
  }
  v26 = *(REGION **)this;
LABEL_61:
  REGION::vDeleteREGION(v26);
  *(_QWORD *)this = 0LL;
LABEL_55:
  if ( v12 )
    Win32FreePool((__int64)v11, v14, v15);
}
