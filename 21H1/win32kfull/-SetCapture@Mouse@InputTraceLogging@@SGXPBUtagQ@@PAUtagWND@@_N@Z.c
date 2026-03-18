/*
 * XREFs of ?SetCapture@Mouse@InputTraceLogging@@SGXPBUtagQ@@PAUtagWND@@_N@Z @ 0xC529E
 * Callers:
 *     _xxxCapture@12 @ 0xC4EA6 (_xxxCapture@12.c)
 *     _LockCaptureWindow@8 @ 0xC5242 (_LockCaptureWindow@8.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CG_NW4InputTraceKeywords@@E@Z @ 0x9AEC8 (-Enabled@InputTraceLogging@@CG_NW4InputTraceKeywords@@E@Z.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ?GetWindowDetails@InputTraceLogging@@CG?AUWindowDetails@1@PAUtagWND@@PAUtagBWND@@@Z @ 0x14D176 (-GetWindowDetails@InputTraceLogging@@CG-AUWindowDetails@1@PAUtagWND@@PAUtagBWND@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@33ABU?$_tlgWrapSz@G@@33334ABU?$_tlgWrapSz@D@@@Z @ 0x1875FF (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U-$_tlgWrapSz@D@@@-$_tlg.c)
 */

void __userpurge InputTraceLogging::Mouse::SetCapture(
        int *a1@<edx>,
        int a2@<ecx>,
        const struct tagQ *a3,
        struct tagWND *a4,
        bool a5)
{
  int v6; // esi
  int v7; // ecx
  int v8; // [esp+Ch] [ebp-64h] BYREF
  int v9; // [esp+10h] [ebp-60h] BYREF
  int v10; // [esp+14h] [ebp-5Ch] BYREF
  int v11; // [esp+18h] [ebp-58h] BYREF
  int v12; // [esp+1Ch] [ebp-54h] BYREF
  int v13; // [esp+20h] [ebp-50h] BYREF
  int v14; // [esp+24h] [ebp-4Ch] BYREF
  int v15; // [esp+28h] [ebp-48h] BYREF
  int v16; // [esp+2Ch] [ebp-44h] BYREF
  int v17; // [esp+30h] [ebp-40h] BYREF
  _DWORD v18[7]; // [esp+34h] [ebp-3Ch] BYREF
  _BYTE v19[32]; // [esp+50h] [ebp-20h] BYREF

  v8 = a2;
  if ( InputTraceLogging::Enabled(0) )
  {
    qmemcpy(v18, (const void *)InputTraceLogging::GetWindowDetails(a1, v19), sizeof(v18));
    if ( (unsigned int)dword_2689E8 > 4 )
    {
      v6 = 0;
      if ( _tlgKeywordOn(&dword_2689E8, 64LL) )
      {
        if ( a1 )
          v6 = *a1;
        v9 = v18[0];
        v10 = v18[1];
        v11 = v18[6];
        v12 = v18[5];
        v13 = v18[4];
        v14 = v18[3];
        v15 = v18[2];
        v17 = (unsigned __int8)a3;
        v16 = v6;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
          (int)&dword_2689E8,
          (int)&unk_2566B2,
          v7,
          v7,
          (int)&v8,
          (int)&v17,
          (int)&v16,
          (int)&v15,
          (int)&v14,
          (int)&v13,
          (int)&v12,
          (int)&v11,
          (int)&v10,
          (int)&v9);
      }
    }
  }
}
