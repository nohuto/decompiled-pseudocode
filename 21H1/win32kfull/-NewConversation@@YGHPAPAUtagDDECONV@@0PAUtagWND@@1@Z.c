/*
 * XREFs of ?NewConversation@@YGHPAPAUtagDDECONV@@0PAUtagWND@@1@Z @ 0x17EA9A
 * Callers:
 *     _xxxDDETrackPostHook@20 @ 0x18033E (_xxxDDETrackPostHook@20.c)
 *     _xxxDDETrackSendHook@16 @ 0x180600 (_xxxDDETrackSendHook@16.c)
 * Callees:
 *     ?AddConvProp@@YGHPAUtagWND@@0KPAUtagDDECONV@@1@Z @ 0x17E7D5 (-AddConvProp@@YGHPAUtagWND@@0KPAUtagDDECONV@@1@Z.c)
 */

int __userpurge NewConversation@<eax>(
        struct tagWND **a1@<edx>,
        struct tagWND **a2@<ecx>,
        struct tagDDECONV **a3,
        struct tagDDECONV **a4,
        struct tagWND *a5,
        struct tagWND *a6)
{
  struct tagWND *v7; // esi
  unsigned int v9; // eax
  struct tagWND *v10; // edi
  struct tagDDECONV *v11; // [esp+0h] [ebp-10h]
  struct tagDDECONV *v12; // [esp+0h] [ebp-10h]
  struct tagDDECONV *v13; // [esp+4h] [ebp-Ch]
  struct tagDDECONV *v14; // [esp+4h] [ebp-Ch]

  v7 = (struct tagWND *)HMAllocObject(a3[2], 0, 10, 48);
  if ( !v7 )
    return 0;
  v9 = HMAllocObject(a4[2], 0, 10, 48);
  v10 = (struct tagWND *)v9;
  if ( !v9 )
  {
    HMFreeObject(v7);
    return 0;
  }
  AddConvProp((int)a3, 0, v7, v9, v11, v13);
  AddConvProp((int)a4, (struct tagWND *)1, v10, (unsigned int)v7, v12, v14);
  if ( a2 )
    *a2 = v7;
  if ( a1 )
    *a1 = v10;
  return 1;
}
