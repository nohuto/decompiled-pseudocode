/*
 * XREFs of PiCMGetDeviceInterfaceAlias @ 0x14072B2EC
 * Callers:
 *     PiCMHandleIoctl @ 0x140629660 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140252870 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     PiCMReturnBufferResultData @ 0x14062C594 (PiCMReturnBufferResultData.c)
 *     IoGetDeviceInterfaceAlias @ 0x14072B4C0 (IoGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x14072B9B0 (PiCMCaptureInterfaceAliasInputData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiCMGetDeviceInterfaceAlias(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // esi
  _WORD *PoolWithTag; // rdi
  unsigned __int64 v10; // r14
  NTSTATUS inited; // ebx
  unsigned int v12; // edx
  NTSTATUS v13; // eax
  UNICODE_STRING AliasSymbolicLinkName; // [rsp+50h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-39h] BYREF
  GUID AliasInterfaceClassGuid; // [rsp+70h] [rbp-29h] BYREF
  PCWSTR SourceString[2]; // [rsp+80h] [rbp-19h]
  __int64 v19; // [rsp+90h] [rbp-9h]

  v6 = 0;
  *a6 = 0;
  AliasSymbolicLinkName = 0LL;
  v19 = 0LL;
  PoolWithTag = 0LL;
  AliasInterfaceClassGuid = 0LL;
  LODWORD(v10) = 0;
  *(_OWORD *)SourceString = 0LL;
  DestinationString = 0LL;
  inited = PiCMCaptureInterfaceAliasInputData(a1, a2, a5, &AliasInterfaceClassGuid);
  if ( inited < 0 )
    goto LABEL_23;
  if ( !SourceString[1] || *(_DWORD *)&AliasInterfaceClassGuid.Data2 )
  {
    inited = -1073741811;
  }
  else
  {
    if ( !a3 || a4 < 0x14 )
    {
      inited = -1073741811;
      v12 = 0;
      goto LABEL_28;
    }
    if ( a4 - 20 >= 2 )
      v6 = a4 - 20;
    if ( v6 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x34706E50u);
      if ( !PoolWithTag )
        inited = -1073741670;
    }
    if ( inited >= 0 )
    {
      if ( v6 >= 2 )
        *PoolWithTag = 0;
      inited = RtlInitUnicodeStringEx(&DestinationString, SourceString[1]);
      if ( inited >= 0 )
      {
        inited = IoGetDeviceInterfaceAlias(
                   &DestinationString,
                   (const GUID *)AliasInterfaceClassGuid.Data4,
                   &AliasSymbolicLinkName);
        if ( inited >= 0 )
        {
          v10 = ((unsigned __int64)AliasSymbolicLinkName.Length + 2) >> 1;
          if ( 2 * (unsigned __int64)(unsigned int)v10 > v6 )
          {
            inited = -1073741789;
          }
          else
          {
            memmove(PoolWithTag, AliasSymbolicLinkName.Buffer, AliasSymbolicLinkName.Length);
            PoolWithTag[(unsigned int)(v10 - 1)] = 0;
          }
          ExFreePoolWithTag(AliasSymbolicLinkName.Buffer, 0);
        }
      }
    }
  }
  v12 = 2 * v10;
  if ( inited >= 0 )
  {
    v13 = PiCMReturnBufferResultData(inited, v12, 0, PoolWithTag, v12, SHIDWORD(v19), a3, a4, a6);
    goto LABEL_21;
  }
LABEL_28:
  v13 = PiCMReturnBufferResultData(inited, v12, 0, 0LL, 0, SHIDWORD(v19), a3, a4, a6);
LABEL_21:
  inited = v13;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_23:
  if ( SourceString[1] )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString[1]);
  return (unsigned int)inited;
}
