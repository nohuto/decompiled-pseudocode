/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@G@@@Z @ 0x15EB77
 * Callers:
 *     _NtUserOpenClipboard@8 @ 0x116D0 (_NtUserOpenClipboard@8.c)
 *     _NtUserCloseClipboard@0 @ 0x11D0A (_NtUserCloseClipboard@0.c)
 *     _NtUserGetClipboardData@8 @ 0x161F6A (_NtUserGetClipboardData@8.c)
 *     _NtUserSetClipboardData@12 @ 0x168BC2 (_NtUserSetClipboardData@12.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z @ 0x142F12 (--$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        const char **a5,
        int a6,
        char **a7)
{
  char *v8; // edx
  int v9; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+8h] [ebp-54h] BYREF
  char *v12; // [esp+28h] [ebp-34h]
  int v13; // [esp+2Ch] [ebp-30h]
  int v14; // [esp+30h] [ebp-2Ch]
  int v15; // [esp+34h] [ebp-28h]
  int v16; // [esp+38h] [ebp-24h]
  int v17; // [esp+3Ch] [ebp-20h]
  int v18; // [esp+40h] [ebp-1Ch]
  int v19; // [esp+44h] [ebp-18h]
  char *v20; // [esp+48h] [ebp-14h] BYREF

  _tlgCreate1Sz<unsigned short>(&v20, *a7);
  v16 = a6;
  v17 = 0;
  v18 = 4;
  v19 = 0;
  v8 = (char *)*a5;
  if ( *a5 )
  {
    v9 = &(*a5)[strlen(*a5) + 1] - v8;
  }
  else
  {
    v8 = byte_FC858;
    v9 = 1;
  }
  v12 = v8;
  v13 = 0;
  v14 = v9;
  v15 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&dword_266280, a2, 0, 0, 5u, &UserData);
}
