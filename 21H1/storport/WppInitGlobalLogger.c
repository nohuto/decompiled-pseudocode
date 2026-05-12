/*
 * XREFs of WppInitGlobalLogger @ 0x1C00790A0
 * Callers:
 *     WppTraceCallback @ 0x1C00794F0 (WppTraceCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C001A000 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C001B200 (memmove.c)
 */

void __fastcall WppInitGlobalLogger(const GUID *Guid, _QWORD *a2, int *a3, _BYTE *a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+58h] [rbp-A8h]
  const wchar_t *v19; // [rsp+60h] [rbp-A0h]
  int *v20; // [rsp+68h] [rbp-98h]
  int v21; // [rsp+70h] [rbp-90h]
  int *v22; // [rsp+78h] [rbp-88h]
  int v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  int v25; // [rsp+90h] [rbp-70h]
  const wchar_t *v26; // [rsp+98h] [rbp-68h]
  int *v27; // [rsp+A0h] [rbp-60h]
  int v28; // [rsp+A8h] [rbp-58h]
  int *v29; // [rsp+B0h] [rbp-50h]
  int v30; // [rsp+B8h] [rbp-48h]
  __int64 v31; // [rsp+C0h] [rbp-40h]
  int v32; // [rsp+C8h] [rbp-38h]
  _OWORD v33[2]; // [rsp+100h] [rbp+0h] BYREF
  int v34; // [rsp+120h] [rbp+20h]

  v18 = 32;
  v14 = 0;
  v19 = L"Start";
  v15 = 0;
  v20 = &v13;
  v13 = 0;
  v22 = &v12;
  v12 = 0;
  v17 = 0LL;
  v21 = 4;
  v23 = 4;
  v24 = 0LL;
  v25 = 0;
  GuidString = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2147483650LL, L"WMI\\GlobalLogger\\", &v17, 0LL, 0LL) >= 0 )
  {
    if ( v13 )
    {
      v21 = 4;
      v19 = L"Flags";
      v23 = 4;
      v20 = &v14;
      v28 = 4;
      v22 = &v12;
      v17 = 0LL;
      v26 = L"Level";
      v27 = &v15;
      v29 = &v12;
      v34 = *(_DWORD *)L"\\";
      v18 = 32;
      v24 = 0LL;
      v25 = 32;
      v30 = 1;
      v31 = 0LL;
      v32 = 0;
      v33[0] = *(_OWORD *)L"WMI\\GlobalLogger\\";
      v33[1] = *(_OWORD *)L"alLogger\\";
      if ( !RtlStringFromGUID(Guid, &GuidString) )
      {
        if ( GuidString.Length <= 0x4Cu )
        {
          v8 = -1LL;
          v9 = -1LL;
          do
            ++v9;
          while ( *((_WORD *)v33 + v9) );
          memmove((char *)v33 + 2 * (unsigned int)v9, GuidString.Buffer + 1, GuidString.Length);
          do
            ++v8;
          while ( *((_WORD *)v33 + v8) );
          v10 = v8 - 1;
          if ( 2 * (unsigned __int64)v10 >= 0x70 )
            _report_rangecheckfailure();
          *((_WORD *)v33 + v10) = 0;
          RtlFreeUnicodeString(&GuidString);
          if ( (int)RtlQueryRegistryValuesEx(2147483650LL, v33, &v17, 0LL, 0LL) >= 0 && v13 == 1 )
          {
            v11 = v14 & 0x7FFFFFFF;
            *a2 = 1LL;
            *a3 = v11;
            *a4 = v15;
          }
        }
        else
        {
          RtlFreeUnicodeString(&GuidString);
        }
      }
    }
  }
}
