/*
 * XREFs of ?TraceWindowResizeTelemetry@@YGXPAUtagWND@@@Z @ 0x172453
 * Callers:
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     _GetProcessImageFilename@8 @ 0x15121A (_GetProcessImageFilename@8.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@G@@ABU?$_tlgWrapperByVal@$03@@444@Z @ 0x170ABC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlgPr.c)
 *     _GreGetWindowResizeTelemetry@16 @ 0x1CE370 (_GreGetWindowResizeTelemetry@16.c)
 */

void __thiscall TraceWindowResizeTelemetry(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // ecx
  int v3; // edi
  int v4; // eax
  int ProcessImageFilename; // esi
  int v6; // ecx
  int v7; // [esp+Ch] [ebp-14h] BYREF
  char *v8; // [esp+10h] [ebp-10h] BYREF
  int v9; // [esp+14h] [ebp-Ch] BYREF
  int v10; // [esp+18h] [ebp-8h] BYREF
  int v11; // [esp+1Ch] [ebp-4h] BYREF

  v1 = this;
  v2 = *this;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( GreGetWindowResizeTelemetry(v2, &v9, &v10, &v11) )
  {
    v3 = 0;
    if ( (*(_BYTE *)(v1[5] + 146) & 0x40) != 0 )
    {
      v1 = (_DWORD *)v1[15];
      v3 = 1;
      if ( !v1 )
        return;
      do
      {
        if ( (*(_BYTE *)(v1[5] + 147) & 1) != 0 )
          break;
        v1 = (_DWORD *)v1[12];
      }
      while ( v1 );
    }
    if ( v1 )
    {
      v4 = v1[2];
      v8 = byte_FC318;
      ProcessImageFilename = GetProcessImageFilename(*(PVOID **)(v4 + 232), (wchar_t **)&v8);
      if ( ProcessImageFilename )
      {
        if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x400000000000LL) )
        {
          v7 = v3;
          _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v6,
            byte_2556E6,
            v6,
            v6,
            &v8,
            (char *)&v7,
            (char *)&v9,
            (char *)&v10,
            (char *)&v11);
        }
        FreeTmpBuffer(ProcessImageFilename);
      }
    }
  }
}
