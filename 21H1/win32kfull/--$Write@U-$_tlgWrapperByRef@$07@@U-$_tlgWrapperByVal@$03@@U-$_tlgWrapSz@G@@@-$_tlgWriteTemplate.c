/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBX1IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YGJ011I2@ZPBX@@SGJPBU_tlgProvider_t@@PBX1ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@G@@@Z @ 0x15ECFC
 * Callers:
 *     _NtUserCheckProcessForClipboardAccess@8 @ 0x11072 (_NtUserCheckProcessForClipboardAccess@8.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z @ 0x142F12 (--$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z.c)
 *     TlgAggregateAbsorbEvent @ 0x1B6CA9 (TlgAggregateAbsorbEvent.c)
 */

int __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        _DWORD *a4,
        int a5,
        char **a6)
{
  _DWORD v8[4]; // [esp+10h] [ebp-68h] BYREF
  _DWORD v9[16]; // [esp+20h] [ebp-58h] BYREF
  char *v10; // [esp+60h] [ebp-18h] BYREF

  _tlgCreate1Sz<unsigned short>(&v10, *a6);
  v9[12] = a5;
  v9[13] = 0;
  v9[8] = *a4;
  v8[0] = *a2 << 24;
  v8[1] = *(unsigned __int16 *)(a2 + 1);
  v9[14] = 4;
  v9[15] = 0;
  v8[2] = *(_DWORD *)(a2 + 3);
  v8[3] = *(_DWORD *)(a2 + 7);
  v9[0] = off_26625C;
  v9[9] = 0;
  v9[10] = 8;
  v9[11] = 0;
  v9[1] = 0;
  v9[2] = *(unsigned __int16 *)off_26625C;
  v9[6] = *(unsigned __int16 *)(a2 + 11);
  v9[3] = 2;
  v9[4] = a2 + 11;
  v9[5] = 0;
  v9[7] = 1;
  return TlgAggregateAbsorbEvent(&dword_266258, v8, 5, v9);
}
