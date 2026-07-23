/*
 * XREFs of FsRtlValidateReparsePointBuffer @ 0x1402304D0
 * Callers:
 *     IopValidateJunctionTarget @ 0x140893044 (IopValidateJunctionTarget.c)
 * Callees:
 *     RtlUShortAdd @ 0x14023071C (RtlUShortAdd.c)
 */

NTSTATUS __stdcall FsRtlValidateReparsePointBuffer(ULONG BufferLength, PREPARSE_DATA_BUFFER ReparseBuffer)
{
  signed int ReparseTag; // edx
  unsigned int ReparseDataLength; // r10d
  unsigned int v5; // edi
  unsigned int v6; // eax
  NTSTATUS result; // eax
  USHORT v8; // cx
  __int64 v9; // r9
  int v10; // r10d
  int v11; // r11d
  bool v12; // zf
  USHORT SubstituteNameOffset; // bx
  __int64 v14; // r9
  char v15; // r9
  __int16 v16; // r10
  __int16 v17; // r11
  USHORT pusResult; // [rsp+40h] [rbp+20h] BYREF
  USHORT v19; // [rsp+50h] [rbp+30h] BYREF

  if ( BufferLength - 8 > 0x3FF8 )
    return -1073741192;
  ReparseTag = ReparseBuffer->ReparseTag;
  if ( (ReparseTag & 0xFFF0000) != 0
    || (unsigned int)ReparseTag <= 2
    || (ReparseTag & 0xC0000000) == 0x40000000
    || (ReparseTag & 0x30000000) == 0x30000000
    || ReparseTag == -1610612711 )
  {
    return -1073741194;
  }
  ReparseDataLength = ReparseBuffer->ReparseDataLength;
  v5 = ReparseDataLength + 8;
  v6 = ReparseDataLength + 24;
  if ( ReparseDataLength + 8 != BufferLength && v6 != BufferLength )
    return -1073741192;
  if ( v5 == BufferLength && ReparseTag >= 0
    || v6 == BufferLength
    && (ReparseTag >= 0
     && !ReparseBuffer->AppExecLinkReparseBuffer.StringCount
     && !ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameOffset
     && !ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 8)
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 9)
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 10)
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 11)
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 12)
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 13)
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 14)
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 15)
     || ReparseTag == -1610612733
     || ReparseTag == -1610612724) )
  {
    return -1073741192;
  }
  if ( ReparseTag == -1610612733 )
  {
    pusResult = 0;
    if ( ReparseDataLength < 8 )
      return -1073741192;
    result = RtlUShortAdd(
               ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength,
               ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength,
               &pusResult);
    if ( !result )
    {
      if ( (unsigned int)pusResult + 12 < 0xC )
        return -1073741675;
      pusResult = 0;
      result = RtlUShortAdd(v8, 2u, &pusResult);
      if ( !result )
      {
        if ( *(_WORD *)(v9 + 8) || *(_WORD *)(v9 + 12) != pusResult )
          return -1073741192;
        v12 = v10 == v11;
LABEL_34:
        if ( !v12 )
          return -1073741192;
        return 0;
      }
    }
  }
  else
  {
    if ( ReparseTag != -1610612724 )
      return 0;
    v19 = 0;
    pusResult = 0;
    if ( (unsigned __int16)ReparseDataLength < 0xCu )
      return -1073741192;
    SubstituteNameOffset = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameOffset;
    result = RtlUShortAdd(SubstituteNameOffset, ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength, &v19);
    if ( !result )
    {
      result = RtlUShortAdd(*(_WORD *)(v14 + 12), *(_WORD *)(v14 + 14), &pusResult);
      if ( !result )
      {
        if ( v5 < (unsigned int)v19 + 20
          || v5 < (unsigned int)pusResult + 20
          || !v16
          || !v17
          || (v16 & 1) != 0
          || (v17 & 1) != 0
          || (SubstituteNameOffset & 1) != 0 )
        {
          return -1073741192;
        }
        v12 = (v15 & 1) == 0;
        goto LABEL_34;
      }
    }
  }
  return result;
}
