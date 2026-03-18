/*
 * XREFs of _xxxSetBridgeWindowChild@8 @ 0x16F43B
 * Callers:
 *     _NtUserSetBridgeWindowChild@8 @ 0x1687E3 (_NtUserSetBridgeWindowChild@8.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     ?IsHost@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x1C92C (-IsHost@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     _VerifyChildMenu@8 @ 0xF4F5A (_VerifyChildMenu@8.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YGXPAUtagWND@@0@Z @ 0x16F307 (-xxxEstablishWebviewHostComponentRelationship@@YGXPAUtagWND@@0@Z.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@0@Z @ 0x19C5BF (-GetNextComponentWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@0@Z.c)
 */

int __fastcall xxxSetBridgeWindowChild(int a1, int a2)
{
  int v3; // edi
  char v4; // bl
  struct tagWND *NextComponentWindow; // eax
  int v6; // edi
  struct tagWND *v8; // [esp+0h] [ebp-20h]
  const struct tagWND *v9; // [esp+0h] [ebp-20h]
  int v10; // [esp+4h] [ebp-1Ch]
  const struct tagWND *v11; // [esp+4h] [ebp-1Ch]
  int v13; // [esp+10h] [ebp-10h]
  _DWORD v14[3]; // [esp+14h] [ebp-Ch] BYREF

  v13 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  SetOrClrWF(1, a1, 0x8B80u, 1);
  v4 = *(_BYTE *)(*(_DWORD *)(a2 + 20) + 23);
  SetOrClrWF(0, a2, 0xF80u, 1);
  SetOrClrWF(1, a2, 0xF40u, 1);
  VerifyChildMenu(a2, (v4 & 0xC0) == 64);
  xxxSetWindowStyle((struct tagWND *)a2, 0xFFFFFFEC, (unsigned int)&loc_80000 | *(_DWORD *)(*(_DWORD *)(a2 + 20) + 16));
  xxxSetParentWorker(a1, (struct tagWND *)a2, 0, (struct tagWND *)1, v8, v10);
  if ( *(_DWORD *)(a2 + 56) == a1 && *(_DWORD *)(*(_DWORD *)(a2 + 8) + 236) == *(_DWORD *)(v13 + 236) )
  {
    if ( CoreWindowProp::IsHost() )
    {
      NextComponentWindow = CoreWindowProp::GetNextComponentWindow(v9, v11);
      v6 = (int)NextComponentWindow;
      if ( NextComponentWindow )
      {
        v14[2] = 0;
        v14[0] = *(_DWORD *)(_gptiCurrent + 228);
        *(_DWORD *)(_gptiCurrent + 228) = v14;
        v14[1] = NextComponentWindow;
        HMLockObject(NextComponentWindow);
        xxxEstablishWebviewHostComponentRelationship(v6, a2);
        ThreadUnlock1();
      }
    }
    return 1;
  }
  else
  {
    SetOrClrWF(0, a1, 0x8B80u, 1);
  }
  return v3;
}
