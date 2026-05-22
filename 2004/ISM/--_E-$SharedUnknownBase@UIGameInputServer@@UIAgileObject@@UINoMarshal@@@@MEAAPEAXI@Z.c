/*
 * XREFs of ??_E?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAAPEAXI@Z @ 0x1800422F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SharedObjectBase@@MEAA@XZ @ 0x1800BEAA4 (--1SharedObjectBase@@MEAA@XZ.c)
 */

SharedObjectBase *__fastcall SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::`vector deleting destructor'(
        SharedObjectBase *a1,
        char a2)
{
  *(_QWORD *)a1 = &SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `SharedObjectBase'};
  *((_QWORD *)a1 + 2) = &SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `IGameInputServer'};
  *((_QWORD *)a1 + 3) = &SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `IAgileObject'};
  *((_QWORD *)a1 + 4) = &SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `INoMarshal'};
  SharedObjectBase::~SharedObjectBase(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
