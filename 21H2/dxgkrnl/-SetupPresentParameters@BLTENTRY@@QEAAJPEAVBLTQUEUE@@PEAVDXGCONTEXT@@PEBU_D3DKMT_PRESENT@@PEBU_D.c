/*
 * XREFs of ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C02FFA0C
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02FE454 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014AB0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C015352C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x1C0227540 (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C02FD65C (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02FF450 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 */

__int64 __fastcall BLTENTRY::SetupPresentParameters(
        BLTENTRY *this,
        struct BLTQUEUE *a2,
        struct DXGDEVICE **a3,
        const struct _D3DKMT_PRESENT *a4,
        const struct _DXGKARG_PRESENT *a5,
        struct COREDEVICEACCESS *a6,
        unsigned __int8 a7)
{
  D3DKMT_HANDLE hSource; // r8d
  struct DXGALLOCATION **v11; // r15
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGALLOCATION *v15; // rsi
  _QWORD *v16; // rax
  struct DXGALLOCATION *v17; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  void *v23; // rcx
  struct DXGDEVICE *v24; // rsi
  const struct tagRECT *v25; // r12
  NTSTATUS v26; // eax
  void *v27; // rcx
  NTSTATUS v28; // eax
  __int64 v29; // rbx
  __int64 v30; // rax
  PVOID Object; // [rsp+50h] [rbp-E8h] BYREF
  PVOID v32; // [rsp+58h] [rbp-E0h] BYREF
  struct _EX_RUNDOWN_REF *v33; // [rsp+60h] [rbp-D8h] BYREF
  struct COREDEVICEACCESS *v34; // [rsp+68h] [rbp-D0h]
  struct DXGCONTEXT *v35; // [rsp+70h] [rbp-C8h]
  BLTENTRY *v36; // [rsp+78h] [rbp-C0h]
  __int128 *v37; // [rsp+80h] [rbp-B8h]
  unsigned int v38[20]; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v39; // [rsp+E0h] [rbp-58h] BYREF

  v36 = this;
  v35 = (struct DXGCONTEXT *)a3;
  v34 = a6;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  if ( (a4->Flags.Value & 4) != 0 )
    hSource = a4->hSource;
  else
    hSource = a4->hDestination;
  v11 = (struct DXGALLOCATION **)((char *)this + 32);
  AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                *((_QWORD *)a3[2] + 5),
                                                (DXGALLOCATIONREFERENCE *)&v33,
                                                hSource);
  DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)this + 4, AllocationSafe);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v33, v13);
  v15 = (struct DXGALLOCATION *)*((_QWORD *)this + 4);
  if ( !v15 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14, 0LL);
    v16[3] = a3;
    v17 = (struct DXGALLOCATION *)a4->hSource;
LABEL_6:
    v16[4] = v17;
    v16[5] = -1073741811LL;
LABEL_7:
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  if ( !a7 )
  {
    v19 = *(_QWORD *)(*((_QWORD *)v15 + 1) + 16LL);
    v20 = *(_QWORD *)(*((_QWORD *)a3[2] + 2) + 16LL);
    if ( *(_QWORD *)(v19 + 16) != v20 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
      v16[3] = a3[2];
LABEL_11:
      v17 = *v11;
      goto LABEL_6;
    }
  }
  v21 = *(unsigned int *)(*((_QWORD *)v15 + 6) + 4LL);
  if ( (v21 & 4) == 0 && !a7 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v21, 0LL);
    v16[3] = a3;
    goto LABEL_11;
  }
  *((_QWORD *)this + 65) = 0LL;
  if ( a7 )
  {
    *((_DWORD *)this + 130) = 1;
LABEL_34:
    *((_DWORD *)this + 16) = a4->Flags.0;
    *((_DWORD *)this + 14) = a4->FlipInterval;
    *((_DWORD *)this + 15) = a4->PresentCount;
    *((_OWORD *)this + 33) = 0LL;
    *((_OWORD *)this + 34) = 0LL;
    *((LARGE_INTEGER *)this + 67) = KeQueryPerformanceCounter(0LL);
    v29 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)this + 66) = v29 * KeQueryTimeIncrement();
    return 0LL;
  }
  if ( *((_BYTE *)a3 + 457) )
  {
    v22 = PRESENTDODARG::SetPresentDodArg(
            (BLTENTRY *)((char *)this + 72),
            (struct DXGCONTEXT *)a3,
            *(_DWORD *)(*((_QWORD *)this + 3) + 248LL),
            v15,
            0,
            0,
            0LL,
            a4,
            a5,
            a6);
    if ( v22 >= 0 )
    {
      *((_DWORD *)this + 130) |= 1u;
      goto LABEL_34;
    }
LABEL_19:
    DXGALLOCATIONREFERENCE::AssignNull((struct _EX_RUNDOWN_REF **)this + 4);
    return (unsigned int)v22;
  }
  memset(v38, 0, sizeof(v38));
  DxgkpGetDodPrimaryInfo(a3[2], v15, (struct _D3DKMT_KMDOD_ESCAPE *)v38);
  if ( !v38[8] )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v23, 0LL);
    v16[3] = 131LL;
    goto LABEL_7;
  }
  v24 = a3[7];
  v39 = 0LL;
  v25 = 0LL;
  if ( *(_DWORD *)v24 == -791674878 )
  {
    v23 = (void *)*((_QWORD *)v24 + 2);
    if ( v23 )
    {
      if ( *((_QWORD *)v24 + 3) )
      {
        Object = 0LL;
        v26 = ObReferenceObjectByHandle(v23, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
        *((_QWORD *)this + 5) = Object;
        if ( v26 < 0 )
          return 3221225485LL;
        v27 = (void *)*((_QWORD *)v24 + 3);
        v32 = 0LL;
        v28 = ObReferenceObjectByHandle(v27, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v32, 0LL);
        *((_QWORD *)this + 6) = v32;
        if ( v28 < 0 )
          return 3221225485LL;
        if ( *((struct DXGDEVICE **)v24 + 4) == (struct DXGDEVICE *)((char *)v24 + 32) && *((int *)v24 + 10) < 0 )
        {
          v39 = *(_OWORD *)((char *)v24 + 44);
          v25 = (const struct tagRECT *)&v39;
          v37 = &v39;
        }
        v22 = PRESENTDODARG::SetPresentDodArg(
                (BLTENTRY *)((char *)this + 72),
                (struct DXGCONTEXT *)a3,
                *(_DWORD *)(*((_QWORD *)this + 3) + 248LL),
                *v11,
                v38[8],
                v38[10],
                v25,
                a4,
                a5,
                v34);
        if ( v22 >= 0 )
          goto LABEL_34;
        goto LABEL_19;
      }
    }
  }
  v30 = WdLogNewEntry5_WdError(v23, 0LL);
  *(_QWORD *)(v30 + 24) = 145LL;
  WdLogEvent5_WdError(v30);
  return 3221225485LL;
}
