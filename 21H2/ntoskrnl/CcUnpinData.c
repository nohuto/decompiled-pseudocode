/*
 * XREFs of CcUnpinData @ 0x1406FF050
 * Callers:
 *     CcPreparePinWrite @ 0x1405F3640 (CcPreparePinWrite.c)
 *     CcUnpinData @ 0x1406FF050 (CcUnpinData.c)
 *     CcPinRead @ 0x140706580 (CcPinRead.c)
 *     CcPinMappedData @ 0x140706760 (CcPinMappedData.c)
 *     CcUnpinDataForThread @ 0x1408679E0 (CcUnpinDataForThread.c)
 * Callees:
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     CcUnpinData @ 0x1406FF050 (CcUnpinData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __stdcall CcUnpinData(PVOID Bcb)
{
  _DWORD *v1; // r9
  PVOID v2; // rbx
  char v3; // dl
  void *v4; // rax
  char *i; // rdi

  v2 = Bcb;
  if ( ((unsigned __int8)Bcb & 1) != 0 )
  {
    v3 = 1;
    Bcb = (PVOID)((unsigned __int64)Bcb & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_3:
    CcUnpinFileDataEx((char *)Bcb, v3, 0, v1);
    return;
  }
  if ( *(_WORD *)Bcb != 762 )
  {
    v3 = 0;
    goto LABEL_3;
  }
  v4 = (void *)*((_QWORD *)Bcb + 2);
  for ( i = (char *)Bcb + 16; v4; i += 8 )
  {
    CcUnpinData(v4);
    v4 = (void *)*((_QWORD *)i + 1);
  }
  ExFreePoolWithTag(v2, 0);
}
