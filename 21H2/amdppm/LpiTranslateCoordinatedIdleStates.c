/*
 * XREFs of LpiTranslateCoordinatedIdleStates @ 0x1C0037700
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x1C003070C (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FAC (WPP_RECORDER_SF_.c)
 *     DecodeAcpiIdleState @ 0x1C00040D4 (DecodeAcpiIdleState.c)
 *     memset @ 0x1C000EF40 (memset.c)
 *     ValidateCoordinatedLpiDependencies @ 0x1C002C468 (ValidateCoordinatedLpiDependencies.c)
 *     ValidateLpiState @ 0x1C002C7D0 (ValidateLpiState.c)
 *     LpiEnumerateDependencies @ 0x1C00372B0 (LpiEnumerateDependencies.c)
 */

__int64 __fastcall LpiTranslateCoordinatedIdleStates(__int64 a1, _DWORD *a2, unsigned int **a3, _QWORD *a4, _QWORD *a5)
{
  _DWORD *v6; // rsi
  char *v7; // r13
  int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r12
  _DWORD *PoolWithTag; // r12
  int v13; // edx
  unsigned int v14; // esi
  int v15; // r14d
  __int64 v16; // rdi
  size_t v17; // rax
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ebx
  unsigned int v21; // r14d
  unsigned int *v22; // rax
  unsigned int *v23; // rdi
  char *v24; // rax
  __int64 v25; // r9
  __int64 v26; // rbx
  _DWORD *v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r14
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  size_t v33; // r8
  char *v34; // rsi
  int v35; // eax
  size_t v36; // rbx
  char v37; // al
  __int64 v38; // rcx
  char *v39; // rdx
  unsigned __int16 v40; // r9
  unsigned int j; // [rsp+68h] [rbp-81h] BYREF
  unsigned int i; // [rsp+6Ch] [rbp-7Dh]
  unsigned int v44; // [rsp+70h] [rbp-79h] BYREF
  size_t Size; // [rsp+78h] [rbp-71h]
  __int64 v46; // [rsp+80h] [rbp-69h]
  _DWORD *v47; // [rsp+88h] [rbp-61h] BYREF
  __int64 v48; // [rsp+90h] [rbp-59h]
  unsigned int *v49; // [rsp+98h] [rbp-51h]
  _OWORD v50[9]; // [rsp+A8h] [rbp-41h] BYREF

  j = 0;
  v44 = 0;
  memset(v50, 0, 0x58uLL);
  v6 = (_DWORD *)qword_1C00149C8;
  v7 = 0LL;
  if ( qword_1C00149C8 )
  {
    v9 = 0LL;
    if ( *(_DWORD *)qword_1C00149C8 )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)&v6[10 * v9 + 6];
        if ( v10 )
        {
          v11 = 0LL;
          if ( *(_DWORD *)(v10 + 16) )
            break;
        }
LABEL_8:
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= *v6 )
          goto LABEL_9;
      }
      while ( 1 )
      {
        v8 = ValidateLpiState(v10 + 80 * v11 + 24, 1);
        if ( v8 < 0 )
          break;
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= *(_DWORD *)(v10 + 16) )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_9:
      v8 = 0;
    }
    if ( v8 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * (unsigned int)*a2, 0x72637250u);
      if ( PoolWithTag )
      {
        v13 = 0;
        v14 = 0;
        v15 = 0;
        LODWORD(v46) = 0;
        v16 = 0LL;
        if ( *a2 )
        {
          do
          {
            PoolWithTag[v16] = v14;
            v17 = *(_QWORD *)&a2[10 * v16 + 6];
            Size = v17;
            if ( v17 )
            {
              v18 = *(_DWORD *)(v17 + 16);
              v19 = 0;
              v14 += v18;
              i = 0;
              if ( v18 )
              {
                do
                {
                  v8 = LpiEnumerateDependencies(
                         a2,
                         v16,
                         v19,
                         (__int64)PoolWithTag,
                         0LL,
                         &j,
                         &v44,
                         (unsigned int *)&v47,
                         0LL,
                         0LL,
                         0LL);
                  if ( v8 < 0 )
                    goto LABEL_51;
                  v13 = v44 + v46;
                  v19 = i + 1;
                  v15 += j;
                  LODWORD(v46) = v44 + v46;
                  i = v19;
                }
                while ( v19 < *(_DWORD *)(Size + 16) );
              }
            }
            v16 = (unsigned int)(v16 + 1);
          }
          while ( (unsigned int)v16 < *a2 );
          if ( !v14 )
            goto LABEL_50;
          v20 = (224 * v14 + 55) & 0xFFFFFFF8;
          v21 = v20 + 16 * v15;
          Size = v21 + 4 * v13;
          v22 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
          v23 = v22;
          if ( v22 )
          {
            memset(v22, 0, Size);
            Size = 56LL * v14;
            v24 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
            v7 = v24;
            if ( v24 )
            {
              memset(v24, 0, Size);
              v25 = v20;
              v26 = 0LL;
              v27 = (unsigned int *)((char *)v23 + v25);
              *v23 = v14;
              v47 = v27;
              v46 = (__int64)v23 + v21;
              for ( i = 0; (unsigned int)v26 < *a2; i = v26 )
              {
                v28 = (unsigned int)v26;
                v29 = *(_QWORD *)&a2[10 * v26 + 6];
                if ( v29 )
                {
                  v30 = 0LL;
                  for ( j = 0; (unsigned int)v30 < *(_DWORD *)(v29 + 16); j = v30 )
                  {
                    v31 = (unsigned int)(v30 + PoolWithTag[v28]);
                    v32 = *(_DWORD *)(80 * v30 + v29 + 28);
                    v33 = (size_t)&v23[56 * v31 + 12];
                    v48 = 80 * v30;
                    Size = v33;
                    v34 = &v7[56 * v31];
                    *(_DWORD *)(v33 + 192) = 10 * v32;
                    v35 = *(_DWORD *)(80 * v30 + v29 + 24);
                    *(_WORD *)(v33 + 209) = 257;
                    *(_QWORD *)(v33 + 216) = v27;
                    *(_DWORD *)(v33 + 196) = 10 * v35;
                    *(_OWORD *)(v33 + 168) = *(_OWORD *)(80 * v30 + v29 + 88);
                    *(_QWORD *)(v33 + 184) = *(_QWORD *)(v29 + 8);
                    KeInitializeAffinityEx(v33);
                    v49 = (unsigned int *)(Size + 204);
                    v8 = LpiEnumerateDependencies(
                           a2,
                           v26,
                           j,
                           (__int64)PoolWithTag,
                           (__int64)v23,
                           (_DWORD *)(Size + 204),
                           &v44,
                           (unsigned int *)(Size + 200),
                           v47,
                           v46,
                           Size);
                    if ( v8 < 0 )
                      goto LABEL_42;
                    v36 = Size;
                    if ( (unsigned int)KeIsEqualAffinityEx(Size, &unk_1C0014718) )
                    {
                      *(_BYTE *)(v36 + 208) = 1;
                      v37 = 1;
                    }
                    else
                    {
                      v37 = *(_BYTE *)(v36 + 208);
                    }
                    v38 = v48;
                    v34[48] = v37;
                    v39 = (char *)(v29 + v38 + 48);
                    *((_QWORD *)v34 + 4) = *(_QWORD *)(v38 + v29 + 52);
                    if ( *v39 != 126 )
                    {
                      v8 = DecodeAcpiIdleState(
                             a1,
                             v39,
                             0xFFFFFFFF,
                             *(unsigned int *)(v38 + v29 + 36),
                             0LL,
                             0LL,
                             0LL,
                             (__int64)v50);
                      if ( v8 < 0 )
                        goto LABEL_42;
                      *(_QWORD *)v34 = *((_QWORD *)&v50[1] + 1);
                      *(_OWORD *)(v34 + 8) = v50[2];
                      *((_QWORD *)v34 + 3) = *(_QWORD *)&v50[3];
                      *((_QWORD *)v34 + 5) = *(_QWORD *)&v50[4];
                    }
                    if ( byte_1C0014C11 )
                    {
                      if ( !v34[48] )
                      {
                        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          v40 = 17;
LABEL_48:
                          WPP_RECORDER_SF_(
                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                            2u,
                            3u,
                            v40,
                            (__int64)&WPP_62e1cf30a2ca3f2050ba2582c3303360_Traceguids);
                        }
LABEL_49:
                        v8 = -1073741637;
                        goto LABEL_42;
                      }
                      if ( *(_QWORD *)v34 || *((_QWORD *)v34 + 4) )
                      {
                        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          v40 = 18;
                          goto LABEL_48;
                        }
                        goto LABEL_49;
                      }
                    }
                    LODWORD(v26) = i;
                    v28 = i;
                    v27 = &v47[4 * *v49];
                    v47 = v27;
                    v46 += 4LL * v44;
                    v30 = j + 1;
                  }
                }
                v26 = (unsigned int)(v26 + 1);
              }
              v8 = ValidateCoordinatedLpiDependencies(v23);
              if ( v8 >= 0 )
              {
                *a3 = v23;
                v23 = 0LL;
                *a4 = PoolWithTag;
                PoolWithTag = 0LL;
                *a5 = v7;
                v7 = 0LL;
                v8 = 0;
              }
            }
            else
            {
              v8 = -1073741670;
            }
LABEL_42:
            if ( v23 )
              ExFreePoolWithTag(v23, 0x72637250u);
          }
          else
          {
            v8 = -1073741670;
          }
        }
        else
        {
LABEL_50:
          v8 = -1073741637;
        }
LABEL_51:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0x72637250u);
        if ( v7 )
          ExFreePoolWithTag(v7, 0x72637250u);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
