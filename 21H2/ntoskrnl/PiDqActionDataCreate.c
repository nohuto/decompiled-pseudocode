/*
 * XREFs of PiDqActionDataCreate @ 0x140778100
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x140777D40 (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140698510 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetChangedProperties @ 0x140699E6C (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetRequestedProperties @ 0x140776EE8 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqGetPnpObjectType @ 0x140777298 (PiDqGetPnpObjectType.c)
 *     PiDqActionDataFree @ 0x140778370 (PiDqActionDataFree.c)
 *     PnpAllocatePWSTR @ 0x14077DE70 (PnpAllocatePWSTR.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x14094A034 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDqActionDataCreate(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int PWSTR; // ebx
  _QWORD *v7; // r14
  _DWORD *Pool2; // rax
  _DWORD *v9; // rdi
  __int64 *v10; // r13
  int v11; // r8d
  unsigned int v12; // r10d
  int PnpObjectType; // r14d
  int v14; // eax
  char v15; // r9
  bool v16; // zf
  __int64 v17; // r8
  int ChangedProperties; // eax
  __int64 v20; // r9
  int AllPropertiesInBestLanguage; // eax
  unsigned int v22[18]; // [rsp+50h] [rbp-48h] BYREF

  PWSTR = 0;
  v22[0] = 0;
  *a4 = 0LL;
  v7 = a4;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 40LL, 1483763280LL);
  v9 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  if ( *(_QWORD *)(a3 + 16) )
  {
    v10 = (__int64 *)(Pool2 + 4);
    *Pool2 = *(_DWORD *)(a3 + 32);
    Pool2[2] = *(_DWORD *)(a1 + 16);
    PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(*(_QWORD *)(a3 + 16) + 16LL));
    if ( PWSTR < 0 )
      goto LABEL_31;
    if ( (*(_DWORD *)(a1 + 64) || (*(_DWORD *)(a1 + 40) & 2) != 0) && (unsigned int)(*v9 - 1) <= 1 )
    {
      PnpObjectType = PiDqGetPnpObjectType(*(_DWORD *)(a1 + 16));
      v14 = *(_DWORD *)(a1 + 40);
      if ( (v14 & 2) != 0 )
      {
        if ( v11 == 1 )
        {
          v20 = *v10;
          if ( (v14 & 4) != 0 )
          {
            PWSTR = PiDqActionDataGetAllPropertiesInBestLanguage(
                      a2,
                      0,
                      PnpObjectType,
                      v20,
                      *(_QWORD *)(a1 + 56),
                      (__int64)(v9 + 8),
                      (__int64)(v9 + 6),
                      (__int64)v22);
            if ( PWSTR < 0 )
              goto LABEL_31;
            AllPropertiesInBestLanguage = PiDqActionDataGetAllPropertiesInBestLanguage(
                                            a2,
                                            1,
                                            PnpObjectType,
                                            *v10,
                                            *(_QWORD *)(a1 + 56),
                                            (__int64)(v9 + 8),
                                            (__int64)(v9 + 6),
                                            (__int64)v22);
          }
          else
          {
            PWSTR = PiDqActionDataGetAllPropertiesInAllLanguages(
                      a2,
                      0,
                      PnpObjectType,
                      v20,
                      (_QWORD *)v9 + 4,
                      v9 + 6,
                      v22);
            if ( PWSTR < 0 )
              goto LABEL_31;
            AllPropertiesInBestLanguage = PiDqActionDataGetAllPropertiesInAllLanguages(
                                            a2,
                                            1,
                                            PnpObjectType,
                                            *v10,
                                            (_QWORD *)v9 + 4,
                                            v9 + 6,
                                            v22);
          }
          v7 = a4;
          PWSTR = AllPropertiesInBestLanguage;
          if ( AllPropertiesInBestLanguage == -1073741772 )
            PWSTR = 0;
          goto LABEL_10;
        }
        ChangedProperties = PiDqActionDataGetChangedProperties(
                              a2,
                              PnpObjectType,
                              *v10,
                              v14 & 4,
                              *(_QWORD *)(a1 + 56),
                              0LL,
                              0,
                              *(_QWORD *)(a3 + 24),
                              (__int64 *)v9 + 4,
                              v9 + 6);
      }
      else
      {
        v15 = v14 & 4;
        v16 = v11 == 1;
        v17 = *v10;
        if ( v16 )
          ChangedProperties = PiDqActionDataGetRequestedProperties(
                                a2,
                                PnpObjectType,
                                v17,
                                v15,
                                *(_QWORD *)(a1 + 56),
                                *(_QWORD *)(a1 + 72),
                                v12,
                                (__int64 *)v9 + 4,
                                v9 + 6);
        else
          ChangedProperties = PiDqActionDataGetChangedProperties(
                                a2,
                                PnpObjectType,
                                v17,
                                v15,
                                *(_QWORD *)(a1 + 56),
                                *(_QWORD *)(a1 + 72),
                                v12,
                                *(_QWORD *)(a3 + 24),
                                (__int64 *)v9 + 4,
                                v9 + 6);
      }
      v7 = a4;
      PWSTR = ChangedProperties;
    }
LABEL_10:
    if ( PWSTR >= 0 )
      goto LABEL_11;
LABEL_31:
    PiDqActionDataFree(v9);
    return (unsigned int)PWSTR;
  }
  *Pool2 = 0;
  Pool2[2] = 1;
LABEL_11:
  if ( *v9 == 2 && !v9[6] )
    goto LABEL_31;
  *v7 = v9;
  return (unsigned int)PWSTR;
}
