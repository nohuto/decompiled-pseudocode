/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@G@@@Z @ 0x181887
 * Callers:
 *     __OpenClipboard@8 @ 0x11832 (__OpenClipboard@8.c)
 *     ?GetProcessSessionFonts@@YGJPAU_EPROCESS@@IIPAI1PAPAXPAG@Z @ 0x989AE (-GetProcessSessionFonts@@YGJPAU_EPROCESS@@IIPAI1PAPAXPAG@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z @ 0x142F12 (--$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        char **a6)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+4h] [ebp-44h] BYREF
  int v9; // [esp+24h] [ebp-24h]
  int v10; // [esp+28h] [ebp-20h]
  int v11; // [esp+2Ch] [ebp-1Ch]
  int v12; // [esp+30h] [ebp-18h]
  char *v13; // [esp+34h] [ebp-14h] BYREF

  _tlgCreate1Sz<unsigned short>(&v13, *a6);
  v9 = a5;
  v10 = 0;
  v11 = 4;
  v12 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&dword_266280, a2, 0, 0, 4u, &UserData);
}
