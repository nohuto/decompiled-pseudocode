/*
 * XREFs of HalpInitGenericErrorSourceEntryV2 @ 0x1409A88A8
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x1409A8C64 (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140216B10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x140217FB0 (MmUnmapIoSpace.c)
 *     RtlStringCchCopyA @ 0x140246F94 (RtlStringCchCopyA.c)
 *     WheaLogInternalEvent @ 0x1403BAEC0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalpInitGenericErrorSourceEntryV2(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // esi
  _DWORD *PoolWithTag; // rax
  _DWORD *v6; // rdi
  char v7; // al
  _QWORD *v8; // rax
  unsigned int v9; // r14d
  PVOID v10; // rax
  __int64 v11; // rdx
  char *v12; // rcx
  __int128 v13; // xmm1
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  _DWORD Src[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+28h] [rbp-58h]
  int v20; // [rsp+30h] [rbp-50h]
  int v21; // [rsp+34h] [rbp-4Ch]
  int v22; // [rsp+38h] [rbp-48h]
  int v23; // [rsp+3Ch] [rbp-44h]
  char pszDest[16]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v25; // [rsp+50h] [rbp-30h]
  __int64 v26; // [rsp+60h] [rbp-20h]
  __int64 v27; // [rsp+68h] [rbp-18h]

  v4 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x428uLL, 0x206C6148u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_21:
    v4 = -1073741670;
    goto LABEL_22;
  }
  memset(PoolWithTag, 0, 0x428uLL);
  v6[12] = *(_DWORD *)(a1 + 44);
  *((_QWORD *)v6 + 5) = MmMapIoSpaceEx(*(_QWORD *)(a1 + 56), 8LL, 0x204u);
  v26 = *(_QWORD *)(a1 + 56);
  v27 = *(unsigned int *)(a1 + 44);
  *(_OWORD *)pszDest = 0LL;
  v25 = 0LL;
  Src[0] = 1733060695;
  Src[1] = 1;
  v19 = 80LL;
  v21 = -2147483615;
  v20 = 1280201291;
  v22 = 2;
  v23 = 48;
  RtlStringCchCopyA(pszDest, 0x20uLL, "Error_Status_block_register");
  WheaLogInternalEvent(Src);
  if ( !*((_QWORD *)v6 + 5) )
    goto LABEL_14;
  v7 = *(_BYTE *)(a1 + 95);
  if ( v7 == 3 )
  {
    if ( *(_BYTE *)(a1 + 93) == 32 )
      v6[18] = 4;
  }
  else if ( v7 == 4 && *(_BYTE *)(a1 + 93) == 64 )
  {
    v6[18] = 8;
  }
  v8 = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x206C6148u);
  *((_QWORD *)v6 + 8) = v8;
  if ( !v8
    || (*v8 = *(_QWORD *)(a1 + 96),
        v9 = *(_DWORD *)(a1 + 16) + 80 + v6[12],
        v10 = ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x206C6148u),
        (*((_QWORD *)v6 + 3) = v10) == 0LL) )
  {
LABEL_14:
    v14 = (void *)*((_QWORD *)v6 + 5);
    if ( v14 )
      MmUnmapIoSpace(v14, 8uLL);
    v15 = (void *)*((_QWORD *)v6 + 8);
    if ( v15 )
      ExFreePoolWithTag(v15, 0x206C6148u);
    v16 = (void *)*((_QWORD *)v6 + 3);
    if ( v16 )
      ExFreePoolWithTag(v16, 0x206C6148u);
    ExFreePoolWithTag(v6, 0x206C6148u);
    v6 = 0LL;
    goto LABEL_21;
  }
  memset(v10, 0, v9);
  v11 = 7LL;
  **((_DWORD **)v6 + 3) = 1095059543;
  *(_DWORD *)(*((_QWORD *)v6 + 3) + 4LL) = 3;
  *(_DWORD *)(*((_QWORD *)v6 + 3) + 8LL) = v9;
  *(_DWORD *)(*((_QWORD *)v6 + 3) + 16LL) = 6;
  *(_DWORD *)(*((_QWORD *)v6 + 3) + 24LL) = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(*((_QWORD *)v6 + 3) + 28LL) = 5;
  *(GUID *)(*((_QWORD *)v6 + 3) + 32LL) = GENERIC_NOTIFY_TYPE_GUID;
  *(_DWORD *)(*((_QWORD *)v6 + 3) + 56LL) = 7;
  *(_DWORD *)(*((_QWORD *)v6 + 3) + 64LL) = 80;
  *(_DWORD *)(*((_QWORD *)v6 + 3) + 68LL) = v6[12];
  v12 = (char *)(v6 + 22);
  do
  {
    *(_OWORD *)v12 = *(_OWORD *)a1;
    *((_OWORD *)v12 + 1) = *(_OWORD *)(a1 + 16);
    *((_OWORD *)v12 + 2) = *(_OWORD *)(a1 + 32);
    *((_OWORD *)v12 + 3) = *(_OWORD *)(a1 + 48);
    *((_OWORD *)v12 + 4) = *(_OWORD *)(a1 + 64);
    *((_OWORD *)v12 + 5) = *(_OWORD *)(a1 + 80);
    *((_OWORD *)v12 + 6) = *(_OWORD *)(a1 + 96);
    v12 += 128;
    v13 = *(_OWORD *)(a1 + 112);
    a1 += 128LL;
    *((_OWORD *)v12 - 1) = v13;
    --v11;
  }
  while ( v11 );
  *(_OWORD *)v12 = *(_OWORD *)a1;
  *((_OWORD *)v12 + 1) = *(_OWORD *)(a1 + 16);
  *((_OWORD *)v12 + 2) = *(_OWORD *)(a1 + 32);
  *((_OWORD *)v12 + 3) = *(_OWORD *)(a1 + 48);
  *((_QWORD *)v12 + 8) = *(_QWORD *)(a1 + 64);
  *((_DWORD *)v12 + 18) = *(_DWORD *)(a1 + 72);
LABEL_22:
  *a2 = v6;
  return v4;
}
