/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C00617DC
 * Callers:
 *     ?CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z @ 0x1C0061748 (-CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z.c)
 * Callees:
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x1C0027FFC (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z @ 0x1C0064DFC (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z.c)
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x1C0067FE8 (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x1C00BA4C4 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_BLOCK::Allocate(VIDMM_RECYCLE_BLOCK *this, ULONG_PTR a2, char a3)
{
  int *v3; // r10
  int v7; // ecx
  char v8; // r14
  char v9; // dl
  PVOID *v10; // rsi
  int v11; // ebx
  void *CurrentPartitionHandle; // rax
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  NTSTATUS inserted; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  NTSTATUS v21; // eax
  __int64 v22; // r9
  ULONG v23; // esi
  int v24; // eax
  ULONG v25; // r8d
  __int64 v26; // rcx
  unsigned int *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  unsigned int v31; // esi
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // r8d
  ULONG v36; // r8d
  ULONG_PTR v37; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp+10h] BYREF

  ViewSize = a2;
  v3 = (int *)*((_QWORD *)this + 4);
  v7 = *v3;
  v8 = *((_BYTE *)v3 + 16);
  v9 = *((_BYTE *)v3 + 17);
  if ( (unsigned int)(*v3 - 9) <= 1 )
  {
    *((_DWORD *)this + 32) = 0x800000;
    v31 = 1028;
    if ( *v3 == 10 )
      v31 = 4;
    v32 = VIDMM_PROCESS::MapHostVirtualAddressToGuest(
            *(VIDMM_PROCESS **)(*((_QWORD *)v3 + 1) + 8LL),
            0LL,
            a2,
            0x800000u,
            v31,
            (void **)this + 14,
            (unsigned __int64 *)this + 15,
            (void **)this + 5);
    v16 = v32;
    if ( v32 >= 0 )
    {
      v22 = *((_QWORD *)this + 5);
      *((_BYTE *)this + 132) |= 1u;
      goto LABEL_10;
    }
    _InterlockedIncrement(&dword_1C00506D8);
    goto LABEL_34;
  }
  if ( (unsigned int)(v7 - 3) > 3 )
  {
    if ( v7 == 2 || (v23 = 1028, v7 == 8) )
      v23 = 4;
    v24 = 0x2000;
    *((_DWORD *)this + 32) = 0x2000;
    if ( v9 )
    {
      v24 = 2105344;
      *((_DWORD *)this + 32) = 2105344;
    }
    if ( v8 )
    {
      v24 |= 0x20400000u;
      *((_DWORD *)this + 32) = v24;
    }
    v25 = v24;
    if ( a3 && !v8 && !v9 )
    {
      v25 = v24 | 0x800000;
      *((_DWORD *)this + 32) = v24 | 0x800000;
    }
    LODWORD(v16) = VidMmAllocateVirtualMemory((PVOID *)this + 5, &ViewSize, v25, v23);
    if ( (int)v16 >= 0 )
      goto LABEL_19;
    v35 = *((_DWORD *)this + 32);
    if ( (v35 & 0x800000) != 0 )
    {
      v36 = v35 & 0xFF7FFFFF;
      *((_DWORD *)this + 32) = v36;
      LODWORD(v16) = VidMmAllocateVirtualMemory((PVOID *)this + 5, &ViewSize, v36, v23);
    }
    if ( (int)v16 >= 0 )
    {
LABEL_19:
      *((_QWORD *)this + 6) = *((_QWORD *)this + 5) + ViewSize;
      *((_BYTE *)this + 132) ^= (*((_BYTE *)this + 132) ^ (*((_DWORD *)this + 32) >> 23)) & 1;
      goto LABEL_20;
    }
    _InterlockedIncrement(&dword_1C00506D8);
    v33 = WdLogNewEntry5_WdLowResource(v26);
    *(_QWORD *)(v33 + 24) = (int)v16;
    goto LABEL_35;
  }
  v37 = a2;
  v10 = (PVOID *)((char *)this + 56);
  v11 = ((v7 - 4) & 0xFFFFFFFD) != 0 ? 1208221696 : 134479872;
  CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
  v13 = v11 | 0x80000;
  if ( !v8 )
    v13 = v11;
  v14 = MmCreateSection((char *)this + 56, 0LL, 0LL, &v37, 4, v13, CurrentPartitionHandle, 0LL);
  v16 = v14;
  if ( v14 < 0 )
    goto LABEL_33;
  ObfReferenceObject(*v10);
  inserted = ObInsertObject(*v10, 0LL, 0, 0, 0LL, (PHANDLE)this + 8);
  v16 = inserted;
  if ( inserted < 0 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v19, v18, v20);
    *(_QWORD *)(v34 + 24) = *v10;
    *(_QWORD *)(v34 + 32) = v16;
    WdLogEvent5_WdAssertion(v34);
    return (unsigned int)v16;
  }
  if ( (unsigned int)(**((_DWORD **)this + 4) - 5) > 1 )
  {
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = ViewSize;
    goto LABEL_20;
  }
  v21 = MmMapViewInSystemSpace(*v10, (PVOID *)this + 5, &ViewSize);
  v16 = v21;
  if ( v21 < 0 )
  {
LABEL_33:
    _InterlockedIncrement(&dword_1C0050788);
LABEL_34:
    v33 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v33 + 24) = v16;
LABEL_35:
    WdLogEvent5_WdLowResource(v33);
    return (unsigned int)v16;
  }
  v22 = *((_QWORD *)this + 5);
LABEL_10:
  *((_QWORD *)this + 6) = v22 + ViewSize;
LABEL_20:
  if ( bTracingEnabled )
  {
    v27 = (unsigned int *)*((_QWORD *)this + 4);
    v28 = *v27;
    v29 = *(_QWORD *)(*((_QWORD *)v27 + 1) + 8LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0pxqqt_EtwWriteTransfer(v29, &EventCreateProcessAllocation, v28);
  }
  return 0LL;
}
