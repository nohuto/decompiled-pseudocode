/*
 * XREFs of FsRtlValidateReparsePointBuffer @ 0x1402DDF40
 * Callers:
 *     IopValidateJunctionTarget @ 0x14066119C (IopValidateJunctionTarget.c)
 * Callees:
 *     RtlUShortAdd @ 0x1402DE190 (RtlUShortAdd.c)
 */

NTSTATUS __stdcall FsRtlValidateReparsePointBuffer(ULONG BufferLength, PREPARSE_DATA_BUFFER ReparseBuffer)
{
  signed int ReparseTag; // edx
  unsigned int ReparseDataLength; // r11d
  unsigned int v5; // esi
  unsigned int v6; // r8d
  unsigned int v7; // eax
  NTSTATUS result; // eax
  USHORT v9; // cx
  USHORT v10; // r9
  unsigned int v11; // ebx
  __int16 v12; // r9
  __int64 v13; // r10
  int v14; // r11d
  bool v15; // zf
  USHORT SubstituteNameOffset; // di
  __int64 v17; // r10
  USHORT v18; // bx
  char v19; // r10
  __int16 v20; // r11
  USHORT pusResult; // [rsp+40h] [rbp+20h] BYREF
  USHORT v22; // [rsp+50h] [rbp+30h] BYREF

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
  if ( ReparseDataLength + 8 != BufferLength )
  {
    if ( v6 == BufferLength )
    {
      v7 = ReparseTag & 0x80000000;
      goto LABEL_12;
    }
    return -1073741192;
  }
  v7 = ReparseTag & 0x80000000;
  if ( ReparseTag >= 0 )
    return -1073741192;
  if ( v6 == BufferLength )
  {
LABEL_12:
    if ( !v7
      && !*(_DWORD *)&ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameOffset
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
      || ReparseTag == -1610612724 )
    {
      return -1073741192;
    }
    return 0;
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
      v11 = pusResult + 12;
      if ( v11 < 0xC )
        return -1073741675;
      pusResult = v10;
      result = RtlUShortAdd(v9, 2u, &pusResult);
      if ( !result )
      {
        if ( *(_WORD *)(v13 + 8) != v12 || *(_WORD *)(v13 + 12) != pusResult )
          return -1073741192;
        v15 = v14 == v11;
        goto LABEL_36;
      }
    }
  }
  else
  {
    if ( ReparseTag != -1610612724 )
      return 0;
    v22 = 0;
    pusResult = 0;
    if ( (unsigned __int16)ReparseDataLength < 0xCu )
      return -1073741192;
    SubstituteNameOffset = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameOffset;
    result = RtlUShortAdd(SubstituteNameOffset, ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength, &v22);
    if ( !result )
    {
      v18 = *(_WORD *)(v17 + 14);
      result = RtlUShortAdd(*(_WORD *)(v17 + 12), v18, &pusResult);
      if ( !result )
      {
        if ( v5 < (unsigned int)v22 + 20
          || v5 < (unsigned int)pusResult + 20
          || !v20
          || !v18
          || (v20 & 1) != 0
          || (v18 & 1) != 0
          || (SubstituteNameOffset & 1) != 0 )
        {
          return -1073741192;
        }
        v15 = (v19 & 1) == 0;
LABEL_36:
        if ( v15 )
          return 0;
        return -1073741192;
      }
    }
  }
  return result;
}
