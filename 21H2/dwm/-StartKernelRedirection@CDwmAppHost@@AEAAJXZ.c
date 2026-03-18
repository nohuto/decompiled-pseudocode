/*
 * XREFs of ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001F74
 * Callers:
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140001EC4 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x1400013F0 (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x14000143C (--1CPortClient@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x14000171C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z @ 0x140002088 (-SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z.c)
 *     __security_check_cookie @ 0x140003190 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1400037D0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x140003838 (_Init_thread_header.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x140007C3C (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CDwmAppHost::StartKernelRedirection(CDwmAppHost *this, __int64 a2, void *a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // r8d
  int v8; // eax
  signed int LastError; // eax
  int v11; // r9d
  unsigned int v12; // [rsp+20h] [rbp-68h]
  _BYTE v13[16]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+40h] [rbp-48h]
  _BYTE v15[16]; // [rsp+68h] [rbp-20h] BYREF

  v4 = 0;
  v5 = 4LL;
  if ( dword_140015BC4 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) )
  {
    Init_thread_header(&dword_140015BC4, 4LL, a3, a4);
    if ( dword_140015BC4 == -1 )
    {
      dword_1400152D4 = -2147024865;
      Init_thread_footer(&dword_140015BC4);
    }
  }
  if ( *(&g_dwmAppHost + 1) )
  {
    CPortClient::CPortClient((CPortClient *)v13, v5, a3);
    if ( (Microsoft_Windows_Dwm_DwmEnableBits & 1) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(v6, (unsigned int)&EstablishKernelRedirection, v7, 1, (__int64)v15);
    v14 = (__int64)*(&g_dwmAppHost + 1);
    v8 = CPortClient::SendSimpleAsyncRequest((CPortClient *)v13, 0x40000024u);
    v4 = v8;
    if ( v8 < 0 )
    {
      v12 = 332;
    }
    else
    {
      SetLastError(0);
      if ( !(unsigned int)DwmKernelStartup() )
      {
        LastError = GetLastError();
        v4 = LastError;
        if ( LastError > 0 )
          v4 = (unsigned __int16)LastError | 0x80070000;
        v12 = 334;
        if ( (v4 & 0x80000000) == 0 )
          v4 = -2003304445;
        v11 = v4;
        goto LABEL_20;
      }
      v8 = CPortClient::SendSimpleAsyncRequest((CPortClient *)v13, 0x40000025u);
      v4 = v8;
      if ( v8 >= 0 )
      {
LABEL_10:
        CPortClient::~CPortClient((CPortClient *)v13);
        return v4;
      }
      v12 = 336;
    }
    v11 = v8;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1400152D0, 2LL, v11, v12);
    goto LABEL_10;
  }
  return v4;
}
