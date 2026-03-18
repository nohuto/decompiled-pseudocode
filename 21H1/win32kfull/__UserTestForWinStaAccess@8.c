/*
 * XREFs of __UserTestForWinStaAccess@8 @ 0x7E656
 * Callers:
 *     _xxxResolveDesktop@20 @ 0x7DE28 (_xxxResolveDesktop@20.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __fastcall _UserTestForWinStaAccess(PCUNICODE_STRING String1, int a2)
{
  ACCESS_MASK v2; // ebx
  int result; // eax
  NTSTATUS v5; // eax
  NTSTATUS v6; // esi
  NTSTATUS v7; // esi
  _DWORD *v8; // esi
  NTSTATUS v9; // edi
  int v10; // edx
  int v11; // eax
  ULONG v12; // eax
  struct _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-28h] BYREF
  int v14; // [esp+14h] [ebp-20h]
  int v15; // [esp+18h] [ebp-1Ch]
  int TokenInformation; // [esp+1Ch] [ebp-18h] BYREF
  void *Handle; // [esp+20h] [ebp-14h] BYREF
  PVOID Object; // [esp+24h] [ebp-10h] BYREF
  ULONG ReturnLength; // [esp+28h] [ebp-Ch] BYREF
  HANDLE TokenHandle; // [esp+2Ch] [ebp-8h] BYREF
  BOOLEAN v21; // [esp+33h] [ebp-1h]

  v14 = a2;
  ReturnLength = 0;
  v2 = 0x20000000;
  Handle = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  TokenHandle = 0;
  Object = 0;
  TokenInformation = 0;
  v15 = 0x20000000;
  RtlInitUnicodeString(&DestinationString, L"\\Windows\\WindowStations\\WinSta0");
  v21 = RtlEqualUnicodeString(String1, &DestinationString, 1u);
  result = OpenEffectiveToken(&TokenHandle);
  if ( result >= 0 )
  {
    result = ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength);
    if ( result >= 0 )
    {
      if ( TokenInformation )
      {
        v2 = 131104;
        v15 = 131104;
      }
    }
  }
  if ( !v21 )
  {
    if ( TokenHandle )
      ZwClose(TokenHandle);
    v5 = ObReferenceObjectByName(String1, 64, 0, v2, ExWindowStationObjectType, 0, 0, &Object);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v7 = ObOpenObjectByPointer(Object, 0x40u, 0, v2, ExWindowStationObjectType, 1, &Handle);
      ObfDereferenceObject(Object);
      if ( v7 >= 0 && Handle )
        return ObCloseHandle(Handle, 1);
      else
        return -1073741790;
    }
    v12 = RtlNtStatusToDosError(v5);
    UserSetLastError(v12);
    return v6;
  }
  if ( !TokenHandle )
    return result;
  v6 = ZwQueryInformationToken(TokenHandle, TokenStatistics, 0, 0, &ReturnLength);
  if ( v6 != -1073741789 )
  {
LABEL_23:
    ZwClose(TokenHandle);
    return v6;
  }
  v8 = (_DWORD *)Win32AllocPoolWithQuota(ReturnLength, 1702064981);
  if ( !v8 )
  {
    v6 = -1073741801;
    goto LABEL_23;
  }
  v9 = ZwQueryInformationToken(TokenHandle, TokenStatistics, v8, ReturnLength, &ReturnLength);
  if ( v9 >= 0 )
  {
    v9 = -1073741790;
    if ( _grpWinStaList )
    {
      v10 = v8[2];
      v11 = *(_DWORD *)(_grpWinStaList + 100);
      if ( v14 )
      {
        if ( v10 == v11 && v8[3] == *(_DWORD *)(_grpWinStaList + 104)
          || v10 == _luidSystem[0] && v8[3] == _luidSystem[1]
          || AccessCheckObject(_grpWinStaList, v15, 1, _WinStaMapping) )
        {
          v9 = 0;
        }
      }
      else if ( v10 == v11 )
      {
        v9 = *(_DWORD *)(_grpWinStaList + 104) != v8[3] ? 0xC0000022 : 0;
      }
    }
  }
  ZwClose(TokenHandle);
  Win32FreePool(v8);
  return v9;
}
