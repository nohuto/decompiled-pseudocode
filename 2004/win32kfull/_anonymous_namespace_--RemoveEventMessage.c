/*
 * XREFs of _anonymous_namespace_::RemoveEventMessage @ 0x1C0032E34
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C00B0784 (DelQEntry.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B328C (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 */

__int64 __fastcall anonymous_namespace_::RemoveEventMessage(__int64 a1, int a2, int a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdi
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0;
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v11, a1);
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
  {
    do
    {
      v8 = *(_DWORD *)(v7 + 96);
      if ( v8 == a3 )
        break;
      v9 = *(_QWORD *)(v7 + 8);
      if ( v8 == a2 && v7 != *(_QWORD *)(a1 + 80) )
      {
        DelQEntry(a1 + 24, v7, 1LL);
        v6 = 1;
      }
      v7 = v9;
    }
    while ( v9 );
  }
  return v6;
}
