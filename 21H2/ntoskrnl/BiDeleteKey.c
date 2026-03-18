/*
 * XREFs of BiDeleteKey @ 0x14080422C
 * Callers:
 *     BiDeleteElement @ 0x14080271C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140803250 (BcdSetElementDataWithFlags.c)
 *     BiDeleteKey @ 0x14080422C (BiDeleteKey.c)
 *     BcdDeleteObject @ 0x140A1CC1C (BcdDeleteObject.c)
 * Callees:
 *     CmSiCloseSection @ 0x140250FF0 (CmSiCloseSection.c)
 *     BiSanitizeHandle @ 0x14025DBFC (BiSanitizeHandle.c)
 *     BiZwDeleteKey @ 0x140395610 (BiZwDeleteKey.c)
 *     BiDeleteKey @ 0x14080422C (BiDeleteKey.c)
 *     BiEnumerateSubKeys @ 0x14081287C (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x140813164 (BiOpenKey.c)
 *     BiCloseKey @ 0x1408132F0 (BiCloseKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
