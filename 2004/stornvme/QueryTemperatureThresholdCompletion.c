/*
 * XREFs of QueryTemperatureThresholdCompletion @ 0x1C0015340
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     BuildGetFeaturesTemperatureThresholdCommand @ 0x1C000FA30 (BuildGetFeaturesTemperatureThresholdCommand.c)
 *     KelvinToCelsius @ 0x1C00127F8 (KelvinToCelsius.c)
 */

char __fastcall QueryTemperatureThresholdCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int16 *v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int16 v8; // ax
  __int64 v9; // rdx
  char v10; // r9
  unsigned int v11; // r8d
  unsigned int v12; // r10d
  unsigned int v13; // r8d
  unsigned __int8 v14; // di
  char v15; // bp
  char v16; // al
  unsigned int v18; // [rsp+48h] [rbp+10h]

  SrbExtension = GetSrbExtension(a2);
  v7 = SrbExtension;
  if ( *(_BYTE *)(v6 + 3) == 1 )
  {
    v18 = *(_DWORD *)(SrbExtension + 4232);
    v8 = KelvinToCelsius(*v5);
    v12 = HIWORD(v11);
    v13 = v11 >> 8;
    if ( (_BYTE)v12 )
    {
      *(_WORD *)(v9 + 16LL * (unsigned __int8)v13 + 58) = v8;
      *(_BYTE *)(v9 + 16LL * (unsigned __int8)v13 + 61) = v10;
    }
    else
    {
      *(_WORD *)(v9 + 16LL * (unsigned __int8)v13 + 56) = v8;
      *(_BYTE *)(v9 + 16 * ((unsigned __int8)v13 + 2LL) + 28) = v10;
      *(_BYTE *)(v9 + 16LL * (unsigned __int8)v13 + 62) = v10;
    }
    if ( !(_BYTE)v12 && ((_BYTE)v13 || *(_WORD *)(*(_QWORD *)(a1 + 1608) + 266LL)) )
    {
      v14 = BYTE1(v18);
      v15 = v10;
      BYTE2(v18) = v10;
    }
    else
    {
      v14 = BYTE1(v18);
      if ( BYTE1(v18) >= (unsigned __int8)v18 )
      {
        v15 = BYTE2(v18);
        v10 = 0;
      }
      else
      {
        v14 = BYTE1(v18) + 1;
        v15 = 0;
        *(_WORD *)((char *)&v18 + 1) = (unsigned __int8)(BYTE1(v18) + 1);
      }
    }
    v16 = *(_BYTE *)(v7 + 4253);
    if ( v10 )
    {
      *(_BYTE *)(v7 + 4253) = v16 & 0xFC | 1;
      SrbAssignQueueId(a1, a2);
      BuildGetFeaturesTemperatureThresholdCommand(v7 + 4096, v14, v15);
      *(_BYTE *)(v7 + 4253) &= ~4u;
      *(_QWORD *)(v7 + 4224) = QueryTemperatureThresholdCompletion;
      *(_QWORD *)(v7 + 4232) = v18;
      LOBYTE(SrbExtension) = ProcessCommand(a1, a2);
    }
    else
    {
      LOBYTE(SrbExtension) = v16 | 8;
      *(_BYTE *)(v7 + 4253) = SrbExtension;
    }
  }
  else
  {
    *(_BYTE *)(SrbExtension + 4253) |= 8u;
  }
  return SrbExtension;
}
