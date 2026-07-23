/*
 * XREFs of _RtlDeleteAce@8 @ 0x4B2A9340
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpDeleteData@12 @ 0x4B2A93A9 (_RtlpDeleteData@12.c)
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 */

NTSTATUS __cdecl RtlDeleteAce(PACL Acl, ULONG AceIndex)
{
  ULONG v2; // edi
  PACL v3; // ecx
  PVOID FirstFree; // [esp+8h] [ebp-4h] BYREF

  if ( !RtlValidAcl(Acl) )
    return -1073741811;
  v2 = AceIndex;
  if ( AceIndex >= Acl->AceCount || !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741811;
  v3 = Acl + 1;
  if ( AceIndex )
  {
    do
    {
      v3 = (PACL)((char *)v3 + v3->AclSize);
      --v2;
    }
    while ( v2 );
  }
  RtlpDeleteData((_BYTE *)FirstFree - (_BYTE *)v3);
  --Acl->AceCount;
  return 0;
}
