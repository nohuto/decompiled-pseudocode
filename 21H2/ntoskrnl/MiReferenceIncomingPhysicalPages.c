/*
 * XREFs of MiReferenceIncomingPhysicalPages @ 0x14097D2A0
 * Callers:
 *     NtMapUserPhysicalPages @ 0x14097DFA0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14097E270 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MiGetVadCacheAttribute @ 0x140200CF0 (MiGetVadCacheAttribute.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     MiDecrementAweMapCount @ 0x1405AA4C8 (MiDecrementAweMapCount.c)
 *     MiGetAweNode @ 0x1405AAF14 (MiGetAweNode.c)
 *     MiGetAwePageSize @ 0x1405AAF90 (MiGetAwePageSize.c)
 *     MiGetAweViewPageSize @ 0x1405AB030 (MiGetAweViewPageSize.c)
 *     MiIncrementAweMapCount @ 0x1405AB148 (MiIncrementAweMapCount.c)
 */

__int64 __fastcall MiReferenceIncomingPhysicalPages(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rbx
  __int64 v8; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // r11
  unsigned __int64 AwePageSize; // r15
  __int64 v14; // r10
  __int64 PteAddress; // r12
  unsigned int v16; // r8d
  __int64 v17; // r11
  unsigned __int64 AweViewPageSize; // r13
  unsigned __int64 v19; // rbp
  __int64 v20; // rax
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *AweNode; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  unsigned int v29; // r10d
  __int64 v30; // rcx
  __int64 v31; // rdi
  unsigned __int64 v32; // rsi
  __int64 v33; // r14
  __int64 v34; // rcx
  unsigned __int64 v35; // r14
  int v37; // [rsp+20h] [rbp-78h]
  int v38; // [rsp+24h] [rbp-74h]
  __int64 v39; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-60h]
  const signed __int64 *v41; // [rsp+40h] [rbp-58h]
  unsigned __int64 v44; // [rsp+B0h] [rbp+18h]
  unsigned int VadCacheAttribute; // [rsp+C8h] [rbp+30h]

  v44 = a3;
  v7 = 0LL;
  v8 = a4;
  v9 = a3;
  v37 = 0;
  v10 = *(_QWORD *)(a6 + 24);
  v11 = *(_DWORD *)(v10 + 48) & 0x2200000;
  v38 = v11;
  VadCacheAttribute = MiGetVadCacheAttribute(v10);
  v39 = 0LL;
  AwePageSize = MiGetAwePageSize(v12);
  PteAddress = a7;
  AweViewPageSize = MiGetAweViewPageSize(v14);
  v19 = 0LL;
  if ( !AweViewPageSize )
    AweViewPageSize = AwePageSize;
  v40 = *(_QWORD *)(v17 + 24);
  v41 = *(const signed __int64 **)(v17 + 32);
  if ( v9 )
  {
    v20 = a2;
    while ( 1 )
    {
      v21 = *(_QWORD *)(v20 + 8 * v19);
      if ( !v8 )
        goto LABEL_19;
      if ( v21 )
        break;
      ++v19;
LABEL_43:
      if ( v19 >= v9 )
      {
        v7 = v39;
        goto LABEL_45;
      }
    }
    PteAddress = MiGetPteAddress(*(_QWORD *)(v8 + 8 * v19));
    if ( v22 >= (*(unsigned int *)(v23 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 32) << 32)) << 12
      && v22 <= (((*(unsigned int *)(v23 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 33) << 32)) << 12) | 0xFFF) )
    {
LABEL_19:
      v29 = VadCacheAttribute;
    }
    else
    {
      AweNode = MiGetAweNode(v22);
      v25 = MiGetAweViewPageSize((__int64)AweNode);
      if ( !v25 )
        v25 = AwePageSize;
      if ( v25 != AweViewPageSize )
        goto LABEL_41;
      v27 = *(_QWORD *)(v26 + 24);
      if ( (*(_DWORD *)(v27 + 48) & 0x2200000) == 0x2200000 )
      {
        if ( v11 != 35651584 )
          goto LABEL_41;
      }
      else if ( v11 == 35651584 )
      {
        goto LABEL_41;
      }
      v28 = MiGetVadCacheAttribute(v27);
      v29 = VadCacheAttribute;
      if ( VadCacheAttribute != v28 )
        goto LABEL_41;
    }
    if ( v21 / AwePageSize < v40 && ((AweViewPageSize - 1) & v21) == 0 )
    {
      v30 = 0LL;
      if ( AweViewPageSize / AwePageSize )
      {
        while ( _bittest64(v41, v21 / AwePageSize + v30) )
        {
          if ( ++v30 >= AweViewPageSize / AwePageSize )
            goto LABEL_25;
        }
        goto LABEL_41;
      }
LABEL_25:
      v16 = v37;
      v31 = 48 * v21 - 0x220000000000LL;
      if ( v37 < 0 )
      {
        v35 = 0LL;
        if ( AweViewPageSize )
        {
          do
          {
            MiDecrementAweMapCount(v30, v31, &v39, 0);
            v31 += 48 * AwePageSize;
            v35 += AwePageSize;
          }
          while ( v35 < AweViewPageSize );
          v16 = v37;
LABEL_30:
          v9 = v44;
        }
      }
      else
      {
        v32 = 0LL;
        if ( !AweViewPageSize )
        {
          v9 = v44;
          goto LABEL_32;
        }
        v33 = 48 * AwePageSize;
        while ( 1 )
        {
          v37 = MiIncrementAweMapCount(a1, v31, v29, PteAddress);
          v16 = v37;
          if ( v37 < 0 )
            break;
          v29 = VadCacheAttribute;
          v33 = 48 * AwePageSize;
          v32 += AwePageSize;
          v31 += 48 * AwePageSize;
          if ( v32 >= AweViewPageSize )
            goto LABEL_30;
        }
        if ( v32 )
        {
          do
          {
            v31 -= v33;
            MiDecrementAweMapCount(v34, v31, &v39, 0);
            v32 -= AwePageSize;
          }
          while ( v32 );
          v16 = v37;
        }
        PteAddress = a7 - 8 * AweViewPageSize;
        v44 = v19;
        v9 = v19;
        v19 = -1LL;
      }
      v8 = a4;
LABEL_32:
      PteAddress += 8 * AweViewPageSize;
      v11 = v38;
      ++v19;
LABEL_42:
      v20 = a2;
      goto LABEL_43;
    }
LABEL_41:
    v16 = -1073741800;
    v44 = v19;
    v9 = v19;
    v37 = -1073741800;
    v19 = 0LL;
    goto LABEL_42;
  }
LABEL_45:
  *a5 = v7;
  return v16;
}
