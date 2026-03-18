/*
 * XREFs of ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0013AB0
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00135B8 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C000164C (-IsTokenManagerReady@@YAHXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EDCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00160A4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00646EC (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00EE9E4 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall NotifyPendingFlipPresent(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *hLogicalSurface; // rbx
  char v4; // r8
  NTSTATUS v5; // ebx
  _QWORD *v6; // rdi
  void (__fastcall ***v7)(_QWORD); // r12
  _QWORD *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGSESSIONDATA *SessionData; // rax
  void (__fastcall ***v12)(_QWORD); // r15
  __int64 v13; // r13
  _QWORD *v14; // rax
  _QWORD **v15; // rdi
  _QWORD *v16; // r15
  int v17; // ebx
  bool v18; // zf
  UINT64 CompositionBindingId; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rbx
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // edi
  struct DXGSESSIONDATA *v30; // rax
  __int64 v31; // r14
  int v32; // edi
  __int64 v33; // rdx
  __int64 v34; // rcx
  char v35; // r15
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct _KPROCESS *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct _KPROCESS *v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r14
  struct DXGGLOBAL *Global; // rax
  UINT v49; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  char v64; // [rsp+50h] [rbp-29h] BYREF
  char v65[7]; // [rsp+51h] [rbp-28h] BYREF
  PVOID Object; // [rsp+58h] [rbp-21h] BYREF
  int v67; // [rsp+60h] [rbp-19h] BYREF
  int v68; // [rsp+64h] [rbp-15h]
  void *Handle; // [rsp+68h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  hLogicalSurface = (void *)a2->Token.Flip.hLogicalSurface;
  v68 = a1;
  Object = 0LL;
  KeEnterCriticalRegion();
  v5 = CompositionSurfaceObject::ResolveHandle(hLogicalSurface, 2u, v4, (struct CompositionSurfaceObject **)&Object);
  if ( v5 < 0 )
    goto LABEL_76;
  v6 = Object;
  v7 = 0LL;
  v8 = 0LL;
  v5 = ObReferenceObjectByPointer(Object, 3u, g_pDxgkCompositionObjectType, 0);
  if ( v5 >= 0 )
  {
    v5 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v6[6])(v6 + 6) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v6 + 7, 0LL);
      v6[8] = KeGetCurrentThread();
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v6[6])(v6 + 6) )
      {
        v6 = Object;
        goto LABEL_6;
      }
      CPushLock::ReleaseLock((CPushLock *)(v6 + 6));
      v6 = Object;
    }
    v5 = -1073741816;
LABEL_6:
    if ( v5 < 0 )
      ObfDereferenceObject(v6);
    else
      v8 = v6 + 5;
  }
  if ( v5 >= 0 )
  {
    v5 = -1073741823;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v50 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v50 + 24) = 2238LL;
      WdLogEvent5_WdAssertion(v50);
    }
    SessionData = DXGGLOBAL::GetSessionData((DXGGLOBAL *)DXGGLOBAL::m_pGlobal);
    if ( SessionData )
    {
      v12 = (void (__fastcall ***)(_QWORD))*((_QWORD *)SessionData + 2340);
      if ( v12 )
      {
        (**v12)(*((_QWORD *)SessionData + 2340));
        v5 = 0;
        v7 = v12;
      }
    }
    if ( v5 >= 0 )
    {
      v13 = 0LL;
      if ( !*((_DWORD *)v8 + 20) || (v14 = (_QWORD *)v8[8], v15 = (_QWORD **)(v8 + 8), v14 == v8 + 8) )
      {
LABEL_89:
        v5 = -1071775728;
      }
      else
      {
        while ( 1 )
        {
          v16 = v14 - 3;
          if ( *(v14 - 1) == a2->CompositionBindingId )
            break;
          v14 = (_QWORD *)*v14;
          if ( v14 == v15 )
            goto LABEL_89;
        }
        v17 = (*(__int64 (__fastcall **)(_QWORD *))(*v16 + 8LL))(v14 - 3);
        v13 = (*(__int64 (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
        if ( v17 != 2 )
          goto LABEL_91;
        v18 = *((_DWORD *)v8 + 20) == 0;
        CompositionBindingId = a2->CompositionBindingId;
        v64 = 0;
        v65[0] = 0;
        if ( v18 )
          goto LABEL_91;
        v20 = *v15;
        if ( *v15 == v15 )
          goto LABEL_91;
        while ( 1 )
        {
          v21 = v20 - 3;
          if ( *(v20 - 1) == CompositionBindingId )
            break;
          v20 = (_QWORD *)*v20;
          if ( v20 == v15 )
            goto LABEL_91;
        }
        if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v21 + 8LL))(v20 - 3) != 2 )
        {
LABEL_91:
          v5 = -1073741811;
        }
        else
        {
          (*(void (__fastcall **)(_QWORD *, union _D3DKMT_PRESENTHISTORYTOKEN::$04C5B4CD591473CAB2C95D87D2CBE864 *, char *, char *))(*v21 + 64LL))(
            v21,
            &a2->Token,
            &v64,
            v65);
          v5 = 0;
          if ( v64 )
          {
            v49 = a2->Token.Flip.Flags.Value | 0x200000;
            a2->Token.Flip.Flags.Value = v49;
            if ( v65[0] )
              a2->Token.Flip.Flags.Value = v49 | 0x400000;
          }
        }
      }
      v22 = v8 + 2;
      if ( KeGetCurrentThread() == (struct _KTHREAD *)v8[3] )
      {
        v8[3] = 0LL;
        ExReleasePushLockExclusiveEx(v22, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v22, 0LL);
      }
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v8 - 5);
      if ( v5 < 0 )
        goto LABEL_96;
      if ( (a2->Token.Flip.Flags.Value & 0x2000000) == 0 )
      {
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v51 = WdLogNewEntry5_WdAssertion(v24, v23);
          *(_QWORD *)(v51 + 24) = 2238LL;
          WdLogEvent5_WdAssertion(v51);
        }
        (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 208LL))();
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v52 = WdLogNewEntry5_WdAssertion(v26, v25);
          *(_QWORD *)(v52 + 24) = 2238LL;
          WdLogEvent5_WdAssertion(v52);
        }
        v29 = (*(__int64 (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 240LL))();
        if ( v13 )
        {
          v67 = 0;
          if ( !DXGGLOBAL::m_pGlobal )
          {
            v53 = WdLogNewEntry5_WdAssertion(v28, v27);
            *(_QWORD *)(v53 + 24) = 2238LL;
            WdLogEvent5_WdAssertion(v53);
          }
          if ( (*(unsigned int (__fastcall **)(__int64, int *))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 248LL))(
                 v13,
                 &v67) )
          {
            if ( !v68 || v29 )
              goto LABEL_94;
            if ( !DXGGLOBAL::m_pGlobal )
            {
              v54 = WdLogNewEntry5_WdAssertion(v28, v27);
              *(_QWORD *)(v54 + 24) = 2238LL;
              WdLogEvent5_WdAssertion(v54);
            }
            v30 = DXGGLOBAL::GetSessionData((DXGGLOBAL *)DXGGLOBAL::m_pGlobal);
            if ( !v30
              || (v31 = *((_QWORD *)v30 + 2340)) == 0
              || ((**(void (__fastcall ***)(_QWORD))v31)(*((_QWORD *)v30 + 2340)),
                  v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 176LL))(v31),
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31),
                  !v32)
              || !v67 )
            {
LABEL_94:
              v5 = -1071775733;
            }
          }
          else
          {
            v5 = -1071775729;
          }
        }
        else if ( !v68
               || v29
               || !(unsigned int)IsTokenManagerReady()
               || (Global = DXGGLOBAL::GetGlobal(v28, v27),
                   !(*(unsigned int (**)(void))(*((_QWORD *)Global + 38048) + 224LL))()) )
        {
          v5 = -1071775730;
        }
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v55 = WdLogNewEntry5_WdAssertion(v28, v27);
          *(_QWORD *)(v55 + 24) = 2238LL;
          WdLogEvent5_WdAssertion(v55);
        }
        (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 256LL))();
      }
      if ( v5 < 0 )
      {
LABEL_96:
        v6 = Object;
      }
      else
      {
        v6 = Object;
        v5 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD), PVOID))(*v7)[12])(v7, Object);
        if ( v5 >= 0 )
        {
          v35 = 0;
          Handle = (void *)-1LL;
          if ( !DXGGLOBAL::m_pGlobal )
          {
            v56 = WdLogNewEntry5_WdAssertion(v34, v33);
            *(_QWORD *)(v56 + 24) = 2238LL;
            WdLogEvent5_WdAssertion(v56);
          }
          if ( !(*(unsigned int (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 232LL))() )
          {
            if ( !DXGGLOBAL::m_pGlobal )
            {
              v57 = WdLogNewEntry5_WdAssertion(v37, v36);
              *(_QWORD *)(v57 + 24) = 2238LL;
              WdLogEvent5_WdAssertion(v57);
            }
            if ( !(*(unsigned int (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 136LL))() )
            {
              if ( !DXGGLOBAL::m_pGlobal )
              {
                v58 = WdLogNewEntry5_WdAssertion(v37, v36);
                *(_QWORD *)(v58 + 24) = 2238LL;
                WdLogEvent5_WdAssertion(v58);
              }
              (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 144LL))();
              v35 = 1;
            }
          }
          if ( !DXGGLOBAL::m_pGlobal )
          {
            v59 = WdLogNewEntry5_WdAssertion(v37, v36);
            *(_QWORD *)(v59 + 24) = 2238LL;
            WdLogEvent5_WdAssertion(v59);
          }
          v38 = (struct _KPROCESS *)(*(__int64 (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 272LL))();
          v41 = v38;
          if ( v38 )
          {
            memset(&ApcState, 0, sizeof(ApcState));
            KeStackAttachProcess(v38, &ApcState);
            v5 = ObOpenObjectByPointer(v6, 0x40u, 0LL, 3u, g_pDxgkCompositionObjectType, 0, &Handle);
            KeUnstackDetachProcess(&ApcState);
            if ( !DXGGLOBAL::m_pGlobal )
            {
              v60 = WdLogNewEntry5_WdAssertion(v43, v42);
              *(_QWORD *)(v60 + 24) = 2238LL;
              WdLogEvent5_WdAssertion(v60);
            }
            (*(void (__fastcall **)(struct _KPROCESS *))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 200LL))(v41);
          }
          else
          {
            v5 = -1073741823;
          }
          if ( v35 )
          {
            if ( !DXGGLOBAL::m_pGlobal )
            {
              v61 = WdLogNewEntry5_WdAssertion(v40, v39);
              *(_QWORD *)(v61 + 24) = 2238LL;
              WdLogEvent5_WdAssertion(v61);
            }
            (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 184LL))();
          }
          if ( v5 >= 0 )
          {
            v18 = DXGGLOBAL::m_pGlobal == 0LL;
            a2->Token.Flip.hCompSurf = (LONG64)Handle;
            *((_QWORD *)&a2->Token.SurfaceComplete + 7) = v6[3];
            if ( v18 )
            {
              v62 = WdLogNewEntry5_WdAssertion(v40, v39);
              *(_QWORD *)(v62 + 24) = 2238LL;
              WdLogEvent5_WdAssertion(v62);
            }
            (*(void (__fastcall **)(union _D3DKMT_PRESENTHISTORYTOKEN::$04C5B4CD591473CAB2C95D87D2CBE864 *, _QWORD))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 40LL))(
              &a2->Token,
              0LL);
            v46 = *((_QWORD *)&a2->Token.SurfaceComplete + 7);
            if ( !DXGGLOBAL::m_pGlobal )
            {
              v63 = WdLogNewEntry5_WdAssertion(v45, v44);
              *(_QWORD *)(v63 + 24) = 2238LL;
              WdLogEvent5_WdAssertion(v63);
            }
            (*(void (__fastcall **)(struct _D3DKMT_PRESENTHISTORYTOKEN *, _QWORD *, _QWORD, _QWORD, __int64, UINT64, LONG, UINT, UINT))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 104LL))(
              a2,
              v6,
              a2->Token.Flip.SwapChainIndex,
              a2->Token.Flip.PresentCount,
              v46,
              a2->CompositionBindingId,
              a2->Token.Blt.DirtyRegions.Rects[0].bottom,
              a2->Token.Flip.DestWidth,
              a2->Token.Flip.DestHeight);
          }
        }
      }
    }
  }
  ObfDereferenceObject(v6);
  if ( v7 )
    (*v7)[1](v7);
LABEL_76:
  if ( v5 == -1071775730 )
  {
    v5 = NotifySurfaceOfSkippedToken(a2);
    if ( v5 >= 0 )
      v5 = -1071775730;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
