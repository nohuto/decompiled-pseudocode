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
  _RTL_SRWLOCK *v1; // ecx
  _BYTE *v2; // esi
  unsigned int v3; // ecx
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  int result; // eax
  _RTL_SRWLOCK *v7; // ebx
  unsigned int i; // eax
  _BYTE *v9; // esi
  size_t v10; // [esp-4h] [ebp-9Ch]
  char v12; // [esp+17h] [ebp-81h]
  _DWORD v13[18]; // [esp+18h] [ebp-80h] BYREF
  int v14; // [esp+60h] [ebp-38h]
  __int16 v15; // [esp+66h] [ebp-32h]
  int v16; // [esp+88h] [ebp-10h]

  LODWORD(v10) = 120;
  memset(v13, 0, v10);
  v13[6] = -1;
  v14 = 0;
  v16 = 0;
  v1 = 0;
  v13[0] = 3;
  v13[1] = 120;
  while ( 1 )
  {
    result = EtwpGetNextRegistration(v1);
    v7 = (_RTL_SRWLOCK *)result;
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
      v12 = 0;
      if ( (void *)v7[11].Value != NtCurrentTeb()->ClientId.UniqueThread )
      {
        RtlAcquireSRWLockExclusive(v7 + 9);
        v12 = 1;
        v7[11].0 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)NtCurrentTeb()->ClientId.UniqueThread;
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
        v13[10] = v7[3].0;
        v13[11] = v7[4].0;
        v13[12] = v7[5].0;
        v13[13] = v7[6].0;
        v14 = 0;
        v15 = a1 | 0x8000;
        EtwpUpdateEnableInfoAndCallback((int)v7, (int)v13);
      }
      if ( v12 )
      {
        v7[11].Value = 0;
        RtlReleaseSRWLockExclusive(v7 + 9);
      }
    }
    v1 = v7;
  }
}
