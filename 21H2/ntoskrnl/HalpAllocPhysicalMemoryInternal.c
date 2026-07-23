/*
 * XREFs of HalpAllocPhysicalMemoryInternal @ 0x140A65B30
 * Callers:
 *     HalpAllocPhysicalMemory @ 0x140A65AC0 (HalpAllocPhysicalMemory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HalpAllocPhysicalMemoryInternal(__int64 a1, _QWORD *a2, unsigned int a3, char a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 **v9; // r14
  __int64 *v10; // r10
  __int64 *v11; // r9
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  __int64 *i; // rdx
  unsigned __int64 v15; // r15
  int v16; // r8d
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rbp
  __int64 v19; // rsi
  char *v20; // r11
  unsigned __int64 v21; // r9
  int v22; // r9d
  __int64 v23; // r8
  __int64 **v24; // rdx
  __int64 *v25; // rax
  __int64 **v26; // rdx
  unsigned __int64 v27; // r9
  char *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax

  result = 0LL;
  if ( HalpUsedAllocDescriptors + 2 <= (unsigned int)HalpAllocationDescriptorArraySize )
  {
    v6 = -1LL;
    v7 = 1LL;
    if ( a2 )
      v6 = *a2 >> 12;
    v8 = a3;
    if ( v6 >= a3 )
    {
      if ( HalpMiscDiscardLowMemory && v6 - a3 >= 0x100 )
        v7 = 256LL;
      v9 = (__int64 **)(a1 + 32);
      v10 = 0LL;
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      for ( i = *v9; ; i = (__int64 *)*i )
      {
        if ( i == (__int64 *)v9 )
        {
LABEL_23:
          if ( i == (__int64 *)v9 )
            return result;
          if ( !v12 && v11 && *((_DWORD *)v11 + 4) == 26 && (v19 = v11[4], v19 + v11[3] == v10[3]) )
          {
            v20 = 0LL;
            v11[4] = v19 + v8;
          }
          else
          {
            v22 = HalpUsedAllocDescriptors;
            v20 = (char *)HalpAllocationDescriptorArray + 40 * (unsigned int)HalpUsedAllocDescriptors;
            *((_QWORD *)v20 + 4) = v8;
            v23 = v10[3];
            *((_DWORD *)v20 + 4) = 26;
            *((_QWORD *)v20 + 3) = v12 + v23;
            HalpUsedAllocDescriptors = v22 + 1;
          }
          v21 = v10[4] - v8;
          if ( v12 )
          {
            v27 = v21 - v12;
            if ( v27 )
            {
              v28 = (char *)HalpAllocationDescriptorArray + 40 * (unsigned int)HalpUsedAllocDescriptors++;
              *((_QWORD *)v28 + 4) = v27;
              *((_QWORD *)v28 + 3) = v12 + v8 + v10[3];
              *((_DWORD *)v28 + 4) = *((_DWORD *)v10 + 4);
              v29 = *v10;
              if ( *(__int64 **)(*v10 + 8) != v10 )
                goto LABEL_49;
              *(_QWORD *)v28 = v29;
              *((_QWORD *)v28 + 1) = v10;
              *(_QWORD *)(v29 + 8) = v28;
              *v10 = (__int64)v28;
            }
            v10[4] = v12;
            v30 = *v10;
            if ( *(__int64 **)(*v10 + 8) == v10 )
            {
              *(_QWORD *)v20 = v30;
              *((_QWORD *)v20 + 1) = v10;
              *(_QWORD *)(v30 + 8) = v20;
              *v10 = (__int64)v20;
              goto LABEL_32;
            }
          }
          else
          {
            v10[3] += v8;
            v10[4] = v21;
            if ( !v20 )
              goto LABEL_31;
            v24 = (__int64 **)v10[1];
            if ( *v24 == v10 )
            {
              *(_QWORD *)v20 = v10;
              *((_QWORD *)v20 + 1) = v24;
              *v24 = (__int64 *)v20;
              v10[1] = (__int64)v20;
              v21 = v10[4];
LABEL_31:
              if ( v21 )
              {
LABEL_32:
                HalpMmEarlyPhysicalPagesAllocated += v8;
                return v13;
              }
              v25 = (__int64 *)*v10;
              if ( *(__int64 **)(*v10 + 8) == v10 )
              {
                v26 = (__int64 **)v10[1];
                if ( *v26 == v10 )
                {
                  *v26 = v25;
                  v25[1] = (__int64)v26;
                  goto LABEL_32;
                }
              }
            }
          }
LABEL_49:
          __fastfail(3u);
        }
        v15 = i[3];
        v11 = v10;
        v10 = i;
        v16 = *((_DWORD *)i + 4);
        v13 = 0LL;
        if ( v16 == 5 || v16 == 2 )
        {
          if ( v15 )
            break;
        }
LABEL_11:
        ;
      }
      v17 = v7;
      if ( v15 >= v7 )
        v17 = i[3];
      if ( a4 )
      {
        if ( ((v17 + 15) & 0xFFFFFFFFFFFFFFF0uLL) < v17 )
          goto LABEL_21;
        v17 = (v17 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      }
      v18 = v6;
      if ( v15 + i[4] <= v6 )
        v18 = v15 + i[4];
      if ( v17 < v18 && v8 <= v18 - v17 )
        v13 = v17 << 12;
LABEL_21:
      if ( v13 )
      {
        v12 = (v13 >> 12) - v15;
        goto LABEL_23;
      }
      goto LABEL_11;
    }
  }
  return result;
}
