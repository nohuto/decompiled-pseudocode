/*
 * XREFs of IrqpAllocateInstancePath @ 0x1C009D04C
 * Callers:
 *     IrqTraceAffinityPolicy @ 0x1C009CEC0 (IrqTraceAffinityPolicy.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall IrqpAllocateInstancePath(PDEVICE_OBJECT Pdo, __int64 a2)
{
  _WORD *Data; // rdi
  ULONG Size; // eax
  __int16 result; // ax
  __int64 v7; // rdx
  _WORD *v8; // r8
  __int16 v9; // ax
  const wchar_t *v10; // rdx
  __int64 v11; // r8
  ULONG RequiredSize; // [rsp+60h] [rbp+8h] BYREF
  ULONG Type; // [rsp+70h] [rbp+18h] BYREF

  Type = 0;
  RequiredSize = 0;
  Data = 0LL;
  if ( !Pdo )
    goto LABEL_17;
  if ( IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_InstanceId, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
  {
    Size = RequiredSize;
    if ( RequiredSize >= 0xFFFE )
      goto LABEL_6;
    Data = (_WORD *)ExAllocatePool2(256LL, RequiredSize, 1232102209LL);
    if ( !Data )
      goto LABEL_17;
  }
  Size = RequiredSize;
LABEL_6:
  if ( IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_InstanceId, 0, 0, Size, Data, &RequiredSize, &Type) < 0 )
  {
    ExFreePoolWithTag(Data, 0);
  }
  else if ( Data )
  {
    result = 0x7FFF;
    *(_OWORD *)a2 = 0LL;
    v7 = 0x7FFFLL;
    v8 = Data;
    while ( *Data )
    {
      ++Data;
      if ( !--v7 )
        return result;
    }
    result = 0x7FFF - v7;
    if ( a2 )
    {
      *(_QWORD *)(a2 + 8) = v8;
LABEL_14:
      v9 = 2 * result;
      *(_WORD *)a2 = v9;
      result = v9 + 2;
      *(_WORD *)(a2 + 2) = result;
      return result;
    }
    return result;
  }
LABEL_17:
  result = 0x7FFF;
  v10 = &word_1C006FA08;
  *(_OWORD *)a2 = 0LL;
  v11 = 0x7FFFLL;
  while ( *v10 )
  {
    ++v10;
    if ( !--v11 )
      return result;
  }
  result = 0x7FFF - v11;
  if ( a2 )
  {
    *(_QWORD *)(a2 + 8) = &word_1C006FA08;
    goto LABEL_14;
  }
  return result;
}
