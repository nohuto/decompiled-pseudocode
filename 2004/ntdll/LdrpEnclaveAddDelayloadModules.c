/*
 * XREFs of LdrpEnclaveAddDelayloadModules @ 0x1800CD31C
 * Callers:
 *     LdrpLoadEnclaveModule @ 0x1800CD7B8 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x180016530 (RtlInitAnsiStringEx.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpEnclaveAddDependentModule @ 0x1800CD3DC (LdrpEnclaveAddDependentModule.c)
 */

__int64 __fastcall LdrpEnclaveAddDelayloadModules(__int64 a1)
{
  NTSTATUS inited; // esi
  unsigned __int64 v3; // r15
  NTSTATUS v4; // eax
  char *v5; // rbp
  unsigned int v6; // ebx
  unsigned int i; // edi
  __int64 v8; // rcx
  _STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+8h] BYREF
  char *v12; // [rsp+78h] [rbp+10h] BYREF

  inited = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 48LL);
  v4 = RtlpImageDirectoryEntryToDataEx(v3, 1, 0xDu, &v11, &v12);
  v5 = v12;
  if ( v4 < 0 )
    v5 = 0LL;
  if ( v5 )
  {
    v6 = 0;
    for ( i = v11 >> 5; v6 < i; ++v6 )
    {
      v8 = *(unsigned int *)&v5[32 * v6 + 4];
      if ( !(_DWORD)v8 )
        break;
      inited = RtlInitAnsiStringEx(&DestinationString, (PCSZ)(v3 + v8));
      if ( inited < 0 )
        break;
      inited = LdrpEnclaveAddDependentModule(a1, &DestinationString);
      if ( inited < 0 )
        break;
    }
  }
  return (unsigned int)inited;
}
