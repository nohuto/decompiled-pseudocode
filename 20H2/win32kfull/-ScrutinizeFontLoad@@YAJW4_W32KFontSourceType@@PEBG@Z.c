/*
 * XREFs of ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C012B85C
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C008E5FC (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02721F4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C02723D8 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C027277C (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008CB38 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C008ED90 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C0271EEC (-LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z.c)
 */

NTSTATUS __fastcall ScrutinizeFontLoad(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rcx
  PEPROCESS ThreadProcess; // rax
  NTSTATUS result; // eax
  NTSTATUS v8; // ebx
  struct UmfdTls *v9; // rax
  __int64 v10; // rcx
  const unsigned __int16 *v11; // r8
  const unsigned __int16 *v12; // r8
  HANDLE ProcessHandle; // [rsp+60h] [rbp+18h] BYREF
  int ProcessInformation; // [rsp+68h] [rbp+20h] BYREF
  int v15; // [rsp+6Ch] [rbp+24h]

  ProcessHandle = 0LL;
  v15 = 0;
  v4 = a1;
  ProcessInformation = 9;
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(a1, a2, a3)
    && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
  {
    v9 = UmfdTls::EnsureTls();
    if ( !v9 )
      return -1073741801;
    v10 = *((_QWORD *)v9 + 3);
    if ( !v10 )
      return -1073741801;
    CurrentThread = *(struct _KTHREAD **)(v10 + 16);
    if ( !CurrentThread )
      return -1073741801;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
  }
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  result = ObOpenObjectByPointer(ThreadProcess, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 0, &ProcessHandle);
  if ( result >= 0 )
  {
    v8 = ZwQueryInformationProcess(ProcessHandle, ProcessCookie|ProcessUserModeIOPL, &ProcessInformation, 8u, 0LL);
    if ( v8 >= 0 )
    {
      if ( (v15 & 1) != 0 )
      {
        v11 = &word_1C02E436C;
        if ( a2 )
          v11 = (const unsigned __int16 *)a2;
        LogFontLoadAttempt(ProcessHandle, v4, v11);
        v8 = -1073741790;
      }
      else if ( (v15 & 2) != 0 )
      {
        v12 = &word_1C02E436C;
        if ( a2 )
          v12 = (const unsigned __int16 *)a2;
        LogFontLoadAttempt(ProcessHandle, v4, v12);
      }
    }
    ZwClose(ProcessHandle);
    return v8;
  }
  return result;
}
