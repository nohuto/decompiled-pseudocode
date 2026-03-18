/*
 * XREFs of _anonymous_namespace_::RemoveEventMessage @ 0xEFA58
 * Callers:
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     _DelQEntry@12 @ 0x6D770 (_DelQEntry@12.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x6FF02 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z.c)
 */

int __fastcall anonymous_namespace_::RemoveEventMessage(_DWORD *a1, int a2, int a3)
{
  int v4; // ebx
  _DWORD *v5; // edx
  int v6; // eax
  _DWORD *v7; // edi
  _DWORD v9[3]; // [esp+8h] [ebp-10h] BYREF
  int v10; // [esp+14h] [ebp-4h]

  v10 = a2;
  v4 = 0;
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v9, (int)a1);
  v5 = (_DWORD *)a1[4];
  if ( v5 )
  {
    do
    {
      v6 = v5[15];
      if ( v6 == a3 )
        break;
      v7 = (_DWORD *)v5[1];
      if ( v6 == v10 && v5 != (_DWORD *)a1[11] )
      {
        DelQEntry(a1 + 3, v5, 1);
        v4 = 1;
      }
      v5 = v7;
    }
    while ( v7 );
  }
  return v4;
}
