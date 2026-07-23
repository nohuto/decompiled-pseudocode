/*
 * XREFs of EtwpSetMark @ 0x1409375AC
 * Callers:
 *     NtTraceEvent @ 0x14027E790 (NtTraceEvent.c)
 *     EtwpLogRefSetAutoMark @ 0x14093E024 (EtwpLogRefSetAutoMark.c)
 * Callees:
 *     EtwpLogSystemEventUnsafe @ 0x1403AEC8C (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MmEmptyAllWorkingSets @ 0x14053CA44 (MmEmptyAllWorkingSets.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     MmIdentifyPhysicalMemory @ 0x1408C7218 (MmIdentifyPhysicalMemory.c)
 */

__int64 __fastcall EtwpSetMark(__int64 a1, _DWORD *a2, unsigned int a3, char a4, KPROCESSOR_MODE PreviousMode)
{
  unsigned int v8; // ebx
  char v9; // r12
  _DWORD *v11; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v12; // [rsp+50h] [rbp-38h]
  int v13; // [rsp+54h] [rbp-34h]
  __int64 *v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+60h] [rbp-28h]
  int v16; // [rsp+64h] [rbp-24h]

  v8 = 0;
  if ( a3 > 4 )
  {
    if ( a3 <= 0xFFDD )
    {
      if ( PreviousMode )
      {
        if ( ((unsigned __int8)a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)a2 + a3 > 0x7FFFFFFF0000LL || (_DWORD *)((char *)a2 + a3) < a2 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v9 = 0;
      if ( (*a2 & 1) != 0 && a4 )
      {
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        {
          v9 = 1;
          MmEmptyAllWorkingSets();
        }
        else
        {
          v8 = -1073741727;
        }
      }
      v11 = a2 + 1;
      v12 = a3 - 4;
      v13 = 0;
      v14 = &EtwpNull;
      v15 = 2;
      v16 = 0;
      EtwpLogSystemEventUnsafe(
        *(_QWORD *)(a1 + 1080),
        (__int64)&v11,
        KeGetCurrentThread(),
        *(_DWORD *)a1,
        2u,
        3874,
        0x3100u,
        PreviousMode);
      if ( v9 )
        MmIdentifyPhysicalMemory(*(_QWORD *)(a1 + 1080), *(_DWORD *)a1, 629LL, (_DWORD *)1);
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
