/*
 * XREFs of MiAddPhysicalMemoryChunks @ 0x1408C558C
 * Callers:
 *     MiActOnPartitionNodePages @ 0x140560AE0 (MiActOnPartitionNodePages.c)
 *     MmAddPhysicalMemory @ 0x1408C6480 (MmAddPhysicalMemory.c)
 *     MiHotAddBootDeferredDescriptors @ 0x140A562F0 (MiHotAddBootDeferredDescriptors.c)
 * Callees:
 *     MiGetLargestPageIndex @ 0x1402486D0 (MiGetLargestPageIndex.c)
 *     MiPageToNode @ 0x14024E754 (MiPageToNode.c)
 *     MiGetClosestImplicitNode @ 0x140317220 (MiGetClosestImplicitNode.c)
 *     MiRestrictRangeToNode @ 0x1403B1630 (MiRestrictRangeToNode.c)
 *     MiNodeLargeFreeZeroPages2 @ 0x140556FA0 (MiNodeLargeFreeZeroPages2.c)
 *     MiAddPhysicalMemory @ 0x1408C4FF0 (MiAddPhysicalMemory.c)
 */

__int64 __fastcall MiAddPhysicalMemoryChunks(ULONG_PTR *a1, unsigned __int64 *a2, _QWORD *a3, int a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  int v7; // ebp
  int v8; // r15d
  unsigned __int64 v9; // rdi
  int v11; // r12d
  ULONG_PTR v12; // r14
  ULONG_PTR v13; // rax
  unsigned __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  BOOL v18; // ebp
  __int64 v20; // r12
  unsigned __int64 v21; // r8
  __int64 v22; // r9
  unsigned int LargestPageIndex; // r15d
  unsigned __int64 v24; // rcx
  unsigned int v25; // r13d
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // eax
  int v30; // eax
  __int64 v31; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-40h]
  unsigned __int64 v34; // [rsp+88h] [rbp+10h] BYREF
  _QWORD *v35; // [rsp+90h] [rbp+18h]

  v35 = a3;
  v4 = *a2;
  v5 = 0LL;
  v34 = *a2;
  v6 = *a3;
  v7 = 0;
  v8 = 0;
  v32 = 0LL;
  v9 = v6;
  v11 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = v4 >> 12;
      v13 = MiRestrictRangeToNode(v12, v6 >> 12);
      v14 = v13;
      if ( v12 < 0x100000 && v12 + v13 > 0x100000 )
        v14 = 0x100000 - v12;
      v15 = MiPageToNode(v12);
      v31 = qword_140C50DD0 + 4544LL * ((unsigned int)MiGetClosestImplicitNode(v15 + 1) - 1);
      if ( v11 < 0 )
      {
        v14 = v32;
        if ( v32 > 0x200 )
          v14 = 512LL;
        switch ( v8 )
        {
          case 0:
            if ( v32 > 0x200 )
            {
              v7 = 0;
              break;
            }
            v18 = v12 < 0x100000;
            goto LABEL_21;
          case 1:
            v18 = v32 <= 0x200;
LABEL_21:
            v7 = v18 + 1;
            break;
          case 2:
            v7 = 3;
            break;
          case 3:
            v7 = 4;
            break;
          case 4:
            goto LABEL_27;
        }
      }
      else
      {
        v7 = 0;
        LODWORD(v16) = 1;
        if ( (v12 & 0x1FF) != 0 )
        {
LABEL_11:
          if ( v14 > MiLargePageSizes[(unsigned int)v16] - v12 % MiLargePageSizes[(unsigned int)v16] )
            v14 = MiLargePageSizes[(unsigned int)v16] - v12 % MiLargePageSizes[(unsigned int)v16];
        }
        else
        {
          v17 = 512LL;
          while ( v14 >= v17 )
          {
            v14 &= ~(v17 - 1);
            if ( !(_DWORD)v16 )
              break;
            v16 = (unsigned int)(v16 - 1);
            v17 = MiLargePageSizes[v16];
            if ( v12 % v17 )
              goto LABEL_11;
          }
        }
      }
      v20 = 1LL;
      LargestPageIndex = MiGetLargestPageIndex();
      if ( LargestPageIndex <= 1 )
      {
        while ( 1 )
        {
          v24 = MiLargePageSizes[LargestPageIndex];
          if ( !(v12 % v24) && !(v14 % v24) )
            break;
          if ( ++LargestPageIndex > 1 )
            goto LABEL_34;
        }
        v20 = MiLargePageSizes[LargestPageIndex];
      }
LABEL_34:
      v25 = a4 & 0xFFFFA7FF;
      if ( v14 >= v21 )
      {
        if ( v7 )
        {
LABEL_41:
          if ( v7 != 1 || (v26 = MiNodeLargeFreeZeroPages2(v22, 1)) == 0 )
          {
            if ( v14 != 512 )
              v14 = 512LL;
            goto LABEL_58;
          }
        }
        else
        {
          v26 = MiNodeLargeFreeZeroPages2(v22, 0);
          if ( !v26 )
          {
            if ( v14 + v12 > 0x100000 && v14 > 0x200 )
            {
              LargestPageIndex = 1;
              v14 = 512LL;
              v20 = 512LL;
            }
            v22 = v31;
            v7 = 1;
            goto LABEL_41;
          }
        }
        if ( v26 < (unsigned __int64)(48 * v20) >> 12 )
        {
          while ( !LargestPageIndex )
          {
            LargestPageIndex = 1;
            v20 = MiLargePageSizes[1];
            if ( v26 >= (unsigned __int64)(48 * v20) >> 12 )
              goto LABEL_48;
          }
          v20 = 1LL;
        }
LABEL_48:
        if ( v20 != 1 )
        {
          v25 |= 0x4000u;
          if ( a1 == &MiSystemPartition )
          {
            if ( LargestPageIndex == 1 )
              v25 |= 0x800u;
            else
              v25 |= 0x1000u;
          }
        }
        v27 = v26 << 12;
        v28 = ~(v20 - 1);
        if ( v14 > (v28 & (v27 / 0x30)) )
          v14 = v28 & (v27 / 0x30);
      }
LABEL_58:
      v32 = v14;
      v29 = v25 & 0xFFFFDFFF;
      a4 = v25 | 0x2000;
      v8 = v7;
      if ( v7 > 2 )
        a4 = v29;
      v31 = v14 << 12;
      v30 = MiAddPhysicalMemory(a1, &v34, &v31, a4, 0LL);
      v11 = v30;
      if ( v30 < 0 )
        break;
      v4 = v31 + v34;
      v5 += v31;
      v34 += v31;
      v6 = v9 - v5;
      if ( v9 == v5 )
        goto LABEL_27;
    }
    if ( v30 != -1073741670 && v30 != -1073741523 || v7 == 4 )
      break;
    v4 = v34;
    v6 = v31;
  }
LABEL_27:
  *v35 = v5;
  return (unsigned int)v11;
}
