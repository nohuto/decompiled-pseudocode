/*
 * XREFs of GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_807778e6719fb664354e7e91ff2b2b86___ @ 0x18016E82C
 * Callers:
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x18000E550 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BA68 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x18000D5AC (-_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18000DC90 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 */

__int64 __fastcall GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_807778e6719fb664354e7e91ff2b2b86___(
        __int64 a1)
{
  __int64 v2; // rax
  unsigned __int8 v4[4]; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+34h] [rbp-14h]
  int v6; // [rsp+38h] [rbp-10h]
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v7);
  if ( v7 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)v4 = 4;
    v5 = 1129590832;
    v6 = *(_DWORD *)(v2 + 264);
    ApplicationViewManagement::CPersistence::_PersistData(
      (HKEY *)(v7 + 40),
      **(const unsigned __int16 ***)a1,
      L"CloakType",
      v4,
      0xCu);
  }
  return Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v7);
}
