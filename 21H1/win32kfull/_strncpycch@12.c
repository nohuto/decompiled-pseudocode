/*
 * XREFs of _strncpycch@12 @ 0x1B7A81
 * Callers:
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 *     ?CopyOutputString@@YGXPAU_CALLBACKSTATUS@@PAU_LARGE_STRING@@IH@Z @ 0xC8FDE (-CopyOutputString@@YGXPAU_CALLBACKSTATUS@@PAU_LARGE_STRING@@IH@Z.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall strncpycch(_BYTE *a1, int a2, int a3)
{
  int v3; // esi
  _BYTE *v4; // edi
  int v5; // edx
  char v6; // al

  v3 = a3;
  v4 = a1;
  if ( a3 )
  {
    v5 = a2 - (_DWORD)a1;
    do
    {
      v6 = a1[v5];
      *a1++ = v6;
      if ( !v6 )
        break;
      --v3;
    }
    while ( v3 );
  }
  return (_BYTE *)(a1 - v4);
}
