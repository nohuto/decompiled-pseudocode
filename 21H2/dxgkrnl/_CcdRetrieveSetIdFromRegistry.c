/*
 * XREFs of _CcdRetrieveSetIdFromRegistry @ 0x1C01305B0
 * Callers:
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C01304D0 (_CcdLazyRetrieveSetIdFromRegistry.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     _CcdRetrieveValueFromRegistry @ 0x1C01304F8 (_CcdRetrieveValueFromRegistry.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C0132A50 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C0132C74 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01478E8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

__int64 __fastcall CcdRetrieveSetIdFromRegistry(HANDLE KeyHandle, const WCHAR *a2, CCD_SET_STRING_ID *a3)
{
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v17[64]; // [rsp+30h] [rbp-40h] BYREF
  void *v18; // [rsp+B8h] [rbp+48h] BYREF

  v18 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v7 = CcdRetrieveValueFromRegistry(KeyHandle, &DestinationString, &v18, v6);
  v10 = (unsigned int *)v18;
  v11 = v7;
  if ( v7 < 0 )
    goto LABEL_9;
  if ( !v18 || *((_DWORD *)v18 + 1) != 1 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v15[3] = v10[1];
    v15[4] = KeyHandle;
    v15[5] = a2;
    v15[6] = a3;
    WdLogEvent5_WdError(v15);
    LODWORD(v11) = -1073741788;
    goto LABEL_8;
  }
  v12 = *((_DWORD *)v18 + 2) & 0xFFFFFFFE;
  if ( (*((_DWORD *)v18 + 2) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      if ( *(_WORD *)((char *)v18 + v12 + 10) )
        break;
      v12 = (unsigned int)(v12 - 2);
    }
    while ( (_DWORD)v12 );
  }
  DestinationString.Length = v12;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  DestinationString.MaximumLength = v12;
  DestinationString.Buffer = (wchar_t *)((char *)v18 + 12);
  CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v17, &DestinationString);
  v11 = *(int *)CCD_SET_STRING_ID::operator=(a3);
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v17);
  if ( (int)v11 < 0 )
  {
LABEL_9:
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v14[3] = v11;
    v14[4] = KeyHandle;
    v14[5] = a2;
    v14[6] = a3;
    WdLogEvent5_WdError(v14);
  }
LABEL_8:
  operator delete[](v10);
  return (unsigned int)v11;
}
