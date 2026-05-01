/*
 * XREFs of sub_180086D30 @ 0x180086D30
 * Callers:
 *     sub_180086824 @ 0x180086824 (sub_180086824.c)
 *     sub_180087048 @ 0x180087048 (sub_180087048.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_180086B8C @ 0x180086B8C (sub_180086B8C.c)
 *     sub_180086C6C @ 0x180086C6C (sub_180086C6C.c)
 */

__int64 __fastcall sub_180086D30(__int64 a1, __int64 a2, _DWORD *a3)
{
  signed int v5; // ebx
  NTSTATUS v6; // eax
  char v7; // di
  __int64 *v8; // r14
  int v9; // eax
  HANDLE v10; // rcx
  int v11; // eax
  int SystemInformation; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+64h] [rbp-9Ch]
  PSID Sid; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  __int64 v17; // [rsp+78h] [rbp-88h] BYREF
  __int64 v18; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  int v20; // [rsp+98h] [rbp-68h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+A8h] [rbp-58h]
  int v23; // [rsp+B0h] [rbp-50h]
  __int128 v24; // [rsp+B8h] [rbp-48h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v26[10]; // [rsp+D0h] [rbp-30h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  Handle = 0LL;
  Sid = 0LL;
  v5 = sub_180086B8C();
  if ( v5 >= 0 )
  {
    v5 = NtQuerySystemInformation(MaxSystemInfoClass|SystemObjectInformation, &SystemInformation, 8u, 0LL);
    if ( v5 >= 0 )
    {
      v6 = sub_180086C6C(SystemInformation);
      v5 = v6;
      if ( v6 >= 0 )
      {
        if ( v6 == 258 )
        {
LABEL_5:
          v5 = -1073740973;
          goto LABEL_16;
        }
        v7 = 1;
        v5 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x12u, 0, 0, 0, 0, 0, 0, 0, &Sid);
        if ( v5 >= 0 )
        {
          if ( v14 != -1 )
          {
            v7 = 0;
            v18 = -10000LL * v14;
          }
          RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
          v20 = 48;
          v21 = 0LL;
          v23 = 0;
          v22 = 0LL;
          v24 = 0LL;
          memset(v26, 0, 0x48uLL);
          v8 = &v18;
          v26[2] = 1400LL;
          if ( v7 )
            v8 = 0LL;
          v9 = NtAlpcConnectPort(&Handle, &DestinationString, &v20, v26, 0x20000, Sid, 0LL, 0LL, 0LL, 0LL, v8);
          v5 = v9;
          if ( v9 >= 0 )
          {
            if ( v9 == 258 )
              goto LABEL_5;
            memset(a3 + 1, 0, 0x574uLL);
            v10 = Handle;
            *a3 = 91751760;
            v17 = 1400LL;
            v11 = NtAlpcSendWaitReceivePort(v10, 0x20000LL, a2, 0LL, a3, &v17, 0LL, v8);
            v5 = v11;
            if ( v11 >= 0 && v11 != 258 )
              v5 = v17 != 1400 ? 0xC000021F : 0;
          }
        }
      }
    }
  }
LABEL_16:
  if ( Sid )
    RtlFreeSid(Sid);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v5;
}
