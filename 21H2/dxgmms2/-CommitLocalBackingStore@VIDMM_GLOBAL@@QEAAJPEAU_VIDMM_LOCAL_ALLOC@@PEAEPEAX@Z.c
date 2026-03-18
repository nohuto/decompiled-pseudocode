/*
 * XREFs of ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAEPEAX@Z @ 0x1C00A169C
 * Callers:
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00927A8 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00A49DC (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00A3CDC (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00A3CFC (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C00E1D48 (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitLocalBackingStore(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        unsigned __int8 *a3,
        unsigned __int64 a4)
{
  int v6; // edi
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  VIDMM_GLOBAL *v13; // r10
  unsigned int v14; // esi
  char v15; // r8
  char v16; // r10
  int v17; // eax
  int v18; // ecx
  VIDMM_GLOBAL *v19; // rsi
  VIDMM_PROCESS *v20; // rcx
  struct _OBJECT_TYPE *ObjectType; // rax
  NTSTATUS v23; // eax
  __int64 v24; // rcx
  __int64 CurrentProcess; // rbx
  __int64 v26; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  SIZE_T v32; // rdx
  void *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // rcx
  VIDMM_PROCESS *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rbx
  struct _MDL *v47; // rbx
  __int64 v48; // rcx
  int v49; // [rsp+48h] [rbp-C0h]
  PVOID Base; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int8 *v53; // [rsp+78h] [rbp-90h] BYREF
  __int64 v54; // [rsp+80h] [rbp-88h] BYREF
  struct _KAPC_STATE v55; // [rsp+88h] [rbp-80h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-50h]

  v53 = a3;
  v6 = 0;
  Base = 0LL;
  v7 = *(_QWORD *)a2;
  v8 = *((_QWORD *)a2 + 1);
  v54 = v8;
  v56 = v8;
  VIDMM_PROCESS::SafeAttach((VIDMM_PROCESS *)v8, &v55);
  v10 = *(unsigned int *)(v7 + 72);
  if ( (v10 & 0x2000) != 0 )
  {
    v33 = *(void **)(v7 + 560);
LABEL_50:
    Base = v33;
    goto LABEL_22;
  }
  if ( (v10 & 0x44000) == 0x44000 )
  {
    v34 = *(_QWORD *)(v8 + 32);
    if ( v34 )
    {
      if ( (*(_DWORD *)(v34 + 424) & 0x100) != 0 )
      {
        v33 = *(void **)(v7 + 544);
        goto LABEL_50;
      }
    }
  }
  if ( (v10 & 0x8400) != 0 )
  {
LABEL_22:
    v19 = this;
    goto LABEL_23;
  }
  v11 = **(unsigned int **)(v7 + 528);
  if ( (v10 & 0x40000) != 0 )
  {
    if ( (v11 & 0x400000) != 0
      || (ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType(*(_QWORD *)(v7 + 376)),
          v23 = ObOpenObjectByPointer(*(PVOID *)(v7 + 376), 0, 0LL, 0, ObjectType, 1, (PHANDLE)a2 + 12),
          v6 = v23,
          v23 >= 0) )
    {
      if ( (*(_DWORD *)(v7 + 72) & 0x80u) == 0 )
        goto LABEL_22;
      v53 = 0LL;
      v52 = *(_QWORD *)(v7 + 8);
      v24 = **(unsigned int **)(v7 + 528);
      if ( (v24 & 4) != 0 )
      {
        CurrentProcess = PsGetCurrentProcess(v24, v11, v9, v10);
        v26 = *(_QWORD *)(v7 + 376);
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        v49 = 4;
      }
      else
      {
        CurrentProcess = PsGetCurrentProcess(v24, v11, v9, v10);
        v26 = *(_QWORD *)(v7 + 376);
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        v49 = 1028;
      }
      v6 = (*((__int64 (__fastcall **)(__int64, __int64, PVOID *, _QWORD, __int64, unsigned __int8 **, __int64, int, _DWORD, int))VirtualMemoryInterface
            + 3))(
             v26,
             CurrentProcess,
             &Base,
             0LL,
             v52,
             &v53,
             v7 + 8,
             2,
             0,
             v49);
      if ( v6 >= 0 )
      {
        v8 = v54;
        goto LABEL_22;
      }
      _InterlockedAdd(&dword_1C006E73C, 1u);
      v37 = PsGetCurrentProcess(v29, v28, v30, v31);
      WdLogSingleEntry3(6LL, v7, v37, v6);
      PsGetCurrentProcess(v39, v38, v40, v41);
      v36 = 262145LL;
    }
    else
    {
      WdLogSingleEntry2(1LL, *(_QWORD *)(v7 + 376), v23);
      v35 = *(_QWORD *)(v7 + 376);
      v36 = 0x40000LL;
    }
    DxgkLogInternalTriageEvent(v35, v36);
    goto LABEL_24;
  }
  if ( (v11 & 8) != 0 || (v11 & 0x20000) != 0 )
    goto LABEL_22;
  if ( (v11 & 0x10) != 0 )
  {
    if ( (v10 & 0x1000) == 0 )
    {
      if ( a4 != (a4 & 0xFFFFFFFFFFFFF000uLL) || *(_QWORD *)v7 != (*(_QWORD *)v7 & 0xFFFFFFFFFFFFF000uLL) )
      {
        WdLogSingleEntry1(1LL, 29307LL);
        DxgkLogInternalTriageEvent(v42, 0x40000LL);
        v6 = -1073741811;
        goto LABEL_24;
      }
      v32 = *(_QWORD *)(v7 + 8);
      if ( _bittest((const signed __int32 *)(v7 + 68), 0xCu) )
      {
        if ( v32 && (a4 + v32 > MmUserProbeAddress || a4 + v32 < a4) )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      else
      {
        ProbeForWrite((volatile void *)a4, v32, 1u);
      }
    }
    goto LABEL_48;
  }
  if ( (v11 & 0x20) == 0 )
  {
    if ( (v10 & 0x4000) != 0 )
    {
      v14 = ((v11 & 4) != 0) + 9;
    }
    else if ( (v10 & 0x100000) != 0 )
    {
      v14 = 2;
    }
    else
    {
      if ( (v10 & 0x80u) == 0LL )
      {
        v13 = this;
        v14 = 4;
        if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 436LL) & 8) == 0 && (v11 & 4) == 0 )
          v14 = 3;
LABEL_15:
        v52 = 0LL;
        v15 = BYTE1(v10) & 1;
        if ( v14 - 3 > 3
          && (*(_DWORD *)(v7 + 68) & 0x80u) == 0
          && ((*(_DWORD *)(*((_QWORD *)v13 + 3) + 436LL) & 8) != 0 || (v11 & 1) != 0) )
        {
          v15 = 0;
        }
        v16 = v15;
        if ( v14 - 9 <= 1 )
          v16 = 0;
        v54 = 0LL;
        v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *, PVOID *, __int64 *, unsigned __int8 *, bool, char))(**(_QWORD **)(v8 + 24) + 16LL))(
                *(_QWORD *)(v8 + 24),
                *(_QWORD *)(v7 + 8),
                *(unsigned int *)(v7 + 32),
                v14,
                &v52,
                &Base,
                &v54,
                v53,
                (v10 & 0x80000) != 0,
                v16);
        v6 = v17;
        if ( v17 < 0 )
        {
          _InterlockedAdd(&dword_1C006E7C8, 1u);
          WdLogSingleEntry2(6LL, *(_QWORD *)(v7 + 8), v17);
          DxgkLogInternalTriageEvent(v45, 262145LL);
        }
        else
        {
          *((_QWORD *)a2 + 3) = v52;
          v18 = *(_DWORD *)(v7 + 72);
          if ( (v18 & 0x4000) != 0 )
            *(_QWORD *)(v7 + 560) = v54;
          if ( (v18 & 0x100000) != 0 )
          {
            v46 = *(_QWORD *)(v7 + 512);
            MmGetPhysicalAddress(*(PVOID *)(v46 + 56));
            v47 = VidMmiBuildMdlForContiguousMmIo(Base, *(_QWORD *)(v7 + 8), *(union _LARGE_INTEGER *)(v46 + 64));
            if ( v47 )
            {
              v19 = this;
              v6 = (*(__int64 (__fastcall **)(_QWORD, VIDMM_GLOBAL *, _QWORD, __int64, struct _MDL *, _QWORD, _QWORD, _QWORD, _DWORD, __int64))(**(_QWORD **)(v8 + 24) + 48LL))(
                     *(_QWORD *)(v8 + 24),
                     this,
                     *((_QWORD *)a2 + 3),
                     1LL,
                     v47,
                     *(_QWORD *)(v7 + 8),
                     0LL,
                     0LL,
                     0,
                     v7);
              if ( v6 < 0 )
                ExFreePoolWithTag(v47, 0);
              else
                *((_BYTE *)a2 + 32) |= 1u;
              if ( v6 >= 0 )
                goto LABEL_23;
            }
            else
            {
              WdLogSingleEntry1(1LL, 29499LL);
              DxgkLogInternalTriageEvent(v48, 0x40000LL);
              v6 = -1073741801;
              v19 = this;
            }
            (*(void (__fastcall **)(_QWORD, struct _VIDMM_LOCAL_ALLOC *))(**(_QWORD **)(v8 + 24) + 24LL))(
              *(_QWORD *)(v8 + 24),
              a2);
LABEL_23:
            _InterlockedExchangeAdd64(
              (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16)
                                                                + 8LL * *(unsigned int *)(*((_QWORD *)v19 + 3) + 240LL))
                                                    + 48LL)
                                        + 296LL * (*(_DWORD *)(v7 + 68) & 0x3F)
                                        + 224),
              *(_QWORD *)(v7 + 8));
            v20 = (VIDMM_PROCESS *)Base;
            *((_QWORD *)a2 + 2) = Base;
LABEL_24:
            VIDMM_PROCESS::SafeDetach(v20, &v55);
            return (unsigned int)v6;
          }
        }
        goto LABEL_22;
      }
      if ( (*(_DWORD *)(v7 + 68) & 0x100) == 0 )
      {
        v12 = **(_DWORD **)(v7 + 528) & 0x800;
        v13 = this;
        if ( (v11 & 4) != 0 )
          v14 = v12 != 0 ? 8 : 2;
        else
          v14 = v12 != 0 ? 7 : 1;
        goto LABEL_15;
      }
      v14 = ((**(_DWORD **)(v7 + 528) & 4) != 0) + 5;
    }
    v13 = this;
    goto LABEL_15;
  }
  if ( a4 >= MmUserProbeAddress )
  {
    if ( a4 != (a4 & 0xFFFFFFFFFFFFF000uLL) || *(_QWORD *)v7 != (*(_QWORD *)v7 & 0xFFFFFFFFFFFFF000uLL) )
    {
      WdLogSingleEntry1(1LL, 29372LL);
      goto LABEL_62;
    }
LABEL_48:
    Base = (PVOID)a4;
    goto LABEL_22;
  }
  WdLogSingleEntry1(1LL, 29359LL);
LABEL_62:
  DxgkLogInternalTriageEvent(v43, 0x40000LL);
  VIDMM_PROCESS::SafeDetach(v44, &v55);
  return 3221225485LL;
}
