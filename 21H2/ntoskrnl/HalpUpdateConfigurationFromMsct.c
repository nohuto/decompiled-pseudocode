/*
 * XREFs of HalpUpdateConfigurationFromMsct @ 0x140A8E2CC
 * Callers:
 *     HalpNumaInitializeStaticConfiguration @ 0x140A64EE0 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpGetNumaProcMemoryCount @ 0x140A8DEAC (HalpGetNumaProcMemoryCount.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpUpdateConfigurationFromMsct(
        unsigned int *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rbx
  __int64 v11; // r11
  unsigned int v12; // r12d
  unsigned int v13; // ebp
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  unsigned int *v16; // rdx
  unsigned int v17; // r13d
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  unsigned int *v20; // r14
  __int64 v21; // rax
  unsigned int v22; // ebx
  unsigned int v23; // r10d
  unsigned int v24; // edx
  unsigned int v25; // r11d
  unsigned int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int i; // ecx
  __int64 v30; // rax
  int v31; // edx
  unsigned int v32; // r8d
  __int64 v33; // rax
  unsigned int v34; // [rsp+0h] [rbp-58h]
  unsigned __int64 v35; // [rsp+8h] [rbp-50h]
  __int64 v36; // [rsp+10h] [rbp-48h]

  v10 = *(unsigned int *)(HalpAcpiMsct + 4);
  if ( (unsigned int)v10 >= 0x38 )
  {
    v11 = *(unsigned int *)(HalpAcpiMsct + 36);
    if ( (unsigned int)v10 >= (unsigned int)v11
      && (unsigned int)v11 >= 0x38
      && (!a5 || (unsigned int)(*(_DWORD *)(HalpAcpiMsct + 44) + 1) >= *a5) )
    {
      v12 = *(_DWORD *)(HalpAcpiMsct + 40) + 1;
      if ( v12 <= a2 )
      {
        v13 = *a1;
        if ( *a1 <= a2 && (!a4 || *a3 <= a4) )
        {
          LODWORD(v14) = 0;
          v15 = HalpAcpiMsct + v11;
          v34 = 0;
          v16 = (unsigned int *)(HalpAcpiMsct + v11 + 2);
          v17 = 0;
          v18 = HalpAcpiMsct + v11;
          v19 = HalpAcpiMsct + v10;
          v20 = v16;
          v35 = v19;
LABEL_29:
          if ( (unsigned __int64)v16 > v19
            || (v21 = *(unsigned __int8 *)(v18 + 1), (unsigned __int8)v21 < 2u)
            || (v36 = v18 + v21, v18 + v21 > v19) )
          {
            if ( (unsigned int)v14 == (1LL << v13) - 1 && v12 == v17 )
            {
              if ( (unsigned __int64)v20 <= v19 )
              {
                do
                {
                  v28 = *(unsigned __int8 *)(v15 + 1);
                  if ( (unsigned __int8)v28 < 2u || v15 + v28 > v35 )
                    break;
                  for ( i = *v20; i <= *(_DWORD *)(v15 + 6); ++i )
                  {
                    v30 = 0LL;
                    v31 = *(_DWORD *)(v15 + 10);
                    if ( *a1 )
                    {
                      while ( *(_DWORD *)(a6 + 4 * v30) != i )
                      {
                        v30 = (unsigned int)(v30 + 1);
                        if ( (unsigned int)v30 >= *a1 )
                          goto LABEL_41;
                      }
                      v31 -= *(_DWORD *)(a7 + 4 * v30);
                    }
LABEL_41:
                    *(_DWORD *)(a7 + 4 * v30) = *(_DWORD *)(v15 + 10);
                    if ( (_DWORD)v30 == *a1 )
                    {
                      *(_DWORD *)(a6 + 4 * v30) = i;
                      ++*a1;
                    }
                    v32 = *a3;
                    *a3 += v31;
                    if ( a8 && v31 )
                    {
                      do
                      {
                        v33 = v32++;
                        *(_DWORD *)(a8 + 4 * v33) = i;
                        --v31;
                      }
                      while ( v31 );
                    }
                  }
                  v15 += *(unsigned __int8 *)(v15 + 1);
                  v20 = (unsigned int *)(v15 + 2);
                }
                while ( v15 + 2 <= v35 );
              }
              if ( a5 )
                *a5 = *(_DWORD *)(HalpAcpiMsct + 44) + 1;
            }
          }
          else
          {
            v22 = *(_DWORD *)(v18 + 6);
            v23 = *v16;
            if ( v22 >= *v16 )
            {
              v24 = v22 - v23 + 1;
              if ( v24 <= a2 )
              {
                v17 += v24;
                if ( v17 <= a2 )
                {
                  v25 = *(_DWORD *)(v18 + 10);
                  if ( v25 <= 0x500 && (!a4 || v25 <= a4) )
                  {
                    v26 = v24 * v25 + v34;
                    v34 = v26;
                    if ( v26 <= 0x500 && (!a4 || v26 <= a4) )
                    {
                      while ( 1 )
                      {
                        v27 = 0LL;
                        if ( v13 )
                        {
                          while ( *(_DWORD *)(a6 + 4 * v27) != v23 )
                          {
                            v27 = (unsigned int)(v27 + 1);
                            if ( (unsigned int)v27 >= v13 )
                              goto LABEL_27;
                          }
                          v14 = (unsigned int)v14 | (unsigned __int64)(1LL << v27);
                          if ( *(_DWORD *)(a7 + 4LL * (unsigned int)v27) > v25 )
                            break;
                        }
LABEL_27:
                        if ( ++v23 > v22 )
                        {
                          v18 = v36;
                          v19 = v35;
                          v16 = (unsigned int *)(v36 + 2);
                          goto LABEL_29;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
