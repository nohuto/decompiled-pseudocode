/*
 * XREFs of ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000DB90
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000DB54 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C00054E8 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0005A8C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C0007288 (-IsTokenManagerReady@@YAHXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0077584 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C01961F0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall NotifyPendingFlipPresent(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *hLogicalSurface; // rbx
  int v4; // r12d
  __int64 v5; // r8
  int v6; // ebx
  _QWORD *v7; // rdi
  bool v8; // zf
  char *v9; // rbp
  struct DXGSESSIONDATA *SessionData; // rax
  void (__fastcall ***v11)(_QWORD); // rbx
  __int64 v12; // r13
  void (__fastcall ***v13)(_QWORD); // r14
  char *v14; // rax
  char *v15; // r15
  char *v16; // r12
  int v17; // ebx
  UINT64 CompositionBindingId; // rcx
  char *v19; // rax
  char *v20; // rbx
  char *v21; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v23; // rax
  int v24; // edi
  struct DXGGLOBAL *v25; // rax
  DXGGLOBAL *v26; // rax
  struct DXGSESSIONDATA *v27; // rax
  __int64 v28; // r15
  int v29; // edi
  struct DXGGLOBAL *v30; // rax
  char v31; // r15
  struct _KPROCESS *v32; // rax
  struct _KPROCESS *v33; // rbp
  UINT v35; // eax
  struct DXGGLOBAL *v36; // rax
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  int v43; // edx
  int v44; // ecx
  int v45; // r8d
  int v46; // edx
  int v47; // ecx
  int v48; // r8d
  int v49; // edx
  int v50; // ecx
  int v51; // r8d
  int v52; // edx
  int v53; // ecx
  int v54; // r8d
  int v55; // edx
  int v56; // ecx
  int v57; // r8d
  int v58; // edx
  int v59; // ecx
  int v60; // r8d
  int v61; // edx
  int v62; // ecx
  int v63; // r8d
  char v64; // [rsp+60h] [rbp-78h] BYREF
  char v65[3]; // [rsp+61h] [rbp-77h] BYREF
  int v66; // [rsp+64h] [rbp-74h] BYREF
  PVOID Object; // [rsp+68h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-68h] BYREF

  hLogicalSurface = (void *)a2->Token.Flip.hLogicalSurface;
  v4 = a1;
  v66 = a1;
  Object = 0LL;
  KeEnterCriticalRegion();
  v6 = CompositionSurfaceObject::ResolveHandle(hLogicalSurface, 2u, v5, (struct CompositionSurfaceObject **)&Object);
  if ( v6 < 0 )
    goto LABEL_49;
  v7 = Object;
  v6 = ObReferenceObjectByPointer(Object, 3u, g_pDxgkCompositionObjectType, 0);
  if ( v6 < 0 )
  {
LABEL_97:
    ObfDereferenceObject(v7);
    goto LABEL_49;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7 + 6, 0LL);
  v8 = DXGGLOBAL::m_pGlobal == 0LL;
  v7[7] = KeGetCurrentThread();
  v7 = Object;
  v9 = (char *)Object + 40;
  if ( v8 )
  {
    WdLogSingleEntry1(1LL, 2373LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v38,
          v37,
          v39,
          0,
          2,
          -1,
          (__int64)L"m_pGlobal != NULL",
          2373LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  SessionData = DXGGLOBAL::GetSessionData((DXGGLOBAL *)DXGGLOBAL::m_pGlobal);
  if ( SessionData )
  {
    v11 = (void (__fastcall ***)(_QWORD))*((_QWORD *)SessionData + 2343);
    if ( v11 )
    {
      (**v11)(v11);
      v12 = 0LL;
      v13 = v11;
      if ( !*((_DWORD *)v9 + 22) || (v14 = (char *)*((_QWORD *)v9 + 9), v15 = v9 + 72, v14 == v9 + 72) )
      {
LABEL_63:
        v6 = -1071775728;
      }
      else
      {
        while ( 1 )
        {
          v16 = v14 - 24;
          if ( *((_QWORD *)v14 - 1) == a2->CompositionBindingId )
            break;
          v14 = *(char **)v14;
          if ( v14 == v15 )
          {
            v4 = v66;
            goto LABEL_63;
          }
        }
        v17 = (*(__int64 (__fastcall **)(_QWORD *))(*(_QWORD *)v16 + 8LL))((_QWORD *)v14 - 3);
        v12 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v16 + 24LL))(v16);
        if ( v17 != 2 )
          goto LABEL_65;
        v8 = *((_DWORD *)v9 + 22) == 0;
        CompositionBindingId = a2->CompositionBindingId;
        v64 = 0;
        v65[0] = 0;
        if ( v8 )
          goto LABEL_65;
        v19 = *(char **)v15;
        if ( *(char **)v15 == v15 )
          goto LABEL_65;
        while ( 1 )
        {
          v20 = v19 - 24;
          if ( *((_QWORD *)v19 - 1) == CompositionBindingId )
            break;
          v19 = *(char **)v19;
          if ( v19 == v15 )
            goto LABEL_65;
        }
        if ( (*(unsigned int (__fastcall **)(_QWORD *))(*(_QWORD *)v20 + 8LL))((_QWORD *)v19 - 3) != 2 )
        {
LABEL_65:
          v4 = v66;
          v6 = -1073741811;
        }
        else
        {
          (*(void (__fastcall **)(char *, union _D3DKMT_PRESENTHISTORYTOKEN::$04C5B4CD591473CAB2C95D87D2CBE864 *, char *, char *))(*(_QWORD *)v20 + 64LL))(
            v20,
            &a2->Token,
            &v64,
            v65);
          v6 = 0;
          if ( v64 )
          {
            v35 = a2->Token.Flip.Flags.Value | 0x200000;
            a2->Token.Flip.Flags.Value = v35;
            if ( v65[0] )
              a2->Token.Flip.Flags.Value = v35 | 0x400000;
          }
          v4 = v66;
          a2->Token.Flip.Reserved = *((_DWORD *)v9 + 24);
        }
      }
      v21 = v9 + 8;
      if ( KeGetCurrentThread() == *((struct _KTHREAD **)v9 + 2) )
      {
        *((_QWORD *)v9 + 2) = 0LL;
        ExReleasePushLockExclusiveEx(v21, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v21, 0LL);
      }
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v9 - 40);
      if ( v6 < 0 )
        goto LABEL_94;
      if ( (a2->Token.Flip.Flags.Value & 0x2000000) != 0 )
        goto LABEL_29;
      Global = DXGGLOBAL_GetGlobal();
      (*(void (**)(void))(*((_QWORD *)Global + 38073) + 440LL))();
      v23 = DXGGLOBAL_GetGlobal();
      v24 = (*(__int64 (**)(void))(*((_QWORD *)v23 + 38073) + 472LL))();
      if ( v12 )
      {
        v66 = 0;
        v25 = DXGGLOBAL_GetGlobal();
        if ( (*(unsigned int (__fastcall **)(__int64, int *))(*((_QWORD *)v25 + 38073) + 480LL))(v12, &v66) )
        {
          if ( !v4
            || v24
            || (v26 = DXGGLOBAL_GetGlobal(), (v27 = DXGGLOBAL::GetSessionData(v26)) == 0LL)
            || (v28 = *((_QWORD *)v27 + 2343)) == 0
            || ((**(void (__fastcall ***)(_QWORD))v28)(*((_QWORD *)v27 + 2343)),
                v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 184LL))(v28),
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28),
                !v29)
            || !v66 )
          {
            v6 = -1071775733;
          }
        }
        else
        {
          v6 = -1071775729;
        }
      }
      else if ( !v4
             || v24
             || !(unsigned int)IsTokenManagerReady()
             || (v36 = DXGGLOBAL_GetGlobal(), !(*(unsigned int (**)(void))(*((_QWORD *)v36 + 38073) + 456LL))()) )
      {
        v6 = -1071775730;
      }
      v30 = DXGGLOBAL_GetGlobal();
      (*(void (**)(void))(*((_QWORD *)v30 + 38073) + 488LL))();
      if ( v6 >= 0 )
      {
LABEL_29:
        v7 = Object;
        v6 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD), PVOID))(*v13)[13])(v13, Object);
        if ( v6 >= 0 )
        {
          v31 = 0;
          Object = (PVOID)-1LL;
          if ( !DXGGLOBAL::m_pGlobal )
          {
            WdLogSingleEntry1(1LL, 2373LL);
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                  v41,
                  v40,
                  v42,
                  0,
                  2,
                  -1,
                  (__int64)L"m_pGlobal != NULL",
                  2373LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
            }
          }
          if ( !(*(unsigned int (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38073) + 464LL))() )
          {
            if ( !DXGGLOBAL::m_pGlobal )
            {
              WdLogSingleEntry1(1LL, 2373LL);
              if ( bTracingEnabled )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
                  McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                    v44,
                    v43,
                    v45,
                    0,
                    2,
                    -1,
                    (__int64)L"m_pGlobal != NULL",
                    2373LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
              }
            }
            if ( !(*(unsigned int (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38073) + 368LL))() )
            {
              if ( !DXGGLOBAL::m_pGlobal )
              {
                WdLogSingleEntry1(1LL, 2373LL);
                if ( bTracingEnabled )
                {
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
                    McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                      v47,
                      v46,
                      v48,
                      0,
                      2,
                      -1,
                      (__int64)L"m_pGlobal != NULL",
                      2373LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                }
              }
              (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38073) + 376LL))();
              v31 = 1;
            }
          }
          if ( !DXGGLOBAL::m_pGlobal )
          {
            WdLogSingleEntry1(1LL, 2373LL);
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                  v50,
                  v49,
                  v51,
                  0,
                  2,
                  -1,
                  (__int64)L"m_pGlobal != NULL",
                  2373LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
            }
          }
          v32 = (struct _KPROCESS *)(*(__int64 (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38073) + 504LL))();
          v33 = v32;
          if ( v32 )
          {
            memset(&ApcState, 0, sizeof(ApcState));
            KeStackAttachProcess(v32, &ApcState);
            v6 = ObOpenObjectByPointer(v7, 0x40u, 0LL, 3u, g_pDxgkCompositionObjectType, 0, &Object);
            KeUnstackDetachProcess(&ApcState);
            if ( !DXGGLOBAL::m_pGlobal )
            {
              WdLogSingleEntry1(1LL, 2373LL);
              if ( bTracingEnabled )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
                  McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                    v53,
                    v52,
                    v54,
                    0,
                    2,
                    -1,
                    (__int64)L"m_pGlobal != NULL",
                    2373LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
              }
            }
            (*(void (__fastcall **)(struct _KPROCESS *))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38073) + 432LL))(v33);
          }
          else
          {
            v6 = -1073741823;
          }
          if ( v31 )
          {
            if ( !DXGGLOBAL::m_pGlobal )
            {
              WdLogSingleEntry1(1LL, 2373LL);
              if ( bTracingEnabled )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
                  McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                    v56,
                    v55,
                    v57,
                    0,
                    2,
                    -1,
                    (__int64)L"m_pGlobal != NULL",
                    2373LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
              }
            }
            (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38073) + 416LL))();
          }
          if ( v6 >= 0 )
          {
            v8 = DXGGLOBAL::m_pGlobal == 0LL;
            a2->Token.Flip.hCompSurf = (LONG64)Object;
            *((_QWORD *)&a2->Token.SurfaceComplete + 7) = v7[3];
            if ( v8 )
            {
              WdLogSingleEntry1(1LL, 2373LL);
              if ( bTracingEnabled )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
                  McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                    v59,
                    v58,
                    v60,
                    0,
                    2,
                    -1,
                    (__int64)L"m_pGlobal != NULL",
                    2373LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
              }
            }
            (*(void (__fastcall **)(union _D3DKMT_PRESENTHISTORYTOKEN::$04C5B4CD591473CAB2C95D87D2CBE864 *, _QWORD))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38073) + 40LL))(
              &a2->Token,
              0LL);
            if ( !DXGGLOBAL::m_pGlobal )
            {
              WdLogSingleEntry1(1LL, 2373LL);
              if ( bTracingEnabled )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
                  McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                    v62,
                    v61,
                    v63,
                    0,
                    2,
                    -1,
                    (__int64)L"m_pGlobal != NULL",
                    2373LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
              }
            }
            (*(void (__fastcall **)(struct _D3DKMT_PRESENTHISTORYTOKEN *, _QWORD *, _QWORD, _QWORD, _QWORD, UINT64, LONG, UINT, UINT))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38073) + 336LL))(
              a2,
              v7,
              a2->Token.Flip.SwapChainIndex,
              a2->Token.Flip.PresentCount,
              *((_QWORD *)&a2->Token.SurfaceComplete + 7),
              a2->CompositionBindingId,
              a2->Token.Blt.DirtyRegions.Rects[0].bottom,
              a2->Token.Flip.DestWidth,
              a2->Token.Flip.DestHeight);
          }
        }
      }
      else
      {
LABEL_94:
        v7 = Object;
      }
      goto LABEL_47;
    }
  }
  v13 = 0LL;
  v6 = -1073741823;
  if ( v9 )
  {
    CCompositionSurface::UnlockAndRelease((CCompositionSurface *)v9);
    goto LABEL_97;
  }
LABEL_47:
  ObfDereferenceObject(v7);
  if ( v13 )
    (*v13)[1](v13);
LABEL_49:
  if ( v6 == -1071775730 )
  {
    v6 = NotifySurfaceOfSkippedToken(a2);
    if ( v6 >= 0 )
      v6 = -1071775730;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
