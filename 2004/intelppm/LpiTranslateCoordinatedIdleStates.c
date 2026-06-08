/*
 * XREFs of LpiTranslateCoordinatedIdleStates @ 0x1C003A120
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x1C00358FC (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     DecodeAcpiIdleState @ 0x1C0003F60 (DecodeAcpiIdleState.c)
 *     memset @ 0x1C00047C0 (memset.c)
 *     ValidateCoordinatedLpiDependencies @ 0x1C002E858 (ValidateCoordinatedLpiDependencies.c)
 *     ValidateCoordinatedLpiStates @ 0x1C002E9D0 (ValidateCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C0039CD8 (LpiEnumerateDependencies.c)
 */

__int64 __fastcall LpiTranslateCoordinatedIdleStates(__int64 a1, _DWORD *a2, unsigned int **a3, _QWORD *a4, _QWORD *a5)
{
  char *v6; // r13
  __int64 v7; // rdx
  int v8; // ebx
  _DWORD *PoolWithTag; // r12
  int v10; // edx
  unsigned int v11; // r14d
  int v12; // r15d
  __int64 v13; // rdi
  size_t v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  unsigned int v18; // r15d
  unsigned int *v19; // rax
  unsigned int *v20; // rdi
  char *v21; // rax
  __int64 v22; // r9
  __int64 v23; // rbx
  _DWORD *v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // eax
  size_t v30; // r8
  char *v31; // r14
  int v32; // eax
  size_t v33; // rbx
  char v34; // al
  __int64 v35; // rcx
  char *v36; // rdx
  unsigned __int16 v37; // r9
  unsigned int j; // [rsp+68h] [rbp-81h] BYREF
  unsigned int i; // [rsp+6Ch] [rbp-7Dh]
  unsigned int v41; // [rsp+70h] [rbp-79h] BYREF
  size_t Size; // [rsp+78h] [rbp-71h]
  __int64 v43; // [rsp+80h] [rbp-69h]
  _DWORD *v44; // [rsp+88h] [rbp-61h] BYREF
  __int64 v45; // [rsp+90h] [rbp-59h]
  unsigned int *v46; // [rsp+98h] [rbp-51h]
  _OWORD v47[9]; // [rsp+A8h] [rbp-41h] BYREF

  j = 0;
  v41 = 0;
  memset(v47, 0, 0x58uLL);
  v6 = 0LL;
  v8 = ValidateCoordinatedLpiStates((_DWORD *)qword_1C001C9D8, v7);
  if ( v8 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * (unsigned int)*a2, 0x72637250u);
    if ( PoolWithTag )
    {
      v10 = 0;
      v11 = 0;
      v12 = 0;
      LODWORD(v43) = 0;
      v13 = 0LL;
      if ( *a2 )
      {
        do
        {
          PoolWithTag[v13] = v11;
          v14 = *(_QWORD *)&a2[10 * v13 + 6];
          Size = v14;
          if ( v14 )
          {
            v15 = *(_DWORD *)(v14 + 16);
            v16 = 0;
            v11 += v15;
            i = 0;
            if ( v15 )
            {
              do
              {
                v8 = LpiEnumerateDependencies(
                       a2,
                       v13,
                       v16,
                       (__int64)PoolWithTag,
                       0LL,
                       &j,
                       &v41,
                       (unsigned int *)&v44,
                       0LL,
                       0LL,
                       0LL);
                if ( v8 < 0 )
                  goto LABEL_42;
                v10 = v41 + v43;
                v16 = i + 1;
                v12 += j;
                LODWORD(v43) = v41 + v43;
                i = v16;
              }
              while ( v16 < *(_DWORD *)(Size + 16) );
            }
          }
          v13 = (unsigned int)(v13 + 1);
        }
        while ( (unsigned int)v13 < *a2 );
        if ( !v11 )
          goto LABEL_41;
        v17 = (224 * v11 + 55) & 0xFFFFFFF8;
        v18 = v17 + 16 * v12;
        Size = v18 + 4 * v10;
        v19 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
        v20 = v19;
        if ( v19 )
        {
          memset(v19, 0, Size);
          Size = 56LL * v11;
          v21 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
          v6 = v21;
          if ( v21 )
          {
            memset(v21, 0, Size);
            v22 = v17;
            v23 = 0LL;
            v24 = (unsigned int *)((char *)v20 + v22);
            *v20 = v11;
            v44 = v24;
            v43 = (__int64)v20 + v18;
            for ( i = 0; (unsigned int)v23 < *a2; i = v23 )
            {
              v25 = (unsigned int)v23;
              v26 = *(_QWORD *)&a2[10 * v23 + 6];
              if ( v26 )
              {
                v27 = 0LL;
                for ( j = 0; (unsigned int)v27 < *(_DWORD *)(v26 + 16); j = v27 )
                {
                  v28 = (unsigned int)(v27 + PoolWithTag[v25]);
                  v29 = *(_DWORD *)(80 * v27 + v26 + 28);
                  v30 = (size_t)&v20[56 * v28 + 12];
                  v45 = 80 * v27;
                  Size = v30;
                  v31 = &v6[56 * v28];
                  *(_DWORD *)(v30 + 192) = 10 * v29;
                  v32 = *(_DWORD *)(80 * v27 + v26 + 24);
                  *(_WORD *)(v30 + 209) = 257;
                  *(_QWORD *)(v30 + 216) = v24;
                  *(_DWORD *)(v30 + 196) = 10 * v32;
                  *(_OWORD *)(v30 + 168) = *(_OWORD *)(80 * v27 + v26 + 88);
                  *(_QWORD *)(v30 + 184) = *(_QWORD *)(v26 + 8);
                  KeInitializeAffinityEx(v30);
                  v46 = (unsigned int *)(Size + 204);
                  v8 = LpiEnumerateDependencies(
                         a2,
                         v23,
                         j,
                         (__int64)PoolWithTag,
                         (__int64)v20,
                         (_DWORD *)(Size + 204),
                         &v41,
                         (unsigned int *)(Size + 200),
                         v44,
                         v43,
                         Size);
                  if ( v8 < 0 )
                    goto LABEL_33;
                  v33 = Size;
                  if ( (unsigned int)KeIsEqualAffinityEx(Size, &unk_1C001C730) )
                  {
                    *(_BYTE *)(v33 + 208) = 1;
                    v34 = 1;
                  }
                  else
                  {
                    v34 = *(_BYTE *)(v33 + 208);
                  }
                  v35 = v45;
                  v31[48] = v34;
                  v36 = (char *)(v26 + v35 + 48);
                  *((_QWORD *)v31 + 4) = *(_QWORD *)(v35 + v26 + 52);
                  if ( *v36 != 126 )
                  {
                    v8 = DecodeAcpiIdleState(
                           a1,
                           v36,
                           0xFFFFFFFF,
                           *(unsigned int *)(v35 + v26 + 36),
                           0LL,
                           0LL,
                           0LL,
                           (__int64)v47);
                    if ( v8 < 0 )
                      goto LABEL_33;
                    *(_QWORD *)v31 = *((_QWORD *)&v47[1] + 1);
                    *(_OWORD *)(v31 + 8) = v47[2];
                    *((_QWORD *)v31 + 3) = *(_QWORD *)&v47[3];
                    *((_QWORD *)v31 + 5) = *(_QWORD *)&v47[4];
                  }
                  if ( byte_1C001CC1C )
                  {
                    if ( !v31[48] )
                    {
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        v37 = 17;
LABEL_39:
                        WPP_RECORDER_SF_(
                          (__int64)WPP_GLOBAL_Control->DeviceExtension,
                          2u,
                          3u,
                          v37,
                          (__int64)&WPP_c9178c11c8093e361aee475e5cbe99c8_Traceguids);
                      }
LABEL_40:
                      v8 = -1073741637;
                      goto LABEL_33;
                    }
                    if ( *(_QWORD *)v31 || *((_QWORD *)v31 + 4) )
                    {
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        v37 = 18;
                        goto LABEL_39;
                      }
                      goto LABEL_40;
                    }
                  }
                  LODWORD(v23) = i;
                  v25 = i;
                  v24 = &v44[4 * *v46];
                  v44 = v24;
                  v43 += 4LL * v41;
                  v27 = j + 1;
                }
              }
              v23 = (unsigned int)(v23 + 1);
            }
            v8 = ValidateCoordinatedLpiDependencies(v20);
            if ( v8 >= 0 )
            {
              *a3 = v20;
              v20 = 0LL;
              *a4 = PoolWithTag;
              PoolWithTag = 0LL;
              *a5 = v6;
              v6 = 0LL;
              v8 = 0;
            }
          }
          else
          {
            v8 = -1073741670;
          }
LABEL_33:
          if ( v20 )
            ExFreePoolWithTag(v20, 0x72637250u);
        }
        else
        {
          v8 = -1073741670;
        }
      }
      else
      {
LABEL_41:
        v8 = -1073741637;
      }
LABEL_42:
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x72637250u);
      if ( v6 )
        ExFreePoolWithTag(v6, 0x72637250u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v8;
}
