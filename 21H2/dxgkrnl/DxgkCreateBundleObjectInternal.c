/*
 * XREFs of DxgkCreateBundleObjectInternal @ 0x1C031C0B0
 * Callers:
 *     DxgkCreateBundleObject @ 0x1C031C020 (DxgkCreateBundleObject.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C033C1B0 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C01A619C (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01D9694 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01E03F8 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C031B3B0 (-CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C031B698 (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 */

__int64 __fastcall DxgkCreateBundleObjectInternal(
        __int64 a1,
        KPROCESSOR_MODE a2,
        __int64 a3,
        __int64 a4,
        ULONG64 a5,
        __int64 a6)
{
  char v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGPROCESS *Current; // r14
  int SharedResourceNtObject; // edi
  __int64 v13; // rcx
  __int64 v14; // r8
  bool v15; // sf
  _OWORD *v16; // rax
  __int64 v17; // rsi
  size_t v18; // r8
  const void *v19; // rdx
  size_t v20; // r8
  const void *v21; // rdx
  const void *v22; // rdi
  size_t v23; // r8
  ACCESS_MASK *v24; // r8
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r9
  unsigned int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // rdx
  unsigned int v31; // edi
  unsigned int EntryType; // r14d
  unsigned int v33; // edx
  unsigned int v34; // r8d
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // r9
  __int64 v42; // rdx
  KPROCESSOR_MODE v43; // r14
  int v44; // eax
  _DWORD *v45; // rsi
  char *v46; // r14
  int v47; // r14d
  NTSTATUS inserted; // eax
  BOOLEAN IsKernelHandle; // al
  _QWORD *v50; // rdx
  unsigned int v51; // esi
  unsigned int i; // eax
  PVOID v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // r8
  PHANDLE Handle; // [rsp+28h] [rbp-2C0h]
  char v59; // [rsp+51h] [rbp-297h]
  PVOID Object; // [rsp+60h] [rbp-288h] BYREF
  int v61; // [rsp+68h] [rbp-280h] BYREF
  __int64 v62; // [rsp+70h] [rbp-278h]
  char v63; // [rsp+78h] [rbp-270h]
  HANDLE v64; // [rsp+80h] [rbp-268h] BYREF
  struct DXGPROCESS *v65; // [rsp+88h] [rbp-260h]
  void *Src[2]; // [rsp+90h] [rbp-258h]
  void *v67[2]; // [rsp+A0h] [rbp-248h]
  _BYTE DesiredAccess[48]; // [rsp+B0h] [rbp-238h] BYREF
  __int64 v69; // [rsp+E0h] [rbp-208h]
  _BYTE v70[24]; // [rsp+E8h] [rbp-200h] BYREF
  __int128 v71; // [rsp+100h] [rbp-1E8h]
  __int128 v72; // [rsp+110h] [rbp-1D8h]
  __int128 v73; // [rsp+120h] [rbp-1C8h]
  ACCESS_MASK v74[16]; // [rsp+130h] [rbp-1B8h] BYREF
  PVOID v75[16]; // [rsp+170h] [rbp-178h] BYREF
  _DWORD v76[16]; // [rsp+1F0h] [rbp-F8h] BYREF
  _QWORD v77[16]; // [rsp+230h] [rbp-B8h] BYREF

  v6 = a1;
  v59 = a1;
  v69 = a6;
  v61 = -1;
  v62 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v63 = 1;
    v61 = 2157;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2157);
  }
  else
  {
    v63 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v61, 2157);
  Current = DXGPROCESS::GetCurrent(v8, v7, v9, v10);
  v65 = Current;
  if ( !Current )
  {
    SharedResourceNtObject = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_7;
  }
  if ( v6 == 1 )
  {
    v16 = (_OWORD *)a5;
    if ( a5 >= MmUserProbeAddress )
      v16 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)Src = *v16;
    *(_OWORD *)v67 = v16[1];
    *(_OWORD *)DesiredAccess = v16[2];
    *(_OWORD *)&DesiredAccess[16] = v16[3];
    *(_OWORD *)&DesiredAccess[32] = v16[4];
  }
  else
  {
    *(_OWORD *)Src = *(_OWORD *)a5;
    *(_OWORD *)v67 = *(_OWORD *)(a5 + 16);
    *(_OWORD *)DesiredAccess = *(_OWORD *)(a5 + 32);
    *(_OWORD *)&DesiredAccess[16] = *(_OWORD *)(a5 + 48);
    *(_OWORD *)&DesiredAccess[32] = *(_OWORD *)(a5 + 64);
  }
  *(_QWORD *)&DesiredAccess[40] = 0LL;
  v17 = LODWORD(Src[0]);
  if ( (unsigned int)(LODWORD(Src[0]) - 1) <= 0xF )
  {
    if ( ((-1 << SLOBYTE(Src[0])) & *(_DWORD *)&DesiredAccess[32]) != 0 )
    {
      SharedResourceNtObject = -1073741811;
      WdLogSingleEntry3(2LL, *(unsigned int *)&DesiredAccess[32], LODWORD(Src[0]), -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"AccessInheritMask (0x%I64x) is invalid for Input handle count (0x%I64x). Returning 0x%I64x",
        *(unsigned int *)&DesiredAccess[32],
        LODWORD(Src[0]),
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_7;
    }
    memset(v76, 0, sizeof(v76));
    memset(v77, 0, sizeof(v77));
    memset(v74, 0, sizeof(v74));
    if ( v6 == 1 )
    {
      v18 = 4LL * LODWORD(Src[0]);
      v19 = Src[1];
      if ( (char *)Src[1] + v18 < Src[1] || (char *)Src[1] + v18 > (void *)MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v76, v19, v18);
      v20 = 8LL * LODWORD(Src[0]);
      v21 = v67[0];
      if ( (char *)v67[0] + v20 < v67[0] || (char *)v67[0] + v20 > (void *)MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v77, v21, v20);
      v22 = v67[1];
      if ( v67[1] )
      {
        v23 = 4LL * LODWORD(Src[0]);
        if ( (char *)v67[1] + v23 < v67[1] || (char *)v67[1] + v23 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v74, v22, v23);
        v22 = v67[1];
      }
      LODWORD(v17) = Src[0];
    }
    else
    {
      memmove(v76, Src[1], 4LL * LODWORD(Src[0]));
      memmove(v77, v67[0], 8 * v17);
      v22 = v67[1];
      if ( v67[1] )
        memmove(v74, v67[1], 4 * v17);
      Current = v65;
    }
    if ( !v22 )
    {
      v24 = v74;
      v25 = (unsigned int)v17;
      if ( (_DWORD)v17 )
      {
        if ( ((unsigned __int8)v74 & 4) != 0 )
        {
          v74[0] = 0x10000000;
          v25 = (unsigned int)v17 - 1LL;
          if ( (unsigned int)v17 == 1LL )
            goto LABEL_40;
          v24 = &v74[1];
        }
        memset64(v24, 0x1000000010000000uLL, v25 >> 1);
        if ( (v25 & 1) != 0 )
          v24[v25 - 1] = 0x10000000;
      }
    }
LABEL_40:
    Object = 0LL;
    memset(v75, 0, sizeof(v75));
    v71 = 0LL;
    v72 = 0LL;
    v73 = 0LL;
    v28 = 0;
    LODWORD(v64) = 0;
    if ( (_DWORD)v17 )
    {
      while ( 1 )
      {
        v29 = v28;
        v30 = v69;
        if ( v69 && *(_QWORD *)(v69 + 8LL * v28) )
        {
          v31 = v76[v28];
          EntryType = v31;
        }
        else
        {
          DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v70, Current);
          v31 = v76[v29];
          v33 = (v31 >> 6) & 0xFFFFFF;
          if ( v33 < *((_DWORD *)Current + 74)
            && (v34 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v33 + 8), v76[v29] >> 30 == ((v34 >> 5) & 3))
            && (v34 & 0x2000) == 0
            && (v34 & 0x1F) != 0 )
          {
            EntryType = HMGRTABLE::GetEntryType((__int64)Current + 280, v33);
          }
          else
          {
            EntryType = 0;
          }
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70);
          v30 = v69;
        }
        if ( EntryType == 4 )
        {
          v40 = v77[v29];
          v41 = 0LL;
          if ( v30 )
            v41 = *(_QWORD *)(v30 + 8 * v29);
          LOBYTE(v40) = v6;
          SharedResourceNtObject = CreateSharedResourceNtObject(v40, v30, v31, v41, v77[v29], 1, &v75[v29]);
          if ( SharedResourceNtObject < 0 )
          {
            if ( !v75[v29] )
              goto LABEL_76;
            v36 = 2144LL;
            WdLogSingleEntry1(1LL, 2144LL);
LABEL_75:
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Objects[i] == NULL", v36, 0LL, 0LL, 0LL, 0LL);
LABEL_76:
            v43 = a2;
LABEL_100:
            if ( *(_QWORD *)&DesiredAccess[40] )
            {
              ObCloseHandle(*(HANDLE *)&DesiredAccess[40], v43);
              *(_QWORD *)&DesiredAccess[40] = 0LL;
            }
            else if ( Object )
            {
              ObfDereferenceObject(Object);
              Object = 0LL;
            }
            else
            {
              v51 = 0;
              for ( i = (unsigned int)Src[0]; v51 < i; ++v51 )
              {
                v53 = v75[v51];
                if ( v53 )
                {
                  ObfDereferenceObject(v53);
                  v75[v51] = 0LL;
                  i = (unsigned int)Src[0];
                }
              }
            }
LABEL_7:
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61);
            if ( v63 )
            {
              v15 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_116:
              if ( v15 )
                McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v61);
            }
            return (unsigned int)SharedResourceNtObject;
          }
        }
        else
        {
          if ( EntryType != 8 )
          {
            if ( EntryType == 9 )
            {
              v37 = v77[v29];
              LOBYTE(v37) = v6;
              SharedResourceNtObject = CreateSharedKeyedMutexNtObject(
                                         v37,
                                         v30,
                                         v31,
                                         v27,
                                         v77[v29],
                                         (__int64)Handle,
                                         &v75[v29]);
              if ( SharedResourceNtObject < 0 )
              {
                if ( !v75[v29] )
                  goto LABEL_76;
                v36 = 2163LL;
                WdLogSingleEntry1(1LL, 2163LL);
                goto LABEL_75;
              }
              goto LABEL_70;
            }
            if ( EntryType != 11 )
            {
              if ( EntryType != 14 )
              {
                v42 = v31;
                SharedResourceNtObject = -1073741811;
                WdLogSingleEntry3(3LL, v42, (int)EntryType, -1073741811LL);
                goto LABEL_76;
              }
              v35 = v77[v29];
              LOBYTE(v35) = v6;
              SharedResourceNtObject = CreateSharedProtectedSessionNtObject(v35, 14LL, v31, v27, v77[v29], 1, &v75[v29]);
              if ( SharedResourceNtObject < 0 )
              {
                if ( !v75[v29] )
                  goto LABEL_76;
                v36 = 2202LL;
                WdLogSingleEntry1(1LL, 2202LL);
                goto LABEL_75;
              }
              goto LABEL_70;
            }
          }
          v38 = v77[v29];
          v39 = 0LL;
          if ( v30 )
            v39 = *(_QWORD *)(v30 + 8 * v29);
          LOBYTE(v38) = v6;
          SharedResourceNtObject = CreateSharedSyncNtObject(v38, EntryType, v31, v39, v77[v29], 1, &v75[v29]);
          if ( SharedResourceNtObject < 0 )
          {
            if ( !v75[v29] )
              goto LABEL_76;
            v36 = 2183LL;
            WdLogSingleEntry1(1LL, 2183LL);
            goto LABEL_75;
          }
        }
LABEL_70:
        v28 = (_DWORD)v64 + 1;
        LODWORD(v64) = v28;
        if ( v28 >= LODWORD(Src[0]) )
          break;
        Current = v65;
      }
    }
    v43 = a2;
    LOBYTE(v27) = a2;
    LOBYTE(v26) = v6;
    v44 = ObCreateObject(v26, g_pDxgkSharedBundleObjectType, *(_QWORD *)DesiredAccess, v27, 0LL, 248, 0, 0, &Object);
    SharedResourceNtObject = v44;
    if ( v44 < 0 )
    {
      WdLogSingleEntry2(3LL, v65, v44);
      if ( Object )
      {
        WdLogSingleEntry1(1LL, 2237LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pBundleObject == NULL", 2237LL, 0LL, 0LL, 0LL, 0LL);
      }
      goto LABEL_100;
    }
    v45 = Object;
    memset(Object, 0, 0xF8uLL);
    v45[6] = Src[0];
    memmove(v45 + 8, v75, 8LL * LODWORD(Src[0]));
    memmove(v45 + 40, v74, 4LL * LODWORD(Src[0]));
    *(_OWORD *)v45 = *(_OWORD *)&DesiredAccess[12];
    *((_QWORD *)v45 + 2) = *(_QWORD *)&DesiredAccess[28];
    *((_BYTE *)v45 + 224) = a2;
    v46 = (char *)(v45 + 58);
    *((_QWORD *)v45 + 29) = 0LL;
    ExAcquirePushLockExclusiveEx(v45 + 58, 0LL);
    ObfReferenceObject(v45);
    SharedResourceNtObject = ObInsertObject(
                               Object,
                               0LL,
                               *(ACCESS_MASK *)&DesiredAccess[8],
                               0,
                               0LL,
                               (PHANDLE)&DesiredAccess[40]);
    if ( SharedResourceNtObject >= 0 && v67[1] )
    {
      v47 = 0;
      if ( v45[6] )
      {
        while ( 1 )
        {
          v64 = 0LL;
          ObfReferenceObject(*(PVOID *)&v45[2 * v47 + 8]);
          inserted = ObInsertObject(*(PVOID *)&v45[2 * v47 + 8], 0LL, v74[v47], 0, 0LL, &v64);
          SharedResourceNtObject = inserted;
          if ( inserted < 0 )
            break;
          IsKernelHandle = ObIsKernelHandle(v64);
          ObCloseHandle(v64, IsKernelHandle == 0);
          if ( (unsigned int)++v47 >= v45[6] )
            goto LABEL_87;
        }
        WdLogSingleEntry2(3LL, *(_QWORD *)&v45[2 * v47 + 8], inserted);
LABEL_87:
        v6 = v59;
      }
      v46 = (char *)(v45 + 58);
      if ( SharedResourceNtObject < 0 )
        goto LABEL_92;
      *((_BYTE *)v45 + 242) = 1;
      *((_BYTE *)v45 + 240) = 1;
    }
    if ( SharedResourceNtObject >= 0 )
      *((_BYTE *)v45 + 243) = 1;
LABEL_92:
    ExReleasePushLockExclusiveEx(v46, 0LL);
    ObfDereferenceObject(v45);
    if ( SharedResourceNtObject < 0 )
    {
      if ( !*(_QWORD *)&DesiredAccess[40] )
        WdLogSingleEntry3(3LL, Object, v65, SharedResourceNtObject);
      Object = 0LL;
      memset(v75, 0, sizeof(v75));
      goto LABEL_76;
    }
    if ( v6 == 1 )
    {
      v50 = (_QWORD *)(a5 + 72);
      if ( a5 + 72 >= MmUserProbeAddress )
        v50 = (_QWORD *)MmUserProbeAddress;
      *v50 = *(_QWORD *)&DesiredAccess[40];
    }
    else
    {
      *(_QWORD *)(a5 + 72) = *(_QWORD *)&DesiredAccess[40];
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61);
    if ( v63 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v54, &EventProfilerExit, v55, v61);
    return 0LL;
  }
  SharedResourceNtObject = -1073741811;
  WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Input handle count (0x%I64x) is out of range. Returning 0x%I64x",
    LODWORD(Src[0]),
    -1073741811LL,
    0LL,
    0LL,
    0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61);
  if ( v63 )
  {
    LOBYTE(v13) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v15 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_116;
  }
  return (unsigned int)SharedResourceNtObject;
}
