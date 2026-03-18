/*
 * XREFs of _PnpGetGenericStoreProperty @ 0x1406AAF78
 * Callers:
 *     _PnpGetObjectPropertyWorker @ 0x1406A9C88 (_PnpGetObjectPropertyWorker.c)
 *     PiDqPnPGetObjectProperty @ 0x1406A9F14 (PiDqPnPGetObjectProperty.c)
 *     PiDevCfgCopyObjectProperties @ 0x1407515B8 (PiDevCfgCopyObjectProperties.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B02C0 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14025BB84 (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCchPrintfExW @ 0x1402E5EAC (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     _PnpOpenPropertiesKey @ 0x1406AAD50 (_PnpOpenPropertiesKey.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x1406B0174 (_PnpCtxRegQueryValueIndirect.c)
 */

__int64 __fastcall PnpGetGenericStoreProperty(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  int v8; // r12d
  NTSTATUS v9; // ebx
  int v10; // esi
  int v11; // eax
  NTSTATUS ValueIndirect; // eax
  NTSTATUS v14; // ecx
  int v15; // eax
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-E8h]
  char v17[4]; // [rsp+90h] [rbp-80h] BYREF
  int v18; // [rsp+94h] [rbp-7Ch] BYREF
  int v19; // [rsp+98h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-68h]
  __int64 v22; // [rsp+B0h] [rbp-60h]
  __int64 v23; // [rsp+B8h] [rbp-58h]
  _DWORD *v24; // [rsp+C0h] [rbp-50h]
  size_t pcchLength; // [rsp+C8h] [rbp-48h] BYREF
  wchar_t pszDest[48]; // [rsp+D0h] [rbp-40h] BYREF

  v22 = a1;
  v8 = (int)a3;
  *a5 = 0;
  *a8 = 0;
  v21 = a2;
  v24 = a5;
  v23 = a6;
  Handle = 0LL;
  v19 = 0;
  v18 = 0;
  v17[0] = 0;
  if ( a3 )
  {
    v9 = RtlUnalignedStringCchLengthW(a3, 0x55uLL, &pcchLength);
    if ( v9 < 0 )
      return (unsigned int)v9;
  }
  v9 = RtlStringCchPrintfExW(
         pszDest,
         0x30uLL,
         0LL,
         0LL,
         0x800u,
         L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX");
  if ( v9 >= 0 )
  {
    v10 = v22;
    v11 = PnpOpenPropertiesKey(v22, v21, pszDest, 1u, 0, (__int64)pszFormat, &Handle);
    v9 = v11;
    if ( v11 == -1073741772 )
    {
LABEL_4:
      v9 = -1073741275;
      goto LABEL_5;
    }
    if ( v11 >= 0 )
    {
      v18 = a7;
      ValueIndirect = PnpCtxRegQueryValueIndirect(
                        v10,
                        (_DWORD)Handle,
                        v8,
                        (unsigned int)&v19,
                        v23,
                        (__int64)&v18,
                        (__int64)v17);
      v14 = ValueIndirect;
      if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
      {
        if ( !ValueIndirect || ValueIndirect == -1073741789 )
        {
          v15 = (unsigned __int16)v19;
          *v24 = (unsigned __int16)v19;
          if ( v15 != 1 )
          {
            *a8 = v18;
            if ( v14 || !a7 )
              v9 = -1073741789;
          }
        }
        else
        {
          v9 = ValueIndirect;
        }
        goto LABEL_5;
      }
      goto LABEL_4;
    }
  }
LABEL_5:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v9;
}
