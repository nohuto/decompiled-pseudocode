/*
 * XREFs of SbpDetermineDllContext @ 0x18003DA04
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x18003DDF4 (SbUpdateSwitchContextBasedOnDll.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlImageNtHeader @ 0x180035BD0 (RtlImageNtHeader.c)
 *     SbGetContextDetailsById @ 0x18003E048 (SbGetContextDetailsById.c)
 *     SbGetContextDetailsByGuid @ 0x18003E070 (SbGetContextDetailsByGuid.c)
 *     SbGetContextDetailsByVersion @ 0x18003F3F4 (SbGetContextDetailsByVersion.c)
 *     SbpRetrieveCompatibilityManifest @ 0x18007BD48 (SbpRetrieveCompatibilityManifest.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 */

__int64 __fastcall SbpDetermineDllContext(PACTIVATION_CONTEXT ActivationContext, _QWORD *a2)
{
  unsigned int v2; // ebx
  PIMAGE_NT_HEADERS v5; // rax
  unsigned int MajorSubsystemVersion; // edi
  unsigned int MinorSubsystemVersion; // esi
  __int64 v9; // r15
  __int64 *v10; // rdi
  __int64 v11; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v14; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF

  v2 = 0;
  v13[1] = 512LL;
  v11 = 0LL;
  v13[0] = 0LL;
  v12 = 0LL;
  if ( a2 && ActivationContext )
  {
    v5 = RtlImageNtHeader(ActivationContext);
    MajorSubsystemVersion = v5->OptionalHeader.MajorSubsystemVersion;
    MinorSubsystemVersion = v5->OptionalHeader.MinorSubsystemVersion;
    SbGetContextDetailsById(4LL, &v11);
    if ( (unsigned __int16)MajorSubsystemVersion > *(_WORD *)(v11 + 20)
      || (_WORD)MajorSubsystemVersion == *(_WORD *)(v11 + 20)
      && (unsigned __int16)MinorSubsystemVersion >= *(_WORD *)(v11 + 22) )
    {
      *a2 = v11;
    }
    else
    {
      if ( (unsigned int)SbpRetrieveCompatibilityManifest(ActivationContext) && &v14 )
      {
        MinorSubsystemVersion += MajorSubsystemVersion << 16;
        if ( v14 )
        {
          v9 = v14;
          v10 = &v15;
          do
          {
            if ( *((_DWORD *)v10 + 4) == 1
              && (unsigned int)SbGetContextDetailsByGuid(v10, &v12)
              && *(unsigned __int16 *)(v12 + 22) + (*(unsigned __int16 *)(v12 + 20) << 16) >= MinorSubsystemVersion )
            {
              MinorSubsystemVersion = *(unsigned __int16 *)(v12 + 22) + (*(unsigned __int16 *)(v12 + 20) << 16);
            }
            v10 += 4;
            --v9;
          }
          while ( v9 );
        }
        MajorSubsystemVersion = HIWORD(MinorSubsystemVersion);
      }
      SbGetContextDetailsByVersion(
        (unsigned __int16)MajorSubsystemVersion,
        (unsigned __int16)MinorSubsystemVersion,
        v13);
      *a2 = v13[0];
    }
    return 1;
  }
  return v2;
}
