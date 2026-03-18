/*
 * XREFs of xxxConnectService @ 0x1C0125844
 * Callers:
 *     xxxResolveDesktop @ 0x1C00103F0 (xxxResolveDesktop.c)
 * Callees:
 *     xxxCreateWindowStation @ 0x1C000CF8C (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00110D4 (xxxCreateDesktopEx.c)
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 */

__int64 __fastcall xxxConnectService(__int64 a1, HANDLE *a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD *v4; // rsi
  __int64 v5; // r14
  __int64 SecurityDescriptor; // r15
  int Desktop; // ebx
  __int64 v8; // r13
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // edx
  HANDLE v15; // r12
  int v16; // edx
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  HANDLE TokenHandle; // [rsp+50h] [rbp-F8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-F0h] BYREF
  __int128 v22; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v23; // [rsp+70h] [rbp-D8h]
  __int128 v24; // [rsp+80h] [rbp-C8h]
  _QWORD *v25; // [rsp+90h] [rbp-B8h]
  __int64 v26; // [rsp+98h] [rbp-B0h]
  __int64 v27; // [rsp+A0h] [rbp-A8h]
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-A0h] BYREF
  __int128 v29; // [rsp+B8h] [rbp-90h] BYREF
  __int64 v30; // [rsp+C8h] [rbp-80h]
  __int128 v31; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v32; // [rsp+E0h] [rbp-68h]
  __int128 v33; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v34; // [rsp+F8h] [rbp-50h]
  ULONG TokenInformationLength; // [rsp+168h] [rbp+20h] BYREF

  TokenHandle = 0LL;
  TokenInformationLength = 0;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  DestinationString = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  result = OpenEffectiveToken(&TokenHandle);
  if ( (int)result < 0 )
    return result;
  v4 = 0LL;
  v5 = 0LL;
  SecurityDescriptor = 0LL;
  Handle = 0LL;
  Desktop = ZwQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
  if ( (int)(Desktop + 0x80000000) >= 0 && Desktop != -1073741789 )
  {
    ZwClose(TokenHandle);
    goto LABEL_19;
  }
  v4 = (_QWORD *)Win32AllocPool(TokenInformationLength, 1869902677LL);
  v25 = v4;
  if ( !v4 )
  {
    ZwClose(TokenHandle);
LABEL_30:
    Desktop = -1073741801;
    goto LABEL_19;
  }
  Desktop = ZwQueryInformationToken(TokenHandle, TokenUser, v4, TokenInformationLength, &TokenInformationLength);
  ZwClose(TokenHandle);
  if ( Desktop >= 0 )
  {
    v8 = *v4;
    v5 = AllocAce(0LL, 0LL, 0LL, 983150LL, *v4, &TokenInformationLength);
    if ( v5 )
    {
      LOBYTE(v9) = 13;
      v10 = AllocAce(v5, 0LL, v9, 983247LL, v8, &TokenInformationLength);
      if ( v10 )
      {
        v5 = v10;
        v11 = AllocAce(v10, 0LL, 0LL, 256LL, SeExports->SeAliasAdminsSid, &TokenInformationLength);
        if ( v11 )
        {
          v5 = v11;
          LOBYTE(v12) = 13;
          v13 = AllocAce(v11, 0LL, v12, 193LL, SeExports->SeAliasAdminsSid, &TokenInformationLength);
          if ( v13 )
          {
            v5 = v13;
            v27 = v13;
            SecurityDescriptor = CreateSecurityDescriptor(v13, TokenInformationLength, 0LL);
            v26 = SecurityDescriptor;
            if ( SecurityDescriptor )
            {
              PushW32ThreadLock((__int64)v4, &v33, (__int64)Win32FreePool);
              PushW32ThreadLock(v5, &v31, (__int64)Win32FreePool);
              PushW32ThreadLock(SecurityDescriptor, &v29, (__int64)Win32FreePool);
              LODWORD(v22) = 48;
              *((_QWORD *)&v22 + 1) = 0LL;
              DWORD2(v23) = 128;
              *(_QWORD *)&v23 = a1;
              v24 = (unsigned __int64)SecurityDescriptor;
              Desktop = xxxCreateWindowStation((__int64)&v22, 0, 0x2000000u, 0LL, 0, 0, 0LL, 0LL, 0, &Handle);
              v15 = Handle;
              if ( Desktop < 0 )
              {
                *a2 = 0LL;
              }
              else
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v14) = 4;
                  WPP_RECORDER_SF_(
                    (unsigned int)&WPP_RECORDER_INITIALIZED,
                    v14,
                    3,
                    10,
                    (__int64)&WPP_ad87e4bb642a33d9484c3aa0e4046906_Traceguids);
                }
                RtlInitUnicodeString(&DestinationString, L"Default");
                LODWORD(v22) = 48;
                *((_QWORD *)&v22 + 1) = v15;
                DWORD2(v23) = 192;
                *(_QWORD *)&v23 = &DestinationString;
                v24 = 0LL;
                Desktop = xxxCreateDesktopEx((__int64)&v22, 0, 0x2000000LL, 0, a2, 1);
                if ( Desktop < 0 )
                {
                  ObCloseHandle(v15, 1);
                }
                else
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v16) = 4;
                    WPP_RECORDER_SF_(
                      (unsigned int)&WPP_RECORDER_INITIALIZED,
                      v16,
                      3,
                      11,
                      (__int64)&WPP_ad87e4bb642a33d9484c3aa0e4046906_Traceguids);
                  }
                  *a3 = v15;
                }
              }
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)(ThreadWin32Thread + 16) = v29;
              v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)(v18 + 16) = v31;
              v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)(v19 + 16) = v33;
              goto LABEL_19;
            }
          }
        }
      }
    }
    goto LABEL_30;
  }
LABEL_19:
  if ( v4 )
    Win32FreePool(v4);
  if ( v5 )
    Win32FreePool(v5);
  if ( SecurityDescriptor )
    Win32FreePool(SecurityDescriptor);
  return (unsigned int)Desktop;
}
