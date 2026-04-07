/*
 * XREFs of ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18009F908
 * Callers:
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x18009DE50 (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x18009ECA4 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026234 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x1800341DC (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x1800811B4 (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?LoadPenResources@CContactManager@@AEAAXXZ @ 0x18009DBCC (-LoadPenResources@CContactManager@@AEAAXXZ.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x1800A0848 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800A545C (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800A55B0 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CContactManager::ProcessPenContact(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned __int64 a7)
{
  CContactManager *v10; // rcx
  unsigned int v11; // r15d
  __int64 v12; // rdi
  __int64 *v13; // r14
  int started; // eax
  __int64 v15; // rsi
  struct CTouchVisual *v16; // rbx
  CContactManager *v17; // rcx
  struct CTouchVisual *v18; // rbx
  __int64 v19; // rdi
  CPenBarrelKeyVisual *v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v26; // [rsp+20h] [rbp-40h]
  _BYTE v27[40]; // [rsp+30h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+A8h] [rbp+48h] BYREF

  v28 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0;
  v12 = 0LL;
  if ( !*(_DWORD *)(a1 + 112) )
    goto LABEL_5;
  v13 = (__int64 *)(a1 + 88);
  v10 = *(CContactManager **)(a1 + 88);
  while ( *((_DWORD *)v10 + 10 * v12) != a2 )
  {
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 112) )
      goto LABEL_5;
  }
  if ( (int)v12 < 0 )
  {
LABEL_5:
    if ( !*(_QWORD *)(a1 + 40) )
      CContactManager::LoadPenResources((CContactManager *)a1);
    *(_DWORD *)&v27[24] = -1;
    *(_OWORD *)&v27[8] = 0LL;
    *(_DWORD *)v27 = a2;
    *(_DWORD *)&v27[4] = a6;
    *(_QWORD *)&v27[28] = a3;
    started = CContactManager::StartPenBarrelVisual(v10, (struct CPenContact *)v27, a7);
    v11 = started;
    if ( started >= 0 )
    {
      v21 = *(unsigned int *)(a1 + 112);
      v22 = v21 + 1;
      if ( (int)v21 + 1 < (unsigned int)v21 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        goto LABEL_26;
      }
      if ( v22 <= *(_DWORD *)(a1 + 108) )
      {
        v23 = 5 * v21;
        v24 = *(_QWORD *)(a1 + 88);
        *(_OWORD *)(v24 + 8 * v23) = *(_OWORD *)v27;
        *(_OWORD *)(v24 + 8 * v23 + 16) = *(_OWORD *)&v27[16];
        *(_QWORD *)(v24 + 8 * v23 + 32) = *(_QWORD *)&v27[32];
        *(_DWORD *)(a1 + 112) = v22;
        goto LABEL_26;
      }
      started = DynArrayImpl<0>::AddMultipleAndSet(a1 + 88, 0x28u, 1, v27);
      if ( started >= 0 )
        goto LABEL_26;
      v26 = 192;
    }
    else
    {
      v26 = 1566;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, v26);
    goto LABEL_26;
  }
  v15 = 5 * v12;
  if ( a5 == 3 )
  {
    v16 = (struct CTouchVisual *)*((_QWORD *)v10 + 5 * v12 + 1);
    CContactManager::StopAndRemoveFromRootNode(v10, v16);
    if ( v16 )
      CBaseObject::Release(v16);
    v18 = *(struct CTouchVisual **)(*v13 + 40 * v12 + 16);
    CContactManager::StopAndRemoveFromRootNode(v17, v18);
    if ( v18 )
      CBaseObject::Release(v18);
    DynArray<CPenContact,0>::RemoveAt(v13, v12);
  }
  else
  {
    v19 = *((_QWORD *)v10 + 5 * v12 + 1);
    if ( v19 )
    {
      v20 = (CPenBarrelKeyVisual *)*((_QWORD *)v10 + v15 + 1);
      *(_DWORD *)(v19 + 308) = a6;
      *(_QWORD *)(v19 + 300) = a3;
      CPenBarrelKeyVisual::PlaceVisuals(v20);
      CPenBarrelKeyVisual::UpdateBarrelAlpha((CPenBarrelKeyVisual *)v19);
      v10 = (CContactManager *)*v13;
    }
    *(_QWORD *)((char *)v10 + 8 * v15 + 28) = a3;
  }
LABEL_26:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v28);
  return v11;
}
