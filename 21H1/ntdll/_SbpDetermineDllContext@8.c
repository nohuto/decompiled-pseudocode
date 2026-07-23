/*
 * XREFs of _SbpDetermineDllContext@8 @ 0x4B2B9AA4
 * Callers:
 *     _SbUpdateSwitchContextBasedOnDll@12 @ 0x4B2B989E (_SbUpdateSwitchContextBasedOnDll@12.c)
 * Callees:
 *     _SbpRetrieveCompatibilityManifest@12 @ 0x4B2B3DD4 (_SbpRetrieveCompatibilityManifest@12.c)
 *     _SbGetContextDetailsByVersion@12 @ 0x4B2B820A (_SbGetContextDetailsByVersion@12.c)
 *     _SbGetContextDetailsByGuid@8 @ 0x4B2B9A35 (_SbGetContextDetailsByGuid@8.c)
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall SbpDetermineDllContext(PACTIVATION_CONTEXT ActivationContext, _DWORD *a2)
{
  int v2; // edi
  PIMAGE_NT_HEADERS v4; // eax
  unsigned int MajorSubsystemVersion; // esi
  int v7; // eax
  unsigned __int16 v8; // dx
  _BYTE *v9; // ebx
  unsigned int v10; // esi
  _DWORD *v11; // ebx
  int v12; // eax
  int v14; // [esp+14h] [ebp-21Ch] BYREF
  int v15; // [esp+18h] [ebp-218h] BYREF
  int v16; // [esp+1Ch] [ebp-214h] BYREF
  PVOID BaseAddress; // [esp+20h] [ebp-210h] BYREF
  int MinorSubsystemVersion; // [esp+24h] [ebp-20Ch]
  _BYTE v19[516]; // [esp+28h] [ebp-208h] BYREF

  v16 = 512;
  v2 = 0;
  v14 = 0;
  v15 = 0;
  BaseAddress = v19;
  if ( a2 && ActivationContext )
  {
    v4 = RtlImageNtHeader(ActivationContext);
    MajorSubsystemVersion = v4->OptionalHeader.MajorSubsystemVersion;
    MinorSubsystemVersion = v4->OptionalHeader.MinorSubsystemVersion;
    if ( (unsigned __int16)MajorSubsystemVersion < 0xAu )
    {
      v7 = SbpRetrieveCompatibilityManifest(ActivationContext, &BaseAddress, &v16);
      v8 = MinorSubsystemVersion;
      if ( v7 )
      {
        v9 = BaseAddress;
        if ( BaseAddress )
        {
          v10 = (unsigned __int16)MinorSubsystemVersion + (MajorSubsystemVersion << 16);
          MinorSubsystemVersion = *(_DWORD *)BaseAddress;
          if ( MinorSubsystemVersion )
          {
            v11 = (char *)BaseAddress + 8;
            v12 = MinorSubsystemVersion;
            do
            {
              if ( v11[4] == 1 )
              {
                if ( SbGetContextDetailsByGuid(v11, &v15, (int)v11) )
                {
                  v12 = MinorSubsystemVersion;
                  if ( *(unsigned __int16 *)(v15 + 22) + (*(unsigned __int16 *)(v15 + 20) << 16) >= v10 )
                    v10 = *(unsigned __int16 *)(v15 + 22) + (*(unsigned __int16 *)(v15 + 20) << 16);
                }
                else
                {
                  v12 = MinorSubsystemVersion;
                }
              }
              v11 += 8;
              MinorSubsystemVersion = --v12;
            }
            while ( v12 );
            v9 = BaseAddress;
          }
          if ( v9 != v19 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
          v8 = v10;
          MajorSubsystemVersion = HIWORD(v10);
        }
      }
      SbGetContextDetailsByVersion(MajorSubsystemVersion, v8, &v14);
      *a2 = v14;
    }
    else
    {
      *a2 = &dword_4B281130;
    }
    return 1;
  }
  return v2;
}
