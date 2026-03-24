/*
 * XREFs of ACPIGetWorkerForInteger @ 0x1C0026CF0
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C00033D0 (FreeObjData.c)
 *     FreeData @ 0x1C00036E8 (FreeData.c)
 *     AMLIGetNamedChild @ 0x1C0020D50 (AMLIGetNamedChild.c)
 *     ACPIGetProcessorStatus @ 0x1C00270F4 (ACPIGetProcessorStatus.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002C8F0 (ACPIBuildSynchronizationRequestInternal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     ACPIGetConvertToClassCode @ 0x1C0055968 (ACPIGetConvertToClassCode.c)
 */

void __fastcall ACPIGetWorkerForInteger(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r13
  unsigned int v5; // ebp
  int v8; // edi
  __int64 v9; // r10
  int v10; // esi
  ULONG_PTR v11; // r15
  int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rdx
  _DWORD *v15; // rax
  KIRQL v16; // al
  __int64 v17; // rdi
  int v18; // r9d
  _DWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  void (__fastcall *v22)(__int64, _QWORD, _QWORD, _QWORD); // rax
  KIRQL v23; // al
  _QWORD **v24; // r9
  void **v25; // r8
  _DWORD *v26; // rax
  __int64 *v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  int v31; // [rsp+78h] [rbp+10h] BYREF
  _DWORD *v32; // [rsp+88h] [rbp+20h]

  v4 = (_QWORD *)a4[7];
  v5 = (unsigned int)a2 >> 31;
  v8 = a2;
  v9 = a1;
  if ( !v4 )
  {
    v8 = -1073741670;
    goto LABEL_28;
  }
  v10 = *(_DWORD *)a4;
  if ( (*(_DWORD *)a4 & 0x400) != 0 )
  {
    v19 = (_DWORD *)a4[8];
    if ( (v10 & 0x4000000) == 0 && (v20 = a4[3], (*(_QWORD *)(v20 + 8) & 0x2000000000000000LL) != 0) )
    {
      v21 = *(_QWORD *)(v20 + 568);
    }
    else
    {
      if ( v8 < 0 )
        goto LABEL_28;
      if ( *(_WORD *)(a3 + 2) != 1 )
      {
        v8 = -1072431089;
        goto LABEL_28;
      }
      v21 = *(_QWORD *)(a3 + 16);
    }
    *v4 = v21;
    if ( v19 )
      *v19 = 8;
    goto LABEL_27;
  }
  if ( (v10 & 0x800) != 0 )
  {
    v11 = a4[3];
    v32 = (_DWORD *)a4[8];
    v12 = 15;
    v31 = 15;
    if ( (v10 & 0x4000000) != 0 )
    {
      if ( (_DWORD)a2 != -1073741772 )
      {
        if ( (int)a2 >= 0 )
        {
          if ( *(_WORD *)(a3 + 2) != 1 )
            KeBugCheckEx(0xA5u, 8uLL, v11, 0LL, *(unsigned __int16 *)(a3 + 2));
          v12 = *(_DWORD *)(a3 + 16);
        }
        else
        {
          v12 = 0;
        }
        v31 = v12;
      }
      goto LABEL_24;
    }
    v13 = *(_QWORD *)(v11 + 8);
    if ( (v13 & 0x200000000000000LL) != 0 )
    {
      if ( (v13 & 0x400000000LL) == 0 )
        goto LABEL_7;
    }
    else if ( (v13 & 0x8000000000000LL) == 0 )
    {
LABEL_7:
      if ( (v13 & 0x1000000000LL) != 0 )
      {
        if ( (int)ACPIGetProcessorStatus(v11, a2, &v31) < 0 )
        {
          v12 = 0;
          v31 = 0;
        }
        else
        {
          v12 = v31;
        }
      }
      if ( v8 != -1073741772 )
      {
        if ( v8 < 0 )
        {
          v12 = 0;
        }
        else
        {
          if ( *(_WORD *)(a3 + 2) != 1 )
          {
            v27 = AMLIGetNamedChild(*(__int64 **)(v11 + 720), 1096045407);
            KeBugCheckEx(0xA5u, 8uLL, v11, (ULONG_PTR)v27, *(unsigned __int16 *)(a3 + 2));
          }
          v12 = *(_DWORD *)(a3 + 16);
        }
        v31 = v12;
      }
    }
    v14 = *(_QWORD *)(v11 + 8);
    if ( (v14 & 1) != 0 && (v10 & 0x1000) == 0 )
    {
      v12 &= ~1u;
      v31 = v12;
    }
    if ( (v14 & 0x40000000) != 0 )
    {
      v12 &= ~4u;
      v31 = v12;
    }
    if ( (v14 & 0x80000000000LL) != 0 )
    {
      v12 &= ~1u;
      v31 = v12;
    }
    if ( (v12 & 8) != 0 )
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 8), 0xFF7FFFFFFFFFFFFFuLL);
    else
      _InterlockedOr64((volatile signed __int64 *)(v11 + 8), 0x80000000000000uLL);
    if ( (v31 & 4) != 0 )
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 8), 0xFFFFFFFFDFFFFFFFuLL);
    else
      _InterlockedOr64((volatile signed __int64 *)(v11 + 8), 0x20000000uLL);
    if ( (v31 & 2) != 0 )
      _InterlockedOr64((volatile signed __int64 *)(v11 + 8), 0x40000000000000uLL);
    else
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 8), 0xFFBFFFFFFFFFFFFFuLL);
    if ( (v31 & 1) != 0 )
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 8), 0xFFFFFFFFFFFFFFFDuLL);
    else
      _InterlockedOr64((volatile signed __int64 *)(v11 + 8), 2uLL);
    v12 = v31;
    if ( (v14 & 2) == 0 && (v31 & 1) == 0 )
    {
      v16 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v17 = *(_QWORD *)(v11 + 752);
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v16);
      if ( v17 )
        ACPIBuildSynchronizationRequestInternal(v17, (unsigned int)ACPIBuildIssueNotifyInvalidateRelations, v17, v18, 1);
    }
LABEL_24:
    v15 = v32;
    *(_DWORD *)v4 = v12;
    if ( v15 )
      *v15 = 4;
    v9 = a1;
LABEL_27:
    v8 = 0;
    goto LABEL_28;
  }
  if ( (v10 & 0x8000) != 0 )
  {
    v28 = ACPIGetConvertToClassCode(a1, a2, a3, (_DWORD)a4, (__int64)v4, a4[8]);
    v9 = a1;
    v8 = v28;
  }
  else if ( (int)a2 >= 0 )
  {
    if ( (v10 & 0x4000) == 0 || *(_WORD *)(a3 + 2) == 1 )
    {
      *(_DWORD *)v4 = *(_DWORD *)(a3 + 16);
      v26 = (_DWORD *)a4[8];
      if ( v26 )
        *v26 = 4;
      goto LABEL_27;
    }
    v8 = -1072431089;
  }
LABEL_28:
  *((_DWORD *)a4 + 18) = v8;
  if ( (_BYTE)v5 )
    goto LABEL_32;
  dword_1C0082908 = 0;
  pszDest = 0;
  if ( (*(_BYTE *)a3 & 1) != 0 )
  {
    v29 = *(_QWORD *)(a3 + 8);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 8), 0xFFFFFFFF) != 1 || (*(_BYTE *)v29 & 8) == 0 )
      goto LABEL_31;
    FreeData(v29);
  }
  else
  {
    if ( !*(_QWORD *)(a3 + 32) || *(int *)(a3 + 8) > 0 )
      goto LABEL_31;
    if ( *(_WORD *)(a3 + 2) == 4 )
      FreeDataBuffs(*(_QWORD *)(a3 + 32) + 8LL, **(_DWORD **)(a3 + 32));
    FreeObjData(a3);
  }
  v9 = a1;
LABEL_31:
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
LABEL_32:
  if ( (*(_DWORD *)a4 & 0x10000000) == 0 )
  {
    v22 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))a4[5];
    if ( v22 )
      v22(v9, (unsigned int)v8, 0LL, a4[6]);
    v23 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
    v24 = (_QWORD **)a4[1];
    if ( v24[1] != a4 + 1 || (v25 = (void **)a4[2], *v25 != a4 + 1) )
      __fastfail(3u);
    *v25 = v24;
    v24[1] = v25;
    KeReleaseSpinLock(&AcpiGetLock, v23);
    ExFreePoolWithTag(a4, 0);
  }
}
