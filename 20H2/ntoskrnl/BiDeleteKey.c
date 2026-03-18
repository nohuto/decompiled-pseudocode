/*
 * XREFs of BiDeleteKey @ 0x1407759B0
 * Callers:
 *     BiDeleteKey @ 0x1407759B0 (BiDeleteKey.c)
 *     BiDeleteElement @ 0x14077F3BC (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1407801FC (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x140971598 (BcdDeleteObject.c)
 * Callees:
 *     CmSiCloseSection @ 0x140326FE0 (CmSiCloseSection.c)
 *     BiSanitizeHandle @ 0x14033102C (BiSanitizeHandle.c)
 *     BiZwDeleteKey @ 0x14038C928 (BiZwDeleteKey.c)
 *     BiDeleteKey @ 0x1407759B0 (BiDeleteKey.c)
 *     BiEnumerateSubKeys @ 0x14077F748 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x140780624 (BiOpenKey.c)
 *     BiCloseKey @ 0x1407807AC (BiCloseKey.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
