/*
 * XREFs of WerEscalationReadImageVersionInfoForModuleBase @ 0x18006BE30
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x18006BD74 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180016090 (RtlCompareUnicodeString.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     GetResourceDirectoryEntry @ 0x18006BDEC (GetResourceDirectoryEntry.c)
 *     ValidatePointer @ 0x18006C074 (ValidatePointer.c)
 *     FindDirectoryEntry @ 0x18006C0B4 (FindDirectoryEntry.c)
 *     StringCbLengthW @ 0x18006C118 (StringCbLengthW.c)
 */

int __fastcall WerEscalationReadImageVersionInfoForModuleBase(char *BaseOfImage, __int64 a2)
{
  __int64 VirtualAddress; // rax
  PIMAGE_NT_HEADERS v5; // rcx
  bool v6; // cc
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rbx
  int v19; // r8d
  unsigned __int16 v20; // r14
  size_t v21; // rdx
  _UNICODE_STRING String2; // [rsp+20h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp+20h] BYREF

  *(_QWORD *)&String2.Length = BaseOfImage;
  *(_OWORD *)a2 = 0LL;
  LODWORD(VirtualAddress) = RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &OutHeaders);
  if ( (int)VirtualAddress >= 0 )
  {
    v5 = OutHeaders;
    *(_DWORD *)a2 = OutHeaders->FileHeader.TimeDateStamp;
    *(_DWORD *)(a2 + 4) = v5->OptionalHeader.CheckSum;
    v6 = v5->OptionalHeader.NumberOfRvaAndSizes <= 2;
    LODWORD(VirtualAddress) = v5->OptionalHeader.SizeOfImage;
    String2.Buffer = (wchar_t *)(unsigned int)VirtualAddress;
    if ( !v6 )
    {
      VirtualAddress = v5->OptionalHeader.DataDirectory[2].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        if ( v5->OptionalHeader.DataDirectory[2].Size >= 0x10 )
        {
          LODWORD(VirtualAddress) = -(int)ValidatePointer(&String2, &BaseOfImage[VirtualAddress], 16LL);
          v8 = v7 & -(__int64)((_DWORD)VirtualAddress != 0);
          if ( v8 )
          {
            VirtualAddress = GetResourceDirectoryEntry(
                               (__int64)&String2,
                               v7 & -(__int64)((_DWORD)VirtualAddress != 0),
                               *(unsigned __int16 *)((v7 & -(__int64)((_DWORD)VirtualAddress != 0)) + 0xC));
            if ( VirtualAddress )
            {
              VirtualAddress = ((__int64 (__fastcall *)(_UNICODE_STRING *, __int64, _QWORD, __int64))FindDirectoryEntry)(
                                 &String2,
                                 VirtualAddress,
                                 *(unsigned __int16 *)(v8 + 14),
                                 16LL);
              if ( VirtualAddress )
              {
                v9 = *(unsigned int *)(VirtualAddress + 4);
                LODWORD(v9) = v9 & 0x7FFFFFFF;
                LODWORD(VirtualAddress) = ValidatePointer(&String2, v8 + v9, 16LL);
                if ( (_DWORD)VirtualAddress )
                {
                  VirtualAddress = GetResourceDirectoryEntry((__int64)&String2, v10, *(unsigned __int16 *)(v11 + 12));
                  if ( VirtualAddress )
                  {
                    VirtualAddress = ((__int64 (__fastcall *)(_UNICODE_STRING *, __int64, _QWORD, __int64))FindDirectoryEntry)(
                                       &String2,
                                       VirtualAddress,
                                       *(unsigned __int16 *)(v12 + 14),
                                       1LL);
                    if ( VirtualAddress )
                    {
                      v13 = *(unsigned int *)(VirtualAddress + 4);
                      LODWORD(v13) = v13 & 0x7FFFFFFF;
                      LODWORD(VirtualAddress) = ValidatePointer(&String2, v8 + v13, 16LL);
                      if ( (_DWORD)VirtualAddress )
                      {
                        VirtualAddress = GetResourceDirectoryEntry((__int64)&String2, v14, 0);
                        if ( VirtualAddress )
                        {
                          if ( *(int *)(VirtualAddress + 4) >= 0 )
                          {
                            LODWORD(VirtualAddress) = ValidatePointer(
                                                        &String2,
                                                        v8 + *(unsigned int *)(VirtualAddress + 4),
                                                        16LL);
                            if ( (_DWORD)VirtualAddress )
                            {
                              if ( v15[1] >= 0x5C )
                              {
                                LODWORD(VirtualAddress) = -(int)ValidatePointer(&String2, &BaseOfImage[*v15], 92LL);
                                v18 = v16 & -(__int64)((_DWORD)VirtualAddress != 0);
                                if ( v18 )
                                {
                                  LODWORD(VirtualAddress) = ValidatePointer(
                                                              &String2,
                                                              v16 & -(__int64)((_DWORD)VirtualAddress != 0),
                                                              v17);
                                  if ( (_DWORD)VirtualAddress )
                                  {
                                    v20 = v19 - 60;
                                    LODWORD(VirtualAddress) = ValidatePointer(
                                                                &String2,
                                                                v18 + 6,
                                                                (unsigned int)(v19 - 60));
                                    if ( (_DWORD)VirtualAddress )
                                    {
                                      RtlInitUnicodeString(&DestinationString, L"VS_VERSION_INFO");
                                      String2.Buffer = (wchar_t *)(v18 + 6);
                                      LODWORD(VirtualAddress) = StringCbLengthW(
                                                                  (STRSAFE_PCNZWCH)(v18 + 6),
                                                                  v21,
                                                                  (size_t *)&OutHeaders);
                                      if ( (int)VirtualAddress >= 0 )
                                      {
                                        String2.Length = (unsigned __int16)OutHeaders;
                                        String2.MaximumLength = v20;
                                        LODWORD(VirtualAddress) = RtlCompareUnicodeString(
                                                                    &DestinationString,
                                                                    &String2,
                                                                    0);
                                        if ( !(_DWORD)VirtualAddress )
                                        {
                                          *(_DWORD *)(a2 + 8) = *(_DWORD *)(v18 + 48);
                                          LODWORD(VirtualAddress) = *(_DWORD *)(v18 + 52);
                                          *(_DWORD *)(a2 + 12) = VirtualAddress;
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
  return VirtualAddress;
}
