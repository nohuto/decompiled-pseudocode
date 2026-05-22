/*
 * XREFs of ??1exception_ptr@std@@QEAA@XZ @ 0x180069488
 * Callers:
 *     _MPCMouseProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18004E791 (_MPCMouseProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _std::rethrow_exception_::_1_::dtor$0 @ 0x18006A01A (_std--rethrow_exception_--_1_--dtor$0.c)
 *     _std::call_once__lambda_810dcc79efb0a72353c94b2711027391____::_1_::dtor$0 @ 0x18006AF85 (_std--call_once__lambda_810dcc79efb0a72353c94b2711027391____--_1_--dtor$0.c)
 *     _std::call_once__lambda_e877c53153750a022a5d5eb128b5cc30____::_1_::dtor$0 @ 0x18006CAFD (_std--call_once__lambda_e877c53153750a022a5d5eb128b5cc30____--_1_--dtor$0.c)
 *     _std::call_once__lambda_b16aee874608ec8ce55934157fa7dff9____::_1_::dtor$0 @ 0x18007D1D9 (_std--call_once__lambda_b16aee874608ec8ce55934157fa7dff9____--_1_--dtor$0.c)
 *     _std::call_once__lambda_64a1b3f60083f412cbdb681d3efb1364____::_1_::dtor$0 @ 0x18008D305 (_std--call_once__lambda_64a1b3f60083f412cbdb681d3efb1364____--_1_--dtor$0.c)
 *     _std::call_once__lambda_7a8cdf47427de701aad174af942599f3____::_1_::dtor$0 @ 0x180189ED9 (_std--call_once__lambda_7a8cdf47427de701aad174af942599f3____--_1_--dtor$0.c)
 *     _std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308____::_1_::dtor$0 @ 0x18018B2A9 (_std--call_once__lambda_2ab80ba63dcc212dafbb4e4695138308____--_1_--dtor$0.c)
 *     _std::call_once__lambda_c5f59095f0ae3e38eeaa5c86892cff4d____::_1_::dtor$0 @ 0x18018B35D (_std--call_once__lambda_c5f59095f0ae3e38eeaa5c86892cff4d____--_1_--dtor$0.c)
 *     _std::call_once__lambda_c78139b4692b055c43ac45a1104373ed____::_1_::dtor$0 @ 0x180191B09 (_std--call_once__lambda_c78139b4692b055c43ac45a1104373ed____--_1_--dtor$0.c)
 *     _std::call_once__lambda_8c4ed463577f4da5b58359432c7ff390____::_1_::dtor$0 @ 0x18019782D (_std--call_once__lambda_8c4ed463577f4da5b58359432c7ff390____--_1_--dtor$0.c)
 *     _std::call_once__lambda_0768ca99b5f0498451ffc3dbd3bcf85b____::_1_::dtor$0 @ 0x180197D9D (_std--call_once__lambda_0768ca99b5f0498451ffc3dbd3bcf85b____--_1_--dtor$0.c)
 *     _std::call_once__lambda_a2967a5fef4bd4911d3370ff5cbae9e9____::_1_::dtor$0 @ 0x180198449 (_std--call_once__lambda_a2967a5fef4bd4911d3370ff5cbae9e9____--_1_--dtor$0.c)
 *     _std::call_once__lambda_ce8a15022103a02b96acfc2f7dcf1bbe____::_1_::dtor$0 @ 0x1801A4589 (_std--call_once__lambda_ce8a15022103a02b96acfc2f7dcf1bbe____--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::exception_ptr::~exception_ptr(std::exception_ptr *this)
{
  __ExceptionPtrDestroy(this);
}
