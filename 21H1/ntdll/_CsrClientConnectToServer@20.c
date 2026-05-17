/*
 * XREFs of _CsrClientConnectToServer@20 @ 0x4B2EBC00
 * Callers:
 *     <none>
 * Callees:
 *     _ZwWow64CsrClientConnectToServer@20 @ 0x4B2F46F0 (_ZwWow64CsrClientConnectToServer@20.c)
 */

int __thiscall CsrClientConnectToServer(void *this, int a2, int a3, int a4, int a5, _BYTE *a6)
{
  int v6; // edx
  char v8; // [esp+1h] [ebp-1h] BYREF

  v8 = HIBYTE(this);
  v6 = ZwWow64CsrClientConnectToServer(a2, a3, a4, a5, &v8);
  if ( v6 >= 0 )
  {
    if ( !v8 )
      CsrClientProcess = 1;
    if ( a6 )
      *a6 = v8;
  }
  return v6;
}
