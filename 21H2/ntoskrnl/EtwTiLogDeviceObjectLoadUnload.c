/*
 * XREFs of EtwTiLogDeviceObjectLoadUnload @ 0x1406C9FBC
 * Callers:
 *     IoDeleteDevice @ 0x1402A5DF0 (IoDeleteDevice.c)
 *     IoCreateDevice @ 0x1406C9950 (IoCreateDevice.c)
 * Callees:
 *     EtwProviderEnabled @ 0x14027E6F0 (EtwProviderEnabled.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTiLogDeviceObjectLoadUnload(char a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  REGHANDLE v3; // rsi
  const EVENT_DESCRIPTOR *v5; // r14
  BOOLEAN result; // al
  const wchar_t *v8; // rdx
  int v9; // ecx
  const wchar_t *v10; // r9
  int v11; // r8d
  __int16 v12; // ax
  __int16 v13; // ax
  __int16 v14; // [rsp+38h] [rbp-19h] BYREF
  __int16 v15; // [rsp+3Ch] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  const wchar_t *v17; // [rsp+58h] [rbp+7h]
  int v18; // [rsp+60h] [rbp+Fh]
  int v19; // [rsp+64h] [rbp+13h]
  __int16 *v20; // [rsp+68h] [rbp+17h]
  __int64 v21; // [rsp+70h] [rbp+1Fh]
  const wchar_t *v22; // [rsp+78h] [rbp+27h]
  int v23; // [rsp+80h] [rbp+2Fh]
  int v24; // [rsp+84h] [rbp+33h]

  v3 = EtwThreatIntProvRegHandle;
  v5 = (const EVENT_DESCRIPTOR *)THREATINT_DEVICE_OBJECT_LOAD;
  if ( !a1 )
    v5 = &THREATINT_DEVICE_OBJECT_UNLOAD;
  result = EtwEventEnabled(EtwThreatIntProvRegHandle, v5);
  if ( result )
  {
    result = EtwProviderEnabled(v3, 0, 0x80000000uLL);
    if ( result )
    {
      v8 = L"(null)";
      v9 = 12;
      if ( a2 && *a2 )
      {
        v10 = (const wchar_t *)*((_QWORD *)a2 + 1);
        v11 = *a2;
        v12 = *a2 >> 1;
      }
      else
      {
        v11 = 12;
        v10 = L"(null)";
        v12 = 6;
      }
      v14 = v12;
      UserData.Ptr = (ULONGLONG)&v14;
      *(_QWORD *)&UserData.Size = 2LL;
      v17 = v10;
      v18 = v11;
      v19 = 0;
      if ( a3 && *a3 )
      {
        v8 = (const wchar_t *)*((_QWORD *)a3 + 1);
        v9 = *a3;
        v13 = *a3 >> 1;
      }
      else
      {
        v13 = 6;
      }
      v15 = v13;
      v22 = v8;
      v20 = &v15;
      v23 = v9;
      v21 = 2LL;
      v24 = 0;
      return EtwWrite(v3, v5, 0LL, 4u, &UserData);
    }
  }
  return result;
}
