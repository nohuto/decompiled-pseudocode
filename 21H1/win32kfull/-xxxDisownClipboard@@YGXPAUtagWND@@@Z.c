/*
 * XREFs of ?xxxDisownClipboard@@YGXPAUtagWND@@@Z @ 0x18244D
 * Callers:
 *     _xxxDW_SendDestroyMessages@4 @ 0x72C7C (_xxxDW_SendDestroyMessages@4.c)
 *     _xxxSetProcessWindowStation@12 @ 0x98412 (_xxxSetProcessWindowStation@12.c)
 * Callees:
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     ?CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ @ 0x91C96 (-CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ.c)
 *     ?MungeClipData@@YGXPAUtagWINDOWSTATION@@@Z @ 0x181D0D (-MungeClipData@@YGXPAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxDrawClipboard@@YGXPAUtagWINDOWSTATION@@@Z @ 0x182559 (-xxxDrawClipboard@@YGXPAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxSendClipboardMessage@@YGXPAUtagWINDOWSTATION@@I@Z @ 0x182BFB (-xxxSendClipboardMessage@@YGXPAUtagWINDOWSTATION@@I@Z.c)
 */

void __usercall xxxDisownClipboard(int a1@<ecx>, struct tagWINDOWSTATION *a2@<esi>)
{
  struct tagWINDOWSTATION *v2; // ebx
  int *v3; // eax
  int v4; // esi
  int v5; // edx
  int *v6; // edi
  int v7; // ebx
  int v8; // ecx
  bool v9; // zf
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  struct tagWINDOWSTATION *v13; // [esp-4h] [ebp-2Ch]
  unsigned int v14; // [esp+0h] [ebp-28h]
  _DWORD v15[3]; // [esp+8h] [ebp-20h] BYREF
  struct tagWINDOWSTATION *v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h]
  int *v18; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+20h] [ebp-8h]
  int v20; // [esp+24h] [ebp-4h]

  v17 = a1;
  memset(v15, 0, sizeof(v15));
  v2 = CheckClipboardAccess();
  v16 = v2;
  if ( v2 )
  {
    PushW32ThreadLock((int)v2, v15, (int)UserDereferenceObject);
    ObfReferenceObject(v2);
    xxxSendClipboardMessage(a2, v14);
    v3 = (int *)*((_DWORD *)v2 + 16);
    v4 = 0;
    v5 = *((_DWORD *)v2 + 17);
    v6 = v3;
    v18 = v3;
    v20 = 0;
    v19 = 0;
    if ( v5 )
    {
      v7 = 0;
      do
      {
        v8 = v3[1];
        --v5;
        if ( v8 && (v8 != 1 || v4) )
        {
          ++v7;
          qmemcpy(v6, v3, 0x14u);
          v6 = v18 + 5;
          v9 = v3[1] == 1;
          v18 += 5;
          if ( !v9 && ((v10 = *v3, *v3 == 1) || v10 == 7 || v10 == 13) )
          {
            v4 = 1;
            v20 = 1;
          }
          else
          {
            v4 = v20;
          }
        }
        v3 += 5;
      }
      while ( v5 );
      v19 = v7;
      v2 = v16;
    }
    if ( v17 == *((_DWORD *)v2 + 14) )
      HMAssignmentUnlock((char *)v2 + 56);
    v11 = v19;
    v12 = *((_DWORD *)v2 + 8);
    if ( v19 != *((_DWORD *)v2 + 17) )
    {
      v12 |= 0x40u;
      ++*((_DWORD *)v2 + 19);
      *((_DWORD *)v2 + 8) = v12;
    }
    *((_DWORD *)v2 + 17) = v11;
    if ( (v12 & 0x40) != 0 )
    {
      xxxDrawClipboard(v13);
      MungeClipData(v2);
    }
    if ( v17 == *((_DWORD *)v2 + 14) )
      HMAssignmentUnlock((char *)v2 + 56);
    PopAndFreeW32ThreadLock((int)v15);
  }
}
