/*
 * XREFs of _RtlGetAppContainerNamedObjectPath@16 @ 0x4B2E7930
 * Callers:
 *     <none>
 * Callees:
 *     _RtlEqualSid@8 @ 0x4B2D85D0 (_RtlEqualSid@8.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     _RtlpGetTokenNamedObjectPath@16 @ 0x4B348B45 (_RtlpGetTokenNamedObjectPath@16.c)
 */

NTSTATUS __cdecl RtlGetAppContainerNamedObjectPath(
        HANDLE TokenHandle,
        PSID AppContainerSid,
        BOOLEAN RelativePath,
        PUNICODE_STRING ObjectPath)
{
  HANDLE v4; // esi
  int v5; // ebx
  NTSTATUS result; // eax
  char v7; // al
  int v8; // [esp-Ch] [ebp-BCh]
  PSID Sid1[19]; // [esp+4h] [ebp-ACh] BYREF
  PSID Sid2[19]; // [esp+50h] [ebp-60h] BYREF
  int v11; // [esp+9Ch] [ebp-14h] BYREF
  int v12; // [esp+A0h] [ebp-10h] BYREF
  int TokenInformation; // [esp+A4h] [ebp-Ch] BYREF
  ULONG ReturnLength; // [esp+A8h] [ebp-8h] BYREF
  char v15; // [esp+AEh] [ebp-2h]
  char v16; // [esp+AFh] [ebp-1h]

  if ( !ObjectPath )
    return -1073741811;
  v4 = TokenHandle;
  if ( TokenHandle && AppContainerSid )
    return -1073741776;
  v11 = 0;
  v12 = 0;
  v15 = 0;
  v5 = RelativePath != 0 ? 13 : 8;
  if ( AppContainerSid )
  {
    v8 = -4;
    v16 = 0;
LABEL_6:
    v4 = (HANDLE)v8;
    if ( AppContainerSid )
      goto LABEL_15;
    goto LABEL_7;
  }
  v16 = 1;
  if ( !TokenHandle )
  {
    v8 = -6;
    goto LABEL_6;
  }
LABEL_7:
  TokenInformation = 0;
  result = ZwQueryInformationToken(v4, 0x1Du, &TokenInformation, 4u, &ReturnLength);
  if ( result < 0 )
    return result;
  if ( !TokenInformation )
  {
    *(_DWORD *)&ObjectPath->Length = 0;
    ObjectPath->Buffer = 0;
    return 0;
  }
LABEL_15:
  if ( !RelativePath )
  {
    v7 = v15;
LABEL_27:
    if ( !v7 )
      return RtlpGetTokenNamedObjectPath(v4, AppContainerSid, v5, ObjectPath);
LABEL_28:
    v5 |= 2u;
    return RtlpGetTokenNamedObjectPath(v4, AppContainerSid, v5, ObjectPath);
  }
  v7 = 1;
  if ( !v16 )
    goto LABEL_27;
  result = ZwQueryInformationToken((HANDLE)0xFFFFFFFC, 0x2Au, &v12, 4u, &ReturnLength);
  if ( result < 0 )
    return result;
  if ( !v12 )
  {
    v7 = 0;
    goto LABEL_27;
  }
  result = ZwQueryInformationToken(v4, 0x2Au, &v11, 4u, &ReturnLength);
  if ( result >= 0 )
  {
    if ( !v11 )
      return -1073741637;
    result = ZwQueryInformationToken((HANDLE)0xFFFFFFFC, 1u, Sid2, 0x4Cu, &ReturnLength);
    if ( result >= 0 )
    {
      result = ZwQueryInformationToken(v4, 1u, Sid1, 0x4Cu, &ReturnLength);
      if ( result >= 0 )
      {
        if ( !RtlEqualSid(Sid1[0], Sid2[0]) )
          return -1073741637;
        goto LABEL_28;
      }
    }
  }
  return result;
}
