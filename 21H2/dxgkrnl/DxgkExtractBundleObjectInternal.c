/*
 * XREFs of DxgkExtractBundleObjectInternal @ 0x1C031CE04
 * Callers:
 *     DxgkExtractBundleObject @ 0x1C031CD80 (DxgkExtractBundleObject.c)
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C033C738 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall DxgkExtractBundleObjectInternal(__int64 a1, KPROCESSOR_MODE a2, struct _KPROCESS *a3, ULONG64 a4)
{
  char v6; // r13
  char v7; // si
  ULONG64 v8; // rax
  __int64 v9; // r15
  int v10; // esi
  const void *v11; // r14
  char *v12; // rcx
  KPROCESSOR_MODE v13; // r9
  HANDLE v14; // r12
  NTSTATUS v15; // eax
  __int128 *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  char v27; // r13
  __int64 v28; // rax
  __int64 v29; // rcx
  struct _KPROCESS *v30; // r14
  unsigned int v31; // r12d
  DWORD v32; // r9d
  int v33; // eax
  __int64 ObjectType; // rax
  void *v35; // rcx
  NTSTATUS inserted; // eax
  __int128 v37; // xmm1
  HANDLE *v38; // xmm0_8
  size_t v39; // r8
  ULONG64 v40; // r9
  _DWORD *v41; // rcx
  _OWORD *v42; // rcx
  unsigned int i; // r14d
  HANDLE v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // r8
  char v47; // [rsp+50h] [rbp-1E8h]
  char v48; // [rsp+52h] [rbp-1E6h]
  int v49; // [rsp+58h] [rbp-1E0h] BYREF
  __int64 v50; // [rsp+60h] [rbp-1D8h]
  char v51; // [rsp+68h] [rbp-1D0h]
  DWORD AccessMask; // [rsp+70h] [rbp-1C8h] BYREF
  HANDLE *v53; // [rsp+78h] [rbp-1C0h]
  PRKPROCESS PROCESS[2]; // [rsp+80h] [rbp-1B8h]
  PVOID Object; // [rsp+90h] [rbp-1A8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+98h] [rbp-1A0h] BYREF
  ULONG64 v57; // [rsp+A0h] [rbp-198h]
  char *v58; // [rsp+A8h] [rbp-190h]
  HANDLE Handle[2]; // [rsp+B0h] [rbp-188h]
  void *Src[2]; // [rsp+C0h] [rbp-178h]
  __int128 v61; // [rsp+D0h] [rbp-168h]
  HANDLE *v62; // [rsp+E0h] [rbp-158h]
  PVOID v63; // [rsp+E8h] [rbp-150h]
  struct _KPROCESS *v64; // [rsp+F0h] [rbp-148h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-140h] BYREF
  _DWORD v66[16]; // [rsp+130h] [rbp-108h] BYREF
  HANDLE v67[16]; // [rsp+170h] [rbp-C8h] BYREF

  v57 = a4;
  PROCESS[0] = a3;
  v6 = a1;
  v48 = a1;
  v64 = a3;
  v49 = -1;
  v50 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v51 = 1;
    v49 = 2158;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 2158);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v49, 2158);
  v7 = 0;
  v47 = 0;
  if ( v6 == 1 )
  {
    v8 = a4;
    if ( a4 >= MmUserProbeAddress )
      v8 = MmUserProbeAddress;
    *(_OWORD *)Handle = *(_OWORD *)v8;
    *(_OWORD *)Src = *(_OWORD *)(v8 + 16);
    v61 = *(_OWORD *)(v8 + 32);
    v62 = *(HANDLE **)(v8 + 48);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)a4;
    *(_OWORD *)Src = *(_OWORD *)(a4 + 16);
    v61 = *(_OWORD *)(a4 + 32);
    v62 = *(HANDLE **)(a4 + 48);
  }
  v9 = LODWORD(Handle[1]);
  if ( LODWORD(Handle[1]) > 0x10 )
  {
    v10 = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Handle[1]), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Input handle count (0x%I64x) is out of range. Returning 0x%I64x",
      v9,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_32;
  }
  v11 = Src[0];
  if ( !LODWORD(Handle[1]) )
  {
    if ( Src[0] || Src[1] )
    {
      v10 = -1073741811;
      WdLogSingleEntry3(3LL, Src[0], Src[1], -1073741811LL);
      goto LABEL_32;
    }
    v7 = 1;
    v47 = 1;
  }
  memset(v66, 0, sizeof(v66));
  if ( !v7 && Src[0] )
  {
    if ( v6 == 1 )
    {
      v12 = (char *)Src[0] + 4 * LODWORD(Handle[1]);
      if ( v12 < Src[0] || (unsigned __int64)v12 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v66, v11, 4 * v9);
    }
    else
    {
      memmove(v66, Src[0], 4LL * LODWORD(Handle[1]));
    }
  }
  memset(v67, 0, sizeof(v67));
  HandleInformation = 0LL;
  Object = 0LL;
  v13 = a2;
  v14 = Handle[0];
  v15 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedBundleObjectType, v13, &Object, &HandleInformation);
  v10 = v15;
  v16 = (__int128 *)Object;
  v63 = Object;
  if ( v15 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, v14, -1073741788LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v49);
    return 3221225508LL;
  }
  if ( v15 < 0 )
  {
    WdLogSingleEntry2(3LL, v14, v15);
LABEL_32:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    if ( v51 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v49);
    }
    return (unsigned int)v10;
  }
  if ( !*((_BYTE *)Object + 243) )
  {
    WdLogSingleEntry1(3LL, v14);
    ObfDereferenceObject(v16);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v49);
    return (unsigned int)-1073741811;
  }
  v58 = (char *)Object + 232;
  ExAcquirePushLockExclusiveEx((char *)Object + 232, 0LL);
  memset(&ApcState, 0, sizeof(ApcState));
  v27 = 0;
  v28 = *((unsigned int *)v16 + 6);
  LOBYTE(v29) = v47;
  if ( v47 )
  {
    LODWORD(v9) = *((_DWORD *)v16 + 6);
    LODWORD(Handle[1]) = v9;
  }
  else if ( (_DWORD)v9 != (_DWORD)v28 )
  {
    v10 = -1073741811;
    WdLogSingleEntry4(3LL, v9, *((unsigned int *)v16 + 6), v14, -1073741811LL);
    goto LABEL_88;
  }
  if ( !v47 )
  {
    if ( *((_BYTE *)v16 + 241) && !*((_BYTE *)v16 + 240) )
    {
      v10 = -1073741811;
      WdLogSingleEntry2(3LL, v14, -1073741811LL);
LABEL_88:
      if ( v67[0] )
      {
        if ( v27 )
          KeStackAttachProcess(PROCESS[0], &ApcState);
        for ( i = 0; i < *((_DWORD *)v16 + 6); v67[i++] = 0LL )
        {
          v44 = v67[i];
          if ( !v44 )
            break;
          ObCloseHandle(v44, 1);
        }
        if ( v27 )
          KeUnstackDetachProcess(&ApcState);
      }
      ExReleasePushLockExclusiveEx(v58, 0LL);
      ObfDereferenceObject(v16);
      goto LABEL_32;
    }
    if ( !v11 )
      memmove(v66, v16 + 10, 4 * v28);
    v30 = PROCESS[0];
    if ( PROCESS[0] && v30 != (struct _KPROCESS *)PsGetCurrentProcess(v29, v24, v25, v26) )
    {
      KeStackAttachProcess(v30, &ApcState);
      v27 = 1;
    }
    v31 = 0;
    if ( *((_DWORD *)v16 + 6) )
    {
      while ( 1 )
      {
        v32 = v66[v31];
        AccessMask = v32;
        v33 = *((_DWORD *)v16 + 5);
        if ( _bittest(&v33, v31) )
        {
          if ( (v32 & 0xF0000000) != 0 )
          {
            ObjectType = ObGetObjectType(*((_QWORD *)v16 + v31 + 4));
            RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(ObjectType + 76));
            v32 = AccessMask;
          }
          v32 &= HandleInformation.GrantedAccess;
          AccessMask = v32;
        }
        v35 = (void *)*((_QWORD *)v16 + v31 + 4);
        v53 = &v67[v31];
        if ( *((_BYTE *)v16 + 242) )
        {
          inserted = ObOpenObjectByPointer(v35, 0, 0LL, v32, 0LL, 0, &v67[v31]);
        }
        else
        {
          ObfReferenceObject(v35);
          inserted = ObInsertObject(*((PVOID *)v16 + v31 + 4), 0LL, AccessMask, 0, 0LL, &v67[v31]);
        }
        v10 = inserted;
        if ( inserted < 0 )
          break;
        if ( ObIsKernelHandle(*v53) )
        {
          WdLogSingleEntry1(1LL, 2708LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"false == ObIsKernelHandle(hNtHandles[i])",
            2708LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( ++v31 >= *((_DWORD *)v16 + 6) )
          goto LABEL_69;
      }
      WdLogSingleEntry3(3LL, *((_QWORD *)v16 + v31 + 4), *((unsigned __int8 *)v16 + 242), inserted);
    }
LABEL_69:
    if ( v27 )
      KeUnstackDetachProcess(&ApcState);
    if ( v10 < 0 )
    {
      WdLogSingleEntry1(3LL, v10);
      goto LABEL_88;
    }
    *(_WORD *)((char *)v16 + 241) = 257;
    LOBYTE(v29) = 0;
  }
  v37 = *v16;
  *(_OWORD *)PROCESS = v37;
  v61 = v37;
  v38 = (HANDLE *)*((_QWORD *)v16 + 2);
  v53 = v38;
  v62 = v38;
  if ( v48 == 1 )
  {
    if ( (_BYTE)v29 )
    {
      v40 = v57;
      v41 = (_DWORD *)(v57 + 8);
      if ( v57 + 12 > MmUserProbeAddress || v57 + 12 <= (unsigned __int64)v41 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v41 = v9;
    }
    else
    {
      v39 = 8LL * (unsigned int)v9;
      if ( (char *)Src[1] + v39 > (void *)MmUserProbeAddress || (char *)Src[1] + v39 <= Src[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Src[1], v67, v39);
      v37 = *(_OWORD *)PROCESS;
      v38 = v53;
      v40 = v57;
    }
    v42 = (_OWORD *)(v40 + 32);
    if ( v40 + 56 > MmUserProbeAddress || v40 + 56 <= (unsigned __int64)v42 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *v42 = v37;
    *(_QWORD *)(v40 + 48) = v38;
  }
  else if ( !(_BYTE)v29 )
  {
    memmove(Src[1], v67, 8LL * (unsigned int)v9);
  }
  ExReleasePushLockExclusiveEx(v58, 0LL);
  ObfDereferenceObject(v16);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
  if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v45, &EventProfilerExit, v46, v49);
  return 0LL;
}
