/*
 * XREFs of ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2860
 * Callers:
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0099640 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00CE7FC (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     hbmSelectBitmapInternal @ 0x1C00CF550 (hbmSelectBitmapInternal.c)
 * Callees:
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C0008D54 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreGetObjectOwner @ 0x1C000EF40 (GreGetObjectOwner.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C0019388 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001B60C (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C001C360 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C002EC90 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     EngFreeUserMem @ 0x1C00313A0 (EngFreeUserMem.c)
 *     EngSetLastError @ 0x1C003C4D0 (EngSetLastError.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0074A78 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074AA8 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C007B7C8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C007B8F0 (GreReleaseSemaphoreInternal.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0082610 (DEC_SHARE_REF_CNT.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00865B0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgRemoveObject @ 0x1C00897F0 (HmgRemoveObject.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C008C080 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008C33C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C008C8D0 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C00B4E00 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00C5914 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled@@YAHXZ @ 0x1C00CEC5C (-Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C0149230 (-vFreeKernelSection@@YAXPEAX@Z.c)
 */

__int64 __fastcall SURFACE::bDeleteSurface(__int64 a1, int a2, int a3)
{
  unsigned int v6; // esi
  char *v7; // r15
  char *v8; // rdx
  __int64 v9; // rax
  __int128 v10; // xmm1
  struct OBJECT *v11; // rcx
  __int16 v12; // r13
  __int128 v13; // xmm0
  void *v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // r8d
  BOOL v18; // edx
  __int64 v19; // rax
  int IsSemaphoreOwnedOrSharedByCurrentThread; // eax
  __int64 v21; // rbx
  int v22; // r8d
  unsigned int ObjectOwner; // eax
  ULONG_PTR BugCheckParameter4; // r14
  int v25; // eax
  int v26; // r12d
  int v27; // eax
  int v28; // ecx
  __int64 v29; // rdx
  void (__fastcall *v30)(__int64); // rax
  int v31; // eax
  __int64 v32; // rcx
  HANDLE v33; // rbx
  HANDLE v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 CurrentProcess; // rax
  __int64 v38; // rax
  int v39; // ecx
  int v40; // eax
  _QWORD *v41; // r8
  __int64 v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rdx
  __int64 v45; // rdx
  int v46; // r8d
  __int64 v47; // rbx
  __int64 v48; // rdx
  int v49; // r8d
  __int64 v50; // rdx
  int v51; // r8d
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  int v54; // [rsp+58h] [rbp-A8h]
  PEPROCESS Process; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v56; // [rsp+68h] [rbp-98h]
  __int64 v57; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+78h] [rbp-88h]
  HANDLE SecureHandle; // [rsp+80h] [rbp-80h]
  HANDLE v60; // [rsp+88h] [rbp-78h]
  __int64 v61; // [rsp+90h] [rbp-70h]
  PVOID v62; // [rsp+98h] [rbp-68h]
  __int64 v63; // [rsp+A0h] [rbp-60h]
  PERESOURCE v64; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp-50h] BYREF
  PERESOURCE v66; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v67; // [rsp+C0h] [rbp-40h]
  struct OBJECT *v68; // [rsp+C8h] [rbp-38h]
  struct OBJECT *v69; // [rsp+D0h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+D8h] [rbp-28h]
  __int128 v71; // [rsp+E8h] [rbp-18h]
  __int64 v72; // [rsp+F8h] [rbp-8h]
  _OWORD v73[3]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v74[128]; // [rsp+130h] [rbp+30h] BYREF
  unsigned int v75; // [rsp+1C0h] [rbp+C0h] BYREF
  int v76; // [rsp+1C8h] [rbp+C8h]
  int v77; // [rsp+1D8h] [rbp+D8h] BYREF

  v76 = a2;
  v6 = 1;
  if ( (SURFACE *)a1 != SURFACE::pdibDefault && a1 )
  {
    v7 = 0LL;
    v8 = *(char **)(a1 + 72);
    v60 = 0LL;
    v61 = 0LL;
    SecureHandle = 0LL;
    v54 = 0;
    if ( !*(_WORD *)(a1 + 100) )
    {
      v60 = *(HANDLE *)(a1 + 192);
      v61 = *(_QWORD *)(a1 + 184);
      v54 = *(_DWORD *)(a1 + 216);
      v7 = &v8[-(unsigned __int16)*(_DWORD *)(a1 + 212)];
      SecureHandle = *(HANDLE *)(a1 + 224);
    }
    v9 = *(_QWORD *)(a1 + 24);
    v10 = *(_OWORD *)(a1 + 288);
    v11 = *(struct OBJECT **)(a1 + 128);
    v12 = *(_WORD *)(a1 + 102);
    v73[0] = *(_OWORD *)(a1 + 272);
    v58 = v9;
    v13 = *(_OWORD *)(a1 + 304);
    v67 = *(_QWORD *)(a1 + 136);
    v14 = *(void **)(a1 + 248);
    v73[2] = v13;
    v62 = v14;
    v15 = *(_OWORD *)(a1 + 584);
    LODWORD(v14) = *(_DWORD *)(a1 + 320);
    v73[1] = v10;
    v68 = v11;
    v16 = *(_OWORD *)(a1 + 600);
    BaseAddress = v8;
    *(_OWORD *)Object = v15;
    LODWORD(Process) = (_DWORD)v14;
    v72 = *(_QWORD *)(a1 + 616);
    v71 = v16;
    if ( (unsigned int)Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled() )
    {
      v18 = GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange) == 0;
    }
    else
    {
      v19 = *(_QWORD *)(a1 + 48);
      if ( !v19
        || (*(_DWORD *)(a1 + 112) & 0x400000) == 0
        || (*(_DWORD *)(v19 + 40) & 1) == 0
        || (IsSemaphoreOwnedOrSharedByCurrentThread = GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange),
            v18 = 1,
            IsSemaphoreOwnedOrSharedByCurrentThread) )
      {
        v18 = 0;
      }
    }
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v77, v18, v17);
    v21 = *(_QWORD *)(a1 + 48);
    v57 = v21;
    if ( (unsigned int)Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled()
      && (!v21 || (*(_DWORD *)(a1 + 112) & 0x400000) == 0 || (*(_DWORD *)(v21 + 40) & 1) == 0)
      && v77 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v22);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      v77 = 0;
    }
    v64 = 0LL;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v74);
    if ( (*(_DWORD *)(a1 + 112) & 0x400000) != 0 && v21 )
    {
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v64, (struct PDEVOBJ *)&v57);
      DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v74, (struct PDEVOBJ *)&v57);
    }
    else
    {
      DEVLOCKOBJ::vInit((DEVLOCKOBJ *)v74);
    }
    v63 = *(_QWORD *)a1;
    ObjectOwner = GreGetObjectOwner(v63, 5);
    v75 = 0;
    v56 = ObjectOwner;
    if ( a3 || HmgRemoveObject(v63, 0, 1, a2 == 2, 5, &v75) )
    {
      BugCheckParameter4 = 0LL;
    }
    else
    {
      if ( (unsigned int)(a2 - 1) > 1 )
      {
        BugCheckParameter4 = 0LL;
      }
      else
      {
        BugCheckParameter4 = 0LL;
        if ( HmgRemoveObject(*(_QWORD *)a1, 0, 0, a2 == 2, 5, &v75) )
          goto LABEL_44;
      }
      if ( a2 != 3 || !HmgRemoveObjectImpl(*(struct HOBJ__ **)a1, 0, 1, 2, 5, &v75) )
      {
        if ( v75 == 1 )
        {
          if ( (*(_DWORD *)(a1 + 112) & 0x800) == 0 )
          {
            EngSetLastError(0xAAu);
LABEL_35:
            v6 = 0;
LABEL_126:
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v74);
            NEEDGRELOCK::vUnlock(&v64, v48, v49);
            NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK(
              (NEEDDYNAMICMODECHANGESHARELOCK *)&v77,
              v50,
              v51);
            return v6;
          }
        }
        else
        {
          if ( !*(_QWORD *)(a1 + 160)
            && ((*(_DWORD *)a1 & 0x800000) == 0 || (*(_WORD *)(a1 + 102) & 0x200) == 0)
            && (*(_DWORD *)(a1 + 112) & 0x800) == 0 )
          {
            goto LABEL_35;
          }
          v25 = *(_DWORD *)(a1 + 112);
          if ( (v25 & 0x800) != 0 )
          {
            if ( !*(_DWORD *)(a1 + 320) )
            {
              *(_DWORD *)(a1 + 320) = 1;
              _InterlockedAdd(&glRenderEndDelete, 1u);
            }
          }
          else
          {
            *(_DWORD *)(a1 + 112) = v25 | 0x1000000;
          }
        }
        DEC_SHARE_REF_CNT((int *)a1);
        goto LABEL_126;
      }
    }
LABEL_44:
    if ( (_DWORD)Process )
    {
      _InterlockedDecrement(&glRenderEndDelete);
      v21 = v57;
    }
    v26 = -1073741637;
    if ( qword_1C0257750 )
      v27 = qword_1C0257750();
    else
      v27 = -1073741637;
    if ( v27 >= 0 && qword_1C0257758 )
      qword_1C0257758(a1);
    v28 = *(_DWORD *)(a1 + 112);
    if ( (v28 & 0x400000) == 0 || (v29 = v58) == 0 || !v21 )
    {
LABEL_70:
      v33 = SecureHandle;
      if ( SecureHandle )
      {
        if ( *(_DWORD *)(a1 + 208) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          MmUnsecureVirtualMemory(v33);
        goto LABEL_116;
      }
      if ( v54 )
      {
        if ( BaseAddress )
          MmUnmapViewInSessionSpace(v7);
        goto LABEL_116;
      }
      v34 = v60;
      if ( v60 )
      {
        if ( *(_DWORD *)(a1 + 208) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          MmUnsecureVirtualMemory(v34);
          if ( BaseAddress )
          {
            if ( v61 )
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
        goto LABEL_116;
      }
      if ( (v12 & 8) == 0 )
      {
        if ( (v12 & 0x800) != 0 )
        {
          v66 = ghsemMapRot;
          EngAcquireSemaphore((HSEMAPHORE)ghsemMapRot);
          v41 = *(_QWORD **)(a1 + 264);
          if ( v41 )
          {
            v42 = a1 + 528;
            v43 = *(_QWORD *)(a1 + 528);
            if ( v43 != a1 + 528 )
            {
              if ( *(_QWORD *)(v43 + 8) != v42 || (v44 = *(_QWORD **)(a1 + 536), *v44 != v42) )
                __fastfail(3u);
              *v44 = v43;
              *(_QWORD *)(v43 + 8) = v44;
            }
            if ( BaseAddress && v62 )
              MmUnmapViewOfSection(*v41);
          }
          W32PIDLOCK::vCleanUp((REGION **)v73);
          if ( v62 )
            ObfDereferenceObject(v62);
          SEMOBJ::vUnlock((SEMOBJ *)&v66, v45, v46);
        }
        else if ( (v12 & 0x10) != 0 )
        {
          vFreeKernelSection(BaseAddress);
        }
        goto LABEL_116;
      }
      if ( (v12 & 0x80u) == 0 )
      {
        EngFreeUserMem(BaseAddress);
LABEL_116:
        if ( (*(_DWORD *)(a1 + 116) & 0x1000) != 0 )
          DbgkWerCaptureLiveKernelDump(
            L"win32kfull.sys",
            356LL,
            4LL,
            v63,
            v75,
            v56,
            BugCheckParameter4,
            BugCheckParameter4,
            BugCheckParameter4);
        SURFACE::Free((PSLIST_ENTRY)a1);
        v47 = v67;
        if ( v67 )
        {
          if ( qword_1C0257780 )
            v26 = qword_1C0257780();
          if ( v26 >= 0 && qword_1C0257788 )
            qword_1C0257788(v47);
        }
        if ( v68 )
        {
          v69 = v68;
          XEPALOBJ::vUnrefPalette(&v69);
        }
        goto LABEL_126;
      }
      BugCheckParameter4 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      CurrentProcess = PsGetCurrentProcess(v36, v35);
      MmUnmapViewOfSection(CurrentProcess);
      if ( BugCheckParameter4 && (v38 = *(_QWORD *)(BugCheckParameter4 + 72), BugCheckParameter4 = 0LL, v38) )
      {
        v39 = *(_DWORD *)(v38 + 8);
      }
      else
      {
        if ( (_DWORD)v72 == (_DWORD)BugCheckParameter4 )
        {
          if ( qword_1C0257770 )
            v40 = qword_1C0257770();
          else
            v40 = -1073741637;
          if ( v40 >= 0 && qword_1C0257778 )
            qword_1C0257778(BaseAddress);
          goto LABEL_97;
        }
        v39 = HIDWORD(v71);
      }
      Process = (PEPROCESS)BugCheckParameter4;
      if ( PsLookupProcessByProcessId((HANDLE)v39, &Process) >= 0 )
      {
        MmUnmapViewOfSection(Process);
        ObfDereferenceObject(Process);
      }
LABEL_97:
      if ( !Object[0] )
        KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, BugCheckParameter4);
      ObfDereferenceObject(Object[0]);
      goto LABEL_116;
    }
    if ( (*(_DWORD *)(a1 + 116) & 9) != 0 )
    {
      v30 = *(void (__fastcall **)(__int64))(v21 + 2664);
      if ( v30 )
      {
        v32 = a1 + 24;
LABEL_69:
        v30(v32);
        goto LABEL_70;
      }
      v30 = *(void (__fastcall **)(__int64))(v21 + 3448);
      if ( !v30 )
        goto LABEL_70;
    }
    else
    {
      v30 = *(void (__fastcall **)(__int64))(v21 + 2776);
      if ( !v30 )
        goto LABEL_70;
      if ( (v28 & 0x40000) != 0 )
      {
        if ( !v76 )
        {
          if ( qword_1C0257760 )
          {
            v31 = qword_1C0257760();
            v29 = v58;
          }
          else
          {
            v31 = -1073741637;
          }
          if ( v31 >= 0 && qword_1C0257768 )
            qword_1C0257768(*(_QWORD *)(v21 + 1800), v29);
        }
        goto LABEL_70;
      }
    }
    v32 = v58;
    goto LABEL_69;
  }
  return v6;
}
