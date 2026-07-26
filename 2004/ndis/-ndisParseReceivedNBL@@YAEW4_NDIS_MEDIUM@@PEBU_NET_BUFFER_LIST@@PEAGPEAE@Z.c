/*
 * XREFs of ?ndisParseReceivedNBL@@YAEW4_NDIS_MEDIUM@@PEBU_NET_BUFFER_LIST@@PEAGPEAE@Z @ 0x1C0070DF4
 * Callers:
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x1C0074924 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisParseReceivedNBL(
        enum _NDIS_MEDIUM a1,
        const struct _NET_BUFFER_LIST *a2,
        unsigned __int16 *a3,
        unsigned __int8 *a4)
{
  unsigned __int8 v4; // bl
  unsigned __int8 v7; // di
  unsigned __int16 v8; // ax
  _NET_BUFFER *FirstNetBuffer; // rax
  _MDL *CurrentMdl; // rcx
  unsigned int ByteCount; // esi
  __int64 CurrentMdlOffset; // r14
  char *MappedSystemVa; // rdx
  char *v14; // rdx
  unsigned __int8 result; // al
  unsigned __int16 v16; // [rsp+50h] [rbp+8h]
  unsigned __int16 v17; // [rsp+68h] [rbp+20h]

  v4 = 0;
  v7 = 1;
  if ( a1 )
  {
    v8 = (unsigned __int16)a2->NetBufferListInfo[7];
LABEL_20:
    *a3 = v8;
    v4 = 1;
    goto LABEL_21;
  }
  FirstNetBuffer = a2->FirstNetBuffer;
  CurrentMdl = FirstNetBuffer->CurrentMdl;
  ByteCount = CurrentMdl->ByteCount;
  if ( ByteCount < 0xE
    || (CurrentMdlOffset = FirstNetBuffer->CurrentMdlOffset, ByteCount <= (unsigned int)CurrentMdlOffset)
    || ByteCount - (unsigned int)CurrentMdlOffset < 0xE )
  {
LABEL_4:
    v7 = 0;
    goto LABEL_21;
  }
  if ( (CurrentMdl->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)CurrentMdl->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPages(CurrentMdl, 0);
  v14 = &MappedSystemVa[CurrentMdlOffset];
  LOBYTE(v17) = v14[13];
  HIBYTE(v16) = v17;
  HIBYTE(v17) = v14[12];
  LOBYTE(v16) = HIBYTE(v17);
  if ( v17 > 0x600u )
  {
    if ( v17 != 0x8100 )
    {
LABEL_15:
      v8 = v16;
      goto LABEL_20;
    }
    if ( ByteCount >= 0x12 && ByteCount - (unsigned int)CurrentMdlOffset >= 0x12 )
    {
      v16 = *((_WORD *)v14 + 8);
      goto LABEL_15;
    }
    goto LABEL_4;
  }
  if ( v14[14] == -86 && v14[15] == -86 && v14[16] == 3 )
  {
    v8 = *((_WORD *)v14 + 10);
    goto LABEL_20;
  }
LABEL_21:
  result = v7;
  *a4 = v4;
  return result;
}
