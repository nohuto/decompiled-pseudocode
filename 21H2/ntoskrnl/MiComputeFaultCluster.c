/*
 * XREFs of MiComputeFaultCluster @ 0x14028DF24
 * Callers:
 *     MiResolvePageFileFault @ 0x14028AF68 (MiResolvePageFileFault.c)
 *     MiResolveMappedFileFault @ 0x140319480 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiGetPagingFileOffset @ 0x1402712A0 (MiGetPagingFileOffset.c)
 *     MiIsPteInStore @ 0x14028BE40 (MiIsPteInStore.c)
 *     MiAdvanceFaultList @ 0x14028E148 (MiAdvanceFaultList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiComputeFaultCluster(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r10
  unsigned __int64 v7; // rsi
  unsigned __int64 v10; // r14
  __int64 v11; // r11
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r15
  __int64 result; // rax
  __int64 v15; // rbp
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r11
  __int64 v20; // rax
  unsigned __int16 v21; // bx
  __int64 v22; // rax
  __int64 v23; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-50h]
  __int64 v25; // [rsp+30h] [rbp-48h]
  __int64 v26; // [rsp+38h] [rbp-40h]
  int v28; // [rsp+88h] [rbp+10h]

  v4 = a2[4];
  v5 = a2[1];
  v6 = 2LL * a2[3];
  v7 = a2[2];
  v25 = a2[3];
  v10 = *(_QWORD *)(v5 + 8 * v6) + (v4 << 12);
  v26 = v4;
  v24 = v7;
  MiAdvanceFaultList(a2);
  v12 = a2[3];
  v13 = 1LL;
  if ( v12 < v7 )
  {
    v28 = 0;
    v15 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
    v16 = 256LL;
    if ( a4 && *(unsigned int *)(a1 + 1164) < 0x100uLL )
      v16 = *(unsigned int *)(a1 + 1164);
    if ( a3 )
    {
      v17 = (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) - (v10 >> 12) + 1;
      if ( v16 <= v17 )
        v17 = v16;
      v16 = v17;
      v18 = *(unsigned int *)(a3 + 52);
      LODWORD(v18) = v18 & 0x7FFFFFFF;
      if ( v18 | ((unsigned __int64)*(unsigned __int8 *)(a3 + 34) << 31) )
      {
        a3 = 0LL;
        v28 = 1;
      }
    }
    if ( v16 > 1 )
    {
      while ( 1 )
      {
        if ( !a3 )
        {
          if ( (v15 & 0xFFF) == 0 || (v20 = MI_READ_PTE_LOCK_FREE(v15), v23 = v20, v21 = v20, (v20 & 1) != 0) )
          {
LABEL_14:
            v11 = v25;
            v4 = v26;
            break;
          }
          v22 = v20 & 0x400;
          if ( v28 )
          {
            if ( !v22 )
              goto LABEL_14;
          }
          else if ( v22
                 || (v21 & 0x800) != 0
                 || !(unsigned int)MiGetPagingFileOffset((__int64)&v23)
                 || a4 != (unsigned int)MiIsPteInStore(a1, v21) )
          {
            goto LABEL_14;
          }
          v15 += 8LL;
        }
        if ( ((*(_QWORD *)(a2[1] + 16 * v12) + (a2[4] << 12)) & 0xFFFFFFFFFFFFF000uLL) - 4096 == (v10 & 0xFFFFFFFFFFFFF000uLL) )
        {
          ++v13;
          MiAdvanceFaultList(a2);
          v12 = a2[3];
          if ( v12 != v24 )
          {
            v10 = v19;
            if ( v13 < v16 )
              continue;
          }
        }
        goto LABEL_14;
      }
    }
  }
  a2[4] = v4;
  result = (unsigned int)v13;
  a2[3] = v11;
  return result;
}
