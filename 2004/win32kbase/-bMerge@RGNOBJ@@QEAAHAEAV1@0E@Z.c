/*
 * XREFs of ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C00814D0
 * Callers:
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C0014CE8 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C0014E70 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C0058010 (EngUpdateDeviceSurface.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C007B580 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreCombineRgn @ 0x1C0084B00 (GreCombineRgn.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00C5AFC (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00812E0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?Feature_Servicing_HangGdi_28656583__private_IsEnabled@@YAHXZ @ 0x1C00CF1B8 (-Feature_Servicing_HangGdi_28656583__private_IsEnabled@@YAHXZ.c)
 *     memcmp @ 0x1C00D28C0 (memcmp.c)
 */

__int64 __fastcall RGNOBJ::bMerge(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, unsigned __int8 a4)
{
  RGNOBJ *v4; // rdi
  unsigned int *v5; // rsi
  int *v6; // r15
  _DWORD *v7; // r14
  unsigned int *v8; // rbx
  unsigned int v9; // ebp
  int IsEnabled; // eax
  unsigned int v11; // edx
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // edx
  int *v16; // r8
  signed int v17; // r13d
  _DWORD *v18; // r12
  signed int v19; // ecx
  int *v20; // r10
  signed int v21; // edx
  unsigned __int8 v22; // bp
  unsigned __int8 v23; // al
  int v24; // edx
  int v25; // r9d
  int v26; // ecx
  __int64 v27; // r11
  int v28; // eax
  _BYTE *v29; // rax
  unsigned int v30; // eax
  _DWORD *v31; // rcx
  signed int v32; // eax
  signed int v33; // eax
  signed int v34; // edx
  signed int v35; // eax
  _DWORD *v36; // [rsp+28h] [rbp-50h]

  v4 = this;
  v5 = 0LL;
  v6 = *(int **)(*(_QWORD *)a2 + 88LL);
  v7 = *(_DWORD **)(*(_QWORD *)a3 + 88LL);
  v36 = v7;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 40LL)
                 - 4LL
                 - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 40LL) - 4LL) + 16)
                 + 12) != 0x7FFFFFFF
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 40LL)
                 - 4LL
                 - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 40LL) - 4LL) + 16)
                 + 12) != 0x7FFFFFFF )
  {
    return 0LL;
  }
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)this + 88LL);
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 96LL) = 0x7FFFFFFF;
  *(_DWORD *)(*(_QWORD *)this + 100LL) = 0x7FFFFFFF;
  *(_DWORD *)(*(_QWORD *)this + 104LL) = 0x80000000;
  *(_DWORD *)(*(_QWORD *)this + 108LL) = 0x80000000;
  while ( 2 )
  {
    v8 = *(unsigned int **)(*(_QWORD *)v4 + 40LL);
    v9 = 4 * (*v6 + *v7) + 16;
    if ( v9 > *(_DWORD *)(*(_QWORD *)v4 + 24LL) - *(_DWORD *)(*(_QWORD *)v4 + 80LL) )
    {
      IsEnabled = Feature_Servicing_HangGdi_28656583__private_IsEnabled();
      v11 = *(_DWORD *)(*(_QWORD *)v4 + 24LL);
      if ( IsEnabled )
      {
        v12 = 2LL * v11;
        if ( v12 > 0xFFFFFFFF )
          return 0LL;
        v13 = v12 + v9;
        if ( (unsigned int)v12 + v9 < (unsigned int)v12 )
          return 0LL;
        v14 = v13 + 1120;
        if ( v13 + 1120 < v13 )
          return 0LL;
      }
      else
      {
        v14 = v9 + v11 + 1120;
      }
      if ( !(unsigned int)RGNOBJ::bExpand(v4, v14) )
        return 0LL;
      v8 = *(unsigned int **)(*(_QWORD *)v4 + 40LL);
      if ( v5 )
        v5 = &v8[-*(v8 - 1) - 4];
    }
    v16 = v7 + 3;
    v17 = v6[2];
    v18 = v8 + 3;
    v19 = v7[1];
    v20 = v6 + 3;
    v21 = v6[1];
    v22 = a4;
    if ( v17 >= v7[2] )
      v17 = v7[2];
    v8[2] = v17;
    v23 = 1;
    if ( v21 <= v19 )
      v21 = v19;
    v8[1] = v21;
    v24 = *v7;
    v25 = *v6;
    *v8 = 0;
    while ( v25 )
    {
      v26 = *v20;
      v27 = v23;
      if ( !v24 )
      {
        v23 = byte_1C0212B60[v23];
        ++v20;
        --v25;
        goto LABEL_31;
      }
      v28 = *v16;
      if ( v26 < *v16 )
      {
        v29 = byte_1C0212B60;
LABEL_26:
        ++v20;
        --v25;
        goto LABEL_27;
      }
      ++v16;
      --v24;
      if ( v26 <= v28 )
      {
        v29 = &unk_1C0212B40;
        goto LABEL_26;
      }
      v26 = v28;
      v29 = byte_1C0212B50;
LABEL_27:
      v23 = v29[v27];
LABEL_31:
      if ( (v22 & v23) != 0 )
      {
        ++*v8;
        *v18++ = v26;
        v22 ^= 0xFu;
      }
    }
    if ( v24 )
    {
      v26 = *v16++;
      --v24;
      v23 = byte_1C0212B50[v23];
      goto LABEL_31;
    }
    v4 = this;
    v7 = v36;
    v8[*v8 + 3] = *v8;
    if ( v5 && *v5 == *v8 && !memcmp(v5 + 3, v8 + 3, 4LL * *v5) )
    {
      v30 = v8[2];
      v8 = v5;
      v5[2] = v30;
    }
    if ( v5 != v8 )
    {
      *(_QWORD *)(*(_QWORD *)this + 40LL) = &v8[*v8 + 4];
      *(_DWORD *)(*(_QWORD *)this + 80LL) += 4 * *v8 + 16;
      ++*(_DWORD *)(*(_QWORD *)this + 84LL);
    }
    if ( v8[2] == 0x7FFFFFFF )
      return 1LL;
    if ( *v8 )
    {
      v31 = *(_DWORD **)this;
      v32 = v8[3];
      if ( v32 < *(_DWORD *)(*(_QWORD *)this + 96LL) )
      {
        v31[24] = v32;
        v31 = *(_DWORD **)this;
      }
      v33 = v8[1];
      if ( v33 < v31[25] )
      {
        v31[25] = v33;
        v31 = *(_DWORD **)this;
      }
      v34 = v8[*v8 + 2];
      if ( v34 > v31[26] )
      {
        v31[26] = v34;
        v31 = *(_DWORD **)this;
      }
      v35 = v8[2];
      if ( v35 > v31[27] )
        v31[27] = v35;
    }
    if ( v17 == v6[2] )
      v6 = (int *)((char *)v6 + (unsigned int)(4 * *v6 + 16));
    if ( v17 == v36[2] )
    {
      v7 = (_DWORD *)((char *)v36 + (unsigned int)(4 * *v36 + 16));
      v36 = v7;
    }
    if ( (unsigned __int64)v6 < *(_QWORD *)(*(_QWORD *)a2 + 40LL)
      && (unsigned __int64)v7 < *(_QWORD *)(*(_QWORD *)a3 + 40LL) )
    {
      v5 = v8;
      continue;
    }
    return 0LL;
  }
}
