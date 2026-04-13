/*
 * XREFs of ??1_lambda_eb8e642fd6379236047631f6462c9202_@@QEAA@XZ @ 0x180011F60
 * Callers:
 *     _ContentManagement::IdentityManager::TryGetSecondaryMSATicketAsync_::_1_::dtor$1 @ 0x1800CF313 (_ContentManagement--IdentityManager--TryGetSecondaryMSATicketAsync_--_1_--dtor$1.c)
 *     _Windows::Internal::MakeAsyncOperation_Windows::Internal::CHSTRINGResult_HSTRING_____Windows::Internal::ComTaskPoolHandler__lambda_eb8e642fd6379236047631f6462c9202____::_1_::dtor$2 @ 0x1800CF935 (_Windows--Internal--MakeAsyncOperation_Windows--Internal--CHSTRINGResult_HSTRING____ea_1800CF935.c)
 * Callees:
 *     <none>
 */

void __fastcall _lambda_eb8e642fd6379236047631f6462c9202_::~_lambda_eb8e642fd6379236047631f6462c9202_(HSTRING *this)
{
  WindowsDeleteString(this[1]);
  this[1] = 0LL;
}
