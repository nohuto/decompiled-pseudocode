/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBX1IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YGJ011I2@ZPBX@@SGJPBU_tlgProvider_t@@PBX1ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@G@@@Z @ 0x15EC02
 * Callers:
 *     _NtUserOpenClipboard@8 @ 0x116D0 (_NtUserOpenClipboard@8.c)
 *     _NtUserCloseClipboard@0 @ 0x11D0A (_NtUserCloseClipboard@0.c)
 *     _NtUserGetClipboardData@8 @ 0x161F6A (_NtUserGetClipboardData@8.c)
 *     _NtUserSetClipboardData@12 @ 0x168BC2 (_NtUserSetClipboardData@12.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z @ 0x142F12 (--$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z.c)
 *     TlgAggregateAbsorbEvent @ 0x1B6CA9 (TlgAggregateAbsorbEvent.c)
 */

int __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        _DWORD *a4,
        const char **a5,
        int a6,
        char **a7)
{
  char *v8; // edx
  int v9; // ecx
  int v10; // eax
  _DWORD v12[4]; // [esp+10h] [ebp-7Ch] BYREF
  _DWORD v13[20]; // [esp+20h] [ebp-6Ch] BYREF
  char *v14; // [esp+70h] [ebp-1Ch] BYREF

  _tlgCreate1Sz<unsigned short>(&v14, *a7);
  v13[16] = a6;
  v13[17] = 0;
  v13[18] = 4;
  v13[19] = 0;
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
  v13[14] = v9;
  v13[8] = *a4;
  v12[0] = *a2 << 24;
  v10 = *(unsigned __int16 *)(a2 + 1);
  v13[12] = v8;
  v12[1] = v10;
  v13[13] = 0;
  v13[15] = 0;
  v13[9] = 0;
  v12[2] = *(_DWORD *)(a2 + 3);
  v12[3] = *(_DWORD *)(a2 + 7);
  v13[0] = off_26625C;
  v13[10] = 8;
  v13[11] = 0;
  v13[1] = 0;
  v13[2] = *(unsigned __int16 *)off_26625C;
  v13[6] = *(unsigned __int16 *)(a2 + 11);
  v13[3] = 2;
  v13[4] = a2 + 11;
  v13[5] = 0;
  v13[7] = 1;
  return TlgAggregateAbsorbEvent(&dword_266258, v12, 6, v13);
}
