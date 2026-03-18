/*
 * XREFs of ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0047DF8
 * Callers:
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0047690 (SfnGETDBCSTEXTLENGTHS.c)
 *     xxxClientLoadStringW @ 0x1C00480B4 (xxxClientLoadStringW.c)
 *     xxxClientExpandStringW @ 0x1C0048558 (xxxClientExpandStringW.c)
 *     ClientGetListboxString @ 0x1C014C7B4 (ClientGetListboxString.c)
 *     SfnINCNTOUTSTRING @ 0x1C022AB60 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C022B180 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcOutputStringSize(struct _CALLBACKSTATUS *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v5; // ecx
  __int64 v7; // rbx
  unsigned __int64 v9; // rax
  __int64 result; // rax
  ULONG v11; // ecx
  ULONG BytesInMultiByteString; // [rsp+40h] [rbp+18h] BYREF

  BytesInMultiByteString = 0;
  v5 = *((_DWORD *)a1 + 2);
  v7 = a2;
  if ( v5 )
    ProbeForRead(*((volatile void **)a1 + 2), v5, 2 - (a4 != 0));
  else
    *(_BYTE *)MmUserProbeAddress = 0;
  v9 = *((unsigned int *)a1 + 2);
  if ( a3 )
  {
    if ( a4 )
    {
      if ( (unsigned int)v7 >= (unsigned int)v9 )
        LODWORD(v7) = *((_DWORD *)a1 + 2);
      return (unsigned int)v7;
    }
    else
    {
      v11 = 2 * v7;
      if ( 2 * v7 >= v9 )
        v11 = *((_DWORD *)a1 + 2);
      RtlUnicodeToMultiByteSize(&BytesInMultiByteString, *((PCWCH *)a1 + 2), v11);
      return BytesInMultiByteString;
    }
  }
  else if ( a4 )
  {
    if ( (unsigned int)v7 < (unsigned int)v9 )
      LODWORD(v9) = v7;
    RtlMultiByteToUnicodeSize(&BytesInMultiByteString, *((const CHAR **)a1 + 2), v9);
    return BytesInMultiByteString >> 1;
  }
  else
  {
    result = (unsigned int)v9 >> 1;
    if ( (unsigned int)v7 < (unsigned int)result )
      return (unsigned int)v7;
  }
  return result;
}
