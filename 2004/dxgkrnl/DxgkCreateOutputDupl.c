/*
 * XREFs of DxgkCreateOutputDupl @ 0x1C029CB80
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DoesLowBoxAppHaveOutputDuplCapability@@YAEXZ @ 0x1C0299048 (-DoesLowBoxAppHaveOutputDuplCapability@@YAEXZ.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C02990A8 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?IsInLowBox@@YAHXZ @ 0x1C029A330 (-IsInLowBox@@YAHXZ.c)
 *     DxgkDestroyOutputDuplInternal @ 0x1C029CDF8 (DxgkDestroyOutputDuplInternal.c)
 */

__int64 __fastcall DxgkCreateOutputDupl(ULONG64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v6; // rax
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  int v11; // ebx
  _D3DKMT_CREATE_OUTPUTDUPL *v12; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v14; // r8
  int v15; // ebx
  __int64 v16; // r8
  _DWORD *v17; // rdx
  int v18; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v19[16]; // [rsp+28h] [rbp-60h] BYREF
  _DWORD v20[4]; // [rsp+38h] [rbp-50h] BYREF
  _D3DKMT_CREATE_OUTPUTDUPL v21; // [rsp+48h] [rbp-40h] BYREF

  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v6 + 24) = 3480LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  if ( (g_OutputDuplicationTestControl & 2) != 0 )
    v8 = 1;
  else
    v8 = (*(__int64 (**)(void))(*((_QWORD *)Current + 11) + 216LL))();
  v9 = (v8 != 0 ? 4 : 0) | (8 * (g_OutputDuplicationTestControl & 1));
  v18 = v9;
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 216LL))() )
  {
    if ( (unsigned int)IsInLowBox() )
    {
      v11 = v9 | 2;
      v18 = v11;
      if ( !DoesLowBoxAppHaveOutputDuplCapability() )
      {
        if ( !g_OSTestSigningEnabled || (g_OutputDuplicationTestControl & 1) == 0 )
          return 3221225506LL;
        v18 = v11 | 8;
      }
    }
  }
  v12 = (_D3DKMT_CREATE_OUTPUTDUPL *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (_D3DKMT_CREATE_OUTPUTDUPL *)MmUserProbeAddress;
  v21 = *v12;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress, v10);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGGLOBAL *)((char *)Global + 304880), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  v15 = DxgkCreateOutputDuplInternal(&v21, (struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *)&v18, v14);
  if ( v15 >= 0 )
  {
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 208LL))() )
    {
      v15 = -1073741790;
LABEL_19:
      v20[0] = v21.hAdapter;
      v20[1] = v21.VidPnSourceId;
      v20[2] = 0;
      DxgkDestroyOutputDuplInternal(v20, 1LL);
      goto LABEL_20;
    }
    v18 |= 1u;
    v15 = DxgkCreateOutputDuplInternal(&v21, (struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *)&v18, v16);
    if ( v15 < 0 )
      goto LABEL_19;
  }
LABEL_20:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
  if ( v15 >= 0 )
  {
    v17 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v17 = (_DWORD *)MmUserProbeAddress;
    *v17 = v21.RequiredKeyedMutexCount;
  }
  return (unsigned int)v15;
}
