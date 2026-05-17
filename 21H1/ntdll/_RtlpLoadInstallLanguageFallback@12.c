/*
 * XREFs of _RtlpLoadInstallLanguageFallback@12 @ 0x4B2ACC28
 * Callers:
 *     __RtlpMuiRegLoadInstalled@16 @ 0x4B2AC2C1 (__RtlpMuiRegLoadInstalled@16.c)
 *     _RtlpGetSystemDefaultUILanguage@8 @ 0x4B2D5D90 (_RtlpGetSystemDefaultUILanguage@8.c)
 *     __RtlpMuiRegPopulateBaseLanguages@20 @ 0x4B36C81E (__RtlpMuiRegPopulateBaseLanguages@20.c)
 * Callees:
 *     _LdrpQueryValueKey@24 @ 0x4B2AD60A (_LdrpQueryValueKey@24.c)
 *     _MuiRegAllocArray @ 0x4B2AD7D8 (_MuiRegAllocArray.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall RtlpLoadInstallLanguageFallback(int a1, _WORD *a2, _WORD *a3)
{
  __int16 *v4; // ebx
  __int16 *v5; // eax
  int ValueKey; // esi
  int v7; // ecx
  const WCHAR *v9; // edi
  __int16 v10; // cx
  __int16 *v11; // eax
  HANDLE Handle; // [esp+Ch] [ebp-34h] BYREF
  __int16 v13; // [esp+10h] [ebp-30h] BYREF
  int v14; // [esp+14h] [ebp-2Ch] BYREF
  _WORD *v15; // [esp+18h] [ebp-28h]
  int v16; // [esp+1Ch] [ebp-24h] BYREF
  UNICODE_STRING DestinationString; // [esp+20h] [ebp-20h] BYREF
  _DWORD v18[6]; // [esp+28h] [ebp-18h] BYREF

  v15 = a2;
  v4 = 0;
  Handle = 0;
  if ( a1 && a2 && a3 )
  {
    v5 = (__int16 *)MuiRegAllocArray();
    v4 = v5;
    if ( v5 )
    {
      memset(v5, 0, 0x158u);
      v14 = 0;
      *a2 = 0;
      *a3 = 0;
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      v18[0] = 24;
      v18[2] = &DestinationString;
      v18[1] = 0;
      v18[3] = 64;
      v18[4] = 0;
      v18[5] = 0;
      ValueKey = ZwOpenKey(&Handle, 131097, v18);
      if ( ValueKey >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"InstallLanguageFallback");
        v16 = 4;
        ValueKey = LdrpQueryValueKey((int)&v14, v4, (int)&v16, v7);
        if ( ValueKey >= 0 )
        {
          if ( v14 != 1 )
            goto LABEL_18;
          v9 = (const WCHAR *)v4;
          v10 = *v4;
          if ( *v4 )
          {
            while ( 1 )
            {
              v11 = (__int16 *)(v9 + 1);
              if ( v10 == 44 )
                break;
              ++v9;
              v10 = *v11;
              if ( !*v11 )
                goto LABEL_23;
            }
            *v9++ = 0;
            v10 = *v11;
          }
          if ( v10 )
          {
            do
            {
              if ( v10 != 32 )
                break;
              v10 = *++v9;
            }
            while ( *v9 );
          }
LABEL_23:
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v4);
          if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v13) )
          {
            *v15 = v13;
            if ( *v9 )
            {
              RtlInitUnicodeString(&DestinationString, v9);
              if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v13) )
              {
                *a3 = v13;
              }
              else
              {
                ValueKey = -1073741823;
                *v15 = 0;
              }
            }
          }
          else
          {
LABEL_18:
            ValueKey = -1073741823;
          }
        }
      }
    }
    else
    {
      ValueKey = -1073741801;
    }
  }
  else
  {
    ValueKey = -1073741811;
  }
  if ( Handle )
    NtClose(Handle);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  return ValueKey;
}
