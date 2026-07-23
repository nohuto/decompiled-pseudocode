/*
 * XREFs of IoFillTriageDumpBuffer @ 0x140501D40
 * Callers:
 *     IoWriteCrashDump @ 0x140502C50 (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x140504B8C (IopWriteCapsuleTriageDumpToFirmware.c)
 *     DbgkpTriageDumpFillHeaders @ 0x140889B60 (DbgkpTriageDumpFillHeaders.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     KiIsAddressRangeValid @ 0x1403CA40C (KiIsAddressRangeValid.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     IoGetLoadedDriverInfo @ 0x1405023DC (IoGetLoadedDriverInfo.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x140503AA4 (IopAddRunTimeTriageDataBlocks.c)
 *     IopFillTriageDumpDataBlocks @ 0x140503F20 (IopFillTriageDumpDataBlocks.c)
 *     IopGetMaxValidMemorySize @ 0x1405040CC (IopGetMaxValidMemorySize.c)
 *     IopSizeTriageDumpDataBlocks @ 0x1405046E4 (IopSizeTriageDumpDataBlocks.c)
 *     IopWriteDriverList @ 0x140504D6C (IopWriteDriverList.c)
 *     KdCopyDataBlock @ 0x140510988 (KdCopyDataBlock.c)
 *     MmWriteTriageInformation @ 0x140538FFC (MmWriteTriageInformation.c)
 *     MmWriteUnloadedDriverInformation @ 0x140539118 (MmWriteUnloadedDriverInformation.c)
 */

__int64 __fastcall IoFillTriageDumpBuffer(
        unsigned int a1,
        __int64 *a2,
        char a3,
        int a4,
        int *a5,
        __int64 a6,
        void *Src,
        int LoadedDriverInfo,
        int a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        _DWORD *a13)
{
  __int16 v13; // r13
  char v14; // r14
  int v17; // edi
  int v18; // esi
  __int64 result; // rax
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // r15
  unsigned __int64 v23; // rcx
  unsigned int v24; // esi
  int v25; // ebp
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // r14
  char *DpcStack; // rax
  char *v30; // r13
  unsigned __int64 v31; // rax
  unsigned int v32; // r14d
  int MaxValidMemorySize; // eax
  __int64 *v34; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v36; // rcx
  unsigned int v37; // eax
  char *v38; // rcx
  int v39; // edx
  int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r12
  unsigned int v46; // r14d
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  void *v51; // r13
  __int64 v52; // rax
  __int64 v53; // rcx
  size_t v54; // r8
  __int64 v55; // rax
  int v56; // esi
  __int64 v57; // rax
  int v58[18]; // [rsp+30h] [rbp-48h] BYREF
  int v59; // [rsp+80h] [rbp+8h] BYREF
  char v60; // [rsp+90h] [rbp+18h]
  int v61; // [rsp+98h] [rbp+20h]

  v61 = a4;
  v60 = a3;
  v58[0] = 0;
  v13 = a4;
  v59 = 0;
  v14 = a3;
  LoadedDriverInfo = 0;
  v17 = a9;
  v18 = CmNtCSDVersion;
  if ( a13 )
    *a13 = 0;
  if ( a5 )
    *a5 = 0;
  if ( a1 < 0x84 )
    return 3221225495LL;
  memset(a2, 0, 0x80uLL);
  v20 = a6;
  v21 = a1 + 0x2000;
  *((_DWORD *)a2 + 1) = a1 + 0x2000;
  v22 = a1 - 4;
  v23 = (unsigned int)v22;
  *((_DWORD *)a2 + 2) = v21 - 4;
  *(_DWORD *)((char *)a2 + v22) = 0;
  *((_DWORD *)a2 + 16) = 0;
  *(_DWORD *)a2 = v18;
  *((_DWORD *)a2 + 3) = 840;
  v24 = 8320;
  *((_DWORD *)a2 + 4) = 3840;
  *((_DWORD *)a2 + 17) = v17;
  v25 = (v20 != 0) + 130;
  if ( (v13 & 0x100) != 0 )
  {
    if ( (unsigned int)v22 <= 0x20D0 )
    {
      v17 |= 0x100u;
      *((_DWORD *)a2 + 17) = v17;
    }
    else
    {
      *((_DWORD *)a2 + 5) = 8320;
      v25 |= 0x100u;
      v24 = 8400;
    }
  }
  if ( (v13 & 4) != 0 )
  {
    if ( v24 + 44800 >= (unsigned int)v22 )
    {
      v17 |= 0x100u;
      *((_DWORD *)a2 + 17) = v17;
    }
    else
    {
      *((_DWORD *)a2 + 7) = v24;
      v25 |= 4u;
      v24 += 44800;
    }
  }
  if ( (v13 & 8) != 0 )
  {
    if ( v24 + 2624 >= (unsigned int)v22 )
    {
      v17 |= 0x100u;
      *((_DWORD *)a2 + 17) = v17;
    }
    else
    {
      *((_DWORD *)a2 + 8) = v24;
      v25 |= 8u;
      v24 += 2624;
    }
  }
  if ( (v13 & 0x10) != 0 )
  {
    if ( v24 + 2200 >= (unsigned int)v22 )
    {
      *((_DWORD *)a2 + 17) = v17 | 0x100;
    }
    else
    {
      *((_DWORD *)a2 + 9) = v24;
      v25 |= 0x10u;
      v24 += 2200;
    }
  }
  if ( (v13 & 0x20) != 0 )
  {
    if ( (*((_DWORD *)Src + 30) & 0x20000) != 0 )
    {
      v26 = *(_QWORD *)(v20 + 152);
      v27 = *((_QWORD *)Src + 6);
      v28 = *((_QWORD *)Src + 7);
      if ( v27 > v26 || v26 >= v28 )
      {
        v26 = *((_QWORD *)Src + 6);
        if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && Src != KeGetCurrentPrcb()->IdleThread )
        {
          DpcStack = (char *)KeGetPcr()->Prcb.DpcStack;
          v30 = DpcStack + 80;
          if ( KiIsAddressRangeValid((__int64)DpcStack, 80LL) )
          {
            v31 = *((_QWORD *)v30 - 2);
            v13 = v61;
            if ( v27 <= v31 && v31 < v28 )
              v26 = v31;
          }
          else
          {
            v13 = v61;
          }
        }
      }
      if ( v28 - v26 >= 0x7FFF )
        v32 = 0x7FFF;
      else
        v32 = v28 - v26;
      MaxValidMemorySize = IopGetMaxValidMemorySize(v26, v32);
      v14 = v60;
      if ( MaxValidMemorySize )
      {
        if ( v24 + MaxValidMemorySize >= (unsigned int)v22 )
        {
          *((_DWORD *)a2 + 17) |= 0x100u;
        }
        else
        {
          *((_DWORD *)a2 + 10) = v24;
          v24 = (v24 + MaxValidMemorySize + 7) & 0xFFFFFFF8;
          *((_DWORD *)a2 + 11) = MaxValidMemorySize;
          v25 |= 0x20u;
          a2[9] = v26;
        }
      }
    }
    v23 = (unsigned int)v22;
  }
  if ( (v13 & 0x400) != 0 )
  {
    if ( (unsigned __int64)v24 + 896 >= v23 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 28) = v24;
      v24 = (v24 + 903) & 0xFFFFFFF8;
      *((_DWORD *)a2 + 29) = 896;
      v25 |= 0x400u;
    }
  }
  v34 = a2 - 1024;
  if ( !v14 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  }
  v36 = MmUnloadedDrivers != 0LL ? 0xAF0 : 0;
  v37 = v24 + v36 + 8;
  if ( v37 >= (unsigned int)v22 )
  {
    *((_DWORD *)a2 + 17) |= 0x100u;
  }
  else
  {
    v25 |= 0x40u;
    *((_DWORD *)a2 + 6) = v24;
    v38 = (char *)v34 + v24;
    v24 = v37;
    MmWriteUnloadedDriverInformation(v38);
  }
  if ( (v13 & 0x40) != 0 )
  {
    LOBYTE(v36) = v14;
    LoadedDriverInfo = IoGetLoadedDriverInfo(v36, &v59, v58);
    if ( LoadedDriverInfo >= 0 )
    {
      v39 = v59;
      v40 = 144 * v59;
      if ( 144 * v59 )
      {
        if ( v24 + v40 >= (unsigned int)v22 )
        {
          *((_DWORD *)a2 + 17) |= 0x100u;
        }
        else
        {
          *((_DWORD *)a2 + 12) = v24;
          v25 |= 0x40u;
          v24 += v40;
          *((_DWORD *)a2 + 13) = v39;
        }
      }
    }
  }
  v41 = (v58[0] + 7 + 6 * v59) & 0xFFFFFFF8;
  if ( ((v58[0] + 7 + 6 * v59) & 0xFFFFFFF8) != 0 )
  {
    if ( v24 + (unsigned int)v41 >= (unsigned int)v22 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 14) = v24;
      v24 += v41;
      *((_DWORD *)a2 + 15) = v41;
    }
  }
  if ( *((_DWORD *)a2 + 12) )
  {
    if ( *((_DWORD *)a2 + 14) )
    {
      LOBYTE(v41) = v14;
      LoadedDriverInfo = IopWriteDriverList(a2 - 1024, v41);
      if ( LoadedDriverInfo < 0 )
        *((_DWORD *)a2 + 12) = 0;
    }
  }
  if ( !v14 )
  {
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v42, v43, v44);
  }
  v45 = a11;
  v46 = a10;
  if ( (v13 & 0x800) != 0 )
  {
    IopAddRunTimeTriageDataBlocks(a10, a11, a12, a6, a2[9], a2[9] + *((unsigned int *)a2 + 11));
    v24 = (IopSizeTriageDumpDataBlocks((_DWORD)a2, v46, v45, v24, v22) + 7) & 0xFFFFFFF8;
    if ( *((_DWORD *)a2 + 31) )
      v25 |= 0x800u;
  }
  v47 = *((unsigned int *)a2 + 5);
  if ( (_DWORD)v47 )
    MmWriteTriageInformation((char *)v34 + v47);
  v48 = *((unsigned int *)a2 + 7);
  v49 = (unsigned int)v22;
  if ( (_DWORD)v48 && v48 + 44800 <= (unsigned __int64)(unsigned int)v22 )
  {
    memmove((char *)v34 + (unsigned int)v48, KeGetCurrentPrcb(), 0xAF00uLL);
    v49 = (unsigned int)v22;
  }
  v50 = *((unsigned int *)a2 + 8);
  v51 = Src;
  if ( (_DWORD)v50 && v50 + 2624 <= v49 )
    memmove((char *)v34 + (unsigned int)v50, *((const void **)Src + 23), 0xA40uLL);
  v52 = *((unsigned int *)a2 + 9);
  if ( (_DWORD)v52 )
  {
    v49 = (unsigned int)v22;
    if ( v52 + 2200 <= (unsigned __int64)(unsigned int)v22 )
      memmove((char *)v34 + (unsigned int)v52, v51, 0x898uLL);
  }
  v53 = *((unsigned int *)a2 + 10);
  if ( (_DWORD)v53 )
  {
    v54 = *((unsigned int *)a2 + 11);
    v49 = a2[9];
    if ( (int)v53 + (int)v54 <= (unsigned int)v22 )
      memmove((char *)v34 + v53, (const void *)v49, v54);
  }
  v55 = *((unsigned int *)a2 + 28);
  if ( (_DWORD)v55 && v55 + 896 <= (unsigned __int64)(unsigned int)v22 )
    KdCopyDataBlock((char *)v34 + (unsigned int)v55, v49);
  if ( v46 )
    IopFillTriageDumpDataBlocks(a2, v46, v45, a2 - 1024);
  if ( (_DWORD)v22 != 253948 || a13 )
  {
    v56 = v24 + 4;
    if ( a13 )
      *a13 = v56 - 0x2000;
  }
  else
  {
    v56 = 0x40000;
  }
  if ( a5 )
    *a5 = v25;
  v57 = (unsigned int)(v56 - 4);
  *((_DWORD *)a2 + 1) = v56;
  *((_DWORD *)a2 + 2) = v57;
  if ( v57 - 0x2000 > (unsigned __int64)(unsigned int)v22 )
    return 3221225626LL;
  result = (unsigned int)LoadedDriverInfo;
  *(_DWORD *)((char *)a2 + (unsigned int)(v56 - 4) - 0x2000) = 1145524820;
  return result;
}
