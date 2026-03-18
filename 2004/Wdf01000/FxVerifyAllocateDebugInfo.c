/*
 * XREFs of FxVerifyAllocateDebugInfo @ 0x1C00585A8
 * Callers:
 *     FxVerifierReadObjectDebugInfo @ 0x1C0058448 (FxVerifierReadObjectDebugInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     memset @ 0x1C001D340 (memset.c)
 */

__int64 __fastcall FxVerifyAllocateDebugInfo(
        FxObjectDebugInfo **Info,
        wchar_t *HandleNameList,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxObjectDebugInfoFlags DebugFlag)
{
  wchar_t v4; // r13
  FxObjectDebugInfo *v5; // rbx
  FxObjectDebugInfo **v7; // r12
  SIZE_T v9; // rdi
  FxObjectDebugInfo *PoolWithTag; // rax
  unsigned int v11; // esi
  const char *v12; // rdx
  const wchar_t *v13; // r14
  __int16 v14; // [rsp+20h] [rbp-79h]
  _UNICODE_STRING objectName; // [rsp+28h] [rbp-71h] BYREF
  FxObjectDebugInfo **v16; // [rsp+38h] [rbp-61h]
  _UNICODE_STRING handleName; // [rsp+40h] [rbp-59h] BYREF
  _STRING string; // [rsp+50h] [rbp-49h] BYREF
  wchar_t ubuffer[40]; // [rsp+60h] [rbp-39h] BYREF

  v4 = *HandleNameList;
  v5 = *Info;
  v14 = DebugFlag;
  v7 = Info;
  v16 = Info;
  if ( !v4 )
    return 3221225485LL;
  if ( !v5 )
  {
    v9 = 4 * FxObjectsInfoCount;
    PoolWithTag = (FxObjectDebugInfo *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v9, FxDriverGlobals->Tag);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225632LL;
    memset(PoolWithTag, 0, v9);
    LOWORD(DebugFlag) = v14;
    v4 = *HandleNameList;
  }
  v11 = 0;
  if ( FxObjectsInfoCount )
  {
    do
    {
      objectName = 0LL;
      v5[v11].ObjectType = FxObjectsInfo[v11].ObjectType;
      v12 = FxObjectsInfo[v11].HandleName;
      string = 0LL;
      if ( v12 )
      {
        if ( v4 == 42 )
        {
          v5[v11].u.DebugFlags |= DebugFlag;
        }
        else
        {
          RtlInitAnsiString(&string, v12);
          memset(ubuffer, 0, sizeof(ubuffer));
          *(_DWORD *)&objectName.Length = 5242880;
          objectName.Buffer = ubuffer;
          if ( RtlAnsiStringToUnicodeString(&objectName, &string, 0) >= 0 && (v13 = HandleNameList, *HandleNameList) )
          {
            while ( 1 )
            {
              handleName = 0LL;
              RtlInitUnicodeString(&handleName, v13);
              v13 += ((unsigned __int64)handleName.Length >> 1) + 1;
              if ( !RtlCompareUnicodeString(&handleName, &objectName, 1u) )
                break;
              if ( !*v13 )
                goto LABEL_15;
            }
            LOWORD(DebugFlag) = v14;
            v5[v11].u.DebugFlags |= v14;
          }
          else
          {
LABEL_15:
            LOWORD(DebugFlag) = v14;
          }
        }
      }
      ++v11;
    }
    while ( v11 < FxObjectsInfoCount );
    v7 = v16;
  }
  if ( !*v7 )
    *v7 = v5;
  return 0LL;
}
