/*
 * XREFs of GreRealizePalette @ 0x1C01134BC
 * Callers:
 *     xxxRealizePalette @ 0x1C0113460 (xxxRealizePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C027309C (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0098FF0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0099034 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C00A53E0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00E670C (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02AD17C (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02BBAC0 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 */

__int64 __fastcall GreRealizePalette(HDC a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rbx
  HPALETTE v5; // rdi
  DYNAMICMODECHANGESHARELOCK *v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // eax
  _DWORD *v12; // rdx
  HDC v13; // rdi
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  _DWORD *v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 matched; // rax
  HDC v21; // rbx
  __int64 v22; // rdx
  int v23; // eax
  _DWORD *v24; // rdx
  HDC v25; // rdi
  __int64 v26; // rcx
  _DWORD *v27; // rcx
  _DWORD *v28; // rax
  HDC v29; // rbx
  void (__fastcall *v30)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  _DWORD *v31; // r8
  unsigned int i; // r9d
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+68h] [rbp-98h]
  _QWORD v37[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v38[8]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v39[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v40[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v43[8]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v44[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v45[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v46; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v47; // [rsp+F0h] [rbp-10h]
  int v48; // [rsp+F8h] [rbp-8h]
  _QWORD v49[2]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  __int64 v52; // [rsp+120h] [rbp+20h]
  char v53; // [rsp+168h] [rbp+68h] BYREF
  int v54; // [rsp+170h] [rbp+70h] BYREF
  int v55; // [rsp+178h] [rbp+78h] BYREF

  v55 = 0;
  v54 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v37, a1);
  v1 = v37[0];
  if ( !v37[0] )
    goto LABEL_9;
  v34 = *(_QWORD *)(v37[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v53);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v43, (struct PDEVOBJ *)&v34);
  v42 = *(_QWORD *)(v34 + 64);
  GreAcquireSemaphore(v42);
  v2 = v34;
  v49[1] = 0LL;
  v50 = 256;
  v46 = 0LL;
  v52 = 0LL;
  v51 = 0LL;
  v49[0] = 0LL;
  v48 = 1;
  if ( (*(_DWORD *)(v34 + 40) & 1) != 0 )
  {
    *(_QWORD *)&v46 = *(_QWORD *)(v34 + 48);
    v47 = v34;
    GreAcquireSemaphore(v46);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v46, 11LL);
    v2 = v34;
  }
  v3 = *(_QWORD *)(v2 + 1808);
  v33 = v3;
  v4 = *(_QWORD *)(v37[0] + 88LL);
  v5 = *(HPALETTE *)v4;
  if ( (*(_DWORD *)(v2 + 2172) & 0x100) != 0 )
  {
    v41 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    if ( v5 == hForePalette
      || *(_DWORD *)(*(_QWORD *)(v37[0] + 976LL) + 208LL) == 1
      && (v9 = (unsigned __int16)v5 | ((unsigned int)v5 >> 8) & 0xFF0000,
          v10 = (unsigned __int16)hForePalette | ((unsigned int)hForePalette >> 8) & 0xFF0000,
          (_DWORD)v9 == (_DWORD)v10)
      && hForePID == (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v10, (unsigned int)hForePalette, v9) )
    {
      if ( (struct PALETTE *)v4 == ppalDefault )
        goto LABEL_75;
      v22 = *(_QWORD *)(v4 + 72);
      if ( v22 )
      {
        if ( v22 == *(_QWORD *)(v4 + 80) )
        {
          v23 = XEPALOBJ::ulTime((XEPALOBJ *)&v33);
          if ( *v24 == v23 )
            goto LABEL_75;
        }
      }
      GreAcquireHmgrSemaphore();
      v25 = *(HDC *)(v4 + 40);
      while ( v25 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v40, v25);
        if ( !v40[0] )
          goto LABEL_71;
        *(_DWORD *)(*(_QWORD *)(v40[0] + 976LL) + 152LL) = *(_DWORD *)(*(_QWORD *)(v37[0] + 976LL) + 152LL) | 0xF;
        v25 = *(HDC *)(v40[0] + 984LL);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v40);
        v40[0] = 0LL;
      }
      v26 = *(_QWORD *)(v4 + 88);
      if ( v26 )
      {
        if ( v26 != *(_QWORD *)(v4 + 72) )
          Win32FreePool(v26);
        *(_QWORD *)(v4 + 88) = 0LL;
      }
      v27 = *(_DWORD **)(v4 + 72);
      v28 = v27;
      if ( v27 && !*v27 )
      {
        if ( *(_DWORD **)(v4 + 80) != v27 )
          Win32FreePool(v27);
        *(_QWORD *)(v4 + 72) = 0LL;
        v28 = 0LL;
      }
      if ( v28 )
        vMatchAPal(v37[0], v33, v4, &v54, &v55);
      else
        *(_QWORD *)(v4 + 72) = ptransMatchAPal(v27, v33, v4, 1LL, &v54, &v55);
      *(_QWORD *)(v4 + 88) = *(_QWORD *)(v4 + 80);
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 72);
LABEL_71:
      v29 = *(HDC *)(v4 + 40);
      while ( v29 != v25 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v45, v29);
        _InterlockedDecrement((volatile signed __int32 *)(v45[0] + 12LL));
        v29 = *(HDC *)(v45[0] + 984LL);
        XDCOBJ::vUnlockFast((XDCOBJ *)v45);
      }
    }
    else
    {
      if ( (struct PALETTE *)v4 == ppalDefault )
        goto LABEL_75;
      if ( *(_QWORD *)(v4 + 80) )
      {
        v11 = XEPALOBJ::ulTime((XEPALOBJ *)&v33);
        if ( *v12 == v11 )
          goto LABEL_75;
      }
      GreAcquireHmgrSemaphore();
      v13 = *(HDC *)(v4 + 40);
      while ( v13 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v39, v13);
        if ( !v39[0] )
          goto LABEL_44;
        *(_DWORD *)(*(_QWORD *)(v39[0] + 976LL) + 152LL) = *(_DWORD *)(*(_QWORD *)(v37[0] + 976LL) + 152LL) | 0xF;
        v13 = *(HDC *)(v39[0] + 984LL);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v39);
        v39[0] = 0LL;
      }
      v14 = *(_QWORD *)(v4 + 88);
      if ( v14 )
      {
        if ( v14 != *(_QWORD *)(v4 + 72) )
          Win32FreePool(v14);
        *(_QWORD *)(v4 + 88) = 0LL;
      }
      v15 = *(_DWORD **)(v4 + 72);
      v16 = v15;
      if ( v15 && !*v15 )
      {
        if ( *(_DWORD **)(v4 + 80) != v15 )
          Win32FreePool(v15);
        *(_QWORD *)(v4 + 72) = 0LL;
        v16 = 0LL;
      }
      if ( !v16 )
      {
        v36 = 0;
        v35 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v35, 1u, *(_DWORD *)(v33 + 28), 0LL, 0, 0, 0, 0x800u, 1) )
        {
          v17 = *(unsigned int *)(v33 + 28);
          v18 = *(_DWORD *)(v35 + 28);
          if ( (unsigned int)v17 >= v18 )
            v17 = v18;
          memmove(*(void **)(v35 + 112), *(const void **)(v33 + 112), 4 * v17);
          *(_DWORD *)(v35 + 60) = *(_DWORD *)(v33 + 60);
          *(_DWORD *)(v35 + 24) = *(_DWORD *)(v33 + 24);
          XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v35);
          *(_QWORD *)(v4 + 72) = ptransMatchAPal(v19, v35, v4, 1LL, v38, v38);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v35);
        v16 = *(_DWORD **)(v4 + 72);
      }
      *(_QWORD *)(v4 + 88) = *(_QWORD *)(v4 + 80);
      if ( v16 )
      {
        matched = ptransMatchAPal(v15, v33, v4, 0LL, &v54, &v55);
        *(_QWORD *)(v4 + 80) = matched;
        if ( !matched )
          *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 72);
      }
      else
      {
        *(_QWORD *)(v4 + 80) = 0LL;
      }
LABEL_44:
      v21 = *(HDC *)(v4 + 40);
      while ( v21 != v13 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v44, v21);
        _InterlockedDecrement((volatile signed __int32 *)(v44[0] + 12LL));
        v21 = *(HDC *)(v44[0] + 984LL);
        XDCOBJ::vUnlockFast((XDCOBJ *)v44);
      }
    }
    GreReleaseHmgrSemaphore();
LABEL_75:
    SEMOBJ::vUnlock((SEMOBJ *)&v41);
    v2 = v34;
    v3 = v33;
  }
  if ( v54 )
  {
    if ( (*(_DWORD *)(v2 + 40) & 0x400) == 0 )
    {
      v30 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v2 + 1768);
      if ( v30 )
      {
        v30(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 1800LL), &v33, 0LL, 0LL, *(_DWORD *)(v3 + 28));
        v3 = v33;
      }
    }
    if ( *(_DWORD *)(v3 + 28) == 256 )
    {
      v31 = &aPalHalftone;
      for ( i = 0; i < 0x100; ++i )
      {
        if ( ((*v31 ^ *(_DWORD *)((char *)v31 + *(_QWORD *)(v3 + 112) - (_QWORD)&aPalHalftone)) & 0xFFFFFF) != 0 )
          break;
        ++v31;
      }
      if ( i == 256 )
        *(_DWORD *)(v3 + 24) |= 0x100000u;
      else
        *(_DWORD *)(v3 + 24) &= ~0x100000u;
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v46);
  if ( v49[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v49);
  SEMOBJ::vUnlock((SEMOBJ *)&v42);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v43);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6);
  v1 = v37[0];
LABEL_9:
  v7 = v55 | (v54 << 16);
  if ( v1 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v37);
  return v7;
}
