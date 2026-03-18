/*
 * XREFs of IvtInvalidateScalableModePasidCache @ 0x14052F29C
 * Callers:
 *     IvtUpdateScalableModeContextEntry @ 0x14052FEA0 (IvtUpdateScalableModeContextEntry.c)
 *     IvtInitializeIommu @ 0x140A63CE0 (IvtInitializeIommu.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IvtIommuSendCommand @ 0x14052F378 (IvtIommuSendCommand.c)
 *     IvtIommuWaitCommand @ 0x14052F618 (IvtIommuWaitCommand.c)
 */

__int64 __fastcall IvtInvalidateScalableModePasidCache(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        char a7)
{
  __int64 v9; // rdx
  unsigned __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = 0LL;
  v11 = 55LL;
  IvtIommuSendCommand(a1, &v11, a5);
  if ( a6 )
  {
    v12 = 0LL;
    v11 = 18LL;
    IvtIommuSendCommand(a1, &v11, a5);
    if ( a7 )
    {
      v12 = 0x7FFFFFFFFFFFF001LL;
      v11 = ((unsigned __int64)a2 << 32) | 3;
      IvtIommuSendCommand(a1, &v11, a5);
    }
  }
  return IvtIommuWaitCommand(a1, v9, a5);
}
