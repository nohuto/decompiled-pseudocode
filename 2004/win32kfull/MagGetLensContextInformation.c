/*
 * XREFs of MagGetLensContextInformation @ 0x1C01CD4A0
 * Callers:
 *     MagSlicerControl @ 0x1C01CE994 (MagSlicerControl.c)
 *     NtUserMagGetContextInformation @ 0x1C01FF460 (NtUserMagGetContextInformation.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C008E604 (MagpFindThreadContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01CD0E4 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     _GetMagnificationInputTransform @ 0x1C0214B08 (_GetMagnificationInputTransform.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C0276760 (DwmSyncMagnUpdateWindowSharedTextures.c)
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
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  void *v31; // rdi
  void *v32; // rcx
  unsigned int *v33; // rax
  unsigned int *v34; // r11
  int v35; // ecx
  __int64 v36; // r8
  unsigned int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 *v41; // rax
  __int64 *v42; // r8
  int v43; // edx
  int v44; // ecx
  int v45; // eax
  int v46; // r9d
  __int64 v47; // r10
  __int64 v48; // rdx
  __int64 *v49; // rax
  int v50; // eax
  __int64 *v51; // rax
  __int64 *LensContext; // rax
  __int64 v53; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v54[3]; // [rsp+58h] [rbp-40h] BYREF

  v54[2] = 0LL;
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
      if ( a3 != -1 || (LensContext = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 448LL) + 224LL)) == 0LL )
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
      if ( a3 != -1 || (v51 = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 448LL) + 224LL)) == 0LL )
      {
        v51 = MagpFindLensContext(v11, a3, v10);
        if ( !v51 )
          return updated;
      }
      if ( (v51[2] & 2) != 0 )
      {
        *(_OWORD *)a6 = *(_OWORD *)(v51 + 11);
        *(_OWORD *)(a6 + 16) = *(_OWORD *)(v51 + 13);
      }
      else
      {
        *(_OWORD *)a6 = gMagOutTransformIdentity;
        *(_OWORD *)(a6 + 16) = xmmword_1C0333EF8;
      }
      return 0;
    case 4:
      return (unsigned int)GetMagnificationInputTransform(a6) == 0 ? 0xC0000001 : 0;
    case 5:
      if ( !a3 )
        return updated;
      if ( a3 != -1 || (v49 = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 448LL) + 232LL)) == 0LL )
      {
        v49 = MagpFindLensContext(v11, a3, v10);
        if ( !v49 )
          return updated;
      }
      if ( (v49[2] & 4) != 0 )
      {
        *(_OWORD *)a6 = *(_OWORD *)(v49 + 15);
        *(_OWORD *)(a6 + 16) = *(_OWORD *)(v49 + 17);
        *(_OWORD *)(a6 + 32) = *(_OWORD *)(v49 + 19);
        *(_OWORD *)(a6 + 48) = *(_OWORD *)(v49 + 21);
        *(_OWORD *)(a6 + 64) = *(_OWORD *)(v49 + 23);
        *(_OWORD *)(a6 + 80) = *(_OWORD *)(v49 + 25);
        v50 = *((_DWORD *)v49 + 54);
      }
      else
      {
        *(_OWORD *)a6 = gMagEffectIdentity;
        *(_OWORD *)(a6 + 16) = xmmword_1C0333F20;
        *(_OWORD *)(a6 + 32) = xmmword_1C0333F30;
        *(_OWORD *)(a6 + 48) = xmmword_1C0333F40;
        *(_OWORD *)(a6 + 64) = xmmword_1C0333F50;
        *(_OWORD *)(a6 + 80) = xmmword_1C0333F60;
        v50 = dword_1C0333F70;
      }
      *(_DWORD *)(a6 + 96) = v50;
      return 0;
    case 6:
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v41 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
      v42 = v41;
      if ( !v41 )
        return updated;
      v43 = *a7;
      if ( (unsigned int)*a7 >= 8 )
      {
        v44 = *((_DWORD *)v41 + 56);
        *(_DWORD *)a6 = v44;
        v45 = *((_DWORD *)v41 + 57);
        *(_DWORD *)(a6 + 4) = v45;
        v46 = v45 + v44;
        v47 = (unsigned int)(v45 + v44);
        if ( (unsigned int)(v43 - 8) >= (unsigned __int64)(8 * v47) )
        {
          if ( v46 )
          {
            v48 = 0LL;
            do
            {
              *(_QWORD *)(v48 + a6 + 8) = *(_QWORD *)(v48 + v42[29]);
              v48 += 8LL;
              --v47;
            }
            while ( v47 );
          }
          *a7 = 8 * v46 + 8;
          return 0;
        }
      }
      return (unsigned int)-1073741820;
    case 7:
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v33 = (unsigned int *)MagpFindLensContext((__int64)ThreadContext, a3, v10);
      v34 = v33;
      if ( !v33 )
        return updated;
      v35 = *a7;
      if ( (unsigned int)*a7 >= 0x10 )
      {
        v36 = v33[60];
        *(_DWORD *)a6 = v36;
        *(_DWORD *)(a6 + 4) = v33[61];
        *(_DWORD *)(a6 + 8) = v33[62];
        *(_DWORD *)(a6 + 12) = v33[63];
        if ( (unsigned int)(v35 - 16) >= (unsigned __int64)(24 * v36) )
        {
          v37 = 0;
          if ( (_DWORD)v36 )
          {
            do
            {
              v38 = v37++;
              v39 = 3 * v38;
              v40 = *((_QWORD *)v34 + 32);
              *(_OWORD *)(a6 + 8 * v39 + 16) = *(_OWORD *)(v40 + 8 * v39);
              *(_QWORD *)(a6 + 8 * v39 + 32) = *(_QWORD *)(v40 + 8 * v39 + 16);
              LODWORD(v36) = *(_DWORD *)a6;
            }
            while ( v37 < *(_DWORD *)a6 );
          }
          *a7 = 24 * v36 + 16;
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
  LODWORD(v53) = 0;
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
    v27 = a6;
    *(_DWORD *)a6 = 0;
    *(_DWORD *)(a6 + 8) = 0;
    *(_QWORD *)(a6 + 40) = 0LL;
    *(_DWORD *)(a6 + 4) = *((_DWORD *)v17 + 60);
    *(_DWORD *)(a6 + 12) = *((_DWORD *)v17 + 61);
    *(_DWORD *)(a6 + 16) = *((_DWORD *)v17 + 62);
    *(_DWORD *)(a6 + 20) = *((_DWORD *)v17 + 63);
LABEL_44:
    if ( (*((_DWORD *)v17 + 4) & 0x80u) != 0 )
      *(_DWORD *)(v27 + 48) = v16;
    return 0;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v54[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v54;
  v54[1] = a3;
  HMLockObject(a3);
  v22 = ReferenceDwmProcess();
  if ( gdwInAtomicOperation )
  {
    v21 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v23 = (void *)ReferenceDwmApiPort(v21);
  UserSessionSwitchLeaveCrit(v25, v24, v26);
  v27 = a6;
  if ( v23 && v22 )
  {
    updated = DwmSyncMagnUpdateWindowSharedTextures(
                v23,
                (__int64)(v17 + 4),
                *(_QWORD *)(a6 + 24),
                v19,
                (*((_DWORD *)v17 + 4) >> 7) & 1,
                a6,
                (__int64)&v53);
  }
  else
  {
    DereferenceDwmApiPort(v23);
    updated = -1073741823;
  }
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v29, v28, v30);
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
    v32 = *(void **)(a6 + 40);
    if ( v32 )
    {
      ObfDereferenceObject(v32);
      *(_QWORD *)(a6 + 40) = 0LL;
    }
    return (unsigned int)-1073741811;
  }
  if ( !*(_DWORD *)(a6 + 8)
    || (v31 = *(void **)(a6 + 40)) == 0LL
    || (*(_QWORD *)(a6 + 40) = 0LL,
        updated = ObOpenObjectByPointer(v31, 0x80u, 0LL, 4u, MmSectionObjectType, 1, (PHANDLE)(a6 + 40)),
        ObfDereferenceObject(v31),
        (updated & 0x80000000) == 0) )
  {
LABEL_38:
    if ( (unsigned int)*a7 >= 0x30 )
    {
      v16 = v53;
      goto LABEL_44;
    }
    return (unsigned int)-1073741820;
  }
  return updated;
}
