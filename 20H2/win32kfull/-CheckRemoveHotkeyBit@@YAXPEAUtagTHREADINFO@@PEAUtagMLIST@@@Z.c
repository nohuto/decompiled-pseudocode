/*
 * XREFs of ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C012C144
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C0051B80 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     FindQMsg @ 0x1C0052180 (FindQMsg.c)
 * Callees:
 *     <none>
 */

void __fastcall CheckRemoveHotkeyBit(struct tagTHREADINFO *a1, __int64 **a2)
{
  __int64 *v2; // r8
  unsigned int v3; // r9d
  bool v4; // zf
  unsigned int v5; // edx

  v2 = *a2;
  v3 = 0;
  if ( !*a2 )
    goto LABEL_6;
  do
  {
    v4 = *((_DWORD *)v2 + 6) == 786;
    v5 = v3 + 1;
    v2 = (__int64 *)*v2;
    if ( !v4 )
      v5 = v3;
    v3 = v5;
  }
  while ( v2 );
  if ( v5 <= 1 )
  {
LABEL_6:
    *(_WORD *)(*((_QWORD *)a1 + 56) + 6LL) &= ~0x80u;
    *(_WORD *)(*((_QWORD *)a1 + 56) + 4LL) &= ~0x80u;
  }
}
