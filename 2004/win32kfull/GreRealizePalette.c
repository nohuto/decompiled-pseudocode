/*
 * XREFs of GreRealizePalette @ 0x1C003075C
 * Callers:
 *     xxxRealizePalette @ 0x1C00308F0 (xxxRealizePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C0274664 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0079F40 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00EA4AC (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02B7844 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02BD020 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 */

__int64 __fastcall GreRealizePalette(HDC a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  HPALETTE v8; // rdi
  DYNAMICMODECHANGESHARELOCK *v9; // rcx
  unsigned int v10; // ebx
  __int64 v12; // rcx
  unsigned int v13; // eax
  _DWORD *v14; // rdx
  HDC v15; // rdi
  __int64 v16; // rcx
  _DWORD *v17; // rcx
  _DWORD *v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 matched; // rax
  HDC v23; // rbx
  __int64 v24; // rdx
  unsigned int v25; // eax
  _DWORD *v26; // rdx
  HDC v27; // rdi
  __int64 v28; // rcx
  _DWORD *v29; // rcx
  _DWORD *v30; // rax
  HDC v31; // rbx
  void (__fastcall *v32)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  _DWORD *v33; // r8
  unsigned int i; // r9d
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h] BYREF
  int v38; // [rsp+68h] [rbp-98h]
  _QWORD v39[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v40[8]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v41[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v42[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v45[8]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v46[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v47[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v48; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v49; // [rsp+F0h] [rbp-10h]
  int v50; // [rsp+F8h] [rbp-8h]
  _QWORD v51[2]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]
  __int64 v54; // [rsp+120h] [rbp+20h]
  char v55; // [rsp+168h] [rbp+68h] BYREF
  int v56; // [rsp+170h] [rbp+70h] BYREF
  int v57; // [rsp+178h] [rbp+78h] BYREF

  v57 = 0;
  v56 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v39, a1);
  v4 = v39[0];
  if ( !v39[0] )
    goto LABEL_9;
  v36 = *(_QWORD *)(v39[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v55, v1, v2, v3);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v45, (struct PDEVOBJ *)&v36);
  v44 = *(_QWORD *)(v36 + 64);
  GreAcquireSemaphore(v44);
  v5 = v36;
  v51[1] = 0LL;
  v52 = 256;
  v48 = 0LL;
  v54 = 0LL;
  v53 = 0LL;
  v51[0] = 0LL;
  v50 = 1;
  if ( (*(_DWORD *)(v36 + 40) & 1) != 0 )
  {
    *(_QWORD *)&v48 = *(_QWORD *)(v36 + 48);
    v49 = v36;
    GreAcquireSemaphore(v48);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v48, 11LL);
    v5 = v36;
  }
  v6 = *(_QWORD *)(v5 + 1808);
  v35 = v6;
  v7 = *(_QWORD *)(v39[0] + 88LL);
  v8 = *(HPALETTE *)v7;
  if ( (*(_DWORD *)(v5 + 2172) & 0x100) != 0 )
  {
    v43 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    if ( v8 == hForePalette
      || *(_DWORD *)(*(_QWORD *)(v39[0] + 976LL) + 208LL) == 1
      && (v12 = (unsigned __int16)hForePalette | ((unsigned int)hForePalette >> 8) & 0xFF0000,
          ((unsigned __int16)v8 | ((unsigned int)v8 >> 8) & 0xFF0000) == (_DWORD)v12)
      && hForePID == (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v12) )
    {
      if ( (struct PALETTE *)v7 == ppalDefault )
        goto LABEL_75;
      v24 = *(_QWORD *)(v7 + 72);
      if ( v24 )
      {
        if ( v24 == *(_QWORD *)(v7 + 80) )
        {
          v25 = XEPALOBJ::ulTime((XEPALOBJ *)&v35);
          if ( *v26 == v25 )
            goto LABEL_75;
        }
      }
      GreAcquireHmgrSemaphore();
      v27 = *(HDC *)(v7 + 40);
      while ( v27 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v42, v27);
        if ( !v42[0] )
          goto LABEL_71;
        *(_DWORD *)(*(_QWORD *)(v42[0] + 976LL) + 152LL) = *(_DWORD *)(*(_QWORD *)(v39[0] + 976LL) + 152LL) | 0xF;
        v27 = *(HDC *)(v42[0] + 984LL);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v42);
        v42[0] = 0LL;
      }
      v28 = *(_QWORD *)(v7 + 88);
      if ( v28 )
      {
        if ( v28 != *(_QWORD *)(v7 + 72) )
          Win32FreePool(v28);
        *(_QWORD *)(v7 + 88) = 0LL;
      }
      v29 = *(_DWORD **)(v7 + 72);
      v30 = v29;
      if ( v29 && !*v29 )
      {
        if ( *(_DWORD **)(v7 + 80) != v29 )
          Win32FreePool(v29);
        *(_QWORD *)(v7 + 72) = 0LL;
        v30 = 0LL;
      }
      if ( v30 )
        vMatchAPal(v39[0], v35, v7, &v56, &v57);
      else
        *(_QWORD *)(v7 + 72) = ptransMatchAPal(v29, v35, v7, 1LL, &v56, &v57);
      *(_QWORD *)(v7 + 88) = *(_QWORD *)(v7 + 80);
      *(_QWORD *)(v7 + 80) = *(_QWORD *)(v7 + 72);
LABEL_71:
      v31 = *(HDC *)(v7 + 40);
      while ( v31 != v27 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v47, v31);
        _InterlockedDecrement((volatile signed __int32 *)(v47[0] + 12LL));
        v31 = *(HDC *)(v47[0] + 984LL);
        XDCOBJ::vUnlockFast((XDCOBJ *)v47);
      }
    }
    else
    {
      if ( (struct PALETTE *)v7 == ppalDefault )
        goto LABEL_75;
      if ( *(_QWORD *)(v7 + 80) )
      {
        v13 = XEPALOBJ::ulTime((XEPALOBJ *)&v35);
        if ( *v14 == v13 )
          goto LABEL_75;
      }
      GreAcquireHmgrSemaphore();
      v15 = *(HDC *)(v7 + 40);
      while ( v15 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v41, v15);
        if ( !v41[0] )
          goto LABEL_44;
        *(_DWORD *)(*(_QWORD *)(v41[0] + 976LL) + 152LL) = *(_DWORD *)(*(_QWORD *)(v39[0] + 976LL) + 152LL) | 0xF;
        v15 = *(HDC *)(v41[0] + 984LL);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v41);
        v41[0] = 0LL;
      }
      v16 = *(_QWORD *)(v7 + 88);
      if ( v16 )
      {
        if ( v16 != *(_QWORD *)(v7 + 72) )
          Win32FreePool(v16);
        *(_QWORD *)(v7 + 88) = 0LL;
      }
      v17 = *(_DWORD **)(v7 + 72);
      v18 = v17;
      if ( v17 && !*v17 )
      {
        if ( *(_DWORD **)(v7 + 80) != v17 )
          Win32FreePool(v17);
        *(_QWORD *)(v7 + 72) = 0LL;
        v18 = 0LL;
      }
      if ( !v18 )
      {
        v38 = 0;
        v37 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v37, 1u, *(_DWORD *)(v35 + 28), 0LL, 0, 0, 0, 0x800u, 1) )
        {
          v19 = *(unsigned int *)(v35 + 28);
          v20 = *(_DWORD *)(v37 + 28);
          if ( (unsigned int)v19 >= v20 )
            v19 = v20;
          memmove(*(void **)(v37 + 112), *(const void **)(v35 + 112), 4 * v19);
          *(_DWORD *)(v37 + 60) = *(_DWORD *)(v35 + 60);
          *(_DWORD *)(v37 + 24) = *(_DWORD *)(v35 + 24);
          XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v37);
          *(_QWORD *)(v7 + 72) = ptransMatchAPal(v21, v37, v7, 1LL, v40, v40);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v37);
        v18 = *(_DWORD **)(v7 + 72);
      }
      *(_QWORD *)(v7 + 88) = *(_QWORD *)(v7 + 80);
      if ( v18 )
      {
        matched = ptransMatchAPal(v17, v35, v7, 0LL, &v56, &v57);
        *(_QWORD *)(v7 + 80) = matched;
        if ( !matched )
          *(_QWORD *)(v7 + 80) = *(_QWORD *)(v7 + 72);
      }
      else
      {
        *(_QWORD *)(v7 + 80) = 0LL;
      }
LABEL_44:
      v23 = *(HDC *)(v7 + 40);
      while ( v23 != v15 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v46, v23);
        _InterlockedDecrement((volatile signed __int32 *)(v46[0] + 12LL));
        v23 = *(HDC *)(v46[0] + 984LL);
        XDCOBJ::vUnlockFast((XDCOBJ *)v46);
      }
    }
    GreReleaseHmgrSemaphore();
LABEL_75:
    SEMOBJ::vUnlock((SEMOBJ *)&v43);
    v5 = v36;
    v6 = v35;
  }
  if ( v56 )
  {
    if ( (*(_DWORD *)(v5 + 40) & 0x400) == 0 )
    {
      v32 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v5 + 1768);
      if ( v32 )
      {
        v32(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 1800LL), &v35, 0LL, 0LL, *(_DWORD *)(v6 + 28));
        v6 = v35;
      }
    }
    if ( *(_DWORD *)(v6 + 28) == 256 )
    {
      v33 = &aPalHalftone;
      for ( i = 0; i < 0x100; ++i )
      {
        if ( ((*v33 ^ *(_DWORD *)((char *)v33 + *(_QWORD *)(v6 + 112) - (_QWORD)&aPalHalftone)) & 0xFFFFFF) != 0 )
          break;
        ++v33;
      }
      if ( i == 256 )
        *(_DWORD *)(v6 + 24) |= 0x100000u;
      else
        *(_DWORD *)(v6 + 24) &= ~0x100000u;
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v48);
  if ( v51[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v51);
  SEMOBJ::vUnlock((SEMOBJ *)&v44);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v45);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v9);
  v4 = v39[0];
LABEL_9:
  v10 = v57 | (v56 << 16);
  if ( v4 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v39);
  return v10;
}
