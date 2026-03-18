/*
 * XREFs of ?RemoveAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z @ 0x1C01F6374
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C001C8B0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x1C01F63C4 (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

void __fastcall CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx

  v3 = a2;
  Win32FreePool(*(_QWORD *)(*(_QWORD *)a1 + 8LL * a2));
  if ( v3 < --*(_DWORD *)(a1 + 8) )
  {
    do
    {
      v4 = v3++;
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v4) = *(_QWORD *)(*(_QWORD *)a1 + 8LL * v3);
    }
    while ( v3 < *(_DWORD *)(a1 + 8) );
  }
}
