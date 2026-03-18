/*
 * XREFs of CcUnpinData @ 0x140697550
 * Callers:
 *     CcPinRead @ 0x1405FC400 (CcPinRead.c)
 *     CcPinMappedData @ 0x1405FC940 (CcPinMappedData.c)
 *     CcUnpinData @ 0x140697550 (CcUnpinData.c)
 *     CcPreparePinWrite @ 0x1406E3B40 (CcPreparePinWrite.c)
 *     CcUnpinDataForThread @ 0x140864250 (CcUnpinDataForThread.c)
 * Callees:
 *     CcUnpinFileDataEx @ 0x1402C3400 (CcUnpinFileDataEx.c)
 *     CcUnpinData @ 0x140697550 (CcUnpinData.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
