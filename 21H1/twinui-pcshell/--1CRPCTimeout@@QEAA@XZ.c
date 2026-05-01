/*
 * XREFs of ??1CRPCTimeout@@QEAA@XZ @ 0x180155E4C
 * Callers:
 *     _CImmersiveApp::QueryService_::_1_::dtor$0 @ 0x18015C1B0 (_CImmersiveApp--QueryService_--_1_--dtor$0.c)
 *     __lambda_4b23a44972d25bfc52aa58256fd4c9b9_::operator()_::_1_::dtor$0 @ 0x180249348 (__lambda_4b23a44972d25bfc52aa58256fd4c9b9_--operator()_--_1_--dtor$0.c)
 *     _TabViewManager::TryFindAndNotifyReplacementTab_::_1_::dtor$6 @ 0x18025CA3E (_TabViewManager--TryFindAndNotifyReplacementTab_--_1_--dtor$6.c)
 *     __lambda_11f4e68007e87e41ff887ccfc1974ff4_::operator()_::_1_::dtor$5 @ 0x18026C3F9 (__lambda_11f4e68007e87e41ff887ccfc1974ff4_--operator()_--_1_--dtor$5.c)
 *     __lambda_11f4e68007e87e41ff887ccfc1974ff4_::operator()_::_1_::dtor$6 @ 0x18026C405 (__lambda_11f4e68007e87e41ff887ccfc1974ff4_--operator()_--_1_--dtor$6.c)
 *     _TabTransferManager::PerformComplete_::_1_::dtor$8 @ 0x18026E517 (_TabTransferManager--PerformComplete_--_1_--dtor$8.c)
 *     _TabTransferManager::PerformDrop_::_1_::dtor$3 @ 0x18026E889 (_TabTransferManager--PerformDrop_--_1_--dtor$3.c)
 *     _TabTransferManager::PerformDrop_::_1_::dtor$5 @ 0x18026E8A1 (_TabTransferManager--PerformDrop_--_1_--dtor$5.c)
 *     __lambda_1cf7f7afac08fe2873a8a6306d8dbd84_::operator()_::_1_::dtor$6 @ 0x1802A8C8D (__lambda_1cf7f7afac08fe2873a8a6306d8dbd84_--operator()_--_1_--dtor$6.c)
 *     __lambda_1c848fc40f8d66460ef5049a4e343f17_::operator()_::_1_::dtor$6 @ 0x1802B9AA2 (__lambda_1c848fc40f8d66460ef5049a4e343f17_--operator()_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CRPCTimeout::~CRPCTimeout(CRPCTimeout *this)
{
  CBaseRPCTimeout::Disarm(this);
}
