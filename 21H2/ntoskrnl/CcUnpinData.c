/*
 * XREFs of CcUnpinData @ 0x1406E7C70
 * Callers:
 *     CcPreparePinWrite @ 0x1406940F0 (CcPreparePinWrite.c)
 *     CcUnpinData @ 0x1406E7C70 (CcUnpinData.c)
 *     CcPinRead @ 0x1406EF1A0 (CcPinRead.c)
 *     CcPinMappedData @ 0x1406EF380 (CcPinMappedData.c)
 *     CcUnpinDataForThread @ 0x140867880 (CcUnpinDataForThread.c)
 * Callees:
 *     CcUnpinFileDataEx @ 0x1402F4630 (CcUnpinFileDataEx.c)
 *     CcUnpinData @ 0x1406E7C70 (CcUnpinData.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
