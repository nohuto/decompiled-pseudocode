/*
 * XREFs of ?xxxEstablishWebviewHostComponentRelationship@@YGXPAUtagWND@@0@Z @ 0x16F307
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SGJPAUtagWND@@0@Z @ 0xC4246 (-xxxSetHost@CoreWindowProp@@SGJPAUtagWND@@0@Z.c)
 *     _xxxSetBridgeWindowChild@8 @ 0x16F43B (_xxxSetBridgeWindowChild@8.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     _VerifyChildMenu@8 @ 0xF4F5A (_VerifyChildMenu@8.c)
 */

void __fastcall xxxEstablishWebviewHostComponentRelationship(int a1, int a2)
{
  char v4; // bl
  struct tagWND *v5; // [esp+0h] [ebp-10h]
  int v6; // [esp+4h] [ebp-Ch]

  v4 = *(_BYTE *)(*(_DWORD *)(a1 + 20) + 23);
  SetOrClrWF(0, a1, 0xF80u, 1);
  SetOrClrWF(1, a1, 0xF40u, 1);
  VerifyChildMenu(a1, (v4 & 0xC0) == 64);
  xxxSetWindowStyle((struct tagWND *)a1, 0xFFFFFFEC, (unsigned int)&loc_80000 | *(_DWORD *)(*(_DWORD *)(a1 + 20) + 16));
  xxxSetParentWorker(a2, (struct tagWND *)a1, 0, (struct tagWND *)1, v5, v6);
}
