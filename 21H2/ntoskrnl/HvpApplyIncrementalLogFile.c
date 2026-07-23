/*
 * XREFs of HvpApplyIncrementalLogFile @ 0x140881478
 * Callers:
 *     HvApplyLogFile @ 0x140881384 (HvApplyLogFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     SymCryptMarvin32 @ 0x1403EBD98 (SymCryptMarvin32.c)
 *     CmpTraceHiveMountLogEntryApplied @ 0x14086ADC8 (CmpTraceHiveMountLogEntryApplied.c)
 *     HvpApplyLogEntryDataToFileBackedHive @ 0x140873E9C (HvpApplyLogEntryDataToFileBackedHive.c)
 *     HvpRecoverDataReadRoutine @ 0x140874840 (HvpRecoverDataReadRoutine.c)
 *     HvpIsLogEntryHeaderCoherent @ 0x1408819C8 (HvpIsLogEntryHeaderCoherent.c)
 *     HvpIsMetadataArrayCoherent @ 0x140881A44 (HvpIsMetadataArrayCoherent.c)
 *     HvpReadLogEntryHeader @ 0x140881EFC (HvpReadLogEntryHeader.c)
 *     HvpUpdateRecoveryVector @ 0x140881F58 (HvpUpdateRecoveryVector.c)
 */

__int64 __fastcall HvpApplyIncrementalLogFile(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6,
        unsigned __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        unsigned int *a13)
{
  unsigned int *v13; // r15
  int v14; // r12d
  unsigned int v17; // ebx
  char v18; // r14
  __int64 result; // rax
  unsigned __int64 Alignment; // r15
  unsigned __int64 v21; // r15
  bool v22; // zf
  int v23; // [rsp+38h] [rbp-69h] BYREF
  unsigned int v24; // [rsp+3Ch] [rbp-65h]
  struct _LOOKASIDE_LIST_EX v25; // [rsp+40h] [rbp-61h] BYREF

  v13 = a5;
  v14 = 0;
  v23 = 0;
  v25.L.ListHead.Alignment = 0LL;
  v17 = 512;
  v25.L.ListHead.Region = a7;
  *(_QWORD *)&v25.L.Depth = a10;
  *(_QWORD *)&v25.L.FreeMisses = a11;
  *(_QWORD *)&v25.L.Tag = a12;
  v18 = 0;
  v24 = a3;
  *(_QWORD *)&v25.L.AllocateMisses = a5;
  memset(&v25.L.48, 0, 40);
  while ( 1 )
  {
    result = HvpReadLogEntryHeader(v17, HvpRecoverDataReadRoutine, v13, &v25.L.48);
    if ( (int)result < 0 )
      break;
    if ( !(unsigned __int8)HvpIsLogEntryHeaderCoherent(&v25.L.48, v17, v24) || HIDWORD(v25.L.Free) != a2 )
      goto LABEL_17;
    result = HvpRecoverDataReadRoutine(v13, v17, HIDWORD(v25.L.Allocate), &v25);
    if ( (int)result < 0 )
      break;
    Alignment = v25.L.ListHead.Alignment;
    if ( !(unsigned __int8)HvpIsMetadataArrayCoherent(
                             &v25.L.48,
                             v25.L.ListHead.Alignment + 40,
                             HIDWORD(v25.L.ListEntry.Flink)) )
      goto LABEL_17;
    SymCryptMarvin32(
      HvSymcryptSeed,
      (unsigned __int16 *)(Alignment + 40),
      (unsigned int)(HIDWORD(v25.L.Allocate) - 40),
      v25.L.Future);
    if ( v25.L.ListEntry.Blink != *(struct _LIST_ENTRY **)v25.L.Future )
      goto LABEL_17;
    v21 = v25.L.ListHead.Alignment + 40;
    HvpApplyLogEntryDataToFileBackedHive(
      v25.L.ListHead.Region,
      (__int64)&v25.L.48,
      v25.L.ListHead.Alignment + 40,
      v25.L.ListHead.Alignment + 40 + 8LL * HIDWORD(v25.L.ListEntry.Flink),
      HIDWORD(v25.L.Allocate) - (8 * HIDWORD(v25.L.ListEntry.Flink) + 40),
      &v23);
    v22 = ((__int64)v25.L.FreeEx & 1) == 0;
    *(_DWORD *)(a1 + 40) = v25.L.ListEntry.Flink;
    if ( !v22 )
      *(_DWORD *)(a1 + 144) |= 1u;
    v18 = 1;
    ++v14;
    CmpTraceHiveMountLogEntryApplied(SHIDWORD(v25.L.Allocate), v23);
    if ( *(_QWORD *)&v25.L.Depth )
      HvpUpdateRecoveryVector(v21, HIDWORD(v25.L.ListEntry.Flink), *(_QWORD *)&v25.L.Depth);
    v13 = *(unsigned int **)&v25.L.AllocateMisses;
    ++a2;
    v17 += HIDWORD(v25.L.Allocate);
    if ( !v17 )
    {
      result = 2147483674LL;
      break;
    }
  }
  if ( (_DWORD)result == -1073741801 || (_DWORD)result == -1073741670 || (_DWORD)result == -1073741492 )
    return result;
LABEL_17:
  result = v18 != 0 ? 0x40000009 : 0;
  if ( *(_QWORD *)&v25.L.FreeMisses )
    **(_DWORD **)&v25.L.FreeMisses = a2;
  if ( *(_QWORD *)&v25.L.Tag )
    **(_DWORD **)&v25.L.Tag = v14;
  if ( a13 )
  {
    if ( v18 )
      *a13 = v17;
    else
      *a13 = 0;
  }
  return result;
}
