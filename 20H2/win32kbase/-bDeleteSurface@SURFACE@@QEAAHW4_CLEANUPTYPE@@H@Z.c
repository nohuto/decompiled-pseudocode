/*
 * XREFs of ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2190
 * Callers:
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0018F80 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00CEC10 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     GreGetObjectOwner @ 0x1C001F270 (GreGetObjectOwner.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C003D898 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003D9C0 (GreReleaseSemaphoreInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     DEC_SHARE_REF_CNT @ 0x1C00440A0 (DEC_SHARE_REF_CNT.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00475D0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgRemoveObject @ 0x1C004A7D0 (HmgRemoveObject.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C004C120 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C004C630 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C0057950 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C005E6A8 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C005E6D8 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     EngFreeUserMem @ 0x1C0063C10 (EngFreeUserMem.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C0067070 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C0092FEC (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0094D5C (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C00964E0 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00A0850 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     EngSetLastError @ 0x1C00AAA00 (EngSetLastError.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00B0344 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00C52A4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C0140A00 (-vFreeKernelSection@@YAXPEAX@Z.c)
 */

__int64 __fastcall SURFACE::bDeleteSurface(SURFACE *a1, int a2, int a3)
{
  unsigned int v6; // esi
  char *v7; // r14
  char *v8; // rdx
  __int64 *v9; // rax
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
  __int64 *v26; // rdx
  void (__fastcall *v27)(__int64 *); // rax
  int v28; // eax
  __int64 *v29; // rcx
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
  __int64 *v44; // rax
  __int64 *v45; // rcx
  __int64 **v46; // rdx
  __int64 v47; // rbx
  __int64 v48; // rdx
  int v49; // r8d
  __int64 v50; // rdx
  int v51; // r8d
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  int v54; // [rsp+58h] [rbp-A8h]
  int v55; // [rsp+5Ch] [rbp-A4h]
  unsigned int v56; // [rsp+60h] [rbp-A0h]
  __int64 v57; // [rsp+68h] [rbp-98h] BYREF
  PEPROCESS Process; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v59; // [rsp+78h] [rbp-88h]
  HANDLE SecureHandle; // [rsp+80h] [rbp-80h]
  HANDLE v61; // [rsp+88h] [rbp-78h]
  __int64 v62; // [rsp+90h] [rbp-70h]
  PVOID v63; // [rsp+98h] [rbp-68h]
  struct HOBJ__ *v64; // [rsp+A0h] [rbp-60h]
  PERESOURCE v65; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp-50h] BYREF
  HSEMAPHORE v67; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v68; // [rsp+C0h] [rbp-40h]
  __int64 v69; // [rsp+C8h] [rbp-38h]
  __int64 v70; // [rsp+D0h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+D8h] [rbp-28h]
  __int128 v72; // [rsp+E8h] [rbp-18h]
  __int64 v73; // [rsp+F8h] [rbp-8h]
  _OWORD v74[3]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v75[128]; // [rsp+130h] [rbp+30h] BYREF
  unsigned int v76; // [rsp+1C0h] [rbp+C0h] BYREF
  int v77; // [rsp+1D8h] [rbp+D8h] BYREF

  v6 = 1;
  if ( a1 != SURFACE::pdibDefault && a1 )
  {
    v7 = 0LL;
    v8 = (char *)*((_QWORD *)a1 + 9);
    v61 = 0LL;
    v62 = 0LL;
    SecureHandle = 0LL;
    v54 = 0;
    if ( !*((_WORD *)a1 + 50) )
    {
      v61 = (HANDLE)*((_QWORD *)a1 + 24);
      v62 = *((_QWORD *)a1 + 23);
      v54 = *((_DWORD *)a1 + 54);
      v7 = &v8[-(unsigned __int16)*((_DWORD *)a1 + 53)];
      SecureHandle = (HANDLE)*((_QWORD *)a1 + 28);
    }
    v9 = (__int64 *)*((_QWORD *)a1 + 3);
    v10 = *((_OWORD *)a1 + 18);
    v11 = *((_QWORD *)a1 + 16);
    v12 = *((_DWORD *)a1 + 80);
    v74[0] = *((_OWORD *)a1 + 17);
    v59 = v9;
    v13 = *((_OWORD *)a1 + 19);
    v68 = *((_QWORD *)a1 + 17);
    LODWORD(v9) = *((unsigned __int16 *)a1 + 51);
    v74[2] = v13;
    v55 = (int)v9;
    v14 = *(_OWORD *)((char *)a1 + 584);
    v15 = (void *)*((_QWORD *)a1 + 31);
    v74[1] = v10;
    v69 = v11;
    v16 = *(_OWORD *)((char *)a1 + 600);
    *(_OWORD *)Object = v14;
    BaseAddress = v8;
    v73 = *((_QWORD *)a1 + 77);
    v63 = v15;
    v72 = v16;
    IsSemaphoreOwnedOrSharedByCurrentThread = GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange);
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
      (NEEDDYNAMICMODECHANGESHARELOCK *)&v77,
      IsSemaphoreOwnedOrSharedByCurrentThread == 0,
      v18);
    v20 = *((_QWORD *)a1 + 6);
    v57 = v20;
    if ( (!v20 || (*((_DWORD *)a1 + 28) & 0x400000) == 0 || (*(_DWORD *)(v20 + 40) & 1) == 0) && v77 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v19);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      v77 = 0;
    }
    v65 = 0LL;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v75);
    if ( (*((_DWORD *)a1 + 28) & 0x400000) != 0 && v20 )
    {
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v65, (struct PDEVOBJ *)&v57);
      DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v75, (struct PDEVOBJ *)&v57);
    }
    else
    {
      DEVLOCKOBJ::vInit((DEVLOCKOBJ *)v75);
    }
    v64 = *(struct HOBJ__ **)a1;
    ObjectOwner = GreGetObjectOwner((unsigned int)v64, 5);
    v76 = 0;
    v56 = ObjectOwner;
    if ( !a3
      && !HmgRemoveObject((unsigned int)v64, 0, 1, a2 == 2, 5, &v76)
      && ((unsigned int)(a2 - 1) > 1 || !HmgRemoveObject(*(_QWORD *)a1, 0, 0, a2 == 2, 5, &v76))
      && (a2 != 3 || !HmgRemoveObjectImpl(*(struct HOBJ__ **)a1, 0, 1, 2, 5, &v76)) )
    {
      if ( v76 == 1 )
      {
        if ( (*((_DWORD *)a1 + 28) & 0x800) == 0 )
        {
          EngSetLastError(0xAAu);
LABEL_25:
          v6 = 0;
LABEL_119:
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v75);
          NEEDGRELOCK::vUnlock(&v65, v48, v49);
          NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK(
            (NEEDDYNAMICMODECHANGESHARELOCK *)&v77,
            v50,
            v51);
          return v6;
        }
      }
      else
      {
        if ( !*((_QWORD *)a1 + 20)
          && ((*(_DWORD *)a1 & 0x800000) == 0 || (*((_WORD *)a1 + 51) & 0x200) == 0)
          && (*((_DWORD *)a1 + 28) & 0x800) == 0 )
        {
          goto LABEL_25;
        }
        v22 = *((_DWORD *)a1 + 28);
        if ( (v22 & 0x800) != 0 )
        {
          if ( !*((_DWORD *)a1 + 80) )
          {
            *((_DWORD *)a1 + 80) = 1;
            _InterlockedAdd(&glRenderEndDelete, 1u);
          }
        }
        else
        {
          *((_DWORD *)a1 + 28) = v22 | 0x1000000;
        }
      }
      DEC_SHARE_REF_CNT((unsigned int *)a1);
      goto LABEL_119;
    }
    if ( v12 )
    {
      _InterlockedDecrement(&glRenderEndDelete);
      v20 = v57;
    }
    v23 = -1073741637;
    if ( qword_1C024F790 )
      v24 = qword_1C024F790();
    else
      v24 = -1073741637;
    if ( v24 >= 0 && qword_1C024F798 )
      qword_1C024F798(a1);
    v25 = *((_DWORD *)a1 + 28);
    if ( (v25 & 0x400000) == 0 || (v26 = v59) == 0LL || !v20 )
    {
LABEL_59:
      v30 = SecureHandle;
      if ( SecureHandle )
      {
        if ( *((_DWORD *)a1 + 52) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          MmUnsecureVirtualMemory(v30);
        goto LABEL_109;
      }
      if ( v54 )
      {
        if ( BaseAddress )
          MmUnmapViewInSessionSpace(v7);
        goto LABEL_109;
      }
      v31 = v61;
      if ( v61 )
      {
        if ( *((_DWORD *)a1 + 52) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          MmUnsecureVirtualMemory(v31);
          if ( BaseAddress )
          {
            if ( v62 )
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
      if ( (v55 & 8) == 0 )
      {
        if ( (v55 & 0x800) != 0 )
        {
          v67 = ghsemMapRot;
          EngAcquireSemaphore(ghsemMapRot);
          v43 = (_QWORD *)*((_QWORD *)a1 + 33);
          if ( v43 )
          {
            v44 = (__int64 *)((char *)a1 + 528);
            v45 = (__int64 *)*((_QWORD *)a1 + 66);
            if ( v45 != (__int64 *)((char *)a1 + 528) )
            {
              if ( (__int64 *)v45[1] != v44 || (v46 = (__int64 **)*((_QWORD *)a1 + 67), *v46 != v44) )
                __fastfail(3u);
              *v46 = v45;
              v45[1] = (__int64)v46;
            }
            if ( BaseAddress && v63 )
              MmUnmapViewOfSection(*v43, BaseAddress);
          }
          W32PIDLOCK::vCleanUp((REGION **)v74);
          if ( v63 )
            ObfDereferenceObject(v63);
          SEMOBJ::vUnlock((PERESOURCE *)&v67);
        }
        else if ( (v55 & 0x10) != 0 )
        {
          vFreeKernelSection(BaseAddress);
        }
        goto LABEL_109;
      }
      if ( (v55 & 0x80u) == 0 )
      {
        EngFreeUserMem(BaseAddress);
LABEL_109:
        if ( (*((_DWORD *)a1 + 29) & 0x1000) != 0 )
          DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 4LL, v64, v76, v56, 0LL, 0LL, 0);
        SURFACE::Free((PSLIST_ENTRY)a1);
        v47 = v68;
        if ( v68 )
        {
          if ( qword_1C024F7C0 )
            v23 = qword_1C024F7C0();
          if ( v23 >= 0 && qword_1C024F7C8 )
            qword_1C024F7C8(v47);
        }
        if ( v69 )
        {
          v70 = v69;
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v70);
        }
        goto LABEL_119;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v35 = DWORD2(v72);
      v36 = ThreadWin32Thread;
      v37 = Object[1];
      if ( DWORD2(v72) )
        v37 = BaseAddress;
      CurrentProcess = PsGetCurrentProcess(v34, v33);
      MmUnmapViewOfSection(CurrentProcess, v37);
      if ( v36 && (v39 = *(_QWORD *)(v36 + 72)) != 0 )
      {
        v40 = *(_DWORD *)(v39 + 8);
      }
      else
      {
        if ( !(_DWORD)v73 )
        {
          if ( qword_1C024F7B0 )
            v42 = qword_1C024F7B0();
          else
            v42 = -1073741637;
          if ( v42 >= 0 && qword_1C024F7B8 )
            qword_1C024F7B8(BaseAddress);
          goto LABEL_84;
        }
        v40 = HIDWORD(v72);
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
    if ( (*((_DWORD *)a1 + 29) & 9) != 0 )
    {
      v27 = *(void (__fastcall **)(__int64 *))(v20 + 2664);
      if ( v27 )
      {
        v29 = (__int64 *)((char *)a1 + 24);
LABEL_58:
        v27(v29);
        goto LABEL_59;
      }
      v27 = *(void (__fastcall **)(__int64 *))(v20 + 3448);
      if ( !v27 )
        goto LABEL_59;
    }
    else
    {
      v27 = *(void (__fastcall **)(__int64 *))(v20 + 2776);
      if ( !v27 )
        goto LABEL_59;
      if ( (v25 & 0x40000) != 0 )
      {
        if ( !a2 )
        {
          if ( qword_1C024F7A0 )
          {
            v28 = qword_1C024F7A0();
            v26 = v59;
          }
          else
          {
            v28 = -1073741637;
          }
          if ( v28 >= 0 && qword_1C024F7A8 )
            qword_1C024F7A8(*(_QWORD *)(v20 + 1800), v26);
        }
        goto LABEL_59;
      }
    }
    v29 = v59;
    goto LABEL_58;
  }
  return v6;
}
