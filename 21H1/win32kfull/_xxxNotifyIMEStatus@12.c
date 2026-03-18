/*
 * XREFs of _xxxNotifyIMEStatus@12 @ 0xA58A2
 * Callers:
 *     _NtUserNotifyIMEStatus@12 @ 0xA5820 (_NtUserNotifyIMEStatus@12.c)
 * Callees:
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     ?SetConvMode@@YGXPAUtagTHREADINFO@@K@Z @ 0xA5962 (-SetConvMode@@YGXPAUtagTHREADINFO@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __userpurge xxxNotifyIMEStatus(int a1@<edx>, int a2@<ecx>, struct tagTHREADINFO *a3@<ebx>, int a4)
{
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  unsigned int *v8; // ecx
  int v9; // [esp-4h] [ebp-Ch]
  unsigned int v10; // [esp+0h] [ebp-8h]

  v5 = *(_DWORD *)(a2 + 8);
  if ( v5 )
  {
    if ( _gpqForeground )
    {
      if ( *(_DWORD *)(_gpqForeground + 60) == a2 )
      {
        v9 = (int)a3;
        v6 = *(_DWORD *)(*(_DWORD *)(a2 + 20) + 132);
        if ( gHimcFocus != v6 || _gdwIMEOpenStatus != a1 || gdwIMEConversionStatus != a4 )
        {
          gHimcFocus = v6;
          if ( v6 )
          {
            gdwIMEConversionStatus = a4;
            _gdwIMEOpenStatus = a1 != 0;
            SetConvMode(a3, v10);
          }
          v7 = *(_DWORD *)(v5 + 240);
          v8 = 0;
          if ( v7 )
            v8 = *(unsigned int **)(v7 + 20);
          if ( ((*(_DWORD *)(v5 + 372) | *(_DWORD *)(**(_DWORD **)(v5 + 252) + 8)) & 0x800) != 0 )
            xxxCallHook(*(struct tagHOOK **)a2, 8, v8, 0xAu, v9, v10);
          NlsKbdSendIMENotificationBase(_gdwIMEOpenStatus, gdwIMEConversionStatus);
        }
      }
    }
  }
}
