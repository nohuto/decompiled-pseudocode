/*
 * XREFs of MiReferenceIncomingPhysicalPages @ 0x1408D6264
 * Callers:
 *     NtMapUserPhysicalPages @ 0x1408D6E40 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408D7100 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     ExGetCallBackBlockRoutine @ 0x140381CB0 (ExGetCallBackBlockRoutine.c)
 *     MiDecrementAweMapCount @ 0x14054BC28 (MiDecrementAweMapCount.c)
 *     MiGetAweNode @ 0x14054C620 (MiGetAweNode.c)
 *     MiGetAweViewPageSize @ 0x14054C718 (MiGetAweViewPageSize.c)
 *     MiIncrementAweMapCount @ 0x14054C8B4 (MiIncrementAweMapCount.c)
 *     MiGetVadCacheAttribute @ 0x14055BFC0 (MiGetVadCacheAttribute.c)
 */

__int64 __fastcall MiReferenceIncomingPhysicalPages(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // edi
  unsigned int v12; // ebp
  unsigned __int64 v13; // r15
  __int64 v14; // r10
  __int64 AweViewPageSize; // rax
  unsigned int v16; // r8d
  __int64 v17; // r11
  _DWORD *PteAddress; // r12
  unsigned __int64 v19; // r13
  const signed __int64 *v20; // rax
  unsigned __int64 v21; // r14
  __int64 v22; // rax
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *AweNode; // rax
  __int64 v27; // r8
  __int64 v28; // r11
  unsigned __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rdi
  unsigned __int64 v33; // rsi
  __int64 v34; // rbp
  __int64 v35; // rcx
  unsigned __int64 v36; // rbp
  int v38; // [rsp+20h] [rbp-78h]
  int v39; // [rsp+24h] [rbp-74h]
  __int64 v40; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v41; // [rsp+38h] [rbp-60h]
  const signed __int64 *v42; // [rsp+40h] [rbp-58h]
  unsigned __int64 v45; // [rsp+B0h] [rbp+18h]
  unsigned int VadCacheAttribute; // [rsp+C8h] [rbp+30h]

  v45 = a3;
  v8 = 0LL;
  v9 = a3;
  v38 = 0;
  v10 = *(_QWORD *)(a6 + 24);
  v11 = *(_DWORD *)(v10 + 48) & 0x1100000;
  v39 = v11;
  VadCacheAttribute = MiGetVadCacheAttribute(v10);
  v12 = VadCacheAttribute;
  v40 = 0LL;
  v13 = ExGetCallBackBlockRoutine(a1);
  AweViewPageSize = MiGetAweViewPageSize(v14);
  PteAddress = a7;
  v19 = v13;
  if ( AweViewPageSize )
    v19 = AweViewPageSize;
  v41 = *(_QWORD *)(a1 + 16);
  v20 = *(const signed __int64 **)(a1 + 24);
  v21 = 0LL;
  v42 = v20;
  if ( v9 )
  {
    v22 = a2;
    while ( 1 )
    {
      v23 = *(_QWORD *)(v22 + 8 * v21);
      if ( !v17 )
        goto LABEL_18;
      if ( v23 )
        break;
      ++v21;
LABEL_41:
      if ( v21 >= v9 )
      {
        v8 = v40;
        goto LABEL_43;
      }
    }
    PteAddress = (_DWORD *)MiGetPteAddress(*(_QWORD *)(v17 + 8 * v21));
    if ( v24 < (*(unsigned int *)(v25 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 32) << 32)) << 12
      || v24 > (((*(unsigned int *)(v25 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 33) << 32)) << 12) | 0xFFF) )
    {
      AweNode = MiGetAweNode(v24);
      v27 = MiGetAweViewPageSize((__int64)AweNode);
      v29 = v13;
      if ( v27 )
        v29 = v27;
      if ( v29 != v19 )
        goto LABEL_39;
      v30 = *(_QWORD *)(v28 + 24);
      if ( (*(_DWORD *)(v30 + 48) & 0x1100000) == 0x1100000 )
      {
        if ( v11 != 17825792 )
          goto LABEL_39;
      }
      else if ( v11 == 17825792 )
      {
        goto LABEL_39;
      }
      if ( v12 != (unsigned int)MiGetVadCacheAttribute(v30) )
        goto LABEL_39;
    }
LABEL_18:
    if ( v23 / v13 < v41 && ((v19 - 1) & v23) == 0 )
    {
      v31 = 0LL;
      if ( v19 / v13 )
      {
        while ( _bittest64(v42, v23 / v13 + v31) )
        {
          if ( ++v31 >= v19 / v13 )
            goto LABEL_23;
        }
        goto LABEL_39;
      }
LABEL_23:
      v16 = v38;
      v32 = 48 * v23 - 0x58000000000LL;
      if ( v38 < 0 )
      {
        v36 = 0LL;
        if ( v19 )
        {
          do
          {
            MiDecrementAweMapCount(v31, v32, &v40, 0LL);
            v32 += 48 * v13;
            v36 += v13;
          }
          while ( v36 < v19 );
          v16 = v38;
LABEL_28:
          v9 = v45;
        }
      }
      else
      {
        v33 = 0LL;
        if ( !v19 )
        {
          v9 = v45;
          goto LABEL_30;
        }
        v34 = 48 * v13;
        while ( 1 )
        {
          v38 = MiIncrementAweMapCount(a1, v32, VadCacheAttribute, PteAddress);
          v16 = v38;
          if ( v38 < 0 )
            break;
          v33 += v13;
          v34 = 48 * v13;
          v32 += 48 * v13;
          if ( v33 >= v19 )
            goto LABEL_28;
        }
        if ( v33 )
        {
          do
          {
            v32 -= v34;
            MiDecrementAweMapCount(v35, v32, &v40, 0LL);
            v33 -= v13;
          }
          while ( v33 );
          v16 = v38;
        }
        v9 = v21;
        PteAddress = &a7[-2 * v19];
        v45 = v21;
        v21 = -1LL;
      }
      v12 = VadCacheAttribute;
LABEL_30:
      PteAddress += 2 * v19;
      v11 = v39;
      ++v21;
LABEL_40:
      v22 = a2;
      v17 = a4;
      goto LABEL_41;
    }
LABEL_39:
    v16 = -1073741800;
    v45 = v21;
    v9 = v21;
    v38 = -1073741800;
    v21 = 0LL;
    goto LABEL_40;
  }
LABEL_43:
  *a5 = v8;
  return v16;
}
