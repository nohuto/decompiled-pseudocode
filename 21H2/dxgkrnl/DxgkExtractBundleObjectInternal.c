/*
 * XREFs of DxgkExtractBundleObjectInternal @ 0x1C02785D8
 * Callers:
 *     DxgkExtractBundleObject @ 0x1C0278580 (DxgkExtractBundleObject.c)
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C028B010 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     memset @ 0x1C0028F00 (memset.c)
 */

__int64 __fastcall DxgkExtractBundleObjectInternal(__int64 a1, KPROCESSOR_MODE a2, struct _KPROCESS *a3, ULONG64 a4)
{
  char v6; // r14
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  char v10; // di
  ULONG64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  const void *v16; // r14
  __int64 v17; // rax
  char *v18; // rcx
  KPROCESSOR_MODE v19; // r9
  HANDLE v20; // r13
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  __int128 *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  char v42; // r13
  struct _KPROCESS *v43; // r14
  __int64 v44; // rcx
  __int64 v45; // r14
  DWORD v46; // r9d
  int v47; // eax
  __int64 ObjectType; // rax
  void *v49; // rcx
  NTSTATUS inserted; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rax
  __int128 v58; // xmm1
  HANDLE *v59; // xmm0_8
  size_t v60; // r8
  ULONG64 v61; // r9
  _DWORD *v62; // rcx
  _OWORD *v63; // rcx
  unsigned int i; // r14d
  HANDLE v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  char v69; // [rsp+41h] [rbp-1C7h]
  char v70; // [rsp+42h] [rbp-1C6h]
  int v71; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v72; // [rsp+50h] [rbp-1B8h]
  char v73; // [rsp+58h] [rbp-1B0h]
  DWORD AccessMask; // [rsp+60h] [rbp-1A8h] BYREF
  int v75; // [rsp+64h] [rbp-1A4h]
  PVOID Object; // [rsp+68h] [rbp-1A0h] BYREF
  HANDLE *v77; // [rsp+70h] [rbp-198h]
  PRKPROCESS PROCESS[2]; // [rsp+78h] [rbp-190h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+88h] [rbp-180h] BYREF
  ULONG64 v80; // [rsp+90h] [rbp-178h]
  char *v81; // [rsp+98h] [rbp-170h]
  HANDLE Handle[2]; // [rsp+A0h] [rbp-168h]
  void *Src[2]; // [rsp+B0h] [rbp-158h]
  __int128 v84; // [rsp+C0h] [rbp-148h]
  HANDLE *v85; // [rsp+D0h] [rbp-138h]
  struct _KPROCESS *v86; // [rsp+D8h] [rbp-130h]
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-128h] BYREF
  _DWORD v88[16]; // [rsp+110h] [rbp-F8h] BYREF
  HANDLE v89[16]; // [rsp+150h] [rbp-B8h] BYREF

  v80 = a4;
  PROCESS[0] = a3;
  v6 = a1;
  v70 = a1;
  v86 = a3;
  v71 = -1;
  v72 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v73 = 1;
    v71 = 2158;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 2158);
  }
  else
  {
    v73 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v71, 2158LL);
  v10 = 0;
  v69 = 0;
  if ( v6 == 1 )
  {
    v8 = MmUserProbeAddress;
    v11 = a4;
    if ( a4 >= MmUserProbeAddress )
      v11 = MmUserProbeAddress;
    *(_OWORD *)Handle = *(_OWORD *)v11;
    *(_OWORD *)Src = *(_OWORD *)(v11 + 16);
    v84 = *(_OWORD *)(v11 + 32);
    v85 = *(HANDLE **)(v11 + 48);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)a4;
    *(_OWORD *)Src = *(_OWORD *)(a4 + 16);
    v84 = *(_OWORD *)(a4 + 32);
    v85 = *(HANDLE **)(a4 + 48);
  }
  v12 = LODWORD(Handle[1]);
  if ( LODWORD(Handle[1]) > 0x10 )
  {
    v13 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v13 + 24) = v12;
    LODWORD(v14) = -1073741811;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    goto LABEL_33;
  }
  v16 = Src[0];
  if ( !LODWORD(Handle[1]) )
  {
    if ( Src[0] || Src[1] )
    {
      v17 = WdLogNewEntry5_WdWarning(v8, v7, v9);
      *(_QWORD *)(v17 + 24) = v16;
      *(void **)(v17 + 32) = Src[1];
      LODWORD(v14) = -1073741811;
      *(_QWORD *)(v17 + 40) = -1073741811LL;
LABEL_32:
      WdLogEvent5_WdWarning(v17);
LABEL_33:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71, v15);
      if ( v73 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v71);
      }
      return (unsigned int)v14;
    }
    v10 = 1;
    v69 = 1;
  }
  memset(v88, 0, sizeof(v88));
  if ( !v10 && Src[0] )
  {
    if ( v70 == 1 )
    {
      v18 = (char *)Src[0] + 4 * LODWORD(Handle[1]);
      if ( v18 < Src[0] || (unsigned __int64)v18 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v88, v16, 4 * v12);
    }
    else
    {
      memmove(v88, Src[0], 4LL * LODWORD(Handle[1]));
    }
  }
  memset(v89, 0, sizeof(v89));
  HandleInformation = 0LL;
  Object = 0LL;
  v19 = a2;
  v20 = Handle[0];
  v21 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedBundleObjectType, v19, &Object, &HandleInformation);
  v14 = v21;
  if ( v21 == -1073741788 )
  {
    v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v25 + 24) = v20;
    *(_QWORD *)(v25 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71, v26);
    if ( v73 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v71);
    return 3221225508LL;
  }
  if ( v21 < 0 )
  {
    v17 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v17 + 24) = v20;
    *(_QWORD *)(v17 + 32) = v14;
    goto LABEL_32;
  }
  v32 = (__int128 *)Object;
  if ( !*((_BYTE *)Object + 243) )
  {
    v33 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v33 + 24) = v20;
    WdLogEvent5_WdWarning(v33);
    ObfDereferenceObject(v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71, v34);
    if ( v73 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v71);
    LODWORD(v14) = -1073741811;
    return (unsigned int)v14;
  }
  v81 = (char *)Object + 232;
  ExAcquirePushLockExclusiveEx((char *)Object + 232, 0LL);
  memset(&ApcState, 0, sizeof(ApcState));
  v39 = *((unsigned int *)v32 + 6);
  LOBYTE(v40) = v69;
  if ( v69 )
  {
    LODWORD(v12) = *((_DWORD *)v32 + 6);
    LODWORD(Handle[1]) = v12;
  }
  else if ( (_DWORD)v12 != (_DWORD)v39 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v37, v38);
    v41[3] = v12;
    v41[4] = *((unsigned int *)v32 + 6);
    v41[5] = v20;
    LODWORD(v14) = -1073741811;
    v41[6] = -1073741811LL;
    goto LABEL_50;
  }
  if ( !v69 )
  {
    if ( *((_BYTE *)v32 + 241) && !*((_BYTE *)v32 + 240) )
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v37, v38);
      v41[3] = v20;
      LODWORD(v14) = -1073741811;
      v41[4] = -1073741811LL;
LABEL_50:
      WdLogEvent5_WdWarning(v41);
      v42 = 0;
      goto LABEL_91;
    }
    if ( !v16 )
      memmove(v88, v32 + 10, 4 * v39);
    v43 = PROCESS[0];
    if ( !PROCESS[0] || v43 == (struct _KPROCESS *)PsGetCurrentProcess(v40, v37) )
    {
      v42 = 0;
    }
    else
    {
      KeStackAttachProcess(v43, &ApcState);
      v42 = 1;
    }
    v44 = 0LL;
    v75 = 0;
    if ( *((_DWORD *)v32 + 6) )
    {
      while ( 1 )
      {
        v45 = (unsigned int)v44;
        v46 = v88[(unsigned int)v44];
        AccessMask = v46;
        v47 = *((_DWORD *)v32 + 5);
        if ( _bittest(&v47, v44) )
        {
          if ( (v46 & 0xF0000000) != 0 )
          {
            ObjectType = ObGetObjectType(*((_QWORD *)v32 + (unsigned int)v44 + 4));
            RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(ObjectType + 76));
            v46 = AccessMask;
          }
          v46 &= HandleInformation.GrantedAccess;
          AccessMask = v46;
        }
        v77 = &v89[v45];
        v49 = (void *)*((_QWORD *)v32 + v45 + 4);
        if ( *((_BYTE *)v32 + 242) )
        {
          inserted = ObOpenObjectByPointer(v49, 0, 0LL, v46, 0LL, 0, &v89[v45]);
        }
        else
        {
          ObfReferenceObject(v49);
          inserted = ObInsertObject(*((PVOID *)v32 + v45 + 4), 0LL, AccessMask, 0, 0LL, &v89[v45]);
        }
        LODWORD(v14) = inserted;
        if ( inserted < 0 )
          break;
        if ( ObIsKernelHandle(*v77) )
        {
          v55 = WdLogNewEntry5_WdAssertion(v54, v37);
          *(_QWORD *)(v55 + 24) = 2475LL;
          WdLogEvent5_WdAssertion(v55);
        }
        v44 = (unsigned int)(v75 + 1);
        v75 = v44;
        if ( (unsigned int)v44 >= *((_DWORD *)v32 + 6) )
          goto LABEL_72;
      }
      v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v51, v53);
      v56[3] = *((_QWORD *)v32 + v45 + 4);
      v56[4] = *((unsigned __int8 *)v32 + 242);
      v56[5] = (int)v14;
      WdLogEvent5_WdWarning(v56);
    }
LABEL_72:
    if ( v42 )
      KeUnstackDetachProcess(&ApcState);
    if ( (int)v14 < 0 )
    {
      v57 = WdLogNewEntry5_WdWarning(v44, v37, v38);
      *(_QWORD *)(v57 + 24) = (int)v14;
      WdLogEvent5_WdWarning(v57);
LABEL_91:
      if ( v89[0] )
      {
        if ( v42 )
          KeStackAttachProcess(PROCESS[0], &ApcState);
        for ( i = 0; i < *((_DWORD *)v32 + 6); v89[i++] = 0LL )
        {
          v65 = v89[i];
          if ( !v65 )
            break;
          ObCloseHandle(v65, 1);
        }
        if ( v42 )
          KeUnstackDetachProcess(&ApcState);
      }
      ExReleasePushLockExclusiveEx(v81, 0LL);
      ObfDereferenceObject(v32);
      goto LABEL_33;
    }
    *(_WORD *)((char *)v32 + 241) = 257;
    LOBYTE(v40) = 0;
  }
  v58 = *v32;
  *(_OWORD *)PROCESS = v58;
  v84 = v58;
  v59 = (HANDLE *)*((_QWORD *)v32 + 2);
  v77 = v59;
  v85 = v59;
  if ( v70 == 1 )
  {
    if ( (_BYTE)v40 )
    {
      v61 = v80;
      v62 = (_DWORD *)(v80 + 8);
      if ( v80 + 12 > MmUserProbeAddress || v80 + 12 <= (unsigned __int64)v62 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v62 = v12;
    }
    else
    {
      v60 = 8LL * (unsigned int)v12;
      if ( (char *)Src[1] + v60 > (void *)MmUserProbeAddress || (char *)Src[1] + v60 <= Src[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Src[1], v89, v60);
      v58 = *(_OWORD *)PROCESS;
      v59 = v77;
      v61 = v80;
    }
    v63 = (_OWORD *)(v61 + 32);
    if ( v61 + 56 > MmUserProbeAddress || v61 + 56 <= (unsigned __int64)v63 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *v63 = v58;
    *(_QWORD *)(v61 + 48) = v59;
  }
  else if ( !(_BYTE)v40 )
  {
    memmove(Src[1], v89, 8LL * (unsigned int)v12);
  }
  ExReleasePushLockExclusiveEx(v81, 0LL);
  ObfDereferenceObject(v32);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71, v66);
  if ( v73 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v67, &EventProfilerExit, v68, v71);
  return 0LL;
}
