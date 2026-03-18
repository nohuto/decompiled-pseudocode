/*
 * XREFs of _PostPointerEventMessage@16 @ 0x159285
 * Callers:
 *     _PostDeviceNotification@20 @ 0xC9CA6 (_PostDeviceNotification@20.c)
 *     _PostPointerDeviceInRangeMessage@12 @ 0x159243 (_PostPointerDeviceInRangeMessage@12.c)
 *     _PostPointerDeviceOutOfRangeMessage@12 @ 0x159264 (_PostPointerDeviceOutOfRangeMessage@12.c)
 * Callees:
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     _AdjustPwndPtiPqForDelegation@24 @ 0x47910 (_AdjustPwndPtiPqForDelegation@24.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _PHIDTtoPT@4 @ 0x159214 (_PHIDTtoPT@4.c)
 */

void __stdcall PostPointerEventMessage(_DWORD *a1, struct tagQMSG *a2, struct tagWND *a3, int a4)
{
  struct _LIST_ENTRY *Flink; // ebx
  _DWORD *v5; // edi
  struct tagWND *v6; // edx
  int v7; // esi
  int v8; // ecx
  int v9; // eax
  BOOL v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // esi
  int v17; // ecx
  int v18; // ecx
  int v19; // esi
  int v20; // ecx
  int v21; // esi
  _DWORD *v22; // esi
  int i; // ecx
  int v24; // esi
  int j; // ecx
  int v26; // esi
  int k; // ecx
  int v28; // esi
  int m; // ecx
  _DWORD *v30; // [esp+10h] [ebp-20h] BYREF
  struct tagWND *v31; // [esp+14h] [ebp-1Ch]
  int v32; // [esp+18h] [ebp-18h] BYREF
  int v33; // [esp+1Ch] [ebp-14h] BYREF
  int v34; // [esp+20h] [ebp-10h]
  int v35; // [esp+24h] [ebp-Ch]
  int v36; // [esp+28h] [ebp-8h]
  int v37; // [esp+2Ch] [ebp-4h] BYREF

  Flink = gPointerDeviceClients.Flink;
  v5 = a1;
  if ( a4 )
    v6 = a3;
  else
    v6 = (struct tagWND *)PHIDTtoPT(a1);
  v31 = v6;
  while ( Flink != &gPointerDeviceClients )
  {
    v7 = (int)Flink[-1].Flink;
    v8 = *(_DWORD *)(v7 + 8);
    if ( a4 )
    {
      v9 = 0;
      if ( a2 == (struct tagQMSG *)568 && (v6 == (struct tagWND *)1 || v6 == (struct tagWND *)2) )
        v9 = 1;
      if ( v9 )
      {
        v10 = _gSessionId == **(_DWORD **)(*(_DWORD *)(v8 + 248) + 20);
LABEL_14:
        if ( !v10 )
          goto LABEL_53;
      }
      else if ( *(_DWORD *)(v8 + 248) != _grpdeskRitInput )
      {
        v10 = 0;
        goto LABEL_14;
      }
      v33 = *(_DWORD *)(v7 + 8);
      v32 = v7;
      v37 = 0;
      v30 = *(_DWORD **)(v33 + 236);
      if ( AdjustPwndPtiPqForDelegation((int *)&v30, &v32, &v33, (int)a2, 0, &v37) )
      {
        v11 = v30[16];
        if ( v11 )
          v12 = *(_DWORD *)(v11 + 8);
        else
          v12 = 0;
        if ( v12 )
          v36 = v12 + 216;
        else
          v36 = gObjDummyLock;
        v13 = v30[12];
        if ( v13 )
          v35 = v13 + 216;
        else
          v35 = gObjDummyLock;
        v14 = v30[13];
        if ( v14 )
          v15 = v14 + 216;
        else
          v15 = gObjDummyLock;
        v16 = gpsiLock;
        v17 = 3;
        v34 = v15;
        while ( v17 )
        {
          v16 += 4;
          --v17;
        }
        v18 = 3;
        v19 = v32 + 28;
        while ( v18 )
        {
          v19 += 4;
          --v18;
        }
        v20 = 3;
        v21 = v33 + 216;
        while ( v20 )
        {
          v21 += 4;
          --v20;
        }
        v22 = v30;
        for ( i = 3; i; --i )
          ++v22;
        v24 = v34;
        for ( j = 3; j; --j )
          v24 += 4;
        v26 = v35;
        for ( k = 3; k; --k )
          v26 += 4;
        v28 = v36;
        for ( m = 3; m; --m )
          v28 += 4;
        PostInputMessage((int)v30, v32, a2, v31, a1[174], 0, 0, 0, 0, 0, 0, 0, 0, v37, v33);
      }
      goto LABEL_53;
    }
    if ( Flink[-1].Blink && *(_DWORD *)(v8 + 248) == _grpdeskRitInput )
      _PostMessage(v7, (int)a2, (int)v6, v5[174]);
LABEL_53:
    Flink = Flink->Flink;
    v6 = v31;
    v5 = a1;
  }
}
