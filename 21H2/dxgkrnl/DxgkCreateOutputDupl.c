/*
 * XREFs of DxgkCreateOutputDupl @ 0x1C0324550
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DoesLowBoxAppHaveOutputDuplCapability@@YAEXZ @ 0x1C032048C (-DoesLowBoxAppHaveOutputDuplCapability@@YAEXZ.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C03204EC (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?IsInLowBox@@YAHXZ @ 0x1C0321980 (-IsInLowBox@@YAHXZ.c)
 *     DxgkDestroyOutputDuplInternal @ 0x1C03247E8 (DxgkDestroyOutputDuplInternal.c)
 */

__int64 __fastcall DxgkCreateOutputDupl(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct DXGPROCESS *Current; // rdi
  int v7; // eax
  int v8; // ebx
  int v9; // ebx
  _D3DKMT_CREATE_OUTPUTDUPL *v10; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // r8
  int v13; // ebx
  __int64 v14; // r8
  _DWORD *v15; // rdx
  int v16; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v17[16]; // [rsp+58h] [rbp-60h] BYREF
  _DWORD v18[4]; // [rsp+68h] [rbp-50h] BYREF
  _D3DKMT_CREATE_OUTPUTDUPL v19; // [rsp+78h] [rbp-40h] BYREF

  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, 3474LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context.", 3474LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( (g_OutputDuplicationTestControl & 2) != 0 )
    v7 = 1;
  else
    v7 = (*(__int64 (**)(void))(*((_QWORD *)Current + 11) + 216LL))();
  v8 = (v7 != 0 ? 4 : 0) | (8 * (g_OutputDuplicationTestControl & 1));
  v16 = v8;
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 216LL))() )
  {
    if ( (unsigned int)IsInLowBox() )
    {
      v9 = v8 | 2;
      v16 = v9;
      if ( !DoesLowBoxAppHaveOutputDuplCapability() )
      {
        if ( !g_OSTestSigningEnabled || (g_OutputDuplicationTestControl & 1) == 0 )
          return 3221225506LL;
        v16 = v9 | 8;
      }
    }
  }
  v10 = (_D3DKMT_CREATE_OUTPUTDUPL *)a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = (_D3DKMT_CREATE_OUTPUTDUPL *)MmUserProbeAddress;
  v19 = *v10;
  Global = DXGGLOBAL_GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGGLOBAL *)((char *)Global + 305320), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v13 = DxgkCreateOutputDuplInternal(&v19, (struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *)&v16, v12);
  if ( v13 >= 0 )
  {
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 208LL))() )
    {
      v13 = -1073741790;
LABEL_19:
      v18[0] = v19.hAdapter;
      v18[1] = v19.VidPnSourceId;
      v18[2] = 0;
      DxgkDestroyOutputDuplInternal(v18, 1LL);
      goto LABEL_20;
    }
    v16 |= 1u;
    v13 = DxgkCreateOutputDuplInternal(&v19, (struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *)&v16, v14);
    if ( v13 < 0 )
      goto LABEL_19;
  }
LABEL_20:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
  if ( v13 >= 0 )
  {
    v15 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v15 = (_DWORD *)MmUserProbeAddress;
    *v15 = v19.RequiredKeyedMutexCount;
  }
  return (unsigned int)v13;
}
