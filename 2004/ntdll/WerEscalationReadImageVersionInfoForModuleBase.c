/*
 * XREFs of WerEscalationReadImageVersionInfoForModuleBase @ 0x18006ACF0
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x18006AC34 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180016090 (RtlCompareUnicodeString.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     GetResourceDirectoryEntry @ 0x18006ACAC (GetResourceDirectoryEntry.c)
 *     ValidatePointer @ 0x18006AF34 (ValidatePointer.c)
 *     FindDirectoryEntry @ 0x18006AF74 (FindDirectoryEntry.c)
 *     StringCbLengthW @ 0x18006AFD8 (StringCbLengthW.c)
 */

int __fastcall WerEscalationReadImageVersionInfoForModuleBase(unsigned __int64 a1, __int64 a2)
{
  __int64 ResourceDirectoryEntry; // rax
  _DWORD *v5; // rcx
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
  __int16 v20; // r14
  size_t v21; // rdx
  unsigned __int64 v23; // [rsp+20h] [rbp-20h] BYREF
  __int64 v24; // [rsp+28h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  size_t pcbLength; // [rsp+60h] [rbp+20h] BYREF

  v23 = a1;
  *(_OWORD *)a2 = 0LL;
  LODWORD(ResourceDirectoryEntry) = RtlImageNtHeaderEx(3, a1, 0LL, &pcbLength);
  if ( (int)ResourceDirectoryEntry >= 0 )
  {
    v5 = (_DWORD *)pcbLength;
    *(_DWORD *)a2 = *(_DWORD *)(pcbLength + 8);
    *(_DWORD *)(a2 + 4) = v5[22];
    v6 = v5[33] <= 2u;
    LODWORD(ResourceDirectoryEntry) = v5[20];
    v24 = (unsigned int)ResourceDirectoryEntry;
    if ( !v6 )
    {
      ResourceDirectoryEntry = (unsigned int)v5[38];
      if ( (_DWORD)ResourceDirectoryEntry )
      {
        if ( v5[39] >= 0x10u )
        {
          LODWORD(ResourceDirectoryEntry) = -(int)ValidatePointer(&v23, a1 + ResourceDirectoryEntry, 16LL);
          v8 = v7 & -(__int64)((_DWORD)ResourceDirectoryEntry != 0);
          if ( v8 )
          {
            ResourceDirectoryEntry = GetResourceDirectoryEntry(
                                       (__int64)&v23,
                                       v7 & -(__int64)((_DWORD)ResourceDirectoryEntry != 0),
                                       *(unsigned __int16 *)((v7 & -(__int64)((_DWORD)ResourceDirectoryEntry != 0)) + 0xC));
            if ( ResourceDirectoryEntry )
            {
              ResourceDirectoryEntry = ((__int64 (__fastcall *)(unsigned __int64 *, __int64, _QWORD, __int64))FindDirectoryEntry)(
                                         &v23,
                                         ResourceDirectoryEntry,
                                         *(unsigned __int16 *)(v8 + 14),
                                         16LL);
              if ( ResourceDirectoryEntry )
              {
                v9 = *(unsigned int *)(ResourceDirectoryEntry + 4);
                LODWORD(v9) = v9 & 0x7FFFFFFF;
                LODWORD(ResourceDirectoryEntry) = ValidatePointer(&v23, v8 + v9, 16LL);
                if ( (_DWORD)ResourceDirectoryEntry )
                {
                  ResourceDirectoryEntry = GetResourceDirectoryEntry(
                                             (__int64)&v23,
                                             v10,
                                             *(unsigned __int16 *)(v11 + 12));
                  if ( ResourceDirectoryEntry )
                  {
                    ResourceDirectoryEntry = ((__int64 (__fastcall *)(unsigned __int64 *, __int64, _QWORD, __int64))FindDirectoryEntry)(
                                               &v23,
                                               ResourceDirectoryEntry,
                                               *(unsigned __int16 *)(v12 + 14),
                                               1LL);
                    if ( ResourceDirectoryEntry )
                    {
                      v13 = *(unsigned int *)(ResourceDirectoryEntry + 4);
                      LODWORD(v13) = v13 & 0x7FFFFFFF;
                      LODWORD(ResourceDirectoryEntry) = ValidatePointer(&v23, v8 + v13, 16LL);
                      if ( (_DWORD)ResourceDirectoryEntry )
                      {
                        ResourceDirectoryEntry = GetResourceDirectoryEntry((__int64)&v23, v14, 0);
                        if ( ResourceDirectoryEntry )
                        {
                          if ( *(int *)(ResourceDirectoryEntry + 4) >= 0 )
                          {
                            LODWORD(ResourceDirectoryEntry) = ValidatePointer(
                                                                &v23,
                                                                v8 + *(unsigned int *)(ResourceDirectoryEntry + 4),
                                                                16LL);
                            if ( (_DWORD)ResourceDirectoryEntry )
                            {
                              if ( v15[1] >= 0x5C )
                              {
                                LODWORD(ResourceDirectoryEntry) = -(int)ValidatePointer(&v23, a1 + *v15, 92LL);
                                v18 = v16 & -(__int64)((_DWORD)ResourceDirectoryEntry != 0);
                                if ( v18 )
                                {
                                  LODWORD(ResourceDirectoryEntry) = ValidatePointer(
                                                                      &v23,
                                                                      v16 & -(__int64)((_DWORD)ResourceDirectoryEntry != 0),
                                                                      v17);
                                  if ( (_DWORD)ResourceDirectoryEntry )
                                  {
                                    v20 = v19 - 60;
                                    LODWORD(ResourceDirectoryEntry) = ValidatePointer(
                                                                        &v23,
                                                                        v18 + 6,
                                                                        (unsigned int)(v19 - 60));
                                    if ( (_DWORD)ResourceDirectoryEntry )
                                    {
                                      RtlInitUnicodeString(&DestinationString, L"VS_VERSION_INFO");
                                      v24 = v18 + 6;
                                      LODWORD(ResourceDirectoryEntry) = StringCbLengthW(
                                                                          (STRSAFE_PCNZWCH)(v18 + 6),
                                                                          v21,
                                                                          &pcbLength);
                                      if ( (int)ResourceDirectoryEntry >= 0 )
                                      {
                                        LOWORD(v23) = pcbLength;
                                        WORD1(v23) = v20;
                                        LODWORD(ResourceDirectoryEntry) = RtlCompareUnicodeString(
                                                                            &DestinationString.Length,
                                                                            (unsigned __int16 *)&v23,
                                                                            0);
                                        if ( !(_DWORD)ResourceDirectoryEntry )
                                        {
                                          *(_DWORD *)(a2 + 8) = *(_DWORD *)(v18 + 48);
                                          LODWORD(ResourceDirectoryEntry) = *(_DWORD *)(v18 + 52);
                                          *(_DWORD *)(a2 + 12) = ResourceDirectoryEntry;
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
  return ResourceDirectoryEntry;
}
