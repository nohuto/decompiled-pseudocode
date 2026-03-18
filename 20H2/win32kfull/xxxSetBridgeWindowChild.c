/*
 * XREFs of xxxSetBridgeWindowChild @ 0x1C0208D68
 * Callers:
 *     NtUserSetBridgeWindowChild @ 0x1C0201230 (NtUserSetBridgeWindowChild.c)
 * Callees:
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C000802C (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0012D20 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowStyle @ 0x1C00583F0 (xxxSetWindowStyle.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00C9604 (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     VerifyChildMenu @ 0x1C015CFE0 (VerifyChildMenu.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C0208BFC (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxSetBridgeWindowChild(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // r14
  unsigned int v5; // edi
  char v6; // bl
  struct tagWND *NextComponentWindow; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v5 = 0;
  SetOrClrWF(1, (__int64)a1, 0xDB80u, 1);
  v6 = *(_BYTE *)(*((_QWORD *)a2 + 5) + 31LL);
  SetOrClrWF(0, (__int64)a2, 0xF80u, 1);
  SetOrClrWF(1, (__int64)a2, 0xF40u, 1);
  VerifyChildMenu(a2, (v6 & 0xC0) == 64);
  xxxSetWindowStyle(a2, -20, *(_DWORD *)(*((_QWORD *)a2 + 5) + 24LL) | 0x80000);
  xxxSetParentWorker(a2, a1, 0LL, 1);
  if ( *((struct tagWND **)a2 + 13) == a1 && *(_QWORD *)(*((_QWORD *)a2 + 2) + 432LL) == *(_QWORD *)(v2 + 432) )
  {
    if ( (unsigned int)CoreWindowProp::IsHost(a2) )
    {
      NextComponentWindow = CoreWindowProp::GetNextComponentWindow(a2, 0LL);
      if ( NextComponentWindow )
      {
        v12[2] = 0LL;
        v12[0] = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = v12;
        v12[1] = NextComponentWindow;
        HMLockObject(NextComponentWindow);
        xxxEstablishWebviewHostComponentRelationship(NextComponentWindow, a2);
        ThreadUnlock1(v9, v8, v10);
      }
    }
    return 1;
  }
  else
  {
    SetOrClrWF(0, (__int64)a1, 0xDB80u, 1);
  }
  return v5;
}
