/*
 * XREFs of __OpenClipboard@8 @ 0x11832
 * Callers:
 *     _NtUserOpenClipboard@8 @ 0x116D0 (_NtUserOpenClipboard@8.c)
 *     _xxxSnapWindow@8 @ 0x1A20A2 (_xxxSnapWindow@8.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ @ 0x91C96 (-CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@G@@@Z @ 0x181887 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 */

int __fastcall _OpenClipboard(int a1, int *a2)
{
  int v3; // edi
  struct tagWINDOWSTATION *v4; // eax
  struct tagWINDOWSTATION *v5; // esi
  int v6; // ecx
  int *v7; // ebx
  int v8; // edx
  int v9; // ecx
  int v11; // ecx
  int v12; // [esp+Ch] [ebp-8h] BYREF
  int *v13; // [esp+10h] [ebp-4h] BYREF

  v3 = 0;
  v13 = a2;
  if ( a2 )
    *a2 = 0;
  if ( a1 && *(char *)(*(_DWORD *)(a1 + 20) + 11) < 0 )
  {
    UserSetLastError(87);
  }
  else
  {
    v4 = CheckClipboardAccess();
    v5 = v4;
    if ( v4 )
    {
      v6 = *((_DWORD *)v4 + 12);
      v12 = _gptiCurrent;
      if ( a1 == v6 )
      {
        if ( _gptiCurrent == *((_DWORD *)v4 + 10) )
          return 1;
        if ( a1 == v6 )
          goto LABEL_8;
      }
      if ( !*((_DWORD *)v4 + 10) )
      {
LABEL_8:
        HMAssignmentLock(v6, (char *)v4 + 48);
        v7 = v13;
        v8 = v12;
        *((_DWORD *)v5 + 10) = v12;
        if ( v7 && ((*(_BYTE *)(v8 + 264) & 2) == 0 || *(_DWORD *)(*(_DWORD *)(v8 + 232) + 388) != *((_DWORD *)v5 + 18)) )
        {
          v9 = *((_DWORD *)v5 + 14);
          if ( !v9 || *(_DWORD *)(v8 + 232) != *(_DWORD *)(*(_DWORD *)(v9 + 8) + 232) )
            v3 = 1;
          *v7 = v3;
          *(_DWORD *)(*(_DWORD *)(v8 + 232) + 388) = *((_DWORD *)v5 + 18);
        }
        return 1;
      }
      UserSetLastError(5);
      if ( (unsigned int)dword_266280 > 5 && (unsigned __int8)_tlgKeywordOn(0, 0x4000) )
      {
        v11 = *(_DWORD *)(*((_DWORD *)v5 + 10) + 232);
        v13 = (int *)(v11 + 584);
        v12 = *(_DWORD *)(v11 + 32);
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v11,
          v11,
          &v12,
          &v13);
      }
    }
  }
  return 0;
}
