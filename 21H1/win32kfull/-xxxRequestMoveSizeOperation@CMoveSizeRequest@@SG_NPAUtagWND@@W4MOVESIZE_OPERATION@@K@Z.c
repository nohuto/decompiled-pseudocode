/*
 * XREFs of ?xxxRequestMoveSizeOperation@CMoveSizeRequest@@SG_NPAUtagWND@@W4MOVESIZE_OPERATION@@K@Z @ 0x19FC05
 * Callers:
 *     _NtUserRequestMoveSizeOperation@12 @ 0x16837F (_NtUserRequestMoveSizeOperation@12.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?CreateAndPostRequest@CMoveSizeRequest@@CG_NPAUtagWND@@W4MOVESIZE_OPERATION@@ABUtagPOINT@@@Z @ 0x19FB8D (-CreateAndPostRequest@CMoveSizeRequest@@CG_NPAUtagWND@@W4MOVESIZE_OPERATION@@ABUtagPOINT@@@Z.c)
 *     ?xxxValidateCapture@CMoveSizeRequest@@CG_NPAUtagWND@@KPAUtagPOINT@@@Z @ 0x19FE53 (-xxxValidateCapture@CMoveSizeRequest@@CG_NPAUtagWND@@KPAUtagPOINT@@@Z.c)
 */

char __fastcall CMoveSizeRequest::xxxRequestMoveSizeOperation(int a1, int a2, int a3)
{
  unsigned int v6; // [esp+0h] [ebp-10h]
  struct tagPOINT *v7; // [esp+4h] [ebp-Ch]
  int v8[2]; // [esp+8h] [ebp-8h] BYREF

  v8[0] = 0;
  v8[1] = 0;
  if ( !CMoveSizeRequest::xxxValidateCapture((struct tagWND *)v8, v6, v7) )
  {
    UserSetLastError((struct _NT_TIB *)5);
    return 0;
  }
  if ( !CMoveSizeRequest::CreateAndPostRequest(a1, a2, v8) )
  {
    UserSetLastError((struct _NT_TIB *)8);
    return 0;
  }
  return 1;
}
