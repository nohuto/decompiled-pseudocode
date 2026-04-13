/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001A840
 * Callers:
 *     ?AddRef@?$SimpleVectorIterator@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@V?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAKXZ @ 0x18001A9B0 (-AddRef@-$SimpleVectorIterator@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@Applicat.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800236E0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIterator@PEAVTa.c)
 *     ?QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z @ 0x180031EA0 (-QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rdx
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  bool v5; // zf
  __int64 v6; // rax
  signed __int32 v7; // r9d

  v1 = *(_QWORD *)(a1 + 24);
  v3 = 0x7FFFFFFF;
  if ( v1 < 0 )
  {
LABEL_5:
    v7 = *(_DWORD *)(2 * v1 + 0x10);
    if ( v7 != 0x7FFFFFFF )
    {
      do
      {
        if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v7 + 1, v7) )
          break;
        v7 = *(_DWORD *)(2 * v1 + 0x10);
      }
      while ( v7 != 0x7FFFFFFF );
      if ( v7 != 0x7FFFFFFF )
        return (unsigned int)(v7 + 1);
    }
  }
  else
  {
    while ( (_DWORD)v1 != 0x7FFFFFFF )
    {
      v4 = v1 + 1;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v1 + 1, v1);
      v5 = v1 == v6;
      v1 = v6;
      if ( v5 )
        return v4;
      if ( v6 < 0 )
        goto LABEL_5;
    }
  }
  return v3;
}
