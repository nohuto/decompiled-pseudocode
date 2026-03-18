/*
 * XREFs of _xxxSendMessageBSM@24 @ 0x7F422
 * Callers:
 *     _xxxWrapSendMessageBSM@20 @ 0x7D9B6 (_xxxWrapSendMessageBSM@20.c)
 *     ?BroadcastCompositionChange@@YGXPBUtagDESKTOP@@@Z @ 0xE110C (-BroadcastCompositionChange@@YGXPBUtagDESKTOP@@@Z.c)
 * Callees:
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     ?xxxSendBSMtoDesktop@@YGHPAUtagWND@@IIJPAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x7F518 (-xxxSendBSMtoDesktop@@YGHPAUtagWND@@IIJPAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 */

int __stdcall xxxSendMessageBSM(int a1, int a2, struct tagWND *HighLimit, unsigned int a4, _BYTE *a5, int a6)
{
  int v6; // ebx
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  _DWORD *i; // esi
  _DWORD *v10; // eax
  struct tagBROADCASTSYSTEMMSGPARAMS *v12; // [esp+0h] [ebp-28h]
  int v13; // [esp+4h] [ebp-24h]
  int v14; // [esp+10h] [ebp-18h] BYREF
  _DWORD *v15; // [esp+14h] [ebp-14h]
  void (__stdcall *v16)(_DWORD *); // [esp+18h] [ebp-10h]
  int v17; // [esp+1Ch] [ebp-Ch] BYREF
  _DWORD *v18; // [esp+20h] [ebp-8h]
  void (__stdcall *v19)(_DWORD *); // [esp+24h] [ebp-4h]

  v6 = 0;
  if ( (*a5 & 0x10) == 0 )
    return xxxSendBSMtoDesktop(HighLimit, a4, (unsigned int)a5, a6, v12, v13);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  PushW32ThreadLock(0, &v17, (int)UserDereferenceObject);
  PushW32ThreadLock(0, &v14, (int)UserDereferenceObject);
  v7 = (_DWORD *)_grpWinStaList;
LABEL_4:
  if ( !v7 )
  {
    PopAndFreeW32ThreadLock((int)&v14);
    PopAndFreeW32ThreadLock((int)&v17);
    return v6;
  }
  ObfReferenceObject(v7);
  v8 = v18;
  v18 = v7;
  if ( v8 )
    v19(v8);
  for ( i = (_DWORD *)v7[2]; ; i = (_DWORD *)i[4] )
  {
    if ( !i )
    {
      v7 = (_DWORD *)v7[1];
      goto LABEL_4;
    }
    ObfReferenceObject(i);
    v10 = v15;
    v15 = i;
    if ( v10 )
      v16(v10);
    v6 = xxxSendBSMtoDesktop(HighLimit, a4, (unsigned int)a5, a6, v12, v13);
    if ( !v6 && (a5[4] & 1) != 0 )
      break;
  }
  PopAndFreeW32ThreadLock((int)&v14);
  PopAndFreeW32ThreadLock((int)&v17);
  return 0;
}
