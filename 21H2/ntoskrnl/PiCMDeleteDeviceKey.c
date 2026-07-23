/*
 * XREFs of PiCMDeleteDeviceKey @ 0x1408B00C8
 * Callers:
 *     PiCMHandleIoctl @ 0x140629660 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     RtlUnicodeStringToInteger @ 0x1405DE4B0 (RtlUnicodeStringToInteger.c)
 *     PiCMReturnBasicResultData @ 0x1405FF4A0 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x1405FF814 (PiAuDoesClientHaveAccess.c)
 *     PiCMConvertDeviceKeyType @ 0x140624D04 (PiCMConvertDeviceKeyType.c)
 *     PiCMReleaseObjectInputData @ 0x14062D950 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14062D984 (PiCMCaptureObjectInputData.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmDeleteDeviceRegKey @ 0x14072D41C (_CmDeleteDeviceRegKey.c)
 *     _RegRtlEnumKey @ 0x140766D3C (_RegRtlEnumKey.c)
 */

__int64 __fastcall PiCMDeleteDeviceKey(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int v8; // ebx
  int v9; // ebx
  __int16 v10; // r11
  __int64 v11; // rcx
  ULONG v12; // esi
  int inited; // edi
  int v15; // [rsp+30h] [rbp-59h] BYREF
  ULONG Value; // [rsp+34h] [rbp-55h] BYREF
  __int64 v17; // [rsp+38h] [rbp-51h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-49h] BYREF
  __int128 v19; // [rsp+48h] [rbp-41h] BYREF
  __int128 v20; // [rsp+58h] [rbp-31h]
  __int64 v21; // [rsp+68h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  unsigned int SourceString[4]; // [rsp+80h] [rbp-9h] BYREF

  v17 = 0LL;
  Handle = 0LL;
  Value = 0;
  *a6 = 0;
  v19 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v15 = 0;
  DestinationString = 0LL;
  v8 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v19);
  if ( v8 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      if ( (_QWORD)v20 && DWORD2(v19) == 1 && a3 && a4 >= 8 )
      {
        v9 = PiCMConvertDeviceKeyType(SWORD2(v19), &v15);
        if ( v9 >= 0 )
        {
          if ( (v10 & 0xFF00) == 0x200 && HIDWORD(v20) == -1 )
          {
            if ( (int)PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v17) >= 0 )
            {
              v11 = 0LL;
              if ( *(_QWORD *)&PiPnpRtlCtx )
                v11 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
              v12 = 0;
              if ( (int)SysCtxRegOpenKey(
                          v11,
                          v17,
                          (__int64)L"Control\\IDConfigDB\\Hardware Profiles",
                          0,
                          8u,
                          (__int64)&Handle) >= 0 )
              {
                do
                {
                  if ( v9 < 0 )
                    break;
                  LODWORD(v17) = 5;
                  inited = RegRtlEnumKey(Handle, v12, SourceString, (unsigned int *)&v17);
                  if ( inited >= 0 )
                  {
                    inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)SourceString);
                    if ( inited >= 0 )
                    {
                      inited = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
                      if ( inited >= 0 )
                      {
                        v9 = CmDeleteDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v20, v15, Value);
                        if ( v9 == -1073741772 )
                          v9 = 0;
                      }
                    }
                  }
                  ++v12;
                }
                while ( inited >= 0 );
              }
            }
          }
          else
          {
            v9 = CmDeleteDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v20, v15, SHIDWORD(v20));
          }
        }
      }
      else
      {
        v9 = -1073741811;
      }
    }
    else
    {
      v9 = -1073741790;
    }
    if ( Handle )
      ZwClose(Handle);
    v8 = PiCMReturnBasicResultData(v9, v21, a3, a4, a6);
  }
  PiCMReleaseObjectInputData((__int64)&v19);
  return (unsigned int)v8;
}
