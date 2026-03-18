/*
 * XREFs of MagGetLensContextInformation @ 0x1C01CC690
 * Callers:
 *     MagSlicerControl @ 0x1C01CDB84 (MagSlicerControl.c)
 *     NtUserMagGetContextInformation @ 0x1C01FE5F0 (NtUserMagGetContextInformation.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     MagpFindThreadContext @ 0x1C00D39A4 (MagpFindThreadContext.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01CC2D0 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     _GetMagnificationInputTransform @ 0x1C0213C88 (_GetMagnificationInputTransform.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C02751F0 (DwmSyncMagnUpdateWindowSharedTextures.c)
 */

__int64 __fastcall MagGetLensContextInformation(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int *a7)
{
  unsigned int updated; // ebx
  _QWORD *ThreadContext; // rax
  int v10; // r9d
  __int64 v11; // r14
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rax
  int v16; // r11d
  __int64 *v17; // rbp
  unsigned int v18; // eax
  int v19; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rcx
  __int64 v22; // r13
  void *v23; // r12
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  void *v29; // rdi
  void *v30; // rcx
  unsigned int *v31; // rax
  unsigned int *v32; // r11
  int v33; // ecx
  __int64 v34; // r8
  unsigned int v35; // edx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 *v39; // rax
  __int64 *v40; // r8
  int v41; // edx
  int v42; // ecx
  int v43; // eax
  int v44; // r9d
  __int64 v45; // r10
  __int64 v46; // rdx
  __int64 *v47; // rax
  int v48; // eax
  __int64 *v49; // rax
  __int64 *LensContext; // rax
  __int64 v51; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v52[3]; // [rsp+58h] [rbp-40h] BYREF

  v52[2] = 0LL;
  updated = -1073741811;
  ThreadContext = MagpFindThreadContext(a1, a2);
  v11 = (__int64)ThreadContext;
  if ( !ThreadContext )
    return 3221225635LL;
  switch ( a5 )
  {
    case 2:
      if ( !a3 )
        return updated;
      if ( a3 != -1 || (LensContext = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 456LL) + 224LL)) == 0LL )
      {
        LensContext = MagpFindLensContext(v11, a3, v10);
        if ( !LensContext )
          return updated;
      }
      *(_OWORD *)a6 = *(_OWORD *)(LensContext + 9);
      return 0;
    case 3:
      if ( !a3 )
        return updated;
      if ( a3 != -1 || (v49 = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 456LL) + 224LL)) == 0LL )
      {
        v49 = MagpFindLensContext(v11, a3, v10);
        if ( !v49 )
          return updated;
      }
      if ( (v49[2] & 2) != 0 )
      {
        *(_OWORD *)a6 = *(_OWORD *)(v49 + 11);
        *(_OWORD *)(a6 + 16) = *(_OWORD *)(v49 + 13);
      }
      else
      {
        *(_OWORD *)a6 = gMagOutTransformIdentity;
        *(_OWORD *)(a6 + 16) = xmmword_1C0332F28;
      }
      return 0;
    case 4:
      return (unsigned int)GetMagnificationInputTransform(a6) == 0 ? 0xC0000001 : 0;
    case 5:
      if ( !a3 )
        return updated;
      if ( a3 != -1 || (v47 = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 456LL) + 232LL)) == 0LL )
      {
        v47 = MagpFindLensContext(v11, a3, v10);
        if ( !v47 )
          return updated;
      }
      if ( (v47[2] & 4) != 0 )
      {
        *(_OWORD *)a6 = *(_OWORD *)(v47 + 15);
        *(_OWORD *)(a6 + 16) = *(_OWORD *)(v47 + 17);
        *(_OWORD *)(a6 + 32) = *(_OWORD *)(v47 + 19);
        *(_OWORD *)(a6 + 48) = *(_OWORD *)(v47 + 21);
        *(_OWORD *)(a6 + 64) = *(_OWORD *)(v47 + 23);
        *(_OWORD *)(a6 + 80) = *(_OWORD *)(v47 + 25);
        v48 = *((_DWORD *)v47 + 54);
      }
      else
      {
        *(_OWORD *)a6 = gMagEffectIdentity;
        *(_OWORD *)(a6 + 16) = xmmword_1C0332F50;
        *(_OWORD *)(a6 + 32) = xmmword_1C0332F60;
        *(_OWORD *)(a6 + 48) = xmmword_1C0332F70;
        *(_OWORD *)(a6 + 64) = xmmword_1C0332F80;
        *(_OWORD *)(a6 + 80) = xmmword_1C0332F90;
        v48 = dword_1C0332FA0;
      }
      *(_DWORD *)(a6 + 96) = v48;
      return 0;
    case 6:
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v39 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
      v40 = v39;
      if ( !v39 )
        return updated;
      v41 = *a7;
      if ( (unsigned int)*a7 >= 8 )
      {
        v42 = *((_DWORD *)v39 + 56);
        *(_DWORD *)a6 = v42;
        v43 = *((_DWORD *)v39 + 57);
        *(_DWORD *)(a6 + 4) = v43;
        v44 = v43 + v42;
        v45 = (unsigned int)(v43 + v42);
        if ( (unsigned int)(v41 - 8) >= (unsigned __int64)(8 * v45) )
        {
          if ( v44 )
          {
            v46 = 0LL;
            do
            {
              *(_QWORD *)(v46 + a6 + 8) = *(_QWORD *)(v46 + v40[29]);
              v46 += 8LL;
              --v45;
            }
            while ( v45 );
          }
          *a7 = 8 * v44 + 8;
          return 0;
        }
      }
      return (unsigned int)-1073741820;
    case 7:
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v31 = (unsigned int *)MagpFindLensContext((__int64)ThreadContext, a3, v10);
      v32 = v31;
      if ( !v31 )
        return updated;
      v33 = *a7;
      if ( (unsigned int)*a7 >= 0x10 )
      {
        v34 = v31[60];
        *(_DWORD *)a6 = v34;
        *(_DWORD *)(a6 + 4) = v31[61];
        *(_DWORD *)(a6 + 8) = v31[62];
        *(_DWORD *)(a6 + 12) = v31[63];
        if ( (unsigned int)(v33 - 16) >= (unsigned __int64)(24 * v34) )
        {
          v35 = 0;
          if ( (_DWORD)v34 )
          {
            do
            {
              v36 = v35++;
              v37 = 3 * v36;
              v38 = *((_QWORD *)v32 + 32);
              *(_OWORD *)(a6 + 8 * v37 + 16) = *(_OWORD *)(v38 + 8 * v37);
              *(_QWORD *)(a6 + 8 * v37 + 32) = *(_QWORD *)(v38 + 8 * v37 + 16);
              LODWORD(v34) = *(_DWORD *)a6;
            }
            while ( v35 < *(_DWORD *)a6 );
          }
          *a7 = 24 * v34 + 16;
          return 0;
        }
      }
      return (unsigned int)-1073741820;
  }
  if ( a5 != 8 )
  {
    if ( a5 == 9 )
    {
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v14 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
      if ( !v14 )
        return updated;
      *(_DWORD *)a6 = 0;
      *(_DWORD *)a6 = (v14[2] & 0x40) != 0;
    }
    else
    {
      if ( a5 != 10 )
        return updated;
      if ( !a3 )
        return updated;
      v13 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
      if ( !v13 )
        return updated;
      *(_DWORD *)a6 = *((_DWORD *)v13 + 66);
    }
    return 0;
  }
  LODWORD(v51) = 0;
  if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return updated;
  v15 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
  v17 = v15;
  if ( !v15 )
    return updated;
  v18 = *((_DWORD *)v15 + 4);
  v19 = (v18 >> 6) & 1;
  if ( (v18 & 0x20) != 0 || !*((_DWORD *)v17 + 60) )
  {
    v25 = a6;
    *(_DWORD *)a6 = 0;
    *(_DWORD *)(a6 + 8) = 0;
    *(_QWORD *)(a6 + 40) = 0LL;
    *(_DWORD *)(a6 + 4) = *((_DWORD *)v17 + 60);
    *(_DWORD *)(a6 + 12) = *((_DWORD *)v17 + 61);
    *(_DWORD *)(a6 + 16) = *((_DWORD *)v17 + 62);
    *(_DWORD *)(a6 + 20) = *((_DWORD *)v17 + 63);
LABEL_44:
    if ( (*((_DWORD *)v17 + 4) & 0x80u) != 0 )
      *(_DWORD *)(v25 + 48) = v16;
    return 0;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v52[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v52;
  v52[1] = a3;
  HMLockObject(a3);
  v22 = ReferenceDwmProcess();
  if ( gdwInAtomicOperation )
  {
    v21 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v23 = (void *)ReferenceDwmApiPort(v21);
  UserSessionSwitchLeaveCrit(v24);
  v25 = a6;
  if ( v23 && v22 )
  {
    updated = DwmSyncMagnUpdateWindowSharedTextures(
                v23,
                (__int64)(v17 + 4),
                *(_QWORD *)(a6 + 24),
                v19,
                (*((_DWORD *)v17 + 4) >> 7) & 1,
                a6,
                (__int64)&v51);
  }
  else
  {
    DereferenceDwmApiPort(v23);
    updated = -1073741823;
  }
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v27, v26, v28);
  DereferenceDwmProcess(v22);
  if ( (updated & 0x80000000) != 0 )
    return updated;
  if ( *(int *)a6 < 0 )
    goto LABEL_38;
  if ( *(_DWORD *)(a6 + 4) != *((_DWORD *)v17 + 60)
    || *(_DWORD *)(a6 + 12) != *((_DWORD *)v17 + 61)
    || *(_DWORD *)(a6 + 16) != *((_DWORD *)v17 + 62)
    || *(_DWORD *)(a6 + 20) != *((_DWORD *)v17 + 63) )
  {
    v30 = *(void **)(a6 + 40);
    if ( v30 )
    {
      ObfDereferenceObject(v30);
      *(_QWORD *)(a6 + 40) = 0LL;
    }
    return (unsigned int)-1073741811;
  }
  if ( !*(_DWORD *)(a6 + 8)
    || (v29 = *(void **)(a6 + 40)) == 0LL
    || (*(_QWORD *)(a6 + 40) = 0LL,
        updated = ObOpenObjectByPointer(v29, 0x80u, 0LL, 4u, MmSectionObjectType, 1, (PHANDLE)(a6 + 40)),
        ObfDereferenceObject(v29),
        (updated & 0x80000000) == 0) )
  {
LABEL_38:
    if ( (unsigned int)*a7 >= 0x30 )
    {
      v16 = v51;
      goto LABEL_44;
    }
    return (unsigned int)-1073741820;
  }
  return updated;
}
