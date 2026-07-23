/*
 * XREFs of _LdrpResolveForwarder@16 @ 0x4B2ED6C1
 * Callers:
 *     _LdrpSnapModule@4 @ 0x4B2BDE10 (_LdrpSnapModule@4.c)
 * Callees:
 *     _LdrpGetProcedureAddress@16 @ 0x4B2A6260 (_LdrpGetProcedureAddress@16.c)
 *     _RtlGuardCheckImageBase@8 @ 0x4B2BC5F3 (_RtlGuardCheckImageBase@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _LdrpParseForwarderDescription@16 @ 0x4B2E5D96 (_LdrpParseForwarderDescription@16.c)
 *     _LdrpCheckRedirection@12 @ 0x4B3342C5 (_LdrpCheckRedirection@12.c)
 */

int __fastcall LdrpResolveForwarder(char *a1, char **a2, int a3, char **a4)
{
  int v4; // ebx
  int v5; // eax
  int v7; // esi
  int v8; // eax
  const char *v9; // esi
  char *v10; // eax
  char **v11; // ecx
  int ProcedureAddress; // eax
  int v14; // [esp+Ch] [ebp-1Ch] BYREF
  PVOID BaseAddress; // [esp+10h] [ebp-18h] BYREF
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h] BYREF
  ULONG Value; // [esp+1Ch] [ebp-Ch] BYREF
  ANSI_STRING SourceString; // [esp+20h] [ebp-8h] BYREF

  v4 = 0;
  v14 = 0;
  v5 = *(_DWORD *)(a3 + 92);
  BaseAddress = 0;
  v16 = v5;
  while ( 1 )
  {
    v7 = LdrpParseForwarderDescription(a1, (int)&SourceString, (char **)&v17, &Value);
    if ( v7 < 0 )
      break;
    if ( SourceString.Length == 5
      && (*(_DWORD *)SourceString.Buffer | 0x20202020) == 0x6C64746E
      && (SourceString.Buffer[4] | 0x20) == 0x6C )
    {
      a2 = (char **)LdrpNtDllDataTableEntry;
      v14 = (int)LdrpNtDllDataTableEntry;
    }
    else
    {
      v8 = LdrpLoadDependentModule(&SourceString, v16, a2, 1, (PVOID *)&v14, (int)&BaseAddress);
      v7 = v8;
      if ( v8 < 0 || v8 == 259 )
        break;
      a2 = (char **)v14;
    }
    v9 = (const char *)v17;
    if ( (*(_DWORD *)(*(_DWORD *)(a3 + 92) + 16) & 0x2000000) != 0 && v17 )
    {
      v10 = (char *)LdrpCheckRedirection(v17);
      v11 = a4;
      *a4 = v10;
      if ( v10 != (char *)-4530927 )
        return 0;
    }
    else
    {
      v11 = a4;
    }
    ProcedureAddress = LdrpGetProcedureAddress(a2[6], v9, Value, v11);
    v7 = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
    {
      if ( ProcedureAddress >= 0 )
        RtlGuardCheckImageBase(a2[6]);
      break;
    }
    if ( ++v4 == 32 )
    {
      v7 = -1073741701;
      break;
    }
    a1 = *a4;
  }
  if ( BaseAddress )
    RtlFreeHeap(LdrpHeap, 0, BaseAddress);
  return v7;
}
