/*
 * XREFs of ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C32F0
 * Callers:
 *     vDynamicConvertNewSurfaceDCs @ 0x1C00BDF20 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00CF18C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     hbmSelectBitmapInternal @ 0x1C00CFF50 (hbmSelectBitmapInternal.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreGetObjectOwner @ 0x1C0023750 (GreGetObjectOwner.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C002903C (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002BD30 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0030620 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C003D4B0 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     EngFreeUserMem @ 0x1C003FF60 (EngFreeUserMem.c)
 *     EngSetLastError @ 0x1C0049420 (EngSetLastError.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C004F3B4 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C007BE98 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00820E8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0082210 (GreReleaseSemaphoreInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     DEC_SHARE_REF_CNT @ 0x1C00896E0 (DEC_SHARE_REF_CNT.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C008D640 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgRemoveObject @ 0x1C0090840 (HmgRemoveObject.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00922F0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C0096E60 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A58A8 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A58D8 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C00A7950 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00C8638 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C0142EE0 (-vFreeKernelSection@@YAXPEAX@Z.c)
 */

__int64 __fastcall SURFACE::bDeleteSurface(__int64 a1, int a2, int a3)
{
  unsigned int v6; // esi
  char *v7; // r14
  char *v8; // rdx
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int64 v11; // rcx
  int v12; // r12d
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  void *v15; // rax
  __int128 v16; // xmm1
  int IsSemaphoreOwnedOrSharedByCurrentThread; // eax
  int v18; // r8d
  int v19; // r8d
  __int64 v20; // rbx
  unsigned int ObjectOwner; // eax
  int v22; // eax
  int v23; // r12d
  int v24; // eax
  int v25; // ecx
  __int64 v26; // rdx
  void (__fastcall *v27)(__int64); // rax
  int v28; // eax
  __int64 v29; // rcx
  HANDLE v30; // rbx
  HANDLE v31; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // r15d
  __int64 v36; // r14
  PVOID v37; // rbx
  __int64 CurrentProcess; // rax
  __int64 v39; // rax
  int v40; // ecx
  PVOID v41; // rdx
  int v42; // eax
  _QWORD *v43; // r8
  __int64 v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // rdx
  __int64 v47; // rdx
  int v48; // r8d
  __int64 v49; // rbx
  __int64 v50; // rdx
  int v51; // r8d
  __int64 v52; // rdx
  int v53; // r8d
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  int v56; // [rsp+58h] [rbp-A8h]
  int v57; // [rsp+5Ch] [rbp-A4h]
  unsigned int v58; // [rsp+60h] [rbp-A0h]
  __int64 v59; // [rsp+68h] [rbp-98h] BYREF
  PEPROCESS Process; // [rsp+70h] [rbp-90h] BYREF
  __int64 v61; // [rsp+78h] [rbp-88h]
  HANDLE SecureHandle; // [rsp+80h] [rbp-80h]
  HANDLE v63; // [rsp+88h] [rbp-78h]
  __int64 v64; // [rsp+90h] [rbp-70h]
  PVOID v65; // [rsp+98h] [rbp-68h]
  __int64 v66; // [rsp+A0h] [rbp-60h]
  PERESOURCE v67; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp-50h] BYREF
  PERESOURCE v69; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v70; // [rsp+C0h] [rbp-40h]
  __int64 v71; // [rsp+C8h] [rbp-38h]
  __int64 v72; // [rsp+D0h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+D8h] [rbp-28h]
  __int128 v74; // [rsp+E8h] [rbp-18h]
  __int64 v75; // [rsp+F8h] [rbp-8h]
  _OWORD v76[3]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v77[128]; // [rsp+130h] [rbp+30h] BYREF
  unsigned int v78; // [rsp+1C0h] [rbp+C0h] BYREF
  int v79; // [rsp+1D8h] [rbp+D8h] BYREF

  v6 = 1;
  if ( (SURFACE *)a1 != SURFACE::pdibDefault && a1 )
  {
    v7 = 0LL;
    v8 = *(char **)(a1 + 72);
    v63 = 0LL;
    v64 = 0LL;
    SecureHandle = 0LL;
    v56 = 0;
    if ( !*(_WORD *)(a1 + 100) )
    {
      v63 = *(HANDLE *)(a1 + 192);
      v64 = *(_QWORD *)(a1 + 184);
      v56 = *(_DWORD *)(a1 + 216);
      v7 = &v8[-(unsigned __int16)*(_DWORD *)(a1 + 212)];
      SecureHandle = *(HANDLE *)(a1 + 224);
    }
    v9 = *(_QWORD *)(a1 + 24);
    v10 = *(_OWORD *)(a1 + 288);
    v11 = *(_QWORD *)(a1 + 128);
    v12 = *(_DWORD *)(a1 + 320);
    v76[0] = *(_OWORD *)(a1 + 272);
    v61 = v9;
    v13 = *(_OWORD *)(a1 + 304);
    v70 = *(_QWORD *)(a1 + 136);
    LODWORD(v9) = *(unsigned __int16 *)(a1 + 102);
    v76[2] = v13;
    v57 = v9;
    v14 = *(_OWORD *)(a1 + 584);
    v15 = *(void **)(a1 + 248);
    v76[1] = v10;
    v71 = v11;
    v16 = *(_OWORD *)(a1 + 600);
    *(_OWORD *)Object = v14;
    BaseAddress = v8;
    v75 = *(_QWORD *)(a1 + 616);
    v65 = v15;
    v74 = v16;
    IsSemaphoreOwnedOrSharedByCurrentThread = GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange);
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
      (NEEDDYNAMICMODECHANGESHARELOCK *)&v79,
      IsSemaphoreOwnedOrSharedByCurrentThread == 0,
      v18);
    v20 = *(_QWORD *)(a1 + 48);
    v59 = v20;
    if ( (!v20 || (*(_DWORD *)(a1 + 112) & 0x400000) == 0 || (*(_DWORD *)(v20 + 40) & 1) == 0) && v79 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v19);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      v79 = 0;
    }
    v67 = 0LL;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v77);
    if ( (*(_DWORD *)(a1 + 112) & 0x400000) != 0 && v20 )
    {
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v67, (struct PDEVOBJ *)&v59);
      DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v77, (struct PDEVOBJ *)&v59);
    }
    else
    {
      DEVLOCKOBJ::vInit((DEVLOCKOBJ *)v77);
    }
    v66 = *(_QWORD *)a1;
    ObjectOwner = GreGetObjectOwner(v66, 5);
    v78 = 0;
    v58 = ObjectOwner;
    if ( !a3
      && !HmgRemoveObject(v66, 0LL, 1, a2 == 2, 5, &v78)
      && ((unsigned int)(a2 - 1) > 1 || !HmgRemoveObject(*(_QWORD *)a1, 0LL, 0, a2 == 2, 5, &v78))
      && (a2 != 3 || !HmgRemoveObjectImpl(*(struct HOBJ__ **)a1, 0, 1, 2, 5, &v78)) )
    {
      if ( v78 == 1 )
      {
        if ( (*(_DWORD *)(a1 + 112) & 0x800) == 0 )
        {
          EngSetLastError(0xAAu);
LABEL_25:
          v6 = 0;
LABEL_119:
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v77);
          NEEDGRELOCK::vUnlock(&v67, v50, v51);
          NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK(
            (NEEDDYNAMICMODECHANGESHARELOCK *)&v79,
            v52,
            v53);
          return v6;
        }
      }
      else
      {
        if ( !*(_QWORD *)(a1 + 160)
          && ((*(_DWORD *)a1 & 0x800000) == 0 || (*(_WORD *)(a1 + 102) & 0x200) == 0)
          && (*(_DWORD *)(a1 + 112) & 0x800) == 0 )
        {
          goto LABEL_25;
        }
        v22 = *(_DWORD *)(a1 + 112);
        if ( (v22 & 0x800) != 0 )
        {
          if ( !*(_DWORD *)(a1 + 320) )
          {
            *(_DWORD *)(a1 + 320) = 1;
            _InterlockedAdd(&glRenderEndDelete, 1u);
          }
        }
        else
        {
          *(_DWORD *)(a1 + 112) = v22 | 0x1000000;
        }
      }
      DEC_SHARE_REF_CNT((unsigned int *)a1);
      goto LABEL_119;
    }
    if ( v12 )
    {
      _InterlockedDecrement(&glRenderEndDelete);
      v20 = v59;
    }
    v23 = -1073741637;
    if ( qword_1C0251790 )
      v24 = qword_1C0251790();
    else
      v24 = -1073741637;
    if ( v24 >= 0 && qword_1C0251798 )
      qword_1C0251798(a1);
    v25 = *(_DWORD *)(a1 + 112);
    if ( (v25 & 0x400000) == 0 || (v26 = v61) == 0 || !v20 )
    {
LABEL_59:
      v30 = SecureHandle;
      if ( SecureHandle )
      {
        if ( *(_DWORD *)(a1 + 208) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          MmUnsecureVirtualMemory(v30);
        goto LABEL_109;
      }
      if ( v56 )
      {
        if ( BaseAddress )
          MmUnmapViewInSessionSpace(v7);
        goto LABEL_109;
      }
      v31 = v63;
      if ( v63 )
      {
        if ( *(_DWORD *)(a1 + 208) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          MmUnsecureVirtualMemory(v31);
          if ( BaseAddress )
          {
            if ( v64 )
            {
              ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7);
            }
            else
            {
              RegionSize = 0LL;
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
            }
          }
        }
        goto LABEL_109;
      }
      if ( (v57 & 8) == 0 )
      {
        if ( (v57 & 0x800) != 0 )
        {
          v69 = ghsemMapRot;
          EngAcquireSemaphore((HSEMAPHORE)ghsemMapRot);
          v43 = *(_QWORD **)(a1 + 264);
          if ( v43 )
          {
            v44 = a1 + 528;
            v45 = *(_QWORD *)(a1 + 528);
            if ( v45 != a1 + 528 )
            {
              if ( *(_QWORD *)(v45 + 8) != v44 || (v46 = *(_QWORD **)(a1 + 536), *v46 != v44) )
                __fastfail(3u);
              *v46 = v45;
              *(_QWORD *)(v45 + 8) = v46;
            }
            if ( BaseAddress && v65 )
              MmUnmapViewOfSection(*v43, BaseAddress);
          }
          W32PIDLOCK::vCleanUp((REGION **)v76);
          if ( v65 )
            ObfDereferenceObject(v65);
          SEMOBJ::vUnlock((SEMOBJ *)&v69, v47, v48);
        }
        else if ( (v57 & 0x10) != 0 )
        {
          vFreeKernelSection(BaseAddress);
        }
        goto LABEL_109;
      }
      if ( (v57 & 0x80u) == 0 )
      {
        EngFreeUserMem(BaseAddress);
LABEL_109:
        if ( (*(_DWORD *)(a1 + 116) & 0x1000) != 0 )
          DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 4LL, v66, v78, v58, 0LL, 0LL, 0);
        SURFACE::Free((PSLIST_ENTRY)a1);
        v49 = v70;
        if ( v70 )
        {
          if ( qword_1C02517C0 )
            v23 = qword_1C02517C0();
          if ( v23 >= 0 && qword_1C02517C8 )
            qword_1C02517C8(v49);
        }
        if ( v71 )
        {
          v72 = v71;
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v72);
        }
        goto LABEL_119;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v35 = DWORD2(v74);
      v36 = ThreadWin32Thread;
      v37 = Object[1];
      if ( DWORD2(v74) )
        v37 = BaseAddress;
      CurrentProcess = PsGetCurrentProcess(v34, v33);
      MmUnmapViewOfSection(CurrentProcess, v37);
      if ( v36 && (v39 = *(_QWORD *)(v36 + 72)) != 0 )
      {
        v40 = *(_DWORD *)(v39 + 8);
      }
      else
      {
        if ( !(_DWORD)v75 )
        {
          if ( qword_1C02517B0 )
            v42 = qword_1C02517B0();
          else
            v42 = -1073741637;
          if ( v42 >= 0 && qword_1C02517B8 )
            qword_1C02517B8(BaseAddress);
          goto LABEL_84;
        }
        v40 = HIDWORD(v74);
      }
      Process = 0LL;
      if ( PsLookupProcessByProcessId((HANDLE)v40, &Process) >= 0 )
      {
        v41 = BaseAddress;
        if ( v35 )
          v41 = Object[1];
        MmUnmapViewOfSection(Process, v41);
        ObfDereferenceObject(Process);
      }
LABEL_84:
      if ( !Object[0] )
        KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
      ObfDereferenceObject(Object[0]);
      goto LABEL_109;
    }
    if ( (*(_DWORD *)(a1 + 116) & 9) != 0 )
    {
      v27 = *(void (__fastcall **)(__int64))(v20 + 2664);
      if ( v27 )
      {
        v29 = a1 + 24;
LABEL_58:
        v27(v29);
        goto LABEL_59;
      }
      v27 = *(void (__fastcall **)(__int64))(v20 + 3448);
      if ( !v27 )
        goto LABEL_59;
    }
    else
    {
      v27 = *(void (__fastcall **)(__int64))(v20 + 2776);
      if ( !v27 )
        goto LABEL_59;
      if ( (v25 & 0x40000) != 0 )
      {
        if ( !a2 )
        {
          if ( qword_1C02517A0 )
          {
            v28 = qword_1C02517A0();
            v26 = v61;
          }
          else
          {
            v28 = -1073741637;
          }
          if ( v28 >= 0 && qword_1C02517A8 )
            qword_1C02517A8(*(_QWORD *)(v20 + 1800), v26);
        }
        goto LABEL_59;
      }
    }
    v29 = v61;
    goto LABEL_58;
  }
  return v6;
}
