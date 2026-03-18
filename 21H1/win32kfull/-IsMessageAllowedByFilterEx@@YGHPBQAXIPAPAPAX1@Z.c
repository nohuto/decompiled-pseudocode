/*
 * XREFs of ?IsMessageAllowedByFilterEx@@YGHPBQAXIPAPAPAX1@Z @ 0x9C710
 * Callers:
 *     __ChangeWindowMessageFilterEx@16 @ 0x7FD26 (__ChangeWindowMessageFilterEx@16.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z @ 0x7FEB8 (-IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z.c)
 *     ?RemoveMessageFromFilter@@YGHPAPAPAXIPAH@Z @ 0xE6A5C (-RemoveMessageFromFilter@@YGHPAPAPAXIPAH@Z.c)
 * Callees:
 *     <none>
 */

int __userpurge IsMessageAllowedByFilterEx@<eax>(
        unsigned __int16 a1@<dx>,
        int a2@<ecx>,
        void **a3,
        _DWORD *a4,
        void ***a5,
        void ***a6)
{
  _DWORD *v6; // esi
  int v7; // edi
  int v8; // ebx

  if ( !a2 )
    return 0;
  v6 = *(_DWORD **)(a2 + 4 * (a1 >> 13));
  if ( !v6 )
    return 0;
  v7 = v6[(a1 >> 9) & 0xF];
  if ( !v7 )
    return 0;
  v8 = 1;
  if ( ((unsigned __int8)(1 << (a1 & 7)) & *(_BYTE *)(((a1 >> 3) & 0x3F) + v7)) == 0 )
    return 0;
  if ( a3 )
    *a3 = v6;
  if ( a4 )
    *a4 = v7;
  return v8;
}
