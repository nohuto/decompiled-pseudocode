/*
 * XREFs of _CcdRetrieveSubkeyInfoFromRegistry @ 0x1C0132D60
 * Callers:
 *     ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C0132BD8 (--$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CcdRetrieveSubkeyInfoFromRegistry(HANDLE KeyHandle, ULONG Index, _QWORD *a3)
{
  void *v3; // rdi
  PVOID v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  NTSTATUS v10; // eax
  int v11; // ebx
  __int64 v13; // rax
  ULONG Length; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  Length = 1024;
  *a3 = 0LL;
  while ( 1 )
  {
    operator delete[](v3);
    v7 = operator new[](Length, 0x63644356u, PagedPool);
    v3 = v7;
    if ( !v7 )
      break;
    v10 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, v7, Length, &Length);
    v11 = v10;
    if ( v10 != -2147483643 && v10 != -1073741789 )
      goto LABEL_5;
  }
  v13 = WdLogNewEntry5_WdError(v9, v8);
  *(_QWORD *)(v13 + 24) = Length;
  WdLogEvent5_WdError(v13);
  v11 = -1073741801;
LABEL_5:
  if ( v11 < 0 )
    operator delete[](v3);
  else
    *a3 = v3;
  return (unsigned int)v11;
}
