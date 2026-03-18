/*
 * XREFs of ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C017D2E8
 * Callers:
 *     DxgkInitializeBlockList @ 0x1C017D1C8 (DxgkInitializeBlockList.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1C017D374 (-FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z.c)
 *     ?ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z @ 0x1C0197338 (-ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z.c)
 *     DxgkFreeUnicodeString @ 0x1C0198EC0 (DxgkFreeUnicodeString.c)
 */

__int64 __fastcall CheckRuntimeBlockList(
        unsigned __int16 **a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5)
{
  int BlockListStrings; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // esi
  __int64 v12; // rax
  struct _UNICODE_STRING *v13; // rdi
  unsigned int v14[4]; // [rsp+40h] [rbp-178h] BYREF
  struct _UNICODE_STRING v15; // [rsp+50h] [rbp-168h] BYREF

  v14[0] = 0;
  BlockListStrings = FindBlockListStrings(
                       L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BlockList\\Runtime",
                       a2,
                       a3,
                       a4,
                       a5,
                       v14,
                       &v15);
  v9 = v14[0];
  v10 = BlockListStrings;
  if ( v14[0] >= 0x14 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v12 + 24) = 785LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( (_DWORD)v9 )
  {
    v14[0] = 0;
    v10 = ConvertStringsToOneMultiString(&v15, v9, a1 + 740, v14);
    if ( v10 >= 0 )
      *((_DWORD *)a1 + 1482) = 2 * v14[0];
    if ( v10 == -1073741637 )
      *((_BYTE *)a1 + 5932) = 1;
    v13 = &v15;
    do
    {
      DxgkFreeUnicodeString(v13++);
      --v9;
    }
    while ( v9 );
  }
  return (unsigned int)v10;
}
