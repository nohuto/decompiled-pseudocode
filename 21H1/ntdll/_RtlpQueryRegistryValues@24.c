/*
 * XREFs of _RtlpQueryRegistryValues@24 @ 0x4B2EAEA8
 * Callers:
 *     _RtlpFindRegTziForCurrentYear@12 @ 0x4B2EAD32 (_RtlpFindRegTziForCurrentYear@12.c)
 *     _RtlpQueryTimeZoneInformationWorker@8 @ 0x4B2F13A9 (_RtlpQueryTimeZoneInformationWorker@8.c)
 *     _RtlCheckPortableOperatingSystem@4 @ 0x4B351030 (_RtlCheckPortableOperatingSystem@4.c)
 *     _RtlQueryRegistryValues@20 @ 0x4B3512F0 (_RtlQueryRegistryValues@20.c)
 *     _RtlQueryRegistryValuesEx@20 @ 0x4B351320 (_RtlQueryRegistryValuesEx@20.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlpCallQueryRegistryRoutine@28 @ 0x4B2EB0AD (_RtlpCallQueryRegistryRoutine@28.c)
 *     _RtlpAllocDeallocQueryBuffer@16 @ 0x4B2EB25A (_RtlpAllocDeallocQueryBuffer@16.c)
 *     _RtlpGetRegistryHandle@16 @ 0x4B2EB2C1 (_RtlpGetRegistryHandle@16.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _NtEnumerateValueKey@24 @ 0x4B2F2A90 (_NtEnumerateValueKey@24.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _NtDeleteValueKey@8 @ 0x4B2F36E0 (_NtDeleteValueKey@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __fastcall RtlpQueryRegistryValues(int a1, const WCHAR *a2, int a3, int a4, int a5, char a6)
{
  int result; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // edi
  int v13; // esi
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  bool v24; // zf
  int v25; // eax
  int v26; // [esp+Ch] [ebp-4Ch] BYREF
  int v27; // [esp+10h] [ebp-48h]
  int v28; // [esp+14h] [ebp-44h] BYREF
  HANDLE Handle; // [esp+18h] [ebp-40h] BYREF
  int v30; // [esp+1Ch] [ebp-3Ch]
  HANDLE v31; // [esp+20h] [ebp-38h] BYREF
  int v32; // [esp+24h] [ebp-34h]
  int v33; // [esp+28h] [ebp-30h]
  int v34; // [esp+2Ch] [ebp-2Ch]
  UNICODE_STRING v35; // [esp+30h] [ebp-28h] BYREF
  UNICODE_STRING DestinationString; // [esp+38h] [ebp-20h] BYREF
  _DWORD v37[6]; // [esp+40h] [ebp-18h] BYREF

  result = RtlpGetRegistryHandle(0, &v31);
  v26 = result;
  if ( result >= 0 )
  {
    v9 = a1 & 0x40000000;
    v34 = v9;
    RtlInitUnicodeString(&DestinationString, v9 == 0 ? a2 : 0);
    v27 = 4096;
    v10 = RtlpAllocDeallocQueryBuffer(0, &v26);
    v11 = v10;
    if ( v10 )
    {
      *(_DWORD *)(v10 + 8) = 0;
      v13 = v26;
      v30 = v27 - 2;
      Handle = v31;
LABEL_4:
      if ( *(_DWORD *)a3 || (*(_BYTE *)(a3 + 4) & 0x21) != 0 )
      {
        v14 = *(_DWORD *)(a3 + 4);
        if ( (v14 & 0x20) == 0 || *(_DWORD *)(a3 + 8) && (v14 & 1) == 0 && !*(_DWORD *)a3 )
        {
          if ( (v14 & 3) != 0 && Handle != v31 )
          {
            NtClose(Handle);
            v14 = *(_DWORD *)(a3 + 4);
            Handle = v31;
          }
          v15 = *(_DWORD *)(a3 + 8);
          if ( (v14 & 1) == 0 )
          {
            if ( v15 )
            {
              RtlInitUnicodeString(&v35, *(PCWSTR *)(a3 + 8));
              v16 = v30;
              v17 = 0;
              while ( 1 )
              {
                v33 = v17 + 1;
                if ( v17 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1276);
                  goto LABEL_26;
                }
                v13 = ZwQueryValueKey(Handle, &v35, 1, v11, v16, &v28);
                v26 = v13;
                if ( v13 == -2147483643 )
                {
                  v13 = -1073741789;
                  v26 = -1073741789;
                }
                if ( v13 < 0 )
                {
                  if ( v13 == -1073741772 )
                  {
                    *(_DWORD *)(v11 + 4) = 0;
                    *(_DWORD *)(v11 + 12) = 0;
                    v28 = v30;
                    v13 = RtlpCallQueryRegistryRoutine(v11, &v28, a4, a5, a6);
                    v26 = v13;
                  }
                  if ( v13 != -1073741789 )
                    goto LABEL_24;
                }
                else
                {
                  if ( *(_DWORD *)(v11 + 4) == 7 )
                  {
                    *(_WORD *)(v28 + v11) = 0;
                    *(_DWORD *)(v11 + 12) += 2;
                  }
                  v28 = v30;
                  v18 = RtlpCallQueryRegistryRoutine(v11, &v28, a4, a5, a6);
                  v13 = v18;
                  v26 = v18;
                  if ( v18 != -1073741789 )
                  {
                    if ( v18 < 0 )
                      goto LABEL_26;
                    if ( (*(_BYTE *)(a3 + 4) & 0x40) != 0 )
                      NtDeleteValueKey(Handle, &v35);
LABEL_24:
                    if ( v13 >= 0 )
                    {
                      a3 += 28;
                      goto LABEL_4;
                    }
                    goto LABEL_26;
                  }
                }
                v27 = v28 + 6;
                v23 = RtlpAllocDeallocQueryBuffer(v28 + 6, &v26);
                v13 = v26;
                v11 = v23;
                if ( !v23 )
                  goto LABEL_26;
                *(_DWORD *)(v23 + 8) = 0;
                v17 = v33;
                v16 = v27 - 2;
                v30 = v27 - 2;
              }
            }
            if ( (v14 & 8) != 0 )
            {
              v13 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))a3)(
                      *(_DWORD *)a3,
                      0,
                      0,
                      0,
                      0,
                      a4,
                      *(_DWORD *)(a3 + 12));
              goto LABEL_24;
            }
            goto LABEL_44;
          }
          if ( v15 )
          {
            RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a3 + 8));
            v37[4] = 0;
            v37[5] = 0;
            v37[1] = v31;
            v37[2] = &DestinationString;
            v37[0] = 24;
            v37[3] = 576;
            v13 = ZwOpenKey(&Handle, 0x2000000, v37);
            if ( v13 < 0 )
              goto LABEL_26;
            if ( !*(_DWORD *)a3 )
              goto LABEL_24;
LABEL_44:
            v19 = 0;
            v33 = 0;
            while ( 1 )
            {
              v32 = v19;
              v13 = NtEnumerateValueKey(Handle, v19, 1, v11, v30, &v28);
              v26 = v13;
              if ( v13 == -2147483643 )
              {
                v13 = -1073741789;
                v26 = -1073741789;
              }
              if ( v13 == -2147483622 )
              {
                if ( v32 || (*(_BYTE *)(a3 + 4) & 4) == 0 )
                  v13 = 0;
                else
                  v13 = -1073741772;
                goto LABEL_24;
              }
              if ( v13 >= 0 )
              {
                v28 = v30;
                v13 = RtlpCallQueryRegistryRoutine(v11, &v28, a4, a5, a6);
                v26 = v13;
              }
              if ( v13 == -1073741789 )
              {
                v27 = v28 + 6;
                v20 = RtlpAllocDeallocQueryBuffer(v28 + 6, &v26);
                v11 = v20;
                if ( !v20 )
                  goto LABEL_54;
                *(_DWORD *)(v20 + 8) = 0;
                v30 = v27 - 2;
                v21 = v32 - 1;
                v22 = v33++;
                if ( v22 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1457);
LABEL_54:
                  v13 = v26;
                  goto LABEL_24;
                }
              }
              else
              {
                if ( v13 < 0 )
                  goto LABEL_26;
                v24 = (*(_BYTE *)(a3 + 4) & 0x40) == 0;
                v33 = 0;
                if ( v24 )
                {
                  v21 = v32;
                }
                else
                {
                  v35.Buffer = (wchar_t *)(v11 + 20);
                  v35.Length = *(_WORD *)(v11 + 16);
                  v35.MaximumLength = *(_WORD *)(v11 + 16);
                  v25 = NtDeleteValueKey(Handle, &v35);
                  v21 = v32;
                  if ( v25 >= 0 )
                    v21 = v32 - 1;
                }
              }
              v19 = v21 + 1;
            }
          }
        }
        v13 = -1073741811;
      }
LABEL_26:
      if ( !v34 && v31 )
        NtClose(v31);
      if ( Handle )
      {
        if ( Handle != v31 )
          NtClose(Handle);
      }
      RtlpAllocDeallocQueryBuffer(v27, 0);
      return v13;
    }
    else
    {
      if ( !v9 )
        NtClose(v31);
      return v26;
    }
  }
  return result;
}
