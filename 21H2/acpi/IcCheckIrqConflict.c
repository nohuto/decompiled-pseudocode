/*
 * XREFs of IcCheckIrqConflict @ 0x1C00976B0
 * Callers:
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C00995A0 (ProcessorpFindAffinitizedIdtEntries.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     IcIsActiveBothPrimaryInterrupt @ 0x1C00B7124 (IcIsActiveBothPrimaryInterrupt.c)
 */

__int64 __fastcall IcCheckIrqConflict(unsigned int a1, int a2, unsigned __int8 a3, _BYTE *a4)
{
  __int64 v4; // r10
  int v8; // eax
  char v9; // bl
  __int64 v10; // r8
  char v11; // bl
  unsigned int v12; // r9d
  _DWORD *v13; // rax
  unsigned int v14; // r8d
  _DWORD *v15; // rax
  __int64 v17; // r8
  unsigned int v18; // r9d
  __int16 v19; // r11
  int v20; // eax
  unsigned __int16 v21; // r9
  char IsActiveBothPrimaryInterrupt; // al
  unsigned int v23; // r8d
  int v24; // r9d
  __int64 v25; // r10
  __int16 v26; // r11
  unsigned __int16 v27; // r9
  int v28; // eax

  v4 = IcListHead;
  if ( &IcListHead == (__int64 *)IcListHead )
  {
LABEL_24:
    *a4 = 1;
    return 3221226021LL;
  }
  while ( 1 )
  {
    v8 = *(_DWORD *)(v4 + 28);
    if ( v8 >= 0 && a1 >= *(_DWORD *)(v4 + 16) && a1 <= *(_DWORD *)(v4 + 20) )
      break;
    v4 = *(_QWORD *)v4;
    if ( &IcListHead == (__int64 *)v4 )
      goto LABEL_24;
  }
  v9 = (a3 >> 1) & ((v8 & 4) == 0);
  v10 = IcListHead;
  v11 = v9 & 1;
  while ( 1 )
  {
    if ( &IcListHead == (__int64 *)v10 )
      goto LABEL_15;
    if ( v4 != v10 && *(int *)(v10 + 28) >= 0 )
    {
      v12 = 0;
      if ( *(_DWORD *)(v10 + 20) - *(_DWORD *)(v10 + 16) != -1 )
        break;
    }
LABEL_11:
    v10 = *(_QWORD *)v10;
  }
  v13 = (_DWORD *)(v10 + 140);
  while ( !*(v13 - 26) || *v13 != a2 )
  {
    ++v12;
    v13 += 50;
    if ( v12 >= *(_DWORD *)(v10 + 20) - *(_DWORD *)(v10 + 16) + 1 )
      goto LABEL_11;
  }
  if ( v11 || (unsigned __int8)IcIsActiveBothPrimaryInterrupt(v10, v12) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_59;
    v21 = 10;
    goto LABEL_58;
  }
  v20 = *(_DWORD *)(200LL * v18 + v17 + 152);
  if ( !v20 && v19 || v20 == 1 && !v19 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_59;
    v21 = 11;
    goto LABEL_58;
  }
LABEL_15:
  v14 = 0;
  if ( *(_DWORD *)(v4 + 20) - *(_DWORD *)(v4 + 16) == -1 )
    goto LABEL_19;
  v15 = (_DWORD *)(v4 + 140);
  while ( !*(v15 - 26) || *v15 != a2 )
  {
    ++v14;
    v15 += 50;
    if ( v14 >= *(_DWORD *)(v4 + 20) - *(_DWORD *)(v4 + 16) + 1 )
      goto LABEL_19;
  }
  IsActiveBothPrimaryInterrupt = IcIsActiveBothPrimaryInterrupt(v4, v14);
  if ( a1 == v24 + v23 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = 12;
LABEL_53:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x14u,
        v27,
        (__int64)&WPP_929e7a6a75053a8d29f65faa15fdd808_Traceguids);
      goto LABEL_19;
    }
    goto LABEL_19;
  }
  if ( !v11 && !IsActiveBothPrimaryInterrupt )
  {
    v28 = *(_DWORD *)(200LL * v23 + v25 + 152);
    if ( v28 || !v26 )
    {
      if ( v26 )
        goto LABEL_50;
      if ( v28 != 1 )
      {
        if ( (*(_DWORD *)(v25 + 28) & 2) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v27 = 15;
            goto LABEL_53;
          }
LABEL_19:
          *a4 = 0;
          return 0LL;
        }
LABEL_50:
        if ( (v26 & 1) == 0 || (*(_BYTE *)(v25 + 28) & 1) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_59;
          v21 = 17;
          goto LABEL_58;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v27 = 16;
          goto LABEL_53;
        }
        goto LABEL_19;
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_59;
    v21 = 14;
    goto LABEL_58;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_59;
  v21 = 13;
LABEL_58:
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0x14u,
    v21,
    (__int64)&WPP_929e7a6a75053a8d29f65faa15fdd808_Traceguids);
LABEL_59:
  *a4 = 1;
  return 0LL;
}
