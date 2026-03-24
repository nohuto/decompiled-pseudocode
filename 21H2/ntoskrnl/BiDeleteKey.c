/*
 * XREFs of BiDeleteKey @ 0x140779960
 * Callers:
 *     BiDeleteKey @ 0x140779960 (BiDeleteKey.c)
 *     BiDeleteElement @ 0x14078319C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140783FDC (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x14096ECB0 (BcdDeleteObject.c)
 * Callees:
 *     CmSiCloseSection @ 0x1402C81B8 (CmSiCloseSection.c)
 *     BiSanitizeHandle @ 0x1402D333C (BiSanitizeHandle.c)
 *     BiZwDeleteKey @ 0x14038D048 (BiZwDeleteKey.c)
 *     BiDeleteKey @ 0x140779960 (BiDeleteKey.c)
 *     BiEnumerateSubKeys @ 0x140783528 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x140784404 (BiOpenKey.c)
 *     BiCloseKey @ 0x14078458C (BiCloseKey.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiDeleteKey(__int64 a1)
{
  unsigned __int64 v1; // rax
  void *v2; // rsi
  NTSTATUS v3; // ebx
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0;
  v9 = 0LL;
  v1 = BiSanitizeHandle(a1);
  P = 0LL;
  v2 = (void *)v1;
  if ( (int)BiEnumerateSubKeys(v1, &P, &v7) >= 0 && v7 )
  {
    v5 = P;
    v6 = v7;
    do
    {
      if ( (int)BiOpenKey(v2, *v5, 983103LL, &v9) >= 0 && (int)BiDeleteKey(v9) < 0 )
        BiCloseKey(v9);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  v3 = BiZwDeleteKey(v2);
  if ( v3 >= 0 )
    CmSiCloseSection(v2);
  return (unsigned int)v3;
}
