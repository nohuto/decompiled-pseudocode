/*
 * XREFs of ?xxxSystemBroadcastMessage@@YGXIIJIPATtagBROADCASTMSG@@HI@Z @ 0xE719A
 * Callers:
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 *     _xxxBroadcastMessageEx@32 @ 0x48942 (_xxxBroadcastMessageEx@32.c)
 * Callees:
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _xxxBroadcastMessageEx@32 @ 0x48942 (_xxxBroadcastMessageEx@32.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 */

void __userpurge xxxSystemBroadcastMessage(
        struct tagWND *a1@<edx>,
        unsigned int a2@<ecx>,
        unsigned int a3,
        unsigned int a4,
        int a5,
        size_t a6,
        union tagBROADCASTMSG *a7,
        int a8,
        unsigned int a9)
{
  _DWORD *v9; // edi
  unsigned int v10; // ebx
  _DWORD *v11; // eax
  _DWORD *v12; // esi
  struct tagWND *v13; // edi
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // [esp+8h] [ebp-24h] BYREF
  _DWORD *v17; // [esp+Ch] [ebp-20h]
  void (__stdcall *v18)(_DWORD *); // [esp+10h] [ebp-1Ch]
  int v19; // [esp+14h] [ebp-18h] BYREF
  _DWORD *v20; // [esp+18h] [ebp-14h]
  void (__stdcall *v21)(_DWORD *); // [esp+1Ch] [ebp-10h]
  unsigned int v22; // [esp+20h] [ebp-Ch]
  struct tagWND *v23; // [esp+24h] [ebp-8h]
  _DWORD *v24; // [esp+28h] [ebp-4h]

  v23 = a1;
  v16 = 0;
  v22 = a2;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  PushW32ThreadLock(0, &v16, (int)UserDereferenceObject);
  PushW32ThreadLock(0, &v19, (int)UserDereferenceObject);
  v9 = (_DWORD *)_grpWinStaList;
  v24 = (_DWORD *)_grpWinStaList;
  if ( _grpWinStaList )
  {
    do
    {
      if ( a4 || v9 == *(_DWORD **)(*(_DWORD *)(_gptiCurrent + 248) + 20) )
        v10 = a4;
      else
        v10 = 1;
      if ( v9 )
        ObfReferenceObject(v9);
      v11 = v17;
      v17 = v9;
      if ( v11 )
        v18(v11);
      v12 = (_DWORD *)v9[2];
      if ( v12 )
      {
        v13 = v23;
        do
        {
          ObfReferenceObject(v12);
          v14 = v20;
          v20 = v12;
          if ( v14 )
            v21(v14);
          v15 = *(_DWORD *)(v12[1] + 12);
          if ( v15 )
            xxxBroadcastMessageEx(v15, v22, v13, a3, v10, a5, a6, a7);
          v12 = (_DWORD *)v12[4];
        }
        while ( v12 );
        v9 = v24;
      }
      v9 = (_DWORD *)v9[1];
      v24 = v9;
    }
    while ( v9 );
  }
  PopAndFreeW32ThreadLock((int)&v19);
  PopAndFreeW32ThreadLock((int)&v16);
}
