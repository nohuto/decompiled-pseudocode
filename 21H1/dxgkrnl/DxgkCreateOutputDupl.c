/*
 * XREFs of DxgkCreateOutputDupl @ 0x1C0298690
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DoesLowBoxAppHaveOutputDuplCapability@@YAEXZ @ 0x1C0294B58 (-DoesLowBoxAppHaveOutputDuplCapability@@YAEXZ.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0294BB8 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?IsInLowBox@@YAHXZ @ 0x1C0295E40 (-IsInLowBox@@YAHXZ.c)
 *     DxgkDestroyOutputDuplInternal @ 0x1C0298908 (DxgkDestroyOutputDuplInternal.c)
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
  __int64 v15; // rdx
  int v16; // ebx
  __int64 v17; // r8
  _DWORD *v18; // rdx
  int v19; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v20[16]; // [rsp+28h] [rbp-60h] BYREF
  _DWORD v21[4]; // [rsp+38h] [rbp-50h] BYREF
  _D3DKMT_CREATE_OUTPUTDUPL v22; // [rsp+48h] [rbp-40h] BYREF

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
  v19 = v9;
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 216LL))() )
  {
    if ( (unsigned int)IsInLowBox() )
    {
      v11 = v9 | 2;
      v19 = v11;
      if ( !DoesLowBoxAppHaveOutputDuplCapability() )
      {
        if ( !g_OSTestSigningEnabled || (g_OutputDuplicationTestControl & 1) == 0 )
          return 3221225506LL;
        v19 = v11 | 8;
      }
    }
  }
  v12 = (_D3DKMT_CREATE_OUTPUTDUPL *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (_D3DKMT_CREATE_OUTPUTDUPL *)MmUserProbeAddress;
  v22 = *v12;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress, v10);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGGLOBAL *)((char *)Global + 304752), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  v16 = DxgkCreateOutputDuplInternal(&v22, (struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *)&v19, v14);
  if ( v16 >= 0 )
  {
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 208LL))() )
    {
      v16 = -1073741790;
LABEL_19:
      v21[0] = v22.hAdapter;
      v21[1] = v22.VidPnSourceId;
      v21[2] = 0;
      DxgkDestroyOutputDuplInternal(v21, 1LL);
      goto LABEL_20;
    }
    v19 |= 1u;
    v16 = DxgkCreateOutputDuplInternal(&v22, (struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *)&v19, v17);
    if ( v16 < 0 )
      goto LABEL_19;
  }
LABEL_20:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20, v15);
  if ( v16 >= 0 )
  {
    v18 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v18 = (_DWORD *)MmUserProbeAddress;
    *v18 = v22.RequiredKeyedMutexCount;
  }
  return (unsigned int)v16;
}
