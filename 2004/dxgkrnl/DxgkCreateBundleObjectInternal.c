/*
 * XREFs of DxgkCreateBundleObjectInternal @ 0x1C0277694
 * Callers:
 *     DxgkCreateBundleObject @ 0x1C0277630 (DxgkCreateBundleObject.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C028A110 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C011B44C (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C011BB28 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01657B4 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C02769FC (-CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C0276C6C (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 */

__int64 __fastcall DxgkCreateBundleObjectInternal(
        __int64 a1,
        KPROCESSOR_MODE a2,
        __int64 a3,
        __int64 a4,
        ULONG64 a5,
        __int64 a6)
{
  unsigned __int8 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  struct _KTHREAD **Current; // r14
  _QWORD *v12; // rax
  __int64 v13; // rdi
  _OWORD *v14; // rax
  __int64 v15; // rsi
  size_t v16; // r8
  const void *v17; // rdx
  size_t v18; // r8
  const void *v19; // rdx
  const void *v20; // rdi
  size_t v21; // r8
  ACCESS_MASK *v22; // r8
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // r12d
  __int64 v28; // rdx
  unsigned int EntryType; // edi
  unsigned int v30; // r14d
  __int64 v31; // rdx
  unsigned int v32; // edi
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // r9
  _QWORD *v40; // rax
  KPROCESSOR_MODE v41; // r14
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  _DWORD *v49; // rsi
  char *v50; // r14
  int v51; // r14d
  NTSTATUS inserted; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  BOOLEAN IsKernelHandle; // al
  __int64 v57; // rax
  _QWORD *v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  _QWORD *v61; // rax
  unsigned int v62; // esi
  unsigned int i; // eax
  PVOID v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v68; // rcx
  __int64 v69; // r8
  PHANDLE Handle; // [rsp+28h] [rbp-2D0h]
  PVOID Object; // [rsp+60h] [rbp-298h] BYREF
  int v73; // [rsp+68h] [rbp-290h] BYREF
  __int64 v74; // [rsp+70h] [rbp-288h]
  char v75; // [rsp+78h] [rbp-280h]
  struct _KTHREAD **v76; // [rsp+80h] [rbp-278h]
  void *Src[2]; // [rsp+90h] [rbp-268h]
  void *v78[2]; // [rsp+A0h] [rbp-258h]
  _BYTE DesiredAccess[48]; // [rsp+B0h] [rbp-248h] BYREF
  HANDLE v80; // [rsp+E0h] [rbp-218h] BYREF
  __int64 v81; // [rsp+E8h] [rbp-210h]
  _BYTE v82[24]; // [rsp+F0h] [rbp-208h] BYREF
  __int128 v83; // [rsp+108h] [rbp-1F0h]
  __int128 v84; // [rsp+118h] [rbp-1E0h]
  __int128 v85; // [rsp+128h] [rbp-1D0h]
  ACCESS_MASK v86[16]; // [rsp+140h] [rbp-1B8h] BYREF
  PVOID v87[16]; // [rsp+180h] [rbp-178h] BYREF
  _DWORD v88[16]; // [rsp+200h] [rbp-F8h] BYREF
  _QWORD v89[16]; // [rsp+240h] [rbp-B8h] BYREF

  v6 = a1;
  v81 = a6;
  v73 = -1;
  v74 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v75 = 1;
    v73 = 2157;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2157);
  }
  else
  {
    v75 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v73, 2157LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8, v7);
  v76 = Current;
  if ( !Current )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    LODWORD(v13) = -1073741811;
    v12[3] = -1073741811LL;
LABEL_112:
    WdLogEvent5_WdError(v12);
    goto LABEL_113;
  }
  if ( v6 == 1 )
  {
    v10 = MmUserProbeAddress;
    v14 = (_OWORD *)a5;
    if ( a5 >= MmUserProbeAddress )
      v14 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)Src = *v14;
    *(_OWORD *)v78 = v14[1];
    *(_OWORD *)DesiredAccess = v14[2];
    *(_OWORD *)&DesiredAccess[16] = v14[3];
    *(_OWORD *)&DesiredAccess[32] = v14[4];
  }
  else
  {
    *(_OWORD *)Src = *(_OWORD *)a5;
    *(_OWORD *)v78 = *(_OWORD *)(a5 + 16);
    *(_OWORD *)DesiredAccess = *(_OWORD *)(a5 + 32);
    *(_OWORD *)&DesiredAccess[16] = *(_OWORD *)(a5 + 48);
    *(_OWORD *)&DesiredAccess[32] = *(_OWORD *)(a5 + 64);
  }
  *(_QWORD *)&DesiredAccess[40] = 0LL;
  v15 = LODWORD(Src[0]);
  if ( (unsigned int)(LODWORD(Src[0]) - 1) > 0xF )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v12[3] = LODWORD(Src[0]);
    LODWORD(v13) = -1073741811;
    v12[4] = -1073741811LL;
    goto LABEL_112;
  }
  if ( ((-1 << SLOBYTE(Src[0])) & *(_DWORD *)&DesiredAccess[32]) != 0 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(LODWORD(Src[0]), v9);
    v12[3] = *(unsigned int *)&DesiredAccess[32];
    v12[4] = LODWORD(Src[0]);
    LODWORD(v13) = -1073741811;
    v12[5] = -1073741811LL;
    goto LABEL_112;
  }
  memset(v88, 0, sizeof(v88));
  memset(v89, 0, sizeof(v89));
  memset(v86, 0, sizeof(v86));
  if ( v6 == 1 )
  {
    v16 = 4LL * LODWORD(Src[0]);
    v17 = Src[1];
    if ( (char *)Src[1] + v16 < Src[1] || (char *)Src[1] + v16 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v88, v17, v16);
    v18 = 8LL * LODWORD(Src[0]);
    v19 = v78[0];
    if ( (char *)v78[0] + v18 < v78[0] || (char *)v78[0] + v18 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v89, v19, v18);
    v20 = v78[1];
    if ( v78[1] )
    {
      v21 = 4LL * LODWORD(Src[0]);
      if ( (char *)v78[1] + v21 < v78[1] || (char *)v78[1] + v21 > (void *)MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v86, v20, v21);
      v20 = v78[1];
    }
    LODWORD(v15) = Src[0];
  }
  else
  {
    memmove(v88, Src[1], 4LL * LODWORD(Src[0]));
    memmove(v89, v78[0], 8 * v15);
    v20 = v78[1];
    if ( v78[1] )
      memmove(v86, v78[1], 4 * v15);
    Current = v76;
  }
  if ( !v20 )
  {
    v22 = v86;
    v23 = (unsigned int)v15;
    if ( (_DWORD)v15 )
    {
      if ( ((unsigned __int8)v86 & 4) != 0 )
      {
        v86[0] = 0x10000000;
        v23 = (unsigned int)v15 - 1LL;
        if ( (unsigned int)v15 == 1LL )
          goto LABEL_38;
        v22 = &v86[1];
      }
      memset64(v22, 0x1000000010000000uLL, v23 >> 1);
      if ( (v23 & 1) != 0 )
        v22[v23 - 1] = 0x10000000;
    }
  }
LABEL_38:
  Object = 0LL;
  memset(v87, 0, sizeof(v87));
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v27 = 0;
  if ( !(_DWORD)v15 )
  {
LABEL_75:
    v41 = a2;
    LOBYTE(v26) = a2;
    LOBYTE(v24) = v6;
    v42 = ObCreateObject(v24, g_pDxgkSharedBundleObjectType, *(_QWORD *)DesiredAccess, v26, 0LL, 248, 0, 0, &Object);
    v13 = v42;
    if ( v42 < 0 )
    {
      v46 = WdLogNewEntry5_WdWarning(v44, v43, v45);
      *(_QWORD *)(v46 + 24) = v76;
      *(_QWORD *)(v46 + 32) = v13;
      WdLogEvent5_WdWarning(v46);
      if ( Object )
      {
        v48 = WdLogNewEntry5_WdAssertion(v47, v36);
        *(_QWORD *)(v48 + 24) = 2003LL;
        WdLogEvent5_WdAssertion(v48);
      }
      goto LABEL_97;
    }
    v49 = Object;
    memset(Object, 0, 0xF8uLL);
    v49[6] = Src[0];
    memmove(v49 + 8, v87, 8LL * LODWORD(Src[0]));
    memmove(v49 + 40, v86, 4LL * LODWORD(Src[0]));
    *(_OWORD *)v49 = *(_OWORD *)&DesiredAccess[12];
    *((_QWORD *)v49 + 2) = *(_QWORD *)&DesiredAccess[28];
    *((_BYTE *)v49 + 224) = a2;
    v50 = (char *)(v49 + 58);
    *((_QWORD *)v49 + 29) = 0LL;
    ExAcquirePushLockExclusiveEx(v49 + 58, 0LL);
    ObfReferenceObject(v49);
    LODWORD(v13) = ObInsertObject(Object, 0LL, *(ACCESS_MASK *)&DesiredAccess[8], 0, 0LL, (PHANDLE)&DesiredAccess[40]);
    if ( (int)v13 >= 0 && v78[1] )
    {
      v51 = 0;
      if ( v49[6] )
      {
        while ( 1 )
        {
          v80 = 0LL;
          ObfReferenceObject(*(PVOID *)&v49[2 * v51 + 8]);
          inserted = ObInsertObject(*(PVOID *)&v49[2 * v51 + 8], 0LL, v86[v51], 0, 0LL, &v80);
          v13 = inserted;
          if ( inserted < 0 )
            break;
          IsKernelHandle = ObIsKernelHandle(v80);
          ObCloseHandle(v80, IsKernelHandle == 0);
          if ( (unsigned int)++v51 >= v49[6] )
            goto LABEL_85;
        }
        v57 = WdLogNewEntry5_WdWarning(v54, v53, v55);
        *(_QWORD *)(v57 + 24) = *(_QWORD *)&v49[2 * v51 + 8];
        *(_QWORD *)(v57 + 32) = v13;
        WdLogEvent5_WdWarning(v57);
      }
LABEL_85:
      v50 = (char *)(v49 + 58);
      if ( (int)v13 < 0 )
        goto LABEL_89;
      *((_BYTE *)v49 + 242) = 1;
      *((_BYTE *)v49 + 240) = 1;
    }
    if ( (int)v13 >= 0 )
      *((_BYTE *)v49 + 243) = 1;
LABEL_89:
    ExReleasePushLockExclusiveEx(v50, 0LL);
    ObfDereferenceObject(v49);
    if ( (int)v13 < 0 )
    {
      if ( !*(_QWORD *)&DesiredAccess[40] )
      {
        v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, v58, v60);
        v61[3] = Object;
        v61[4] = v76;
        v61[5] = (int)v13;
        WdLogEvent5_WdWarning(v61);
      }
      Object = 0LL;
      memset(v87, 0, sizeof(v87));
      goto LABEL_74;
    }
    if ( v6 == 1 )
    {
      v58 = (_QWORD *)(a5 + 72);
      if ( a5 + 72 >= MmUserProbeAddress )
        v58 = (_QWORD *)MmUserProbeAddress;
      *v58 = *(_QWORD *)&DesiredAccess[40];
    }
    else
    {
      *(_QWORD *)(a5 + 72) = *(_QWORD *)&DesiredAccess[40];
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v73, (__int64)v58);
    if ( v75 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v65, &EventProfilerExit, v66, v73);
    return 0LL;
  }
  while ( 1 )
  {
    v28 = v81;
    if ( v81 && *(_QWORD *)(v81 + 8LL * v27) )
    {
      EntryType = v88[v27];
      v30 = EntryType;
    }
    else
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v82, Current);
      v30 = v88[v27];
      v31 = (v30 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v31 < *((_DWORD *)v76 + 64)
        && (v32 = *((_DWORD *)v76[30] + 4 * (unsigned int)v31 + 2), v88[v27] >> 30 == ((v32 >> 5) & 3))
        && (v32 & 0x2000) == 0
        && (v32 & 0x1F) != 0 )
      {
        EntryType = HMGRTABLE::GetEntryType((__int64)(v76 + 30), v31);
      }
      else
      {
        EntryType = 0;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v82);
      v28 = v81;
    }
    v33 = EntryType - 4;
    if ( EntryType == 4 )
      break;
    v34 = EntryType - 8;
    if ( EntryType != 8 )
    {
      v35 = EntryType - 9;
      if ( EntryType == 9 )
      {
        LODWORD(v35) = v6;
        LODWORD(v13) = CreateSharedKeyedMutexNtObject(v35, v28, v30, v26, v89[v27], (__int64)Handle, &v87[v27]);
        if ( (int)v13 < 0 )
        {
          if ( !v87[v27] )
            goto LABEL_74;
          v37 = WdLogNewEntry5_WdAssertion(v24, v36);
          *(_QWORD *)(v37 + 24) = 1929LL;
          goto LABEL_73;
        }
        goto LABEL_68;
      }
      v34 = EntryType - 11;
      if ( EntryType != 11 )
      {
        if ( EntryType != 14 )
        {
          v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v28, v25);
          v40[3] = v30;
          v40[4] = (int)EntryType;
          LODWORD(v13) = -1073741811;
          v40[5] = -1073741811LL;
          WdLogEvent5_WdWarning(v40);
          goto LABEL_74;
        }
        LOBYTE(v34) = v6;
        LODWORD(v13) = CreateSharedProtectedSessionNtObject(v34, 14LL, v30, v26, v89[v27], 1, &v87[v27]);
        if ( (int)v13 < 0 )
        {
          if ( !v87[v27] )
            goto LABEL_74;
          v37 = WdLogNewEntry5_WdAssertion(v24, v36);
          *(_QWORD *)(v37 + 24) = 1968LL;
          goto LABEL_73;
        }
        goto LABEL_68;
      }
    }
    v38 = 0LL;
    if ( v28 )
      v38 = *(_QWORD *)(v28 + 8LL * v27);
    LOBYTE(v34) = v6;
    LODWORD(v13) = CreateSharedSyncNtObject(v34, EntryType, v30, v38, v89[v27], 1, &v87[v27]);
    if ( (int)v13 < 0 )
    {
      if ( !v87[v27] )
        goto LABEL_74;
      v37 = WdLogNewEntry5_WdAssertion(v24, v36);
      *(_QWORD *)(v37 + 24) = 1949LL;
      goto LABEL_73;
    }
LABEL_68:
    if ( ++v27 >= LODWORD(Src[0]) )
      goto LABEL_75;
    Current = v76;
  }
  v39 = 0LL;
  if ( v28 )
    v39 = *(_QWORD *)(v28 + 8LL * v27);
  LOBYTE(v33) = v6;
  LODWORD(v13) = CreateSharedResourceNtObject(v33, v28, v30, v39, v89[v27], 1, &v87[v27]);
  if ( (int)v13 >= 0 )
    goto LABEL_68;
  if ( !v87[v27] )
    goto LABEL_74;
  v37 = WdLogNewEntry5_WdAssertion(v24, v36);
  *(_QWORD *)(v37 + 24) = 1910LL;
LABEL_73:
  WdLogEvent5_WdAssertion(v37);
LABEL_74:
  v41 = a2;
LABEL_97:
  if ( *(_QWORD *)&DesiredAccess[40] )
  {
    ObCloseHandle(*(HANDLE *)&DesiredAccess[40], v41);
    *(_QWORD *)&DesiredAccess[40] = 0LL;
  }
  else if ( Object )
  {
    ObfDereferenceObject(Object);
    Object = 0LL;
  }
  else
  {
    v62 = 0;
    for ( i = (unsigned int)Src[0]; v62 < i; ++v62 )
    {
      v64 = v87[v62];
      if ( v64 )
      {
        ObfDereferenceObject(v64);
        v87[v62] = 0LL;
        i = (unsigned int)Src[0];
      }
    }
  }
LABEL_113:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v73, v36);
  if ( v75 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v68, &EventProfilerExit, v69, v73);
  }
  return (unsigned int)v13;
}
