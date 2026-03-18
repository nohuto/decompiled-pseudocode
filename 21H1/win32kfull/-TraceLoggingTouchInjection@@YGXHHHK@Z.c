/*
 * XREFs of ?TraceLoggingTouchInjection@@YGXHHHK@Z @ 0x187129
 * Callers:
 *     _NtUserInitializeTouchInjection@8 @ 0x16557C (_NtUserInitializeTouchInjection@8.c)
 *     _NtUserInjectTouchInput@8 @ 0x165800 (_NtUserInjectTouchInput@8.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@55@Z @ 0x185C84 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tlgWriteTe.c)
 */

void __userpurge TraceLoggingTouchInjection(
        int a1@<edx>,
        int a2@<ecx>,
        const char *a3,
        _DWORD *a4,
        int a5,
        unsigned int a6)
{
  int v7; // ecx
  int *v8; // eax
  const char **v9; // [esp-10h] [ebp-30h]
  const char **v10; // [esp-8h] [ebp-28h]
  _DWORD *v11; // [esp-4h] [ebp-24h]
  _DWORD *v12; // [esp+4h] [ebp-1Ch] BYREF
  const char *v13; // [esp+8h] [ebp-18h] BYREF
  int v14; // [esp+Ch] [ebp-14h] BYREF
  const char *v15; // [esp+10h] [ebp-10h] BYREF
  _DWORD *v16; // [esp+14h] [ebp-Ch] BYREF
  _DWORD v17[2]; // [esp+18h] [ebp-8h] BYREF

  if ( a2 == 1 )
  {
    if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x200000000000LL) )
    {
      v12 = a4;
      v13 = a3;
      v16 = v17;
      v11 = &v12;
      v15 = "InjectTouchInput";
      v10 = &v13;
      v9 = &v15;
      v8 = (int *)&v16;
LABEL_8:
      v17[1] = 0;
      v17[0] = 0x1000000;
      v14 = a1;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v7,
        byte_255F52,
        v7,
        v7,
        v8,
        v9,
        (int)&v14,
        (int)v10,
        (int)v11);
    }
  }
  else if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x200000000000LL) )
  {
    v16 = a4;
    v15 = a3;
    v12 = v17;
    v11 = &v16;
    v13 = "InitializeTouchInjection";
    v10 = &v15;
    v9 = &v13;
    v8 = (int *)&v12;
    goto LABEL_8;
  }
}
