/*
 * XREFs of _EtwpDisableTraceProviders@4 @ 0x4B2EDBE4
 * Callers:
 *     _EtwpStopLoggerInstance@4 @ 0x4B2EDB7A (_EtwpStopLoggerInstance@4.c)
 * Callees:
 *     _EtwpUpdateEnableInfoAndCallback@8 @ 0x4B2B0D5F (_EtwpUpdateEnableInfoAndCallback@8.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _EtwpGetNextRegistration@4 @ 0x4B2EF857 (_EtwpGetNextRegistration@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall EtwpDisableTraceProviders(__int16 a1)
{
  int v1; // ecx
  _BYTE *v2; // esi
  unsigned int v3; // ecx
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  int result; // eax
  int v7; // ebx
  unsigned int i; // eax
  _BYTE *v9; // esi
  char v11; // [esp+17h] [ebp-81h]
  _DWORD v12[31]; // [esp+18h] [ebp-80h] BYREF

  memset(v12, 0, 0x78u);
  v12[6] = -1;
  v12[18] = 0;
  v12[28] = 0;
  v1 = 0;
  v12[0] = 3;
  v12[1] = 120;
  while ( 1 )
  {
    result = EtwpGetNextRegistration(v1);
    v7 = result;
    if ( !result )
      return result;
    v2 = (_BYTE *)(result + 102);
    v3 = 0;
    v4 = (_BYTE *)(result + 102);
    while ( !*(v4 - 2) || *v4 != (_BYTE)a1 )
    {
      ++v3;
      v4 += 24;
      if ( v3 >= 4 )
      {
        v5 = 0;
        goto LABEL_6;
      }
    }
    v5 = v4 - 22;
LABEL_6:
    if ( v5 )
    {
      v11 = 0;
      if ( *(void **)(v7 + 44) != NtCurrentTeb()->ClientId.UniqueThread )
      {
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v7 + 36));
        v11 = 1;
        *(_DWORD *)(v7 + 44) = NtCurrentTeb()->ClientId.UniqueThread;
      }
      for ( i = 0; i < 4; ++i )
      {
        if ( *(v2 - 2) && *v2 == (_BYTE)a1 )
        {
          v9 = v2 - 22;
          goto LABEL_18;
        }
        v2 += 24;
      }
      v9 = 0;
LABEL_18:
      if ( v9 )
      {
        v12[10] = *(_DWORD *)(v7 + 12);
        v12[11] = *(_DWORD *)(v7 + 16);
        v12[12] = *(_DWORD *)(v7 + 20);
        v12[13] = *(_DWORD *)(v7 + 24);
        v12[18] = 0;
        HIWORD(v12[19]) = a1 | 0x8000;
        EtwpUpdateEnableInfoAndCallback(v7, (int)v12);
      }
      if ( v11 )
      {
        *(_DWORD *)(v7 + 44) = 0;
        RtlReleaseSRWLockExclusive((volatile signed __int32 *)(v7 + 36));
      }
    }
    v1 = v7;
  }
}
