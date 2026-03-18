/*
 * XREFs of ?AddConvProp@@YGHPAUtagWND@@0KPAUtagDDECONV@@1@Z @ 0x17E7D5
 * Callers:
 *     ?NewConversation@@YGHPAPAUtagDDECONV@@0PAUtagWND@@1@Z @ 0x17EA9A (-NewConversation@@YGHPAPAUtagDDECONV@@0PAUtagWND@@1@Z.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 */

int __userpurge AddConvProp@<eax>(
        int a1@<ecx>,
        struct tagWND *a2,
        struct tagWND *a3,
        unsigned int a4,
        struct tagDDECONV *a5,
        struct tagDDECONV *a6)
{
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int Prop; // [esp+10h] [ebp-14h]

  Prop = _GetProp(a1, (unsigned __int16)atomDDETrack, 1);
  HMAssignmentLock(v8, v7);
  HMAssignmentLock(v10, v9);
  HMAssignmentLock(v12, v11);
  HMAssignmentLock(v14, v13);
  *((_DWORD *)a3 + 8) = 0;
  *((_DWORD *)a3 + 7) = 0;
  *((_DWORD *)a3 + 10) = a2;
  v15 = Prop;
  if ( ((unsigned __int8)a2 & 1) == 0 )
    v15 = a1;
  v16 = _GetProp(v15, (unsigned __int16)atomDDEImp, 1);
  if ( v16 )
    ++*(_WORD *)(v16 + 74);
  *((_DWORD *)a3 + 11) = v16;
  HMLockObject(a3);
  InternalSetProp(a1, (unsigned __int16)atomDDETrack, (int)a3, 1);
  return 1;
}
