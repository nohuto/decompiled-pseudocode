/*
 * XREFs of DefSetText @ 0x1C004ACE8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     NtUserDefSetText @ 0x1C014AA80 (NtUserDefSetText.c)
 * Callees:
 *     DesktopAlloc @ 0x1C0036AD0 (DesktopAlloc.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     DwmAsyncTextChange @ 0x1C00C4FB0 (DwmAsyncTextChange.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00F1438 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00F149C (DesktopVerifyHeapLargeUnicodeString.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

__int64 __fastcall DefSetText(_QWORD *a1, unsigned int *a2)
{
  __int64 v4; // rsi
  ULONG v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // edx
  PVOID *v8; // r15
  char *v9; // rax
  unsigned int v10; // esi
  BOOL v11; // r12d
  WCHAR *v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // rcx
  void *v16; // rax
  struct _LARGE_UNICODE_STRING *StrName; // rax
  _OWORD v18[3]; // [rsp+40h] [rbp-38h] BYREF
  ULONG BytesInUnicodeString; // [rsp+90h] [rbp+18h] BYREF

  BytesInUnicodeString = 0;
  v4 = a1[3];
  if ( !v4 || !a2 || !*((_QWORD *)a2 + 1) )
  {
    v10 = 1;
LABEL_28:
    *(_DWORD *)(a1[5] + 184LL) = 0;
    goto LABEL_22;
  }
  v5 = *a2;
  if ( *a2 >= 0x3FFFFFFE )
  {
    v10 = 0;
    goto LABEL_28;
  }
  if ( (a2[1] & 0x80000000) != 0 )
    v6 = 2 * v5;
  else
    v6 = v5 & 0xFFFFFFFE;
  v7 = v6 + 2;
  BytesInUnicodeString = v6 + 2;
  v8 = (PVOID *)(a1 + 23);
  if ( a1[23] )
  {
    v18[0] = 0LL;
    StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(a1 + 23),
                (struct _LARGE_UNICODE_STRING *)v18);
    DesktopVerifyHeapLargeUnicodeString(v4, StrName);
    v7 = BytesInUnicodeString;
  }
  if ( (*(_DWORD *)(a1[5] + 188LL) & 0x7FFFFFFFu) < v7 )
  {
    if ( *v8 )
    {
      RtlFreeHeap(*(PVOID *)(v4 + 128), 0, *v8);
      v7 = BytesInUnicodeString;
    }
    v9 = (char *)DesktopAlloc(v4, v7);
    if ( v9 )
      *((_QWORD *)*(v8 - 18) + 24) = &v9[-((_BYTE *)*(v8 - 18) - (_BYTE *)*(v8 - 17))];
    else
      *((_QWORD *)*(v8 - 18) + 24) = 0LL;
    *v8 = v9;
    *(_DWORD *)(a1[5] + 184LL) = 0;
    if ( !*v8 )
    {
      *(_DWORD *)(a1[5] + 188LL) &= 0x80000000;
LABEL_33:
      v10 = 0;
      goto LABEL_22;
    }
    *(_DWORD *)(a1[5] + 188LL) ^= (BytesInUnicodeString ^ *(_DWORD *)(a1[5] + 188LL)) & 0x7FFFFFFF;
    v7 = BytesInUnicodeString;
  }
  v10 = 1;
  v11 = 1;
  if ( *a2 )
  {
    v12 = (WCHAR *)*v8;
    if ( (a2[1] & 0x80000000) != 0 )
    {
      v11 = RtlMultiByteToUnicodeN(v12, v7, &BytesInUnicodeString, *((const CHAR **)a2 + 1), *a2) >= 0;
      v7 = BytesInUnicodeString + 2;
      BytesInUnicodeString += 2;
    }
    else
    {
      memmove(v12, *((const void **)a2 + 1), *a2);
      v7 = BytesInUnicodeString;
    }
  }
  v13 = a1[5];
  if ( !v11 )
  {
    *(_DWORD *)(v13 + 184) = 0;
    goto LABEL_33;
  }
  *(_DWORD *)(v13 + 184) = v7 - 2;
  *((_WORD *)*v8 + ((unsigned __int64)*(unsigned int *)(a1[5] + 184LL) >> 1)) = 0;
LABEL_22:
  if ( (unsigned int)IsTopLevelWindow((__int64)a1) && (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v16 = (void *)ReferenceDwmApiPort(v15);
    DwmAsyncTextChange(v16);
  }
  return v10;
}
