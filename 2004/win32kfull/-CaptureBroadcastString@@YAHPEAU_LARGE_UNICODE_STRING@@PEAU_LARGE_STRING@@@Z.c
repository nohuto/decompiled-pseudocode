/*
 * XREFs of ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C0127D94
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C0035B10 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C0036510 (xxxSendNotifyMessage.c)
 * Callees:
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall CaptureBroadcastString(struct _LARGE_UNICODE_STRING *a1, struct _LARGE_STRING *a2)
{
  int v4; // eax
  bool v5; // zf
  ULONG v6; // eax
  WCHAR *v7; // rax
  ULONG v8; // edx
  ULONG BytesInMultiByteString; // ecx
  NTSTATUS v10; // edx
  ULONG BytesInUnicodeString; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(_DWORD *)a2;
  if ( *((int *)a2 + 1) < 0 )
    v4 *= 2;
  v5 = v4 == -2;
  v6 = v4 + 2;
  BytesInUnicodeString = v6;
  if ( !v5 )
  {
    v7 = (WCHAR *)Win32AllocPoolWithQuota(v6, 1936946005LL);
    *((_QWORD *)a1 + 1) = v7;
    if ( v7 )
    {
      v8 = BytesInUnicodeString;
      *((_DWORD *)a1 + 1) = BytesInUnicodeString & 0x7FFFFFFF;
      BytesInMultiByteString = *(_DWORD *)a2;
      if ( *((int *)a2 + 1) < 0 )
      {
        v10 = RtlMultiByteToUnicodeN(v7, v8, &BytesInUnicodeString, *((const CHAR **)a2 + 1), BytesInMultiByteString);
        *(_DWORD *)a1 = BytesInUnicodeString;
      }
      else
      {
        *(_DWORD *)a1 = BytesInMultiByteString;
        memmove(v7, *((const void **)a2 + 1), BytesInMultiByteString);
        v10 = 0;
      }
      *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*(unsigned int *)a1 >> 1)) = 0;
      if ( v10 >= 0 )
        return 1LL;
      Win32FreePool(*((_QWORD *)a1 + 1));
    }
  }
  return 0LL;
}
