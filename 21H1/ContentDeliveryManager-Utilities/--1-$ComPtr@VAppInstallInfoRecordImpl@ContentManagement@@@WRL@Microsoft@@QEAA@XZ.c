/*
 * XREFs of ??1?$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@QEAA@XZ @ 0x180026900
 * Callers:
 *     _ContentManagement::AppManager::ConvertFromStoreRecords_::_1_::dtor$4 @ 0x1800CFDDB (_ContentManagement--AppManager--ConvertFromStoreRecords_--_1_--dtor$4.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180014210 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<ContentManagement::AppInstallInfoRecordImpl>::~ComPtr<ContentManagement::AppInstallInfoRecordImpl>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(result);
  }
  return result;
}
