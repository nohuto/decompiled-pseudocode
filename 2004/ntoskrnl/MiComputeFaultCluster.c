/*
 * XREFs of MiComputeFaultCluster @ 0x140311F14
 * Callers:
 *     MiResolveMappedFileFault @ 0x14025E350 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAdvanceFaultList @ 0x140312138 (MiAdvanceFaultList.c)
 *     MiIsPteInStore @ 0x140314E74 (MiIsPteInStore.c)
 *     MiGetPagingFileOffset @ 0x140315B24 (MiGetPagingFileOffset.c)
 */

__int64 __fastcall MiComputeFaultCluster(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r10
  unsigned __int64 v7; // rsi
  __int64 v8; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r11
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r15
  __int64 result; // rax
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // r11
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-50h]
  __int64 v28; // [rsp+30h] [rbp-48h]
  __int64 v29; // [rsp+38h] [rbp-40h]
  int v31; // [rsp+88h] [rbp+10h]
  int v32; // [rsp+98h] [rbp+20h]

  v32 = a4;
  v4 = a2[4];
  v5 = a2[1];
  v6 = 2LL * a2[3];
  v7 = a2[2];
  v8 = a3;
  v28 = a2[3];
  v10 = *(_QWORD *)(v5 + 8 * v6) + (v4 << 12);
  v29 = v4;
  v27 = v7;
  MiAdvanceFaultList(a2, a2, a3, a4);
  v15 = a2[3];
  v16 = 1LL;
  if ( v15 < v7 )
  {
    v31 = 0;
    v18 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
    v19 = 256LL;
    if ( v32 && *(unsigned int *)(a1 + 1164) < 0x100uLL )
      v19 = *(unsigned int *)(a1 + 1164);
    if ( v8 )
    {
      v20 = (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) - (v10 >> 12) + 1;
      if ( v19 <= v20 )
        v20 = v19;
      v19 = v20;
      v21 = *(unsigned int *)(v8 + 52);
      LODWORD(v21) = v21 & 0x7FFFFFFF;
      if ( v21 | ((unsigned __int64)*(unsigned __int8 *)(v8 + 34) << 31) )
      {
        v8 = 0LL;
        v31 = 1;
      }
    }
    if ( v19 > 1 )
    {
      while ( 1 )
      {
        if ( !v8 )
        {
          if ( (v18 & 0xFFF) == 0 || (v23 = MI_READ_PTE_LOCK_FREE(v18), v26 = v23, v24 = v23, (v23 & 1) != 0) )
          {
LABEL_14:
            v14 = v28;
            v4 = v29;
            break;
          }
          v25 = v23 & 0x400;
          if ( v31 )
          {
            if ( !v25 )
              goto LABEL_14;
          }
          else if ( v25
                 || (v24 & 0x800) != 0
                 || !(unsigned int)MiGetPagingFileOffset(&v26)
                 || v32 != (unsigned int)MiIsPteInStore(a1, v24) )
          {
            goto LABEL_14;
          }
          v18 += 8LL;
        }
        if ( ((*(_QWORD *)(a2[1] + 16 * v15) + (a2[4] << 12)) & 0xFFFFFFFFFFFFF000uLL) - 4096 == (v10 & 0xFFFFFFFFFFFFF000uLL) )
        {
          ++v16;
          MiAdvanceFaultList(a2, v11, v12, v13);
          v15 = a2[3];
          if ( v15 != v27 )
          {
            v10 = v22;
            if ( v16 < v19 )
              continue;
          }
        }
        goto LABEL_14;
      }
    }
  }
  a2[4] = v4;
  result = (unsigned int)v16;
  a2[3] = v14;
  return result;
}
