/*
 * XREFs of _RtlpGetNtProductTypeFromRegistry@4 @ 0x4B36374F
 * Callers:
 *     _RtlGetNtProductType@4 @ 0x4B2B05F0 (_RtlGetNtProductType@4.c)
 * Callees:
 *     _RtlEqualUnicodeString@12 @ 0x4B2D1250 (_RtlEqualUnicodeString@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __thiscall RtlpGetNtProductTypeFromRegistry(_DWORD *this)
{
  int ValueKey; // esi
  _BYTE v4[4]; // [esp+10h] [ebp-78h] BYREF
  _DWORD v5[6]; // [esp+14h] [ebp-74h] BYREF
  unsigned __int16 v6[2]; // [esp+2Ch] [ebp-5Ch] BYREF
  const wchar_t *v7; // [esp+30h] [ebp-58h]
  unsigned __int16 v8[2]; // [esp+34h] [ebp-54h] BYREF
  const wchar_t *v9; // [esp+38h] [ebp-50h]
  unsigned __int16 v10[2]; // [esp+3Ch] [ebp-4Ch] BYREF
  const wchar_t *v11; // [esp+40h] [ebp-48h]
  _WORD v12[2]; // [esp+44h] [ebp-44h] BYREF
  const wchar_t *v13; // [esp+48h] [ebp-40h]
  _DWORD v14[2]; // [esp+4Ch] [ebp-3Ch] BYREF
  unsigned __int16 v15[2]; // [esp+54h] [ebp-34h] BYREF
  char *v16; // [esp+58h] [ebp-30h]
  HANDLE Handle; // [esp+5Ch] [ebp-2Ch] BYREF
  _BYTE v18[4]; // [esp+60h] [ebp-28h] BYREF
  int v19; // [esp+64h] [ebp-24h]
  unsigned int v20; // [esp+68h] [ebp-20h]
  char v21; // [esp+6Ch] [ebp-1Ch] BYREF

  v12[0] = 22;
  v8[1] = 18;
  v6[1] = 18;
  v10[0] = 10;
  v10[1] = 12;
  v5[2] = v14;
  v8[0] = 16;
  v6[0] = 16;
  v14[0] = 8650882;
  v14[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions";
  v12[1] = 24;
  v13 = L"ProductType";
  v9 = L"LanmanNt";
  v7 = L"ServerNt";
  v11 = L"WinNt";
  Handle = 0;
  v5[0] = 24;
  v5[1] = 0;
  v5[3] = 576;
  v5[4] = 0;
  v5[5] = 0;
  ValueKey = ZwOpenKey((int)&Handle, 1, (int)v5);
  if ( ValueKey >= 0 )
  {
    ValueKey = ZwQueryValueKey((int)Handle, (int)v12, 2, (int)v18, 36, (int)v4);
    if ( ValueKey >= 0 )
    {
      if ( v19 != 1 || v20 < 2 )
        goto LABEL_11;
      v15[1] = v20;
      v16 = &v21;
      v15[0] = v20 - 2;
      if ( RtlEqualUnicodeString(v15, v10, 1) )
      {
        *this = 1;
        goto LABEL_12;
      }
      if ( RtlEqualUnicodeString(v15, v8, 1) )
      {
        *this = 2;
        goto LABEL_12;
      }
      if ( RtlEqualUnicodeString(v15, v6, 1) )
        *this = 3;
      else
LABEL_11:
        ValueKey = -1073739509;
    }
  }
LABEL_12:
  if ( Handle )
    NtClose(Handle);
  return ValueKey;
}
