/*
 * XREFs of VrpRegistryCallback @ 0x1405D15D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwActivityIdControl @ 0x1403640E0 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     VrpPostEnumerateKey @ 0x1405D0DA4 (VrpPostEnumerateKey.c)
 *     VrpShouldOperateOnCall @ 0x1405D1760 (VrpShouldOperateOnCall.c)
 *     VrpPostOpenOrCreate @ 0x1405D1A20 (VrpPostOpenOrCreate.c)
 *     VrpPreOpenOrCreate @ 0x1405D1D10 (VrpPreOpenOrCreate.c)
 *     VrpPostQueryKey @ 0x1405D2734 (VrpPostQueryKey.c)
 *     VrpFreeKeyContext @ 0x1405D2CA0 (VrpFreeKeyContext.c)
 *     VrpDecommissionKeyContext @ 0x1405D2CD8 (VrpDecommissionKeyContext.c)
 *     VrpPostUnloadKey @ 0x140885C78 (VrpPostUnloadKey.c)
 *     VrpPreFlushKey @ 0x140885D18 (VrpPreFlushKey.c)
 *     VrpPreLoadKey @ 0x140885DEC (VrpPreLoadKey.c)
 *     VrpPreQueryKeyName @ 0x140886950 (VrpPreQueryKeyName.c)
 *     VrpPreUnloadKey @ 0x140886BC0 (VrpPreUnloadKey.c)
 */

__int64 __fastcall VrpRegistryCallback(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+28h] [rbp-30h] BYREF
  GUID ActivityId; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  v8 = 0LL;
  v9 = 0LL;
  ActivityId = 0LL;
  if ( a2 <= 0x31 && (unsigned int)VrpShouldOperateOnCall(a2, a3, &v9, &v8) )
  {
    EtwActivityIdControl(1u, &ActivityId);
    switch ( a2 )
    {
      case 0x1Du:
        return (unsigned int)VrpPostOpenOrCreate(a3, v8);
      case 0x1Cu:
        return (unsigned int)VrpPreOpenOrCreate(a3, v8);
      case 0x16u:
        return (unsigned int)VrpPostQueryKey(a3);
      default:
        if ( a2 != 7 )
        {
          switch ( a2 )
          {
            case 0xEu:
              if ( *(_QWORD *)(a3 + 16) )
                VrpDecommissionKeyContext();
              break;
            case 0x14u:
              v3 = VrpPostEnumerateKey(a3, v8);
              break;
            case 0x1Au:
              return (unsigned int)VrpPreOpenOrCreate(a3, v8);
            case 0x1Bu:
              return (unsigned int)VrpPostOpenOrCreate(a3, v8);
            case 0x1Eu:
              return (unsigned int)VrpPreFlushKey(0x140000000uLL, v8);
            case 0x20u:
              return (unsigned int)VrpPreLoadKey(a3, v8);
            case 0x22u:
              return (unsigned int)VrpPreUnloadKey(a3, v8);
            case 0x23u:
              return (unsigned int)VrpPostUnloadKey(a3, v8);
            case 0x28u:
              VrpFreeKeyContext(*(PVOID *)(a3 + 8));
              break;
            case 0x2Fu:
              return (unsigned int)VrpPreQueryKeyName(a3);
            default:
              return v3;
          }
        }
        break;
    }
  }
  return v3;
}
