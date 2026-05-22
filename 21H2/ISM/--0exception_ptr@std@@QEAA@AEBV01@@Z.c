/*
 * XREFs of ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18006938C
 * Callers:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011A40 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18001F3A4 (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x180020E84 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180021240 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Create@MPCConstantManager@@SAJPEAVMPCManagerConnection@@@Z @ 0x1800334D8 (-Create@MPCConstantManager@@SAJPEAVMPCManagerConnection@@@Z.c)
 *     std::call_once__lambda_810dcc79efb0a72353c94b2711027391___ @ 0x18006AEE4 (std--call_once__lambda_810dcc79efb0a72353c94b2711027391___.c)
 *     std::call_once__lambda_e877c53153750a022a5d5eb128b5cc30___ @ 0x18006CA5C (std--call_once__lambda_e877c53153750a022a5d5eb128b5cc30___.c)
 *     std::call_once__lambda_b16aee874608ec8ce55934157fa7dff9___ @ 0x18007D138 (std--call_once__lambda_b16aee874608ec8ce55934157fa7dff9___.c)
 *     std::call_once__lambda_64a1b3f60083f412cbdb681d3efb1364___ @ 0x18008D264 (std--call_once__lambda_64a1b3f60083f412cbdb681d3efb1364___.c)
 *     std::call_once__lambda_7a8cdf47427de701aad174af942599f3___ @ 0x180189E38 (std--call_once__lambda_7a8cdf47427de701aad174af942599f3___.c)
 *     std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___ @ 0x18018B208 (std--call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___.c)
 *     std::call_once__lambda_c5f59095f0ae3e38eeaa5c86892cff4d___ @ 0x18018B2BC (std--call_once__lambda_c5f59095f0ae3e38eeaa5c86892cff4d___.c)
 *     std::call_once__lambda_c78139b4692b055c43ac45a1104373ed___ @ 0x180191A68 (std--call_once__lambda_c78139b4692b055c43ac45a1104373ed___.c)
 *     std::call_once__lambda_8c4ed463577f4da5b58359432c7ff390___ @ 0x18019778C (std--call_once__lambda_8c4ed463577f4da5b58359432c7ff390___.c)
 *     std::call_once__lambda_0768ca99b5f0498451ffc3dbd3bcf85b___ @ 0x180197CFC (std--call_once__lambda_0768ca99b5f0498451ffc3dbd3bcf85b___.c)
 *     std::call_once__lambda_a2967a5fef4bd4911d3370ff5cbae9e9___ @ 0x1801983A8 (std--call_once__lambda_a2967a5fef4bd4911d3370ff5cbae9e9___.c)
 *     std::call_once__lambda_ce8a15022103a02b96acfc2f7dcf1bbe___ @ 0x1801A44E8 (std--call_once__lambda_ce8a15022103a02b96acfc2f7dcf1bbe___.c)
 * Callees:
 *     <none>
 */

std::exception_ptr *__fastcall std::exception_ptr::exception_ptr(
        std::exception_ptr *this,
        const struct std::exception_ptr *a2)
{
  __ExceptionPtrCopy(this, a2);
  return this;
}
