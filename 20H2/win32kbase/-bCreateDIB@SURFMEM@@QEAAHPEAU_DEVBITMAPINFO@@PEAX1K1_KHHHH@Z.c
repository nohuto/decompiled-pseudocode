/*
 * XREFs of ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C001DB80
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C001AA60 (pProcessDfbSurfacesInternal.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C001D6D4 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     GreCreateBitmap @ 0x1C001D8A0 (GreCreateBitmap.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00CF3AC (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C001B4B8 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Allocate@SURFACE@@SAPEAV1@_KG@Z @ 0x1C001CB6C (-Allocate@SURFACE@@SAPEAV1@_KG@Z.c)
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C003DBE0 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C004AA4C (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C004C630 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C004D598 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C0057950 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     EngFreeUserMem @ 0x1C0063C10 (EngFreeUserMem.c)
 *     EngAllocUserMemEx @ 0x1C0063CE8 (EngAllocUserMemEx.c)
 *     Win32CreateSection @ 0x1C0071C38 (Win32CreateSection.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C00A87D0 (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00B0344 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C014073C (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C01407F8 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C0140A00 (-vFreeKernelSection@@YAXPEAX@Z.c)
 */

__int64 __fastcall SURFMEM::bCreateDIB(
        SURFMEM *this,
        struct _DEVBITMAPINFO *a2,
        void *a3,
        void *a4,
        unsigned int a5,
        struct _KPROCESS *a6,
        unsigned __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v14; // esi
  int v15; // r13d
  __int64 v16; // rdx
  unsigned int v17; // ecx
  unsigned int v18; // edi
  __int64 v19; // r8
  int v20; // eax
  int v21; // edi
  unsigned __int64 v22; // rcx
  __int64 v23; // r15
  int v24; // eax
  int v25; // eax
  PVOID v26; // rcx
  PVOID v27; // rax
  int v28; // r8d
  void *v30; // rax
  struct _KPROCESS *BugCheckParameter4; // r15
  unsigned __int64 v32; // rcx
  struct _SLIST_ENTRY *v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdi
  PVOID v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  PVOID v41; // rcx
  HPALETTE v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v46; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  signed __int32 v54; // ecx
  __int64 v55; // rax
  bool v56; // r9
  __int64 v57; // rdx
  struct _SLIST_ENTRY *v58; // rcx
  int v59; // eax
  __int64 v60; // rcx
  unsigned __int64 CurrentProcess; // rax
  __int128 v62; // xmm0
  _OWORD *v63; // rax
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  PEPROCESS Process; // [rsp+50h] [rbp-71h] BYREF
  PVOID Object; // [rsp+58h] [rbp-69h] BYREF
  void *v68; // [rsp+60h] [rbp-61h] BYREF
  __int64 v69; // [rsp+68h] [rbp-59h] BYREF
  _DWORD v70[2]; // [rsp+70h] [rbp-51h] BYREF
  struct _KPROCESS *v71; // [rsp+78h] [rbp-49h] BYREF
  __int128 v72; // [rsp+80h] [rbp-41h] BYREF
  __int128 v73; // [rsp+90h] [rbp-31h]
  __int128 v74; // [rsp+A0h] [rbp-21h]
  __int64 v75[10]; // [rsp+B0h] [rbp-11h] BYREF
  char v76; // [rsp+110h] [rbp+4Fh]
  int v77; // [rsp+118h] [rbp+57h]
  PVOID pv; // [rsp+120h] [rbp+5Fh] BYREF
  void *v79; // [rsp+128h] [rbp+67h]

  v79 = a4;
  pv = a3;
  *((_BYTE *)this + 8) = 8;
  *(_QWORD *)this = 0LL;
  v14 = 1;
  LOWORD(v15) = 0;
  v16 = 0LL;
  v17 = *((_DWORD *)a2 + 1);
  v18 = 0;
  if ( v17 > 0x7FFFFFFF )
    return 0LL;
  v19 = *((unsigned int *)a2 + 2);
  if ( (unsigned int)v19 > 0x7FFFFFFF )
    return 0LL;
  v20 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 1 )
  {
    v18 = ((v17 + 31) >> 3) & 0x1FFFFFFC;
    goto LABEL_21;
  }
  switch ( v20 )
  {
    case 2:
      v18 = ((v17 + 7) >> 1) & 0x7FFFFFFC;
      break;
    case 3:
      v21 = v17 + 3;
LABEL_18:
      v18 = v21 & 0xFFFFFFFC;
      break;
    case 4:
      if ( v17 + 1 >= 0x7FFFFFFF )
        return 0LL;
      v21 = 2 * v17 + 2;
      goto LABEL_18;
    case 5:
      if ( v17 >= 0x55555554 )
        return 0LL;
      v21 = 3 * (v17 + 1);
      goto LABEL_18;
    case 6:
      if ( v17 >= 0x3FFFFFFF )
        return 0LL;
      v18 = 4 * v17;
      break;
    default:
      if ( (unsigned int)(v20 - 7) > 3 )
        return 0LL;
      v16 = 1LL;
      break;
  }
LABEL_21:
  LODWORD(Process) = SURFACE::tSize;
  Object = 0LL;
  v77 = 0;
  v68 = 0LL;
  v76 = 0;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  if ( a3 )
  {
    BugCheckParameter4 = 0LL;
    if ( a9 )
    {
      v32 = (_DWORD)v16 ? *((unsigned int *)a2 + 3) : v18 * v19;
      if ( v32 > 0x7FFFFFFF )
        return 0LL;
    }
    if ( (*((_DWORD *)a2 + 6) & 0x800) == 0 )
      goto LABEL_59;
    W32PIDLOCK::vInit((W32PIDLOCK *)&v72);
    if ( *((_QWORD *)&v74 + 1) )
    {
      LOWORD(v15) = 2048;
      v77 = 1;
      goto LABEL_59;
    }
    return 0LL;
  }
  if ( (_DWORD)v16 )
    v22 = *((unsigned int *)a2 + 3);
  else
    v22 = v18 * v19;
  v23 = v22 + (unsigned int)SURFACE::tSize;
  if ( v23 < v22 || (unsigned __int64)v23 > 0x7FFFFFFF )
    return 0LL;
  v24 = *((_DWORD *)a2 + 6);
  if ( (v24 & 0x40000) != 0 && v23 > 4096 )
  {
    v24 |= 8u;
    *((_DWORD *)a2 + 6) = v24;
  }
  if ( (v24 & 8) != 0 )
  {
    if ( (v24 & 0x80u) == 0 )
      v25 = EngAllocUserMemEx((int)v23, v16, &pv);
    else
      v25 = AllocateSharedSection(v23, v16, &Object, &v68, &pv);
    if ( v25 < 0 )
      return 0LL;
    v26 = pv;
    v27 = Object;
LABEL_46:
    if ( v26 || v27 )
    {
      BugCheckParameter4 = 0LL;
      goto LABEL_59;
    }
    goto LABEL_48;
  }
  if ( (v24 & 0x810) != 0 )
  {
    if ( (v24 & 0x800) == 0 )
    {
      AllocateKernelSection(v23, v16, &pv);
      v27 = Object;
LABEL_43:
      v26 = pv;
      if ( pv || v27 )
      {
        v15 = *((_DWORD *)a2 + 6) & 0x800 | 0x10;
        goto LABEL_46;
      }
      goto LABEL_48;
    }
    W32PIDLOCK::vInit((W32PIDLOCK *)&v72);
    if ( *((_QWORD *)&v74 + 1) )
    {
      v70[1] = 0;
      v70[0] = v23 - (_DWORD)Process;
      Win32CreateSection((unsigned int)&Object, 6, v28, (unsigned int)v70);
      v27 = Object;
      if ( !Object )
      {
        W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v72);
        return 0LL;
      }
      goto LABEL_43;
    }
    return 0LL;
  }
LABEL_48:
  v76 = 1;
  v30 = (void *)PALLOCMEM2((unsigned int)(v23 - (_DWORD)Process));
  BugCheckParameter4 = 0LL;
  pv = v30;
  if ( !v30 )
    return 0LL;
LABEL_59:
  v33 = SURFACE::Allocate();
  *(_QWORD *)this = v33;
  if ( !v33 )
  {
    v14 = 0;
    goto LABEL_61;
  }
  Process = *(PEPROCESS *)((char *)a2 + 4);
  *((_QWORD *)&v33[3].Next + 1) = Process;
  *(_WORD *)(*(_QWORD *)this + 100LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 144LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 224LL) = 0LL;
  v42 = (HPALETTE)*((_QWORD *)a2 + 2);
  if ( v42 )
  {
    EPALOBJ::EPALOBJ((EPALOBJ *)&v69, v42);
    v43 = *(_QWORD *)this;
    if ( v69 )
    {
      *(_QWORD *)(v43 + 128) = v69;
      v69 = 0LL;
    }
    else
    {
      *(_QWORD *)(v43 + 128) = 0LL;
    }
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v69);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
  }
  *(_QWORD *)(*(_QWORD *)this + 72LL) = pv;
  v44 = *(_QWORD *)this;
  pv = 0LL;
  *(_BYTE *)(v44 + 688) = v76;
  *(_DWORD *)(*(_QWORD *)this + 96LL) = *(_DWORD *)a2;
  *(_WORD *)(*(_QWORD *)this + 102LL) = v15 | *((_WORD *)a2 + 12) & 0x89;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  BugCheckParameter4 = a6;
  *(_DWORD *)(*(_QWORD *)this + 208LL) = CurrentProcessId & 0xFFFFFFFC;
  *(_QWORD *)(*(_QWORD *)this + 184LL) = v79;
  *(_DWORD *)(*(_QWORD *)this + 212LL) = a5;
  *(_QWORD *)(*(_QWORD *)this + 192LL) = BugCheckParameter4;
  *(_QWORD *)(*(_QWORD *)this + 200LL) = a7;
  *(_DWORD *)(*(_QWORD *)this + 216LL) = a10;
  *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 112LL) = *((_DWORD *)a2 + 6) & 0x40000;
  if ( (*((_DWORD *)a2 + 6) & 0x4000000) != 0 )
    *(_DWORD *)(*(_QWORD *)this + 112LL) |= 0x4000000u;
  v46 = *(_QWORD *)this;
  Process = 0LL;
  *(_QWORD *)(v46 + 136) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 152LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 160LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 168LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 176LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    *(_QWORD *)(ThreadWin32Thread + 304) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 248LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 256LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 264LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 648LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 656LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 116LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 120LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 568LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 560LL) = 0LL;
  v48 = (_QWORD *)(*(_QWORD *)this + 232LL);
  v48[1] = v48;
  *v48 = v48;
  *(_DWORD *)(*(_QWORD *)this + 320LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 324LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 632LL) = 0LL;
  v49 = (_QWORD *)(*(_QWORD *)this + 528LL);
  v49[1] = v49;
  *v49 = v49;
  *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
  if ( v77 )
    *(_DWORD *)(*(_QWORD *)this + 116LL) |= 1u;
  if ( BugCheckParameter4 )
  {
    BugCheckParameter4 = 0LL;
    if ( !a10 )
      *(_WORD *)(*(_QWORD *)this + 102LL) |= 4u;
  }
  v50 = *(_QWORD *)this;
  if ( (unsigned int)(*(_DWORD *)a2 - 7) > 3 )
  {
    *(_DWORD *)(v50 + 64) = v18 * *((_DWORD *)a2 + 2);
    v51 = *(_QWORD *)this;
    if ( (*((_DWORD *)a2 + 6) & 1) == 0 )
    {
      *(_DWORD *)(v51 + 88) = -v18;
      *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL)
                                          + *(_DWORD *)(*(_QWORD *)this + 64LL)
                                          - v18;
      goto LABEL_92;
    }
    *(_DWORD *)(v51 + 88) = v18;
    goto LABEL_90;
  }
  *(_WORD *)(v50 + 102) &= ~0x800u;
  *(_DWORD *)(*(_QWORD *)this + 88LL) = (_DWORD)BugCheckParameter4;
  *(_DWORD *)(*(_QWORD *)this + 64LL) = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(*(_DWORD *)a2 - 9) > 1 )
  {
LABEL_90:
    *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL);
    goto LABEL_92;
  }
  *(_QWORD *)(*(_QWORD *)this + 80LL) = BugCheckParameter4;
LABEL_92:
  if ( *(char *)(*(_QWORD *)this + 102LL) < 0 )
  {
    *(_QWORD *)(*(_QWORD *)this + 584LL) = Object;
    *(_QWORD *)(*(_QWORD *)this + 592LL) = v68;
    *(_QWORD *)(*(_QWORD *)this + 600LL) = (char *)v68
                                         + *(_QWORD *)(*(_QWORD *)this + 80LL)
                                         - *(_QWORD *)(*(_QWORD *)this + 72LL);
    *(_DWORD *)(*(_QWORD *)this + 608LL) = 1;
    v52 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( v52 && (v53 = *(_QWORD *)(v52 + 72)) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)this + 612LL) = *(_DWORD *)(v53 + 8);
      *(_DWORD *)(*(_QWORD *)this + 616LL) = 1;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)this + 612LL) = (_DWORD)BugCheckParameter4;
      *(_DWORD *)(*(_QWORD *)this + 616LL) = (_DWORD)BugCheckParameter4;
    }
  }
  v54 = _InterlockedExchangeAdd((volatile signed __int32 *)&_ulGlobalSurfaceUnique, 1u);
  v55 = *(_QWORD *)this;
  v71 = BugCheckParameter4;
  v56 = a8 != (_DWORD)BugCheckParameter4;
  *(_DWORD *)(v55 + 92) = v54 + 1;
  if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v71, *(struct OBJECT **)this, 1, v56, 5) )
  {
    v59 = a11;
    *((_DWORD *)this + 3) = a11;
    if ( v59 )
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)this + 12LL), 1u);
    v60 = *(_QWORD *)this;
    *(_QWORD *)(v60 + 32) = **(_QWORD **)this;
    CurrentProcess = PsGetCurrentProcess(v60, v57);
    SURFACE::vAppContainerOwner(*(SURFACE **)this, CurrentProcess);
  }
  else
  {
    v58 = *(struct _SLIST_ENTRY **)this;
    if ( *(_QWORD *)(*(_QWORD *)this + 128LL) )
    {
      v75[0] = *(_QWORD *)(*(_QWORD *)this + 128LL);
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)v75);
      *(_QWORD *)(*(_QWORD *)this + 128LL) = BugCheckParameter4;
      v58 = *(struct _SLIST_ENTRY **)this;
    }
    SURFACE::Free(v58);
    *(_QWORD *)this = BugCheckParameter4;
    v14 = (unsigned int)BugCheckParameter4;
  }
  if ( v71 )
    _InterlockedDecrement((volatile signed __int32 *)v71 + 3);
  if ( v14 )
  {
    if ( (*(_WORD *)(*(_QWORD *)this + 102LL) & 0x800) != 0 && *((struct _KPROCESS **)&v74 + 1) != BugCheckParameter4 )
    {
      v62 = v72;
      *(_QWORD *)(*(_QWORD *)this + 248LL) = Object;
      v63 = *(_OWORD **)this;
      v64 = v73;
      v63[17] = v62;
      v65 = v74;
      v63[18] = v64;
      v63[19] = v65;
      *(_QWORD *)(*(_QWORD *)this + 72LL) = BugCheckParameter4;
      *(_QWORD *)(*(_QWORD *)this + 80LL) = BugCheckParameter4;
      *(_DWORD *)(*(_QWORD *)this + 112LL) |= 0x200u;
    }
    return v14;
  }
LABEL_61:
  if ( !pv && Object == BugCheckParameter4 )
    return v14;
  v34 = *((_DWORD *)a2 + 6);
  if ( (v34 & 8) != 0 )
  {
    if ( (v34 & 0x80u) == 0 )
    {
      EngFreeUserMem(pv);
    }
    else
    {
      v37 = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( *(struct _KPROCESS **)(v37 + 72) != BugCheckParameter4 )
      {
        v38 = pv;
        v39 = PsGetCurrentProcess(v36, v35);
        MmUnmapViewOfSection(v39, v38);
        v40 = *(_QWORD *)(v37 + 72);
        Process = BugCheckParameter4;
        if ( PsLookupProcessByProcessId((HANDLE)*(int *)(v40 + 8), &Process) >= 0 )
        {
          MmUnmapViewOfSection(Process, v68);
          ObfDereferenceObject(Process);
        }
        v41 = Object;
        if ( !Object )
          KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, (ULONG_PTR)BugCheckParameter4);
LABEL_115:
        ObfDereferenceObject(v41);
      }
    }
  }
  else
  {
    if ( (v15 & 0x800) == 0 )
    {
      if ( (v15 & 0x10) != 0 )
      {
        vFreeKernelSection(pv);
      }
      else if ( v76 != (_BYTE)BugCheckParameter4 && pv )
      {
        Win32FreePool(pv);
      }
      return v14;
    }
    W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v72);
    if ( v77 == (_DWORD)BugCheckParameter4 )
    {
      v41 = Object;
      if ( !Object )
        KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, (ULONG_PTR)BugCheckParameter4);
      goto LABEL_115;
    }
  }
  return v14;
}
