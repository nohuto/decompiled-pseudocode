/*
 * XREFs of _EtwProcessPrivateLoggerRequest@4 @ 0x4B2EFF20
 * Callers:
 *     _EtwpProcessNotification@20 @ 0x4B2AE63A (_EtwpProcessNotification@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _EtwpStopUmLogger@16 @ 0x4B2ED853 (_EtwpStopUmLogger@16.c)
 *     _EtwpFlushUmLogger@16 @ 0x4B2ED94C (_EtwpFlushUmLogger@16.c)
 *     _EtwpQueryUmLogger@16 @ 0x4B2ED9ED (_EtwpQueryUmLogger@16.c)
 *     _EtwpValidateLoggerInfo@4 @ 0x4B2F0042 (_EtwpValidateLoggerInfo@4.c)
 *     _EtwpStartUmLogger@16 @ 0x4B2F0075 (_EtwpStartUmLogger@16.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _EtwpIncrementUmLoggerFile@16 @ 0x4B381859 (_EtwpIncrementUmLoggerFile@16.c)
 *     _EtwpUpdateUmLogger@16 @ 0x4B3819CB (_EtwpUpdateUmLogger@16.c)
 */

int __stdcall EtwProcessPrivateLoggerRequest(int *a1)
{
  int *v1; // ebx
  unsigned int v2; // eax
  int v3; // esi
  int v4; // ecx
  int v5; // esi
  ULONG started; // eax
  int v7; // esi
  int v8; // esi
  struct _TEB *v9; // eax
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  size_t v15; // [esp-4h] [ebp-2Ch]
  int v16; // [esp+Ch] [ebp-1Ch]
  unsigned int v17; // [esp+Ch] [ebp-1Ch]
  int v18; // [esp+10h] [ebp-18h] BYREF
  int v19; // [esp+14h] [ebp-14h] BYREF
  int v20; // [esp+18h] [ebp-10h]
  int v21; // [esp+1Ch] [ebp-Ch]
  int v22; // [esp+20h] [ebp-8h]
  int v23; // [esp+24h] [ebp-4h]

  if ( (unsigned int)a1[1] < 0xF8 )
    return 4209;
  v20 = a1[14];
  v21 = a1[15];
  v22 = a1[16];
  v23 = a1[17];
  v1 = a1 + 18;
  a1[42] = a1[5];
  v16 = EtwpValidateLoggerInfo(a1 + 18);
  if ( v16 )
    goto LABEL_23;
  v2 = *v1;
  v3 = a1[19];
  v19 = 0;
  v18 = 0;
  v17 = v2;
  RtlAcquireSRWLockExclusive(&EtwpPrivSessionLock);
  v5 = v3 - 1;
  if ( !v5 )
  {
    started = EtwpStartUmLogger(&v18, v1);
LABEL_5:
    v7 = started;
    goto LABEL_6;
  }
  v11 = v5 - 1;
  if ( !v11 )
  {
    started = EtwpStopUmLogger(v4, v1);
    goto LABEL_5;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    started = EtwpQueryUmLogger(v17, &v19, &v18, (int)v1);
    goto LABEL_5;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    started = EtwpUpdateUmLogger(&v18, v1);
    goto LABEL_5;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    started = EtwpFlushUmLogger(v17, &v19, &v18, (int)v1);
    goto LABEL_5;
  }
  if ( v14 == 1 )
  {
    started = EtwpIncrementUmLoggerFile(&v18, v1);
    goto LABEL_5;
  }
  v7 = 87;
LABEL_6:
  v16 = v7;
  RtlReleaseSRWLockExclusive(&EtwpPrivSessionLock);
  if ( v7 )
  {
LABEL_23:
    v8 = 76;
    goto LABEL_8;
  }
  v8 = *v1 + 72;
LABEL_8:
  LODWORD(v15) = 72;
  memset(a1, 0, v15);
  v9 = NtCurrentTeb();
  a1[1] = v8;
  *a1 = 4;
  a1[10] = v20;
  a1[11] = v21;
  a1[12] = v22;
  a1[13] = v23;
  a1[8] = (int)v9->ClientId.UniqueProcess;
  if ( v16 )
    *v1 = v16;
  return 0;
}
