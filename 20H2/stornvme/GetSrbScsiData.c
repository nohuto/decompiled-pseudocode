/*
 * XREFs of GetSrbScsiData @ 0x1C00034C8
 * Callers:
 *     NVMeMapError @ 0x1C0001008 (NVMeMapError.c)
 *     NVMeGetFeaturesCurrentCacheValueCompletion @ 0x1C00033F0 (NVMeGetFeaturesCurrentCacheValueCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C00036A0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ScsiToNVMe @ 0x1C0003A60 (ScsiToNVMe.c)
 *     MdlToPrp @ 0x1C0003FE0 (MdlToPrp.c)
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C0014380 (NVMeWriteBufferFirmwareActivateCompletion.c)
 *     NVMeSetSenseData @ 0x1C001AEF8 (NVMeSetSenseData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSrbScsiData(__int64 a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, _BYTE *a5)
{
  char v5; // al
  __int64 v6; // rdi
  char v7; // bp
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rcx
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx

  v5 = *(_BYTE *)(a1 + 2);
  v6 = 0LL;
  v7 = 0;
  if ( v5 == 40 && !*(_DWORD *)(a1 + 20) )
  {
    v10 = 0LL;
    if ( *(_DWORD *)(a1 + 56) )
    {
      while ( 1 )
      {
        v11 = *(unsigned int *)(a1 + 4 * v10 + 120);
        if ( (unsigned int)v11 >= 0x80 && (unsigned int)v11 <= *(_DWORD *)(a1 + 16) )
        {
          v12 = a1 + v11;
          v13 = *(_DWORD *)(a1 + v11) - 64;
          if ( !v13 || (v16 = v13 - 1) == 0 )
          {
            v7 = 1;
            if ( a2 )
              *a2 = *(unsigned __int8 *)(v12 + 10);
            v14 = v12 + 24;
            if ( !*(_BYTE *)(v12 + 10) )
              v14 = v6;
            v6 = v14;
            if ( a3 )
              *a3 = v12 + 8;
            if ( !a4 )
              goto LABEL_14;
            v18 = *(_QWORD *)(v12 + 16);
LABEL_41:
            *a4 = v18;
LABEL_14:
            if ( a5 )
              *a5 = *(_BYTE *)(v12 + 9);
            goto LABEL_16;
          }
          if ( v16 == 1 )
          {
            v7 = 1;
            if ( a2 )
              *a2 = *(_DWORD *)(v12 + 12);
            v17 = v12 + 32;
            if ( !*(_DWORD *)(v12 + 12) )
              v17 = v6;
            v6 = v17;
            if ( a3 )
              *a3 = v12 + 8;
            if ( a4 )
            {
              v18 = *(_QWORD *)(v12 + 24);
              goto LABEL_41;
            }
            goto LABEL_14;
          }
        }
LABEL_16:
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 56) )
        {
          v5 = *(_BYTE *)(a1 + 2);
          break;
        }
      }
    }
  }
  if ( v5 )
    goto LABEL_19;
  v7 = 1;
  if ( a2 )
    *a2 = *(unsigned __int8 *)(a1 + 10);
  v19 = a1 + 72;
  if ( !*(_BYTE *)(a1 + 10) )
    v19 = v6;
  v6 = v19;
  if ( a3 )
    *a3 = a1 + 4;
  if ( a4 )
    *a4 = *(_QWORD *)(a1 + 32);
  if ( a5 )
  {
    *a5 = *(_BYTE *)(a1 + 11);
LABEL_19:
    if ( !v7 )
    {
      if ( a2 )
        *a2 = 0;
      if ( a3 )
        *a3 = 0LL;
      if ( a4 )
        *a4 = 0LL;
      if ( a5 )
        *a5 = 0;
    }
  }
  return v6;
}
