/*
 * XREFs of PepNotifyQueryCoordinatedStates @ 0x1C00319CC
 * Callers:
 *     RegisterKernelCoordinatedStates @ 0x1C002E71C (RegisterKernelCoordinatedStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C000EAC0 (memmove.c)
 *     memset @ 0x1C000ED80 (memset.c)
 *     ValidateCoordinatedDependencyOptions @ 0x1C0029F54 (ValidateCoordinatedDependencyOptions.c)
 *     ValidateCoordinatedState @ 0x1C002A544 (ValidateCoordinatedState.c)
 *     PepQueryName @ 0x1C003264C (PepQueryName.c)
 */

__int64 __fastcall PepNotifyQueryCoordinatedStates(__int64 a1, PVOID **a2)
{
  __int64 v2; // r14
  PVOID *v4; // rdi
  _DWORD *v5; // rsi
  SIZE_T v6; // rbx
  unsigned int *PoolWithTag; // rax
  unsigned int *v8; // r13
  int v9; // ebx
  int v10; // ebx
  int v11; // r8d
  unsigned int v12; // ebp
  unsigned int *v13; // rdx
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // r15d
  unsigned int v18; // ebx
  SIZE_T v19; // r12
  PVOID *v20; // rax
  unsigned int v21; // r12d
  char *v22; // rax
  char *v23; // r15
  unsigned int *v24; // rsi
  char *v25; // r13
  char *v26; // rbx
  unsigned int v27; // edx
  __int64 v28; // rcx
  SIZE_T v29; // rbx
  unsigned int i; // ebp
  __int64 v31; // r12
  unsigned int j; // r15d
  __int64 v33; // rax
  _DWORD *v34; // r9
  int v35; // edx
  unsigned int v36; // eax
  PVOID *v37; // rsi
  __int64 v38; // rbp
  unsigned int *v40; // [rsp+30h] [rbp-58h]
  SIZE_T v43; // [rsp+A0h] [rbp+18h]
  PVOID *v44; // [rsp+A8h] [rbp+20h]

  v2 = (unsigned int)dword_1C001398C;
  v4 = 0LL;
  v5 = 0LL;
  v6 = (unsigned int)(16 * dword_1C001398C + 4);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x72637250u);
  v40 = PoolWithTag;
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v6);
    *v8 = v2;
    v9 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1104), 29LL, v8);
    if ( v9 >= 0 )
    {
      v10 = 0;
      v11 = 0;
      v12 = 0;
      if ( (_DWORD)v2 )
      {
        v13 = v8 + 4;
        v14 = v2;
        do
        {
          v15 = *(v13 - 1);
          v16 = v12;
          v12 = *v13;
          v10 += v15;
          v13 += 4;
          v11 += v12 * v15;
          if ( v16 >= v12 )
            v12 = v16;
          --v14;
        }
        while ( v14 );
      }
      v17 = (224 * v2 + 55) & 0xFFFFFFF8;
      v18 = v17 + 16 * v10;
      v19 = v18 + 4 * v11;
      v20 = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x72637250u);
      v44 = v20;
      v4 = v20;
      if ( !v20 )
        goto LABEL_10;
      memset(v20, 0, v19);
      v21 = 0;
      v22 = (char *)v4 + v17;
      v23 = (char *)v4 + v18;
      if ( (_DWORD)v2 )
      {
        v24 = v8 + 3;
        v25 = v22;
        v26 = (char *)(v4 + 30);
        do
        {
          KeInitializeAffinityEx(v26 - 192);
          v27 = 0;
          *(_DWORD *)v26 = *(v24 - 2);
          *((_DWORD *)v26 + 1) = *(v24 - 1);
          *((_DWORD *)v26 + 3) = *v24;
          *((_DWORD *)v26 + 2) = v24[1];
          *((_QWORD *)v26 + 3) = v25;
          v25 += 16 * *v24;
          if ( *v24 )
          {
            do
            {
              v28 = v27++;
              *(_QWORD *)(*((_QWORD *)v26 + 3) + 16 * v28 + 8) = v23;
              v23 += 4 * v24[1];
            }
            while ( v27 < *v24 );
          }
          PepQueryName(a1, v21++, 27LL, v26 - 24);
          v26 += 224;
          v24 += 4;
        }
        while ( v21 < (unsigned int)v2 );
        v4 = v44;
        v8 = v40;
      }
      v29 = 4 * v12 + 24;
      v43 = v29;
      v5 = ExAllocatePoolWithTag(NonPagedPoolNx, v29, 0x72637250u);
      if ( v5 )
      {
        for ( i = 0; i < (unsigned int)v2; ++i )
        {
          v31 = 28LL * i;
          for ( j = 0; j < HIDWORD(v4[v31 + 31]); ++j )
          {
            memset(v5, 0, v29);
            *v5 = i;
            v5[1] = j;
            v5[2] = v4[v31 + 31];
            v9 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))qword_1C00136B0)(*(_QWORD *)(a1 + 1104), v5);
            if ( v9 < 0 )
              goto LABEL_31;
            v9 = ValidateCoordinatedDependencyOptions((__int64)v4, i, j, (unsigned int)v4[v31 + 31], (__int64)v5);
            if ( v9 < 0 )
              goto LABEL_31;
            v33 = *((_QWORD *)v5 + 2);
            v34 = v4[v31 + 33];
            if ( v33 )
              v35 = *(_DWORD *)(v33 + 56);
            else
              v35 = -1;
            v34[4 * j] = v35;
            v36 = v5[3];
            v34[4 * j + 1] = v36;
            memmove(*(void **)&v34[4 * j + 2], v5 + 6, 4LL * v36);
            v29 = v43;
          }
          v9 = ValidateCoordinatedState((__int64)v4, i);
          if ( v9 < 0 )
            goto LABEL_31;
          v29 = v43;
        }
        v9 = 0;
        *a2 = v4;
        v4 = 0LL;
      }
      else
      {
LABEL_10:
        v9 = -1073741670;
      }
    }
LABEL_31:
    ExFreePoolWithTag(v8, 0x72637250u);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x72637250u);
    if ( v4 )
    {
      if ( (_DWORD)v2 )
      {
        v37 = v4 + 28;
        v38 = v2;
        do
        {
          if ( *v37 )
            ExFreePoolWithTag(*v37, 0x72637250u);
          v37 += 28;
          --v38;
        }
        while ( v38 );
      }
      ExFreePoolWithTag(v4, 0x72637250u);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v9;
}
