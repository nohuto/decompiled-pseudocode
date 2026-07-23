/*
 * XREFs of HalpInitGenericErrorSourceEntry @ 0x1409A8610
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

__int64 __fastcall HalpInitGenericErrorSourceEntry(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // esi
  _DWORD *PoolWithTag; // rax
  _DWORD *v6; // rdi
  unsigned int v7; // r14d
  PVOID v8; // rax
  void *v9; // rcx
  void *v10; // rcx
  char *v11; // rdx
  __int64 v12; // r8
  __int128 v13; // xmm1
  _DWORD Src[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v16; // [rsp+28h] [rbp-58h]
  int v17; // [rsp+30h] [rbp-50h]
  int v18; // [rsp+34h] [rbp-4Ch]
  int v19; // [rsp+38h] [rbp-48h]
  int v20; // [rsp+3Ch] [rbp-44h]
  char pszDest[16]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v22; // [rsp+50h] [rbp-30h]
  __int64 v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+68h] [rbp-18h]

  v4 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x428uLL, 0x206C6148u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_2:
    v4 = -1073741670;
    goto LABEL_13;
  }
  memset(PoolWithTag, 0, 0x428uLL);
  v6[12] = *(_DWORD *)(a1 + 44);
  *((_QWORD *)v6 + 5) = MmMapIoSpaceEx(*(_QWORD *)(a1 + 56), 8LL, 0x204u);
  v23 = *(_QWORD *)(a1 + 56);
  v24 = *(unsigned int *)(a1 + 44);
  *(_OWORD *)pszDest = 0LL;
  v22 = 0LL;
  Src[0] = 1733060695;
  Src[1] = 1;
  v16 = 80LL;
  v18 = -2147483615;
  v17 = 1280201291;
  v19 = 2;
  v20 = 48;
  RtlStringCchCopyA(pszDest, 0x20uLL, "Error_Status_block_register");
  WheaLogInternalEvent(Src);
  if ( !*((_QWORD *)v6 + 5) )
  {
LABEL_7:
    v10 = (void *)*((_QWORD *)v6 + 3);
    if ( v10 )
      ExFreePoolWithTag(v10, 0x206C6148u);
    ExFreePoolWithTag(v6, 0x206C6148u);
    v6 = 0LL;
    goto LABEL_2;
  }
  v7 = *(_DWORD *)(a1 + 16) + 80 + v6[12];
  v8 = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x206C6148u);
  *((_QWORD *)v6 + 3) = v8;
  if ( !v8 )
  {
    v9 = (void *)*((_QWORD *)v6 + 5);
    if ( v9 )
      MmUnmapIoSpace(v9, 8uLL);
    goto LABEL_7;
  }
  memset(v8, 0, v7);
  v11 = (char *)(v6 + 22);
  v12 = 7LL;
  **((_DWORD **)v6 + 3) = 1095059543;
  *(_DWORD *)(*((_QWORD *)v6 + 3) + 4LL) = 3;
  *(_DWORD *)(*((_QWORD *)v6 + 3) + 8LL) = v7;
  *(_DWORD *)(*((_QWORD *)v6 + 3) + 16LL) = 6;
  *(_DWORD *)(*((_QWORD *)v6 + 3) + 24LL) = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(*((_QWORD *)v6 + 3) + 28LL) = 5;
  *(GUID *)(*((_QWORD *)v6 + 3) + 32LL) = GENERIC_NOTIFY_TYPE_GUID;
  *(_DWORD *)(*((_QWORD *)v6 + 3) + 56LL) = 7;
  *(_DWORD *)(*((_QWORD *)v6 + 3) + 64LL) = 80;
  *(_DWORD *)(*((_QWORD *)v6 + 3) + 68LL) = v6[12];
  do
  {
    *(_OWORD *)v11 = *(_OWORD *)a1;
    *((_OWORD *)v11 + 1) = *(_OWORD *)(a1 + 16);
    *((_OWORD *)v11 + 2) = *(_OWORD *)(a1 + 32);
    *((_OWORD *)v11 + 3) = *(_OWORD *)(a1 + 48);
    *((_OWORD *)v11 + 4) = *(_OWORD *)(a1 + 64);
    *((_OWORD *)v11 + 5) = *(_OWORD *)(a1 + 80);
    *((_OWORD *)v11 + 6) = *(_OWORD *)(a1 + 96);
    v11 += 128;
    v13 = *(_OWORD *)(a1 + 112);
    a1 += 128LL;
    *((_OWORD *)v11 - 1) = v13;
    --v12;
  }
  while ( v12 );
  *(_OWORD *)v11 = *(_OWORD *)a1;
  *((_OWORD *)v11 + 1) = *(_OWORD *)(a1 + 16);
  *((_OWORD *)v11 + 2) = *(_OWORD *)(a1 + 32);
  *((_OWORD *)v11 + 3) = *(_OWORD *)(a1 + 48);
  *((_QWORD *)v11 + 8) = *(_QWORD *)(a1 + 64);
  *((_DWORD *)v11 + 18) = *(_DWORD *)(a1 + 72);
LABEL_13:
  *a2 = v6;
  return v4;
}
