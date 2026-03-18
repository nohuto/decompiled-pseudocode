/*
 * XREFs of _VerifyChildMenu@8 @ 0xF4F5A
 * Callers:
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     _xxxSetModernAppWindow@8 @ 0xC6BDE (_xxxSetModernAppWindow@8.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YGXPAUtagWND@@0@Z @ 0x16F307 (-xxxEstablishWebviewHostComponentRelationship@@YGXPAUtagWND@@0@Z.c)
 *     _xxxSetBridgeWindowChild@8 @ 0x16F43B (_xxxSetBridgeWindowChild@8.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 */

char __fastcall VerifyChildMenu(int a1, int a2)
{
  int v3; // eax

  LOBYTE(v3) = *(_BYTE *)(*(_DWORD *)(a1 + 20) + 23) & 0xC0;
  if ( a2 )
  {
    if ( (_BYTE)v3 != 64 )
    {
      v3 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(v3 + 100) = 0;
      *(_DWORD *)(a1 + 92) = 0;
    }
  }
  else if ( (_BYTE)v3 == 64 )
  {
    SetOrClrWF(0, a1, 1u, 0);
    LOBYTE(v3) = (unsigned __int8)UnlockWndMenuWorker(a1, 0);
  }
  return v3;
}
