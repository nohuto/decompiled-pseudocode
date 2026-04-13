/*
 * XREFs of ??1_lambda_7722d00b753d5de953ad2eb3f873b256_@@QEAA@XZ @ 0x18001180C
 * Callers:
 *     _ContentManagement::IdentityManager::TryGetSecondaryMSATicketAsync_::_1_::dtor$1 @ 0x1800CCC83 (_ContentManagement--IdentityManager--TryGetSecondaryMSATicketAsync_--_1_--dtor$1.c)
 *     _Windows::Internal::MakeAsyncOperation_Windows::Internal::CHSTRINGResult_HSTRING_____Windows::Internal::ComTaskPoolHandler__lambda_7722d00b753d5de953ad2eb3f873b256____::_1_::dtor$2 @ 0x1800CD17F (_Windows--Internal--MakeAsyncOperation_Windows--Internal--CHSTRINGResult_HSTRING____ea_1800CD17F.c)
 * Callees:
 *     <none>
 */

void __fastcall _lambda_7722d00b753d5de953ad2eb3f873b256_::~_lambda_7722d00b753d5de953ad2eb3f873b256_(HSTRING *this)
{
  WindowsDeleteString(this[1]);
  this[1] = 0LL;
}
