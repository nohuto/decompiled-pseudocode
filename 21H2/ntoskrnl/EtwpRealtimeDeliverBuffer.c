/*
 * XREFs of EtwpRealtimeDeliverBuffer @ 0x140645D0C
 * Callers:
 *     EtwpFlushBufferToRealtime @ 0x140645C38 (EtwpFlushBufferToRealtime.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1406B31D0 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1406E0C94 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1407D05D8 (EtwpRealtimeUpdateReferenceTime.c)
 * Callees:
 *     EtwpRealtimeInjectEtwBuffer @ 0x140645E50 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpDisassociateConsumer @ 0x1406C2700 (EtwpDisassociateConsumer.c)
 */

__int64 __fastcall EtwpRealtimeDeliverBuffer(__int64 a1, __int64 a2)
{
  int v2; // eax
  _QWORD *v5; // rbx
  _QWORD *v6; // r12
  _QWORD *v7; // r14
  __int16 v8; // r15
  _QWORD *v9; // rsi
  int v10; // eax
  unsigned __int8 v11; // cl
  char v12; // dl
  bool v14; // zf
  __int16 v15; // ax
  char v16; // [rsp+60h] [rbp+8h]
  char v17; // [rsp+70h] [rbp+18h]

  v2 = *(_DWORD *)(a1 + 464);
  v16 = 0;
  v17 = 0;
  v5 = 0LL;
  if ( v2 )
  {
    if ( v2 == 3 )
    {
      v15 = 8;
    }
    else
    {
      v14 = v2 == 2;
      v15 = 4;
      if ( !v14 )
        v15 = 2;
    }
    *(_WORD *)(a2 + 52) |= v15;
    v17 = 1;
  }
  v6 = (_QWORD *)(a1 + 344);
  v7 = *(_QWORD **)(a1 + 344);
  if ( v7 == (_QWORD *)(a1 + 344) )
    return 3221225473LL;
  do
  {
    v8 = *(_WORD *)(a2 + 52);
    v9 = v7;
    v7 = (_QWORD *)*v7;
    if ( (*((_BYTE *)v9 + 90) & 2) != 0 )
      *(_WORD *)(a2 + 52) = v8 | 4;
    v10 = EtwpRealtimeInjectEtwBuffer(a1, v9, a2, 2LL);
    *(_WORD *)(a2 + 52) = v8;
    if ( v10 < 0 )
    {
      if ( v10 == -1073741764 )
      {
        v9[4] = v5;
        v5 = v9;
      }
      else
      {
LABEL_17:
        EtwpDisassociateConsumer(a1, v9, 0LL);
      }
      v12 = v16;
      continue;
    }
    v11 = *((_BYTE *)v9 + 90);
    if ( (v11 & 2) != 0 )
    {
      v11 &= ~2u;
      *((_BYTE *)v9 + 90) = v11;
      v8 = *(_WORD *)(a2 + 52);
    }
    v12 = 1;
    v16 = 1;
    if ( (v11 & ((v8 & 1) != 0)) != 0 )
      goto LABEL_17;
  }
  while ( v7 != v6 );
  if ( !v12 )
    return 3221225473LL;
  if ( v17 )
    *(_DWORD *)(a1 + 464) = 0;
  if ( *(_WORD *)(a2 + 54) != 6 )
    ++*(_DWORD *)(a1 + 272);
  while ( v5 )
  {
    *((_BYTE *)v5 + 90) |= 2u;
    ++*((_DWORD *)v5 + 20);
    v5 = (_QWORD *)v5[4];
  }
  return 0LL;
}
