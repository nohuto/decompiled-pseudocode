/*
 * XREFs of _RtlGetAppContainerParent@8 @ 0x4B3462F0
 * Callers:
 *     _RtlDefaultNpAcl@4 @ 0x4B335F90 (_RtlDefaultNpAcl@4.c)
 *     _RtlpGetTokenNamedObjectPath@16 @ 0x4B348B45 (_RtlpGetTokenNamedObjectPath@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _RtlGetAppContainerSidType@8 @ 0x4B3463A0 (_RtlGetAppContainerSidType@8.c)
 */

NTSTATUS __cdecl RtlGetAppContainerParent(PSID AppContainerSid, PSID *AppContainerSidParent)
{
  _DWORD *Heap; // eax
  _DWORD *v3; // esi
  int v5; // edi
  _DWORD *v6; // ecx
  int v7; // edx
  SIZE_T v8; // [esp-4h] [ebp-14h]
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [esp+Ch] [ebp-4h] BYREF

  *AppContainerSidParent = 0;
  if ( RtlGetAppContainerSidType(AppContainerSid, &AppContainerSidType) < 0
    || AppContainerSidType != ChildAppContainerSidType )
  {
    return -1073741811;
  }
  LODWORD(v8) = 40;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v8);
  v3 = Heap;
  if ( !Heap )
    return -1073741670;
  v5 = RtlInitializeSid(Heap, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 8u);
  if ( v5 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  else
  {
    v6 = v3 + 2;
    v7 = 8;
    do
    {
      *v6 = *(_DWORD *)((char *)v6 + (_BYTE *)AppContainerSid - (_BYTE *)v3);
      ++v6;
      --v7;
    }
    while ( v7 );
    v5 = 0;
    *AppContainerSidParent = v3;
  }
  return v5;
}
