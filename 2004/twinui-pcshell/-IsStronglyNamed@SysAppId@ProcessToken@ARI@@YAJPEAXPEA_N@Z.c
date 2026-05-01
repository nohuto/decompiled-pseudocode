/*
 * XREFs of ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x18046A980
 * Callers:
 *     ?RuntimeClassInitialize@PenWorkspaceScreenCaptureBroker@@QEAAJXZ @ 0x18021D384 (-RuntimeClassInitialize@PenWorkspaceScreenCaptureBroker@@QEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     ??$Allocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@_K@Z @ 0x18046A5C8 (--$Allocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFO.c)
 *     ?Free@ARI@@YAXPEAX@Z @ 0x18046A630 (-Free@ARI@@YAXPEAX@Z.c)
 */

ULONG __fastcall ARI::ProcessToken::SysAppId::IsStronglyNamed(HANDLE TokenHandle, _BYTE *a2, bool *a3)
{
  ULONG v3; // edi
  NTSTATUS InformationToken; // eax
  PVOID v8; // rax
  UNICODE_STRING *v9; // rdx
  PVOID v10; // rbx
  int v11; // eax
  unsigned int v12; // esi
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  size_t Size; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  *a2 = 0;
  InformationToken = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, 0LL, 0, (PULONG)&Size);
  if ( InformationToken == -1073741789 )
  {
    v8 = ARI::Allocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>((unsigned int)Size);
    v10 = v8;
    if ( v8 )
    {
      memset_0(v8, 0, (unsigned int)Size);
      v11 = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, v10, Size, (PULONG)&Size);
      if ( v11 >= 0 )
      {
        if ( *((_DWORD *)v10 + 1) )
        {
          RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
          v12 = 0;
          if ( *((_DWORD *)v10 + 1) )
          {
            while ( 1 )
            {
              v9 = (UNICODE_STRING *)(*((_QWORD *)v10 + 1) + 40LL * v12);
              if ( v9[1].Length == 3 && !RtlCompareUnicodeString(&DestinationString, v9, 1u) )
                break;
              if ( ++v12 >= *((_DWORD *)v10 + 1) )
                goto LABEL_16;
            }
            *a2 = 1;
          }
        }
      }
      else
      {
        v3 = RtlNtStatusToDosErrorNoTeb(v11);
      }
    }
    else
    {
      v3 = 8;
    }
LABEL_16:
    ARI::Free(v10, v9);
    return v3;
  }
  else if ( InformationToken )
  {
    return RtlNtStatusToDosErrorNoTeb(InformationToken);
  }
  else
  {
    return 1359;
  }
}
