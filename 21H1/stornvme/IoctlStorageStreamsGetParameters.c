/*
 * XREFs of IoctlStorageStreamsGetParameters @ 0x1C0012304
 * Callers:
 *     IoctlToNVMe @ 0x1C0001B20 (IoctlToNVMe.c)
 * Callees:
 *     GetNamespaceId @ 0x1C0004344 (GetNamespaceId.c)
 *     __security_check_cookie @ 0x1C00050E0 (__security_check_cookie.c)
 *     NVMeInitStreams @ 0x1C000D840 (NVMeInitStreams.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C00175E8 (NVMeDirectiveStreamsReturnParameters.c)
 */

__int64 __fastcall IoctlStorageStreamsGetParameters(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rsi
  int v6; // r12d
  int v7; // r13d
  unsigned __int8 v8; // cl
  __int64 v9; // rbx
  unsigned int v10; // edx
  unsigned __int16 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int inited; // r15d
  __int16 v15; // ax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  unsigned int NamespaceId; // [rsp+D0h] [rbp-68h]

  v2 = *(_QWORD *)(a1 + 1720);
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v8 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v8 = *(_BYTE *)(a2 + 7);
  v9 = v8;
  NamespaceId = GetNamespaceId(a1, v8);
  if ( (unsigned int)v9 >= 0xFF || !v2 )
  {
    *(_BYTE *)(a2 + 3) = 32;
    goto LABEL_30;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = *(_QWORD *)(a2 + 64);
    v12 = 60LL;
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 24);
    v12 = 16LL;
  }
  v13 = *(_DWORD *)(v12 + a2);
  if ( v13 < 0x4C )
  {
    if ( v13 >= 0x24 )
    {
      *(_DWORD *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 32) = 48;
      inited = -1056964604;
      v6 = 8;
      *(_BYTE *)(a2 + 3) = 18;
      goto LABEL_31;
    }
    goto LABEL_11;
  }
  if ( *(_DWORD *)(v5 + 28) != 1 )
  {
LABEL_11:
    *(_BYTE *)(a2 + 3) = 6;
LABEL_30:
    inited = -1056964602;
    goto LABEL_31;
  }
  if ( (*(_BYTE *)(a1 + 3776) & 7) == 3 && *(_BYTE *)(a1 + 3777) == (_BYTE)v9 && *(_WORD *)(a1 + 3780) > v11 )
  {
    GetNamespaceId(a1, v10);
    inited = NVMeDirectiveStreamsReturnParameters(a1);
    if ( inited )
    {
      inited = 0;
      *(_WORD *)(a1 + 3782) = -1;
      v15 = -1;
    }
    else
    {
      v15 = 0;
      *(_WORD *)(a1 + 3782) = 0;
    }
    *(_WORD *)(a1 + 3784) = v15;
  }
  else
  {
    inited = NVMeInitStreams(a1, v10);
  }
  v7 = *(_DWORD *)(v2 + 52);
  if ( inited )
  {
    *(_BYTE *)(a2 + 3) = 4;
  }
  else
  {
    v6 = 48;
    *(_OWORD *)(v5 + 28) = 0LL;
    *(_OWORD *)(v5 + 44) = 0LL;
    *(_OWORD *)(v5 + 60) = 0LL;
    *(_DWORD *)(v5 + 28) = 1;
    *(_DWORD *)(v5 + 32) = 48;
    *(_DWORD *)(v5 + 36) = v7;
    v16 = v7 * *(_DWORD *)(a1 + 3788);
    *(_DWORD *)(v5 + 40) = v16;
    *(_DWORD *)(v5 + 44) = v16 * *(_DWORD *)(a1 + 3792);
    v17 = *(unsigned __int16 *)(a1 + 3780);
    *(_DWORD *)(v5 + 72) = v17;
    *(_DWORD *)(v5 + 52) = v17;
    *(_DWORD *)(v5 + 48) = 1;
    *(_DWORD *)(v5 + 56) = v16;
    *(_DWORD *)(v5 + 60) = *(unsigned __int16 *)(a1 + 3780);
    v18 = -1;
    v19 = *(unsigned __int16 *)(a1 + 3782);
    if ( (_WORD)v19 == 0xFFFF )
      v19 = -1;
    *(_DWORD *)(v5 + 68) = v19;
    if ( *(_WORD *)(a1 + 3784) != 0xFFFF )
      v18 = *(unsigned __int16 *)(a1 + 3784);
    *(_DWORD *)(v5 + 64) = v18;
    *(_BYTE *)(a2 + 3) = 1;
  }
LABEL_31:
  if ( (unsigned int)v9 < 0xFF )
    StorPortExtendedFunction(
      87LL,
      a1,
      *(_QWORD *)(a1 + 8 * v9 + 1720),
      0LL,
      3,
      L"Streams Init",
      0LL,
      4,
      0,
      a2,
      L"Success",
      inited == 0,
      L"Namespace",
      NamespaceId,
      L"OptWrSizeBytes",
      (unsigned int)(v7 * *(_DWORD *)(a1 + 3788)),
      L"StreamSizeBytes",
      (unsigned int)(v7 * *(_DWORD *)(a1 + 3788) * *(_DWORD *)(a1 + 3792)));
  *(_DWORD *)(v5 + 24) = v6;
  return inited;
}
