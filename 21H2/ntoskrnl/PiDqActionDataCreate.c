/*
 * XREFs of PiDqActionDataCreate @ 0x140624A2C
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x14062466C (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     PiDqActionDataFree @ 0x140624BD4 (PiDqActionDataFree.c)
 *     PnpAllocatePWSTR @ 0x14062CF38 (PnpAllocatePWSTR.c)
 *     PiDqGetPnpObjectType @ 0x14062D4B0 (PiDqGetPnpObjectType.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14062F90C (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetChangedProperties @ 0x140771334 (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x1408A43B0 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1408A4640 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDqActionDataCreate(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int PWSTR; // ebx
  _QWORD *v8; // r14
  _DWORD *PoolWithTag; // rdi
  _QWORD *v10; // r12
  unsigned int PnpObjectType; // ebp
  int v12; // r8d
  __int64 v13; // r9
  int v14; // r10d
  int v15; // eax
  bool v16; // zf
  __int64 v17; // r8
  int RequestedProperties; // eax
  __int64 v20; // r9
  int AllPropertiesInBestLanguage; // eax
  _DWORD v22[18]; // [rsp+50h] [rbp-48h] BYREF

  PWSTR = 0;
  v22[0] = 0;
  *a4 = 0LL;
  v8 = a4;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x58706E50u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  *(_OWORD *)PoolWithTag = 0LL;
  *((_OWORD *)PoolWithTag + 1) = 0LL;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  if ( *(_QWORD *)(a3 + 16) )
  {
    v10 = PoolWithTag + 4;
    *PoolWithTag = *(_DWORD *)(a3 + 32);
    PoolWithTag[2] = *(_DWORD *)(a1 + 16);
    PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(*(_QWORD *)(a3 + 16) + 16LL));
    if ( PWSTR >= 0 )
    {
      if ( !*(_DWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 40) & 2) == 0 || (unsigned int)(*PoolWithTag - 1) > 1 )
        goto LABEL_10;
      PnpObjectType = PiDqGetPnpObjectType(*(unsigned int *)(a1 + 16));
      v15 = *(_DWORD *)(a1 + 40);
      if ( (v15 & 2) == 0 )
      {
        LOBYTE(v13) = v15 & 4;
        v16 = v12 == 1;
        v17 = *v10;
        if ( v16 )
          RequestedProperties = PiDqActionDataGetRequestedProperties(
                                  a2,
                                  PnpObjectType,
                                  v17,
                                  v13,
                                  *(_QWORD *)(a1 + 56),
                                  *(_QWORD *)(a1 + 72),
                                  v14,
                                  PoolWithTag + 8,
                                  PoolWithTag + 6);
        else
          RequestedProperties = PiDqActionDataGetChangedProperties(
                                  a2,
                                  PnpObjectType,
                                  v17,
                                  v13,
                                  *(_QWORD *)(a1 + 56),
                                  *(_QWORD *)(a1 + 72),
                                  v14,
                                  *(_QWORD *)(a3 + 24),
                                  (__int64)(PoolWithTag + 8),
                                  (__int64)(PoolWithTag + 6));
        goto LABEL_9;
      }
      if ( v12 != 1 )
      {
        LOBYTE(v13) = v15 & 4;
        RequestedProperties = PiDqActionDataGetChangedProperties(
                                a2,
                                PnpObjectType,
                                *v10,
                                v13,
                                *(_QWORD *)(a1 + 56),
                                0LL,
                                0,
                                *(_QWORD *)(a3 + 24),
                                (__int64)(PoolWithTag + 8),
                                (__int64)(PoolWithTag + 6));
LABEL_9:
        v8 = a4;
        PWSTR = RequestedProperties;
        goto LABEL_10;
      }
      v20 = *v10;
      if ( (v15 & 4) != 0 )
      {
        PWSTR = PiDqActionDataGetAllPropertiesInBestLanguage(
                  a2,
                  0LL,
                  PnpObjectType,
                  v20,
                  *(_QWORD *)(a1 + 56),
                  PoolWithTag + 8,
                  PoolWithTag + 6,
                  v22);
        if ( PWSTR >= 0 )
        {
          AllPropertiesInBestLanguage = PiDqActionDataGetAllPropertiesInBestLanguage(
                                          a2,
                                          1LL,
                                          PnpObjectType,
                                          *v10,
                                          *(_QWORD *)(a1 + 56),
                                          PoolWithTag + 8,
                                          PoolWithTag + 6,
                                          v22);
          goto LABEL_28;
        }
      }
      else
      {
        PWSTR = PiDqActionDataGetAllPropertiesInAllLanguages(
                  a2,
                  0,
                  PnpObjectType,
                  v20,
                  (__int64)(PoolWithTag + 8),
                  (__int64)(PoolWithTag + 6),
                  (__int64)v22);
        if ( PWSTR >= 0 )
        {
          AllPropertiesInBestLanguage = PiDqActionDataGetAllPropertiesInAllLanguages(
                                          a2,
                                          1,
                                          PnpObjectType,
                                          *v10,
                                          (__int64)(PoolWithTag + 8),
                                          (__int64)(PoolWithTag + 6),
                                          (__int64)v22);
LABEL_28:
          v8 = a4;
          PWSTR = AllPropertiesInBestLanguage;
          if ( AllPropertiesInBestLanguage == -1073741772 )
            PWSTR = 0;
          goto LABEL_10;
        }
      }
    }
LABEL_31:
    PiDqActionDataFree(PoolWithTag);
    return (unsigned int)PWSTR;
  }
  PoolWithTag[2] = 1;
LABEL_10:
  if ( PWSTR < 0 || *PoolWithTag == 2 && !PoolWithTag[6] )
    goto LABEL_31;
  *v8 = PoolWithTag;
  return (unsigned int)PWSTR;
}
