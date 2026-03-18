/*
 * XREFs of _xxxConnectService@12 @ 0x8168A
 * Callers:
 *     _xxxResolveDesktop@20 @ 0x7DE28 (_xxxResolveDesktop@20.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     _xxxCreateWindowStation@40 @ 0x8199E (_xxxCreateWindowStation@40.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall xxxConnectService(int a1, int a2, HANDLE *a3)
{
  int result; // eax
  int v4; // esi
  NTSTATUS v5; // eax
  NTSTATUS Desktop; // edi
  int *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // edx
  HANDLE v13; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  PKTHREAD v16; // eax
  int v17; // eax
  PKTHREAD v18; // eax
  int v19; // eax
  _DWORD v20[6]; // [esp+10h] [ebp-8Ch] BYREF
  _DWORD v21[3]; // [esp+28h] [ebp-74h] BYREF
  _DWORD v22[3]; // [esp+34h] [ebp-68h] BYREF
  _DWORD v23[3]; // [esp+40h] [ebp-5Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+4Ch] [ebp-50h] BYREF
  int v25; // [esp+54h] [ebp-48h]
  int *v26; // [esp+58h] [ebp-44h]
  int v27; // [esp+60h] [ebp-3Ch]
  int v28; // [esp+64h] [ebp-38h]
  int v29; // [esp+68h] [ebp-34h]
  int v30; // [esp+6Ch] [ebp-30h]
  HANDLE Handle; // [esp+70h] [ebp-2Ch] BYREF
  int SecurityDescriptor; // [esp+74h] [ebp-28h]
  int *v33; // [esp+78h] [ebp-24h]
  HANDLE TokenHandle; // [esp+7Ch] [ebp-20h] BYREF
  ULONG ReturnLength; // [esp+80h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+84h] [ebp-18h]

  v30 = a2;
  v27 = a1;
  TokenHandle = 0;
  ReturnLength = 0;
  memset(v20, 0, sizeof(v20));
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  memset(v23, 0, sizeof(v23));
  memset(v22, 0, sizeof(v22));
  memset(v21, 0, sizeof(v21));
  result = OpenEffectiveToken(&TokenHandle);
  if ( result < 0 )
    return result;
  v33 = 0;
  v4 = 0;
  SecurityDescriptor = 0;
  Handle = 0;
  v5 = ZwQueryInformationToken(TokenHandle, TokenUser, 0, 0, &ReturnLength);
  Desktop = v5;
  if ( v5 != -1073741789 && v5 < 0 )
  {
    ZwClose(TokenHandle);
    goto LABEL_18;
  }
  v7 = (int *)Win32AllocPool(ReturnLength, 1869902677);
  v33 = v7;
  v26 = v7;
  if ( !v7 )
  {
    ZwClose(TokenHandle);
LABEL_29:
    Desktop = -1073741801;
    goto LABEL_18;
  }
  Desktop = ZwQueryInformationToken(TokenHandle, TokenUser, v7, ReturnLength, &ReturnLength);
  ZwClose(TokenHandle);
  if ( Desktop >= 0 )
  {
    v29 = *v33;
    v4 = AllocAce(0, 0, 0, &off_F006E, v29, &ReturnLength);
    if ( v4 )
    {
      v8 = AllocAce(v4, 0, 13, (char *)&loc_F00CD + 2, v29, &ReturnLength);
      if ( v8 )
      {
        v4 = v8;
        v9 = AllocAce(v8, 0, 0, 256, _SeExports->SeAliasAdminsSid, &ReturnLength);
        if ( v9 )
        {
          v4 = v9;
          v10 = AllocAce(v9, 0, 13, 193, _SeExports->SeAliasAdminsSid, &ReturnLength);
          v28 = v10;
          if ( v10 )
          {
            v4 = v10;
            v29 = v10;
            SecurityDescriptor = CreateSecurityDescriptor(v10, ReturnLength, 0);
            v25 = SecurityDescriptor;
            if ( SecurityDescriptor )
            {
              PushW32ThreadLock((int)v33, v21, (int)Win32FreePool);
              PushW32ThreadLock(v28, v22, (int)Win32FreePool);
              v11 = SecurityDescriptor;
              PushW32ThreadLock(SecurityDescriptor, v23, (int)Win32FreePool);
              v20[0] = 24;
              v20[1] = 0;
              v20[3] = 128;
              v20[2] = v27;
              v20[4] = v11;
              v20[5] = 0;
              ms_exc.registration.TryLevel = -2;
              LOBYTE(v12) = 0;
              Desktop = xxxCreateWindowStation(v20, v12, 0x2000000, 0, 0, 0, 0, 0, 0, &Handle);
              if ( Desktop < 0 )
              {
                *(_DWORD *)v30 = 0;
              }
              else
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_(3, 10, &WPP_ad87e4bb642a33d9484c3aa0e4046906_Traceguids);
                RtlInitUnicodeString(&DestinationString, L"Default");
                v20[0] = 24;
                v13 = Handle;
                v20[1] = Handle;
                v20[3] = 192;
                v20[2] = &DestinationString;
                v20[4] = 0;
                v20[5] = 0;
                Desktop = xxxCreateDesktopEx((int)v20, 0, 0x2000000, 0, (HANDLE *)v30, 1);
                if ( Desktop < 0 )
                {
                  ObCloseHandle(v13, 1);
                }
                else
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_(3, 11, &WPP_ad87e4bb642a33d9484c3aa0e4046906_Traceguids);
                  *a3 = Handle;
                }
              }
              CurrentThread = KeGetCurrentThread();
              ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
              *(_DWORD *)(ThreadWin32Thread + 8) = v23[0];
              v16 = KeGetCurrentThread();
              v17 = W32GetThreadWin32Thread(v16);
              *(_DWORD *)(v17 + 8) = v22[0];
              v18 = KeGetCurrentThread();
              v19 = W32GetThreadWin32Thread(v18);
              *(_DWORD *)(v19 + 8) = v21[0];
              v4 = v29;
              goto LABEL_18;
            }
          }
        }
      }
    }
    goto LABEL_29;
  }
LABEL_18:
  if ( v33 )
    Win32FreePool(v33);
  if ( v4 )
    Win32FreePool(v4);
  if ( SecurityDescriptor )
    Win32FreePool(SecurityDescriptor);
  return Desktop;
}
