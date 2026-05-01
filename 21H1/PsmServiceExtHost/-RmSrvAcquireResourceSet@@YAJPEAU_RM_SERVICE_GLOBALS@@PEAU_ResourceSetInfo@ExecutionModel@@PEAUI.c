/*
 * XREFs of ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_K5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180012FA0
 * Callers:
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z @ 0x180012600 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z.c)
 *     RmCoreRpcSrvAcquireResourceSet @ 0x1800334D0 (RmCoreRpcSrvAcquireResourceSet.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x180062F70 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGP.c)
 * Callees:
 *     CempListEntryIsNull @ 0x180008768 (CempListEntryIsNull.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180012C70 (-RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x180012D38 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x180014660 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026310 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180045CCC (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     memcpy_0 @ 0x180046502 (memcpy_0.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperArray@$03@@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperArray@$03@@AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x180067C18 (--$Write@U-$_tlgWrapperArray@$03@@U-$_tlgWrapSid@U_SID@@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPro.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U2@U1@U1@U2@U2@U?$_tlgWrapperByVal@$00@@U2@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@343344AEBU?$_tlgWrapperByVal@$00@@4333@Z @ 0x18006839C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@U2@U1@U1@U2@U2@U-.c)
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800705E0 (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 */

__int64 __fastcall RmSrvAcquireResourceSet(
        struct _RM_SERVICE_GLOBALS *a1,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        wchar_t *a5,
        PSID Sid,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned __int64 a10,
        struct _RM_ACTIVATOR *a11,
        bool *a12)
{
  int v13; // esi
  unsigned int v15; // r9d
  signed __int64 *v16; // rbx
  int v17; // eax
  struct ExecutionModel::ResourceSet *v18; // r15
  __int128 v19; // xmm0
  unsigned __int64 v20; // r13
  ULONG v21; // eax
  __int16 v22; // ax
  BOOL v23; // eax
  signed int PackageFullNameFromKey; // edi
  DWORD v25; // edi
  _QWORD *Value; // rbx
  __int64 v27; // rax
  unsigned int v28; // edx
  __int64 v29; // r11
  __int64 v30; // r10
  unsigned int v31; // r9d
  void *v32; // rbx
  int v33; // edi
  _QWORD *v34; // rax
  int v35; // ecx
  signed __int64 v36; // rax
  signed __int64 v37; // rdx
  bool v38; // zf
  signed __int64 v39; // rtt
  bool *v41; // r8
  bool v42; // bl
  DWORD v43; // ebx
  int PartitionHandlesForPackage; // edi
  volatile signed __int64 *v45; // rbx
  __int64 v46; // r14
  signed __int64 v47; // rax
  bool v48; // cc
  signed __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // [rsp+94h] [rbp-7Ch]
  PVOID P; // [rsp+A0h] [rbp-70h] BYREF
  int v55; // [rsp+A8h] [rbp-68h]
  HANDLE v56; // [rsp+B0h] [rbp-60h] BYREF
  struct ExecutionModel::ResourceSet *v57; // [rsp+B8h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-50h] BYREF
  int v59; // [rsp+C8h] [rbp-48h] BYREF
  _BYTE v60[4]; // [rsp+CCh] [rbp-44h] BYREF
  unsigned int v61; // [rsp+D0h] [rbp-40h]
  int v62; // [rsp+D4h] [rbp-3Ch]
  int v63; // [rsp+D8h] [rbp-38h]
  int v64; // [rsp+DCh] [rbp-34h]
  BOOL v65; // [rsp+E0h] [rbp-30h]
  unsigned int v66; // [rsp+E4h] [rbp-2Ch]
  bool *v67; // [rsp+E8h] [rbp-28h]
  wchar_t *Source; // [rsp+F0h] [rbp-20h]
  struct ExecutionModel::IResourceSetCallback *v69; // [rsp+F8h] [rbp-18h]
  void *v70; // [rsp+100h] [rbp-10h]
  _QWORD v71[7]; // [rsp+108h] [rbp-8h] BYREF
  char *v72; // [rsp+140h] [rbp+30h] BYREF
  __int16 v73; // [rsp+148h] [rbp+38h]
  _OWORD v74[4]; // [rsp+150h] [rbp+40h] BYREF
  int v75; // [rsp+190h] [rbp+80h]
  _BYTE v76[144]; // [rsp+1A0h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+230h] [rbp+120h] BYREF
  _BYTE v78[464]; // [rsp+250h] [rbp+140h] BYREF

  v13 = 0;
  v70 = a4;
  v69 = a3;
  Source = a5;
  v67 = a12;
  if ( HampLockTrackerId == -1 || !TlsGetValue(HampLockTrackerId) )
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v76);
    v55 = 0;
  }
  else
  {
    v55 = 1;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B31E0, (int)&dword_18009B29D, 0, 0, 2u, &v77);
  v15 = a8;
  v16 = 0LL;
  v17 = *((_DWORD *)a1 + 677);
  v18 = 0LL;
  v74[0] = *(_OWORD *)((char *)a1 + 2644);
  v53 = 0;
  v57 = 0LL;
  P = 0LL;
  Handle = 0LL;
  v56 = 0LL;
  v75 = v17;
  v19 = *(_OWORD *)((char *)a1 + 2676);
  v74[1] = *(_OWORD *)((char *)a1 + 2660);
  v74[2] = v19;
  v74[3] = *(_OWORD *)((char *)a1 + 2692);
  if ( a8 != 2 && a8 != 4 && a8 != 8 )
  {
    v20 = a9;
    PackageFullNameFromKey = -1073741578;
    goto LABEL_104;
  }
  v20 = a9;
  if ( !a5 )
  {
    PackageFullNameFromKey = -1073741581;
    goto LABEL_104;
  }
  if ( !Sid )
    goto LABEL_103;
  if ( a9 == -1LL )
  {
    PackageFullNameFromKey = -1073741577;
    goto LABEL_104;
  }
  if ( !RtlValidSid(Sid) || RtlLengthSid(Sid) > 0x44 )
  {
    v15 = a8;
LABEL_103:
    PackageFullNameFromKey = -1073741580;
LABEL_104:
    v33 = PackageFullNameFromKey | 0x10000000;
    if ( !v53 )
      goto LABEL_49;
    goto LABEL_105;
  }
  memset_0(v74, 0, 0x44uLL);
  v21 = RtlLengthSid(Sid);
  memcpy_0(v74, Sid, v21);
  if ( !(unsigned int)RmpResourceSetInfoIsValid(a2) )
  {
    PackageFullNameFromKey = -1073741584;
    goto LABEL_79;
  }
  v22 = *((_WORD *)a2 + 8);
  if ( (v22 & 0x200) != 0 && (*((_BYTE *)a1 + 508) & 8) == 0 || (v22 & 0x400) != 0 && (v22 & 0x100) == 0 )
  {
    v15 = a8;
    PackageFullNameFromKey = -1073741585;
    goto LABEL_104;
  }
  if ( a10 == -1LL )
  {
    v15 = a8;
    PackageFullNameFromKey = -1073741574;
    goto LABEL_104;
  }
  if ( (*((_BYTE *)a2 + 40) & 0x20) != 0 && !v69 )
  {
    v15 = a8;
    PackageFullNameFromKey = -1073741583;
    goto LABEL_104;
  }
  if ( (a9 & 0xF000000000000000uLL) != 0x2000000000000000LL
    && (unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent() )
  {
    v59 = 464;
    PackageFullNameFromKey = PsmGetPackageFullNameFromKey(Source, v78, &v59);
    if ( PackageFullNameFromKey >= 0 )
    {
      PartitionHandlesForPackage = GetPartitionHandlesForPackage(v78, &Handle, &v56, v60);
      if ( PartitionHandlesForPackage >= 0 )
      {
        v23 = (v60[0] & 1) != 0;
        goto LABEL_22;
      }
      PackageFullNameFromKey = PartitionHandlesForPackage & 0xEFFFFFFF;
    }
    v23 = 0;
  }
  else
  {
    Handle = (HANDLE)-2LL;
    v23 = 0;
    PackageFullNameFromKey = 0;
  }
  if ( PackageFullNameFromKey < 0 )
  {
LABEL_79:
    v15 = a8;
    goto LABEL_104;
  }
LABEL_22:
  if ( v23 )
    *((_BYTE *)a2 + 42) |= 0x80u;
  if ( v56 )
  {
    if ( v56 == (HANDLE)-2LL )
    {
      v15 = a8;
      PackageFullNameFromKey = -1073741733;
      goto LABEL_104;
    }
    if ( (int)NtCompareObjects(*((_QWORD *)a1 + 45), v56) >= 0 )
    {
      v15 = a8;
      PackageFullNameFromKey = -1073741733;
      goto LABEL_104;
    }
  }
  PackageFullNameFromKey = RmpPartitionTableFindOrCreatePartition(
                             (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312),
                             Handle,
                             (struct _RM_PARTITION **)&P);
  if ( PackageFullNameFromKey < 0 )
    goto LABEL_100;
  v25 = HampLockTrackerId;
  v53 = 1;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v25) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800B4218 = GetCurrentThreadId();
  RtlAcquireSRWLockShared((char *)a1 + 552);
  v27 = 0LL;
  v28 = *((_DWORD *)a1 + 135);
  v29 = -1LL << (*((_BYTE *)a1 + 540) & 0x1F);
  v30 = v29 & (HIBYTE(a10)
             + 37
             * (BYTE6(a10)
              + 37
              * (BYTE5(a10)
               + 37
               * (BYTE4(a10)
                + 37 * (BYTE3(a10) + 37 * (BYTE2(a10) + 37 * (BYTE1(a10) + 37 * ((unsigned __int8)a10 + 11623883LL))))))));
LABEL_31:
  if ( v27 )
    goto LABEL_34;
  v31 = v28 >> 5;
  if ( v28 >> 5 )
  {
    v28 = *((_DWORD *)a1 + 135);
    v27 = *((_QWORD *)a1 + 68)
        + 8LL
        * ((37
          * (BYTE6(v30)
           + 37
           * (BYTE5(v30)
            + 37
            * (BYTE4(v30)
             + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
          + HIBYTE(v30)) & (v31 - 1));
LABEL_34:
    while ( 1 )
    {
      v27 = *(_QWORD *)v27;
      if ( (v27 & 1) != 0 )
        break;
      if ( v30 == (v29 & *(_QWORD *)(v27 + 8)) )
      {
        if ( a10 != *(_QWORD *)(v27 + 32) )
          goto LABEL_31;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v27 + 16)) <= 1 )
          __fastfail(0xEu);
        v18 = v57;
        v32 = (void *)v27;
        goto LABEL_38;
      }
    }
  }
  v32 = 0LL;
LABEL_38:
  RtlReleaseSRWLockShared((char *)a1 + 552);
  if ( v32 )
  {
    RmpObjectRelease(v32);
    PackageFullNameFromKey = -1073741574;
LABEL_100:
    v16 = (signed __int64 *)P;
    v15 = a8;
    goto LABEL_104;
  }
  v16 = (signed __int64 *)P;
  v33 = ExecutionModel::ResourceManager::AcquireResourceSet(
          *((ExecutionModel::ResourceManager **)a1 + 340),
          a2,
          (struct _RM_PARTITION *)P,
          v56,
          v69,
          v70,
          Source,
          v74,
          a7,
          a8,
          a9,
          a11,
          v67,
          a10,
          &v57);
  if ( v33 >= 0 )
  {
    dword_1800B4218 = 0;
    RtlReleaseSRWLockExclusive(&RmpGlobalLock);
    if ( HampLockTrackerId != -1 )
    {
      v34 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v34 & 1) == 0 )
        __int2c();
      v38 = v34[1]-- == 1LL;
      if ( v38 )
        *v34 &= ~1uLL;
    }
    v18 = v57;
    v33 = 0;
    goto LABEL_46;
  }
  v18 = v57;
LABEL_105:
  RmpReleaseGlobalLock();
LABEL_46:
  if ( v18 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v18 + 16LL))(v18);
  v15 = a8;
LABEL_49:
  if ( (((unsigned __int64)Handle + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
  {
    NtClose(Handle);
    v15 = a8;
  }
  v35 = (int)v56;
  if ( (((unsigned __int64)v56 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
  {
    NtClose(v56);
    v15 = a8;
  }
  if ( v16 )
  {
    _m_prefetchw(v16);
    v36 = *v16;
    v37 = *v16 - 1;
    v38 = *v16 == 1;
    if ( v37 <= 0 )
    {
LABEL_107:
      if ( !v38 )
        __fastfail(0xEu);
      v45 = (volatile signed __int64 *)P;
      v46 = *((_QWORD *)P + 3);
      RtlAcquireSRWLockExclusive(v46 + 312);
      *(_DWORD *)(v46 + 320) = GetCurrentThreadId();
      v47 = _InterlockedExchangeAdd64(v45, 0xFFFFFFFFFFFFFFFFuLL);
      v48 = v47 <= 1;
      v49 = v47 - 1;
      if ( v48 )
      {
        if ( v49 )
          __fastfail(0xEu);
        if ( (unsigned int)CempListEntryIsNull((_QWORD *)P + 1) )
        {
          RmpPartitionCleanup((struct _RM_PARTITION *)v50);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
        }
        else
        {
          *(_DWORD *)(v50 + 224) &= ~1u;
          *(_DWORD *)(v50 + 224) |= 2u;
          SetEvent(*(HANDLE *)(v50 + 64));
        }
      }
      *(_DWORD *)(v46 + 320) = 0;
      RtlReleaseSRWLockExclusive(v46 + 312);
      v15 = a8;
    }
    else
    {
      while ( 1 )
      {
        v35 = (int)P;
        v39 = v36;
        v36 = _InterlockedCompareExchange64((volatile signed __int64 *)P, v37, v36);
        if ( v39 == v36 )
          break;
        v37 = v36 - 1;
        v38 = v36 == 1;
        if ( v36 - 1 <= 0 )
          goto LABEL_107;
      }
    }
  }
  if ( dword_1800B31E0 )
  {
    v41 = v67;
    if ( v67 )
      v42 = *v67;
    else
      v42 = 0;
    if ( (unsigned int)dword_1800B31E0 > 5 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
    {
      v71[0] = v74;
      v72 = (char *)a2 + 152;
      v73 = 50;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperArray<4>,_tlgWrapSid<_SID>>(
        v35,
        (unsigned int)&unk_18009B0C7,
        (_DWORD)v67,
        v15,
        (__int64)&v72,
        (__int64)v71);
      v41 = v67;
      v15 = a8;
    }
    if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 9) != 0 && (qword_1800B31F8 & 9) == qword_1800B31F8 )
    {
      v51 = *((_QWORD *)a2 + 14);
      v52 = *((_QWORD *)a2 + 17);
      LOBYTE(v13) = v41 != 0LL;
      v63 = *(_DWORD *)a2;
      v71[1] = *((_QWORD *)a2 + 3);
      v64 = *((_DWORD *)a2 + 2);
      v65 = v42;
      v71[5] = Source;
      v71[6] = a10;
      v71[3] = v51;
      v61 = a7;
      v62 = v13;
      v71[2] = v52;
      v71[4] = v20;
      v66 = v15;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v52,
        &unk_18009B7BF);
    }
  }
  if ( !v55 )
  {
    v43 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v43, 0LL);
    }
  }
  return (unsigned int)v33;
}
