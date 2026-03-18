/*
 * XREFs of _xxxWindowFromPoint@8 @ 0x9ADAE
 * Callers:
 *     _NtUserWindowFromPoint@8 @ 0x11F8E (_NtUserWindowFromPoint@8.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxWindowHitTest2@20 @ 0x7D1C4 (_xxxWindowHitTest2@20.c)
 *     ?Enabled@InputTraceLogging@@CG_NW4InputTraceKeywords@@E@Z @ 0x9AEC8 (-Enabled@InputTraceLogging@@CG_NW4InputTraceKeywords@@E@Z.c)
 *     _xxxDCEWindowHitTest@32 @ 0x9AED8 (_xxxDCEWindowHitTest@32.c)
 *     _GetThreadDesktopWindow@4 @ 0x9E52A (_GetThreadDesktopWindow@4.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ?GetWindowDetails@InputTraceLogging@@CG?AUWindowDetails@1@PAUtagWND@@PAUtagBWND@@@Z @ 0x14D176 (-GetWindowDetails@InputTraceLogging@@CG-AUWindowDetails@1@PAUtagWND@@PAUtagBWND@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@3ABU?$_tlgWrapSz@G@@33334ABU?$_tlgWrapSz@D@@@Z @ 0x1795DA (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U-$_tlgWrapSz@D@@@-$_tlgWri.c)
 */

int __stdcall xxxWindowFromPoint(int a1, int a2)
{
  int ThreadDesktopWindow; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v5; // edi
  PKTHREAD v6; // eax
  int v7; // eax
  int v8; // ebx
  unsigned int v9; // esi
  int v10; // esi
  int v12; // ecx
  int v13; // [esp+Ch] [ebp-7Ch] BYREF
  int v14; // [esp+10h] [ebp-78h] BYREF
  int v15; // [esp+14h] [ebp-74h] BYREF
  int v16; // [esp+18h] [ebp-70h] BYREF
  int v17; // [esp+1Ch] [ebp-6Ch] BYREF
  int v18; // [esp+20h] [ebp-68h] BYREF
  int v19; // [esp+24h] [ebp-64h] BYREF
  int v20; // [esp+28h] [ebp-60h] BYREF
  int v21; // [esp+2Ch] [ebp-5Ch] BYREF
  int v22; // [esp+30h] [ebp-58h]
  _DWORD v23[3]; // [esp+34h] [ebp-54h] BYREF
  _DWORD v24[3]; // [esp+40h] [ebp-48h] BYREF
  _DWORD v25[7]; // [esp+4Ch] [ebp-3Ch] BYREF
  _BYTE v26[32]; // [esp+68h] [ebp-20h] BYREF

  v23[2] = 0;
  ThreadDesktopWindow = GetThreadDesktopWindow(0);
  if ( !ThreadDesktopWindow )
    return 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v23[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v23;
  v23[1] = ThreadDesktopWindow;
  HMLockObject(ThreadDesktopWindow);
  if ( IsWindowDesktopComposed(ThreadDesktopWindow) )
  {
    v24[2] = 0;
    v5 = *(_DWORD *)(ThreadDesktopWindow + 60);
    v6 = KeGetCurrentThread();
    v7 = W32GetThreadWin32Thread(v6);
    v24[0] = *(_DWORD *)(v7 + 228);
    *(_DWORD *)(v7 + 228) = v24;
    v24[1] = v5;
    if ( v5 )
      HMLockObject(v5);
    v8 = a2;
    v9 = xxxDCEWindowHitTest(0, 0, 0, 5, a1, a2);
    ThreadUnlock1();
  }
  else
  {
    v8 = a2;
    v9 = xxxWindowHitTest2(ThreadDesktopWindow, 0, 1, a1, a2);
  }
  ThreadUnlock1();
  v10 = HMValidateHandleNoSecure(v9, 1);
  v22 = v10;
  if ( (unsigned __int8)InputTraceLogging::Enabled(0) )
  {
    qmemcpy(v25, (const void *)InputTraceLogging::GetWindowDetails(v10, v26), sizeof(v25));
    if ( (unsigned int)dword_2689E8 > 4 )
    {
      if ( (unsigned __int8)_tlgKeywordOn(2, 0) )
      {
        v13 = v25[0];
        v14 = v25[1];
        v15 = v25[6];
        v16 = v25[5];
        v17 = v25[4];
        v18 = v25[3];
        v19 = v25[2];
        v21 = a1;
        v20 = v8;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
          (int)&dword_2689E8,
          (int)&unk_25579D,
          v12,
          v12,
          (int)&v21,
          (int)&v20,
          (int)&v19,
          (int)&v18,
          (int)&v17,
          (int)&v16,
          (int)&v15,
          (int)&v14,
          (int)&v13);
      }
    }
    return v22;
  }
  return v10;
}
