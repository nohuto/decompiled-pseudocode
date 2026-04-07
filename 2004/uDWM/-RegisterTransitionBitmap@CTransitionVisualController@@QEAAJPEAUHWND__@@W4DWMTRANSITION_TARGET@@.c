/*
 * XREFs of ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x1800AB2D8
 * Callers:
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180099D28 (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x1800852B0 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@CProjectionBorderManager@@I@Z @ 0x18008E308 (-AddMultipleAndSet@-$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@C.c)
 */

__int64 __fastcall CTransitionVisualController::RegisterTransitionBitmap(
        __int64 a1,
        __int64 a2,
        int a3,
        _DWORD *a4,
        _OWORD *a5,
        __int128 *a6,
        void *a7,
        unsigned __int64 a8)
{
  signed int v8; // r10d
  int v11; // edx
  __int64 v13; // rax
  volatile signed __int32 *v14; // rbx
  signed int v15; // edx
  __int64 v16; // r8
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rax
  int v19; // eax
  int v20; // edi
  CBaseObject *v21; // rcx
  __int128 v22; // xmm1
  int v23; // eax
  CBaseObject *v24; // rcx
  CBaseObject *v26; // [rsp+30h] [rbp-51h] BYREF
  _OWORD v27[3]; // [rsp+38h] [rbp-49h] BYREF
  CBaseObject *v28; // [rsp+68h] [rbp-19h]

  v8 = a4[2] - *a4;
  v11 = a4[3];
  v28 = 0LL;
  v13 = (unsigned int)v8;
  v14 = 0LL;
  if ( v8 < 0 )
    v13 = 0LL;
  v26 = 0LL;
  v15 = v11 - a4[1];
  v16 = (unsigned int)v15;
  if ( v15 < 0 )
    v16 = 0LL;
  v17 = v13 * v16;
  memset(v27, 0, sizeof(v27));
  if ( v17 > 0xFFFFFFFF || (v18 = 4LL * (unsigned int)v17, v18 > 0xFFFFFFFF) || a8 < (unsigned int)v18 )
  {
    v20 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024809,
      0xC7Eu);
LABEL_27:
    if ( a3 == 22 )
    {
      v24 = *(CBaseObject **)(a1 + 184);
      if ( v24 )
      {
        CBaseObject::Release(v24);
        *(_QWORD *)(a1 + 184) = 0LL;
      }
    }
    else if ( v28 )
    {
      CBaseObject::Release(v28);
    }
    goto LABEL_32;
  }
  if ( v8 < 0 )
    v8 = 0;
  if ( v15 < 0 )
    v15 = 0;
  v19 = CBitmapSource::Create(v8, v15, v8, v15, a7, &v26);
  v20 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v19,
      0xC6Bu);
LABEL_14:
    v14 = (volatile signed __int32 *)v26;
    goto LABEL_24;
  }
  if ( a3 == 22 )
  {
    v21 = *(CBaseObject **)(a1 + 184);
    if ( v21 )
      CBaseObject::Release(v21);
    v14 = (volatile signed __int32 *)v26;
    *(_QWORD *)(a1 + 184) = v26;
    if ( v14 )
    {
      _InterlockedIncrement(v14 + 2);
      goto LABEL_14;
    }
LABEL_24:
    if ( v20 >= 0 )
      goto LABEL_32;
    goto LABEL_27;
  }
  v14 = (volatile signed __int32 *)v26;
  *(_QWORD *)&v27[0] = a2;
  DWORD2(v27[0]) = a3;
  v28 = v26;
  v22 = *a6;
  *(_OWORD *)((char *)v27 + 12) = *a5;
  *(_OWORD *)((char *)&v27[1] + 12) = v22;
  if ( v26 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v26 + 2);
    v14 = (volatile signed __int32 *)v26;
  }
  v23 = DynArray<CProjectionBorderManager::VisualInfo,0>::AddMultipleAndSet(a1 + 152, (__int64)v27);
  v20 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v23,
      0xC79u);
    goto LABEL_24;
  }
LABEL_32:
  if ( v14 )
    CBaseObject::Release((CBaseObject *)v14);
  return (unsigned int)v20;
}
