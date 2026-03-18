/*
 * XREFs of __QuerySendMessage@8 @ 0x1813B0
 * Callers:
 *     _NtUserQuerySendMessage@4 @ 0x167D47 (_NtUserQuerySendMessage@4.c)
 * Callees:
 *     _IsPointerInputMessageWithState@4 @ 0x439B4 (_IsPointerInputMessageWithState@4.c)
 *     _IsPointerParentNotify@8 @ 0x46012 (_IsPointerParentNotify@8.c)
 *     _TranslateSentPointerMessageForClient@12 @ 0x15A172 (_TranslateSentPointerMessageForClient@12.c)
 */

BOOL __fastcall _QuerySendMessage(int a1, _DWORD *a2)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // eax
  unsigned int *v4; // edi
  int v5; // esi
  void *v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v10; // [esp+Ch] [ebp-4h]

  v2 = *(_DWORD **)(a1 + 276);
  if ( !v2 )
    return 0;
  v3 = (_DWORD *)v2[15];
  if ( v3 )
    v3 = (_DWORD *)*v3;
  *a2 = v3;
  v4 = a2 + 2;
  v5 = v2[14];
  v6 = a2 + 3;
  a2[1] = v5;
  v10 = v2[12];
  a2[2] = v10;
  a2[3] = v2[13];
  v7 = v2[10];
  a2[5] = 0;
  a2[6] = 0;
  a2[4] = v7;
  if ( !IsPointerInputMessageWithState() && !IsPointerParentNotify(v8, v10) )
    return 1;
  return TranslateSentPointerMessageForClient(v5, v4, v6);
}
