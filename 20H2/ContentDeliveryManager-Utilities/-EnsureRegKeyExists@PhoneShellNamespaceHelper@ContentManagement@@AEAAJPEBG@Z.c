/*
 * XREFs of ?EnsureRegKeyExists@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z @ 0x180012EB0
 * Callers:
 *     ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x1800122F0 (-RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z @ 0x18000D0A0 (-DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z.c)
 *     ?CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x18000D16C (-CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z.c)
 */

__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(
        ContentManagement::PhoneShellNamespaceHelper *this,
        const unsigned __int16 *a2,
        bool *a3)
{
  const unsigned __int16 *v4; // rdx
  int DoesKeyExist; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ContentManagement::PhoneShellNamespaceHelper *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist(a2, (unsigned __int16 *)&v9, a3);
  if ( DoesKeyExist < 0 )
  {
    v6 = 917LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)DoesKeyExist);
    return (unsigned int)DoesKeyExist;
  }
  if ( !(_BYTE)v9 )
  {
    DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::CreateKey(a2, v4);
    if ( DoesKeyExist < 0 )
    {
      v6 = 920LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
