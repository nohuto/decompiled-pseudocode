/*
 * XREFs of PopEtGetProcessAppId @ 0x1405F6D20
 * Callers:
 *     PoEnergyContextStart @ 0x1405F6C30 (PoEnergyContextStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopEtAppIdIntern @ 0x1405F6E94 (PopEtAppIdIntern.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1405F758C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PopEtGetProcessImageInfo @ 0x1405F7684 (PopEtGetProcessImageInfo.c)
 *     PopEtAppIdDereference @ 0x1405F8134 (PopEtAppIdDereference.c)
 */

__int64 __fastcall PopEtGetProcessAppId(__int64 a1, _QWORD *a2)
{
  UNICODE_STRING *p_DestinationString; // rbx
  int v5; // ebx
  __int64 v6; // rcx
  unsigned __int64 i; // rcx
  WCHAR v9; // ax
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+28h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v14; // [rsp+50h] [rbp-B0h]
  __int64 *v15; // [rsp+60h] [rbp-A0h]
  wchar_t *Buffer; // [rsp+68h] [rbp-98h]
  _WORD *v17; // [rsp+70h] [rbp-90h]
  _WORD *v18; // [rsp+78h] [rbp-88h]
  _BYTE *v19; // [rsp+80h] [rbp-80h]
  __int16 v20; // [rsp+88h] [rbp-78h]
  __int16 v21; // [rsp+8Ah] [rbp-76h]
  __int16 v22; // [rsp+8Ch] [rbp-74h]
  __int16 v23; // [rsp+8Eh] [rbp-72h]
  _BYTE v24[80]; // [rsp+90h] [rbp-70h] BYREF
  _WORD v25[200]; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[16]; // [rsp+270h] [rbp+170h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  DestinationString = 0LL;
  memset(v25, 0, 0x188uLL);
  memset(v24, 0, 0x44uLL);
  p_DestinationString = *(UNICODE_STRING **)(a1 + 1472);
  if ( !p_DestinationString || !p_DestinationString->Length )
  {
    for ( i = 0LL; i < 0xF; ++i )
    {
      v9 = *(unsigned __int8 *)(a1 + i + 1448);
      SourceString[i] = v9;
      if ( !(_BYTE)v9 )
        break;
    }
    SourceString[14] = 0;
    RtlInitUnicodeString(&DestinationString, SourceString);
    p_DestinationString = &DestinationString;
  }
  PopEtGetProcessImageInfo(a1, &v11);
  PopEtGetProcessSidAndPackageIdentity(a1, v24, v25);
  v13[0] = 0LL;
  v15 = &v11;
  v13[1] = 0LL;
  v19 = v24;
  v14 = 0LL;
  v23 = 4 * (v24[1] + 2);
  Buffer = p_DestinationString->Buffer;
  v20 = p_DestinationString->Length >> 1;
  v17 = &v25[2];
  v21 = v25[0];
  v18 = &v25[130];
  v22 = v25[1];
  v5 = PopEtAppIdIntern(v13, &v10);
  if ( v5 < 0 )
  {
    v6 = v10;
  }
  else
  {
    v6 = 0LL;
    *a2 = v10;
    v5 = 0;
  }
  if ( v6 )
    PopEtAppIdDereference();
  return (unsigned int)v5;
}
