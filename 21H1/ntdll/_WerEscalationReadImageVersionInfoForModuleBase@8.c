/*
 * XREFs of _WerEscalationReadImageVersionInfoForModuleBase@8 @ 0x4B2DA7E7
 * Callers:
 *     _WerEscalationReadImageVersionInfoForModuleBaseSafe@12 @ 0x4B2DA76C (_WerEscalationReadImageVersionInfoForModuleBaseSafe@12.c)
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 *     _GetResourceDirectoryEntry@12 @ 0x4B2DA7B2 (_GetResourceDirectoryEntry@12.c)
 *     _ValidatePointer@12 @ 0x4B2DA9D7 (_ValidatePointer@12.c)
 *     _FindDirectoryEntry@16 @ 0x4B2DAA0D (_FindDirectoryEntry@16.c)
 *     _StringCbLengthW@12 @ 0x4B2DAA52 (_StringCbLengthW@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __fastcall WerEscalationReadImageVersionInfoForModuleBase(unsigned int a1, _DWORD *a2)
{
  __int64 v3; // rax
  _DWORD *v4; // ecx
  bool v5; // cc
  int v6; // esi
  int v7; // edi
  int v8; // esi
  size_t v10; // [esp+0h] [ebp-28h]
  size_t *v11; // [esp+4h] [ebp-24h]
  UNICODE_STRING DestinationString; // [esp+10h] [ebp-18h] BYREF
  unsigned int v13; // [esp+18h] [ebp-10h] BYREF
  int v14; // [esp+1Ch] [ebp-Ch]
  wchar_t psz[2]; // [esp+20h] [ebp-8h] BYREF
  _DWORD *v16; // [esp+24h] [ebp-4h] BYREF

  *(_DWORD *)psz = a1;
  v13 = a1;
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  LODWORD(v3) = RtlImageNtHeaderEx(3, a1, 0, 0, &v16);
  if ( (int)v3 >= 0 )
  {
    v4 = v16;
    *a2 = v16[2];
    a2[1] = v4[22];
    v5 = v4[29] <= 2u;
    LODWORD(v3) = v4[20];
    v14 = v3;
    if ( !v5 )
    {
      LODWORD(v3) = v4[34];
      if ( (_DWORD)v3 )
      {
        if ( v4[35] >= 0x10u )
        {
          v3 = ValidatePointer(16);
          v6 = (_DWORD)v3 != 0 ? HIDWORD(v3) : 0;
          if ( v6 )
          {
            LODWORD(v3) = GetResourceDirectoryEntry(
                            (int)&v13,
                            (_DWORD)v3 != 0 ? HIDWORD(v3) : 0,
                            *(unsigned __int16 *)((_DWORD)v3 != 0 ? HIDWORD(v3) + 0xC : 12));
            if ( (_DWORD)v3 )
            {
              LODWORD(v3) = FindDirectoryEntry(*(unsigned __int16 *)(v6 + 14), 16);
              if ( (_DWORD)v3 )
              {
                v7 = v6 + (*(_DWORD *)(v3 + 4) & 0x7FFFFFFF);
                v3 = ValidatePointer(16);
                if ( (_DWORD)v3 )
                {
                  LODWORD(v3) = GetResourceDirectoryEntry((int)&v13, SHIDWORD(v3), *(unsigned __int16 *)(v7 + 12));
                  if ( (_DWORD)v3 )
                  {
                    LODWORD(v3) = FindDirectoryEntry(*(unsigned __int16 *)(v7 + 14), 1);
                    if ( (_DWORD)v3 )
                    {
                      v3 = ValidatePointer(16);
                      if ( (_DWORD)v3 )
                      {
                        LODWORD(v3) = GetResourceDirectoryEntry((int)&v13, SHIDWORD(v3), 0);
                        if ( (_DWORD)v3 )
                        {
                          LODWORD(v3) = *(_DWORD *)(v3 + 4);
                          if ( (int)v3 >= 0 )
                          {
                            v3 = ValidatePointer(16);
                            if ( (_DWORD)v3 )
                            {
                              if ( *(_DWORD *)(HIDWORD(v3) + 4) >= 0x5Cu )
                              {
                                v3 = ValidatePointer(92);
                                v8 = (_DWORD)v3 != 0 ? HIDWORD(v3) : 0;
                                if ( v8 )
                                {
                                  LODWORD(v3) = ValidatePointer(92);
                                  if ( (_DWORD)v3 )
                                  {
                                    LODWORD(v3) = ValidatePointer(32);
                                    if ( (_DWORD)v3 )
                                    {
                                      RtlInitUnicodeString(&DestinationString, L"VS_VERSION_INFO");
                                      v14 = v8 + 6;
                                      LODWORD(v3) = StringCbLengthW(psz, v10, v11);
                                      if ( (int)v3 >= 0 )
                                      {
                                        LOWORD(v13) = psz[0];
                                        HIWORD(v13) = 32;
                                        LODWORD(v3) = RtlCompareUnicodeString(
                                                        &DestinationString.Length,
                                                        (unsigned __int16 *)&v13,
                                                        0);
                                        if ( !(_DWORD)v3 )
                                        {
                                          a2[2] = *(_DWORD *)(v8 + 48);
                                          LODWORD(v3) = *(_DWORD *)(v8 + 52);
                                          a2[3] = v3;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v3;
}
