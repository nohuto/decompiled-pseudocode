/*
 * XREFs of PiDevCfgParsePropertyKeyName @ 0x14036D198
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x140769FCC (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x1403710C0 (RtlStringCchCopyNW.c)
 *     PnpStringToDwordValue @ 0x1403813EC (PnpStringToDwordValue.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     wcschr @ 0x1403D4080 (wcschr.c)
 *     RtlGUIDFromString @ 0x140639680 (RtlGUIDFromString.c)
 */

bool __fastcall PiDevCfgParsePropertyKeyName(unsigned __int16 *a1, GUID *a2, _DWORD *a3)
{
  bool v4; // cf
  unsigned __int16 v7; // ax
  NTSTATUS v8; // ebx
  const wchar_t *v9; // rdi
  __int64 v10; // rbx
  wchar_t *v11; // rax
  wchar_t *v12; // rsi
  char v13; // al
  int v14; // ecx
  UNICODE_STRING v16; // [rsp+20h] [rbp-68h] BYREF
  wchar_t pszDest[12]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *a1 < 0x50u;
  *(_DWORD *)(&v16.MaximumLength + 1) = 0;
  if ( v4 )
    goto LABEL_15;
  v16.Buffer = (wchar_t *)*((_QWORD *)a1 + 1);
  v7 = a1[1];
  v16.Length = 76;
  v16.MaximumLength = v7;
  v8 = RtlGUIDFromString(&v16, a2);
  if ( v8 < 0 )
    return v8 >= 0;
  if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 76LL) != 44 )
    goto LABEL_15;
  v9 = (const wchar_t *)(*((_QWORD *)a1 + 1) + 78LL);
  v10 = (*a1 >> 1) - 39;
  if ( v9[v10] )
    goto LABEL_15;
  v11 = wcschr(v9, 0x2Cu);
  v12 = v11;
  if ( v11 )
  {
    v10 = v11 - v9;
    v12 = v11 + 1;
  }
  v8 = RtlStringCchCopyNW(pszDest, 0xBuLL, v9, (unsigned int)v10);
  if ( v8 >= 0 )
  {
    if ( (unsigned __int8)PnpStringToDwordValue(pszDest, &a2[1]) )
    {
      if ( a3 )
      {
        *a3 = 1;
        if ( v12 )
        {
          v13 = PnpStringToDwordValue(v12, a3);
          v14 = v8;
          if ( !v13 )
            v14 = -1073741823;
          v8 = v14;
        }
      }
      return v8 >= 0;
    }
LABEL_15:
    v8 = -1073741823;
  }
  return v8 >= 0;
}
