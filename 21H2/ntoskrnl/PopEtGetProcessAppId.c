/*
 * XREFs of PopEtGetProcessAppId @ 0x140698028
 * Callers:
 *     PoEnergyContextStart @ 0x140697F38 (PoEnergyContextStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     PopEtAppIdIntern @ 0x14069819C (PopEtAppIdIntern.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x140698894 (PopEtGetProcessSidAndPackageIdentity.c)
 *     PopEtGetProcessImageInfo @ 0x14069898C (PopEtGetProcessImageInfo.c)
 *     PopEtAppIdDereference @ 0x140699444 (PopEtAppIdDereference.c)
 */

__int64 __fastcall PopEtGetProcessAppId(__int64 a1, _QWORD *a2)
{
  UNICODE_STRING *p_DestinationString; // rbx
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned __int64 i; // rcx
  WCHAR v12; // ax
  __int64 v13; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+50h] [rbp-B0h]
  __int64 *v18; // [rsp+60h] [rbp-A0h]
  wchar_t *Buffer; // [rsp+68h] [rbp-98h]
  _WORD *v20; // [rsp+70h] [rbp-90h]
  _WORD *v21; // [rsp+78h] [rbp-88h]
  _BYTE *v22; // [rsp+80h] [rbp-80h]
  __int16 v23; // [rsp+88h] [rbp-78h]
  __int16 v24; // [rsp+8Ah] [rbp-76h]
  __int16 v25; // [rsp+8Ch] [rbp-74h]
  __int16 v26; // [rsp+8Eh] [rbp-72h]
  _BYTE v27[80]; // [rsp+90h] [rbp-70h] BYREF
  _WORD v28[200]; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[16]; // [rsp+270h] [rbp+170h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  DestinationString = 0LL;
  memset(v28, 0, 0x188uLL);
  memset(v27, 0, 0x44uLL);
  p_DestinationString = *(UNICODE_STRING **)(a1 + 1472);
  if ( !p_DestinationString || !p_DestinationString->Length )
  {
    for ( i = 0LL; i < 0xF; ++i )
    {
      v12 = *(unsigned __int8 *)(a1 + i + 1448);
      SourceString[i] = v12;
      if ( !(_BYTE)v12 )
        break;
    }
    SourceString[14] = 0;
    RtlInitUnicodeString(&DestinationString, SourceString);
    p_DestinationString = &DestinationString;
  }
  PopEtGetProcessImageInfo(a1, &v14);
  PopEtGetProcessSidAndPackageIdentity(a1, v27, v28);
  v16[0] = 0LL;
  v18 = &v14;
  v16[1] = 0LL;
  v22 = v27;
  v17 = 0LL;
  v26 = 4 * (v27[1] + 2);
  Buffer = p_DestinationString->Buffer;
  v23 = p_DestinationString->Length >> 1;
  v20 = &v28[2];
  v24 = v28[0];
  v21 = &v28[130];
  v25 = v28[1];
  v6 = PopEtAppIdIntern(v16, &v13);
  if ( v6 < 0 )
  {
    v9 = v13;
  }
  else
  {
    v9 = 0LL;
    *a2 = v13;
    v6 = 0;
  }
  if ( v9 )
    PopEtAppIdDereference(v9, v5, v7, v8);
  return (unsigned int)v6;
}
