/*
 * XREFs of ?InvokeNodePoseValidityChangedCallbacksAsync@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_VALIDITY_FLAGS@@@Z @ 0x18015FC94
 * Callers:
 *     ?UpdateMostRecentNodePoseValidity@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_VALIDITY_FLAGS@@@Z @ 0x180166864 (-UpdateMostRecentNodePoseValidity@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A64 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?Then@ChainedThreadpoolWorker@ThreadHelpers@@QEAAX$$QEAV?$function@$$A6AXXZ@std@@PEAUIUnknown@@@Z @ 0x180166070 (-Then@ChainedThreadpoolWorker@ThreadHelpers@@QEAAX$$QEAV-$function@$$A6AXXZ@std@@PEAUIUnknown@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::InvokeNodePoseValidityChangedCallbacksAsync(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        __int32 a4)
{
  __int64 v4; // rdx
  __m256i v6; // [rsp+20h] [rbp-19h]
  __int64 (__fastcall **v7)(); // [rsp+40h] [rbp+7h] BYREF
  __m256i v8; // [rsp+48h] [rbp+Fh]
  __int64 (__fastcall ***v9)(); // [rsp+78h] [rbp+3Fh]

  v6.m256i_i64[0] = a1;
  *(_OWORD *)&v6.m256i_u64[1] = *a3;
  v6.m256i_i32[6] = a4;
  v7 = off_1801B6F50;
  v8 = v6;
  v9 = &v7;
  ThreadHelpers::ChainedThreadpoolWorker::Then((PVOID)(a1 + 264));
  return std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)&v7, v4);
}
