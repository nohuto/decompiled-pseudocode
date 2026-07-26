/*
 * XREFs of ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0105E2C
 * Callers:
 *     ndisIfRegisterInterfaceEx @ 0x1C002B6AC (ndisIfRegisterInterfaceEx.c)
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C002DEF8 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x1C002EB24 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C003438C (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C0126650 (NdisIfAllocateNetLuidIndex.c)
 *     NdisIfAllocateNetLuidIndexEx @ 0x1C0126670 (NdisIfAllocateNetLuidIndexEx.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001914C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dllL @ 0x1C002DC24 (WPP_RECORDER_SF_dllL.c)
 *     WPP_RECORDER_SF_dL @ 0x1C002DCDC (WPP_RECORDER_SF_dL.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ndisIfWriteRegistry @ 0x1C0126458 (ndisIfWriteRegistry.c)
 */

__int64 __fastcall ndisIfAllocateAndVerifyNetLuidIndex(__int16 a1, unsigned int *a2, char a3, char a4)
{
  int v5; // r13d
  unsigned int v6; // ebx
  const void **v7; // r14
  char *v8; // r15
  unsigned int v9; // r12d
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rax
  _BYTE *v18; // rdx
  char *v19; // r11
  __int64 v20; // r10
  int v21; // eax
  int v22; // edx
  int v23; // r8d
  char v24; // bp
  size_t v25; // rbx
  unsigned int v26; // r15d
  PVOID PoolWithTag; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  char *v30; // rcx
  __int64 v31; // rax
  void *v32; // rcx
  void **v33; // rax
  int v34; // [rsp+20h] [rbp-88h]
  char v35; // [rsp+50h] [rbp-58h]
  _BYTE *v36; // [rsp+58h] [rbp-50h]
  unsigned int *v38; // [rsp+B8h] [rbp+10h]

  v38 = a2;
  v5 = 0;
  v36 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v35 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_dL(*((_QWORD *)WPP_GLOBAL_Control + 8), 4u, 0LL, 0xAu, v34);
    a2 = v38;
  }
  if ( a3 )
  {
    *a2 = 0;
LABEL_5:
    ndisWaitForKernelObject(&Mutex);
    v11 = qword_1C00E5F58;
    if ( (__int64 *)qword_1C00E5F58 != &qword_1C00E5F58 )
    {
      while ( *(_WORD *)(v11 + 16) != a1 )
      {
        v11 = *(_QWORD *)v11;
        if ( (__int64 *)v11 == &qword_1C00E5F58 )
          goto LABEL_26;
      }
      v7 = (const void **)v11;
      v12 = *(_QWORD *)(v11 + 48);
      v9 = *(_DWORD *)(v11 + 40);
      if ( !a3 )
      {
        if ( v9 < (v6 >> 3) + 1 )
        {
          v10 = -1073741072;
        }
        else if ( ((unsigned __int8)(1 << (v6 & 7)) & *(_BYTE *)(((unsigned __int64)v6 >> 3) + v12)) == 0 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dL(*((_QWORD *)WPP_GLOBAL_Control + 8), 3u, (__int64)&qword_1C00E5F58, 0xCu, v34);
          v10 = -1073741072;
        }
        goto LABEL_10;
      }
      v17 = 0LL;
      if ( !v9 )
        goto LABEL_42;
      v18 = *(_BYTE **)(v11 + 48);
      while ( *v18 == 0xFF )
      {
        v5 += 8;
        v17 = (unsigned int)(v17 + 1);
        ++v18;
        if ( (unsigned int)v17 >= v9 )
          goto LABEL_42;
      }
      v19 = (char *)(v17 + v12);
      v20 = (unsigned int)v17;
      v21 = *(unsigned __int8 *)(v17 + v12);
      v22 = 1;
      v23 = 0;
      while ( (v21 & v22) != 0 )
      {
        v22 *= 2;
        if ( (unsigned int)++v23 >= 8 )
          goto LABEL_42;
      }
      v35 = v23;
      v5 += v23;
      *v19 = v22 | v21;
      v8 = v19;
      if ( a4 )
      {
        *(_BYTE *)(v20 + *(_QWORD *)(v11 + 56)) |= v22;
        v36 = (_BYTE *)(v20 + *(_QWORD *)(v11 + 56));
      }
      if ( !v19 )
      {
LABEL_42:
        if ( 8 * v9 + 1 >= 0x1001 )
          v10 = -1073741670;
      }
    }
LABEL_26:
    if ( !a3 )
    {
LABEL_10:
      if ( !v7 )
        v10 = -1073741072;
      goto LABEL_12;
    }
    if ( !v10 )
    {
      if ( v8 )
      {
        v24 = v35;
LABEL_30:
        if ( a4 && (v10 = ndisIfWriteRegistry(v7)) != 0 )
        {
          if ( v8 )
            *v8 &= ~(1 << v24);
          if ( v36 )
            *v36 &= ~(1 << v24);
        }
        else
        {
          *v38 = v5;
        }
        goto LABEL_12;
      }
      v25 = v7 != 0LL ? v9 : 0;
      v5 = 8 * (v7 != 0LL ? v9 : 0);
      v26 = v25 + 1;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(2 * (v25 + 1) + 64), 0x6669444Eu);
      v28 = (__int64)PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x40uLL);
        *(_WORD *)(v28 + 16) = a1;
        *(_QWORD *)(v28 + 56) = v28 + 64 + v26;
        *(_DWORD *)(v28 + 40) = v26;
        *(_QWORD *)(v28 + 48) = v28 + 64;
        *(_BYTE *)((unsigned int)v25 + v28 + 64) = 1;
        v29 = *(_QWORD *)(v28 + 56);
        if ( a4 )
        {
          *(_BYTE *)((unsigned int)v25 + v29) = 1;
          v36 = (_BYTE *)((unsigned int)v25 + *(_QWORD *)(v28 + 56));
        }
        else
        {
          *(_BYTE *)((unsigned int)v25 + v29) = 0;
        }
        v30 = *(char **)(v28 + 48);
        v24 = 0;
        v8 = &v30[(unsigned int)v25];
        if ( v7 )
        {
          memmove(v30, v7[6], v25);
          memmove(*(void **)(v28 + 56), v7[7], v25);
          v32 = (void *)*v7;
          if ( *((const void ***)*v7 + 1) != v7 )
            goto LABEL_48;
          v33 = (void **)v7[1];
          if ( *v33 != v7 )
            goto LABEL_48;
          *v33 = v32;
          *((_QWORD *)v32 + 1) = v33;
          ExFreePoolWithTag(v7, 0);
        }
        v31 = qword_1C00E5F58;
        if ( *(__int64 **)(qword_1C00E5F58 + 8) == &qword_1C00E5F58 )
        {
          *(_QWORD *)v28 = qword_1C00E5F58;
          v7 = (const void **)v28;
          *(_QWORD *)(v28 + 8) = &qword_1C00E5F58;
          *(_QWORD *)(v31 + 8) = v28;
          qword_1C00E5F58 = v28;
          goto LABEL_30;
        }
LABEL_48:
        __fastfail(3u);
      }
      v10 = -1073741670;
    }
LABEL_12:
    KeReleaseMutex(&Mutex, 0);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dllL(*((_QWORD *)WPP_GLOBAL_Control + 8), v13, v14, v15, v34);
    return v10;
  }
  v6 = *a2;
  if ( *a2 <= 0x1000 )
    goto LABEL_5;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      0x16u,
      0xBu,
      (struct _GUID *)&WPP_b09f245bd6e23c8183163ab44c15c118_Traceguids,
      *a2);
  return 3221226224LL;
}
