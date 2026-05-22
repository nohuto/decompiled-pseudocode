/*
 * XREFs of ?QueryInterface@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180043230
 * Callers:
 *     ?QueryInterface@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004B5E0 (-QueryInterface@-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@W7EAAJAEBU_.c)
 *     ?QueryInterface@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004B5F0 (-QueryInterface@-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@WBA@EAAJAEB.c)
 * Callees:
 *     ??$TryCastToInterface@V?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@@?$InterfaceIterator@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@SAPEAXPEAV1@AEBU_GUID@@@Z @ 0x18004269C (--$TryCastToInterface@V-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@@-$I.c)
 *     ?AddPublicReference@SharedObjectBase@@IEAAIXZ @ 0x1800BEFCC (-AddPublicReference@SharedObjectBase@@IEAAIXZ.c)
 */

__int64 __fastcall SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  SharedObjectBase *v3; // r9
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r8

  v3 = (SharedObjectBase *)(a1 - 16);
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && a2[1] == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    v4 = a1 & ((unsigned __int128)-(__int128)(unsigned __int64)v3 >> 64);
  }
  else
  {
    v4 = SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::InterfaceIterator<IGameInputServer,IAgileObject,INoMarshal>::TryCastToInterface<SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>>(
           a1 - 16,
           a2);
  }
  if ( v4 )
  {
    if ( a3 )
    {
      SharedObjectBase::AddPublicReference(v3);
      result = 0LL;
      *v7 = v6;
    }
    else
    {
      return 2147500035LL;
    }
  }
  else
  {
    if ( a3 )
      *a3 = 0LL;
    return 2147500034LL;
  }
  return result;
}
