/*
 * XREFs of ?PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18007E6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B2E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_0 @ 0x18004A68B (memcpy_0.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006AD6C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B0E4 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18006B42C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B754 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007C858 (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ?IsCapturing@MPCInputProviderBase@@UEBA_NXZ @ 0x18007DE90 (-IsCapturing@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800834F0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800846FC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180084DF4 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 */

void __fastcall MPCHandProcessor::PostHitTestProcessing(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  char v3; // si
  char v4; // bl
  const char *v7; // r9
  unsigned int v8; // r12d
  MPCSlateDeadzoneHelper *v9; // rax
  volatile signed __int32 *v10; // rcx
  char v11; // di
  MPCSlateDeadzoneHelper *v12; // rax
  volatile signed __int32 *v13; // rdi
  char v14; // bl
  MPCSlateDeadzoneHelper *v15; // rax
  volatile signed __int32 *v16; // rcx
  MPCSlateDeadzoneHelper *v17; // rax
  int v18; // xmm1_4
  volatile signed __int32 *v19; // rcx
  char v20; // bl
  int v21; // eax
  struct MPCGestureHandlerManager *v22; // rbx
  _QWORD *v23; // rax
  MPCSlateDeadzoneHelper *v24; // rsi
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // xmm8_4
  unsigned __int64 v28; // rdi
  struct MPCGestureHandlerManager *v29; // rbx
  _QWORD *v30; // rax
  char IsInjecting; // al
  MPCSlateDeadzoneHelper *v32; // rax
  volatile signed __int32 *v33; // rcx
  char v34; // bl
  __int64 v35; // rcx
  const void *v36; // rdx
  __int64 v37; // rcx
  __int64 *Instance; // rbx
  _QWORD *v39; // rax
  const char *v40; // r9
  __int128 v41; // [rsp+48h] [rbp-29h]
  __int128 v42; // [rsp+58h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  std::_Ref_count_base *v44; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v45; // [rsp+E8h] [rbp+77h] BYREF
  __int64 v46; // [rsp+F0h] [rbp+7Fh] BYREF

  v3 = 0;
  v4 = 0;
  LODWORD(v44) = 0;
  if ( MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this) )
  {
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v7);
      JUMPOUT(0x18007EB0ELL);
    }
    *((_QWORD *)&v41 + 1) = 21LL;
    *(_QWORD *)&v41 = L"DisableInputInjection";
    v42 = v41;
    if ( !(unsigned __int8)MPCConstantManager::GetConstant<bool>(
                             (__int64)MPCConstantManager::s_instance,
                             (__int64 *)(this & -(__int64)(this != 24)),
                             &v42) )
    {
      v8 = 0;
      MPCSlateDeadzoneHelper::UpdateState(
        *(MPCSlateDeadzoneHelper **)(this + 4624),
        *((_BYTE *)a3 + 475) != 0,
        *((_QWORD *)a3 + 2),
        *((float *)a3 + 39),
        *((float *)a3 + 40),
        1.0);
      if ( *((_BYTE *)a3 + 474) && *((_BYTE *)a3 + 476) )
      {
        v9 = *(MPCSlateDeadzoneHelper **)(this + 4624);
        v10 = (volatile signed __int32 *)*((_QWORD *)v9 + 3);
        if ( v10 )
        {
          _InterlockedIncrement(v10 + 2);
          v10 = (volatile signed __int32 *)*((_QWORD *)v9 + 3);
        }
        v4 = 1;
        if ( !*(_BYTE *)(*((_QWORD *)v9 + 2) + 12LL) )
        {
          v11 = 1;
LABEL_12:
          if ( (v4 & 1) != 0 )
          {
            v4 &= ~1u;
            if ( v10 )
              std::_Ref_count_base::_Decref((std::_Ref_count_base *)v10);
          }
          if ( v11 )
            goto LABEL_53;
          v12 = *(MPCSlateDeadzoneHelper **)(this + 4624);
          v13 = (volatile signed __int32 *)*((_QWORD *)v12 + 3);
          if ( v13 )
          {
            _InterlockedIncrement(v13 + 2);
            v13 = (volatile signed __int32 *)*((_QWORD *)v12 + 3);
          }
          v14 = v4 | 2;
          if ( *(_BYTE *)(*((_QWORD *)v12 + 2) + 8LL) )
          {
            v16 = (volatile signed __int32 *)v44;
          }
          else
          {
            v15 = *(MPCSlateDeadzoneHelper **)(this + 4624);
            v16 = (volatile signed __int32 *)*((_QWORD *)v15 + 3);
            if ( v16 )
            {
              _InterlockedIncrement(v16 + 2);
              v16 = (volatile signed __int32 *)*((_QWORD *)v15 + 3);
            }
            v14 |= 4u;
            if ( !*(_BYTE *)(*((_QWORD *)v15 + 2) + 12LL) )
              goto LABEL_25;
          }
          v3 = 1;
LABEL_25:
          if ( (v14 & 4) != 0 && v16 )
            std::_Ref_count_base::_Decref((std::_Ref_count_base *)v16);
          if ( v13 )
            std::_Ref_count_base::_Decref((std::_Ref_count_base *)v13);
          if ( v3 )
          {
            v17 = *(MPCSlateDeadzoneHelper **)(this + 4624);
            if ( !*((_BYTE *)v17 + 13) )
            {
              v18 = *((_DWORD *)v17 + 2);
              *((_DWORD *)a3 + 39) = *((_DWORD *)v17 + 1);
              *((_DWORD *)a3 + 40) = v18;
              v17 = *(MPCSlateDeadzoneHelper **)(this + 4624);
            }
            v19 = (volatile signed __int32 *)*((_QWORD *)v17 + 3);
            if ( v19 )
            {
              _InterlockedIncrement(v19 + 2);
              v19 = (volatile signed __int32 *)*((_QWORD *)v17 + 3);
            }
            v20 = *(_BYTE *)(*((_QWORD *)v17 + 2) + 8LL);
            if ( v19 )
              std::_Ref_count_base::_Decref((std::_Ref_count_base *)v19);
            if ( v20 )
            {
              memcpy_0((void *)(this + 6672), a3, 0x7F0uLL);
LABEL_57:
              v8 = 7;
              goto LABEL_58;
            }
            goto LABEL_48;
          }
          if ( !*((_BYTE *)a3 + 152) )
            goto LABEL_58;
          v21 = *(_DWORD *)a3 & 0x662600;
          if ( *(_BYTE *)(this + 4608) )
          {
            if ( v21 )
            {
              if ( *((_DWORD *)a3 + 16) == 2 )
              {
                v8 = 1;
                goto LABEL_58;
              }
              if ( *((_DWORD *)a3 + 16) != 3 )
                goto LABEL_58;
LABEL_48:
              v8 = 2;
            }
LABEL_58:
            v32 = *(MPCSlateDeadzoneHelper **)(this + 4624);
            v33 = (volatile signed __int32 *)*((_QWORD *)v32 + 3);
            if ( v33 )
            {
              _InterlockedIncrement(v33 + 2);
              v33 = (volatile signed __int32 *)*((_QWORD *)v32 + 3);
            }
            v34 = *(_BYTE *)(*((_QWORD *)v32 + 2) + 12LL);
            if ( v33 )
              std::_Ref_count_base::_Decref((std::_Ref_count_base *)v33);
            if ( v34 )
              a3 = (struct InputInfo *)(this + 6672);
            if ( MPCInputProviderBase::IsCapturing((MPCInputProviderBase *)this)
              && *(_BYTE *)(this + 4592)
              && !*((_BYTE *)a3 + 152) )
            {
              a3 = (struct InputInfo *)(this + 8704);
              v8 = 7;
            }
            MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v35, a3, v8);
            if ( *((_BYTE *)a3 + 152) )
            {
              memcpy_0((void *)(this + 8704), v36, 0x7F0uLL);
              Instance = (__int64 *)MPCGestureHandlerManager::GetInstance(v37);
              v39 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                      &v46,
                      this & -(__int64)(this != 24));
              MPCGestureHandlerManager::DownLevelTo2D(Instance, (__int64)a3, v39, v40);
            }
            return;
          }
          if ( v21 )
          {
            if ( *((_DWORD *)a3 + 16) == 3 )
              goto LABEL_48;
            if ( *((_DWORD *)a3 + 16) == 2 )
              goto LABEL_54;
          }
          v22 = MPCGestureHandlerManager::GetInstance((__int64)v16);
          v23 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                  &v44,
                  this & -(__int64)(this != 24));
          if ( MPCGestureHandlerManager::IsInjecting((__int64)v22, v23) )
          {
LABEL_54:
            v24 = *(MPCSlateDeadzoneHelper **)(this + 4616);
            v25 = *((float *)a3 + 54);
            v26 = *((float *)a3 + 40);
            v27 = *((float *)a3 + 39);
            v28 = *((_QWORD *)a3 + 2);
            v29 = MPCGestureHandlerManager::GetInstance((__int64)v16);
            v30 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                    &v45,
                    this & -(__int64)(this != 24));
            IsInjecting = MPCGestureHandlerManager::IsInjecting((__int64)v29, v30);
            MPCSlateDeadzoneHelper::UpdateState(v24, IsInjecting, v28, v27, v26, v25);
            if ( ((*(_DWORD *)a3 & 0x662600) == 0 || *((_DWORD *)a3 + 16) != 2)
              && !*(_BYTE *)(*(_QWORD *)(this + 4616) + 13LL) )
            {
              goto LABEL_58;
            }
            goto LABEL_57;
          }
          if ( (*(_DWORD *)a3 & 0x662600) == 0 || *((_DWORD *)a3 + 16) != 6 )
            goto LABEL_58;
LABEL_53:
          v8 = 4;
          goto LABEL_58;
        }
      }
      else
      {
        v10 = (volatile signed __int32 *)v44;
      }
      v11 = 0;
      goto LABEL_12;
    }
  }
}
