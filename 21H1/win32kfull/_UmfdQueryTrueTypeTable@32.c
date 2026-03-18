/*
 * XREFs of _UmfdQueryTrueTypeTable@32 @ 0x86C4E
 * Callers:
 *     <none>
 * Callees:
 *     ??0QueryTrueTypeTableRequest@@QAE@KKKJKPAEPAPAEPAK@Z @ 0x86CB0 (--0QueryTrueTypeTableRequest@@QAE@KKKJKPAEPAPAEPAK@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 */

int __stdcall UmfdQueryTrueTypeTable(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned __int8 *a6,
        unsigned __int8 **a7,
        unsigned int *a8)
{
  _BYTE v9[24]; // [esp+0h] [ebp-48h] BYREF
  int v10; // [esp+18h] [ebp-30h]
  int v11; // [esp+38h] [ebp-10h]

  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0;
  QueryTrueTypeTableRequest::QueryTrueTypeTableRequest((QueryTrueTypeTableRequest *)v9, a1, a2, a3, a4, a5, a6, a7, a8);
  if ( UmfdClientSendAndWaitForCompletion(*(_DWORD *)(v10 + 4), v9) < 0 )
    return -1;
  else
    return v11;
}
