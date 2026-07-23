/*
 * XREFs of HeadlessInit @ 0x140A75260
 * Callers:
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     MmLockPagableDataSection @ 0x1406A7FB0 (MmLockPagableDataSection.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     HdlspEnableTerminal @ 0x1409F052C (HdlspEnableTerminal.c)
 */

void __fastcall HeadlessInit(__int64 a1)
{
  char *v2; // rdi
  char *PoolWithTag; // rax
  char *v4; // rbx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  char v9; // cl
  char v10; // al
  char v11; // dl
  int v12; // edx
  PVOID v13; // rax
  PVOID v14; // rax
  PVOID v15; // rax
  PVOID v16; // rax
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  _DWORD v20[64]; // [rsp+20h] [rbp-118h] BYREF

  v2 = *(char **)(*(_QWORD *)(a1 + 240) + 48LL);
  if ( v2 && (*((_DWORD *)v2 + 2) <= 4u || *v2) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x736C6448u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag + 8, 0, 0x80uLL);
      *(_QWORD *)v4 = 0LL;
      v5 = *((_DWORD *)v4 + 12) ^ (*((_DWORD *)v4 + 12) ^ (*((_DWORD *)v2 + 2) << 9)) & 0xE00;
      *((_DWORD *)v4 + 12) = v5;
      *((_QWORD *)v4 + 8) = *((_QWORD *)v2 + 2);
      *((_DWORD *)v4 + 13) = *((_DWORD *)v2 + 1);
      v6 = ((unsigned __int8)v5 ^ (unsigned __int8)(v2[3] << 7)) & 0x80 ^ v5;
      *((_DWORD *)v4 + 12) = v6;
      v7 = ((unsigned __int16)v6 ^ (unsigned __int16)((unsigned __int8)v2[2] << 8)) & 0x100 ^ v6;
      *((_DWORD *)v4 + 12) = v7;
      v8 = ((unsigned __int8)v7 ^ (unsigned __int8)(8 * *v2)) & 8 ^ v7;
      *((_DWORD *)v4 + 12) = v8;
      v9 = v2[56];
      v4[116] = v9;
      v4[117] = 0;
      v4[84] = v2[57];
      v4[85] = v2[58];
      v4[86] = v2[59];
      v4[87] = v2[60];
      *(_OWORD *)(v4 + 100) = *(_OWORD *)(v2 + 40);
      if ( v9 )
      {
        v8 |= 0x1000u;
        *((_DWORD *)v4 + 12) = v8;
      }
      v4[118] = 1;
      v4[119] = v2[36] & 1;
      *((_WORD *)v4 + 60) = *((_WORD *)v2 + 13);
      *((_WORD *)v4 + 61) = *((_WORD *)v2 + 12);
      *((_WORD *)v4 + 62) = *((_WORD *)v2 + 15);
      v4[126] = v2[28];
      v4[127] = v2[32];
      v4[128] = v2[33];
      if ( (unsigned __int16)(*((_WORD *)v2 + 12) - 1) <= 0xFFFDu
        && (unsigned __int16)(*((_WORD *)v2 + 13) - 1) <= 0xFFFDu )
      {
        *((_DWORD *)v4 + 12) = v8 | 0x1000;
        if ( (*((_DWORD *)v2 + 9) & 1) == 0 )
        {
          memset(v20, 0, 0xF8uLL);
          v10 = *v2;
          v11 = v2[33];
          HIWORD(v20[3]) = -1;
          HIBYTE(v20[4]) = v10;
          LOWORD(v20[3]) = *((_WORD *)v2 + 12);
          HIWORD(v20[2]) = *((_WORD *)v2 + 13);
          v20[0] = (unsigned __int8)v2[28];
          LOWORD(v20[2]) = *((_WORD *)v2 + 15);
          v12 = v2[32] & 0x1F | (32 * (v11 & 7));
          LOBYTE(v20[4]) = -1;
          v20[1] = v12;
          ((void (__fastcall *)(__int64, _DWORD *))off_140C005F8[0])(a1, v20);
        }
      }
      v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3800uLL, 0x736C6448u);
      *((_QWORD *)v4 + 2) = v13;
      if ( v13
        && (*((_DWORD *)v4 + 24) = -1,
            v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x736C6448u),
            (*((_QWORD *)v4 + 3) = v14) != 0LL)
        && (v15 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x736C6448u), (*((_QWORD *)v4 + 4) = v15) != 0LL)
        && (v16 = MmLockPagableDataSection(HdlspDispatch), (*((_QWORD *)v4 + 1) = v16) != 0LL) )
      {
        if ( *((_DWORD *)v4 + 13) == 9600 )
        {
          *((_DWORD *)v4 + 19) = -1;
          *((_DWORD *)v4 + 20) = 1301;
          *((_DWORD *)v4 + 18) = -13010;
        }
        HeadlessGlobals = (PKSPIN_LOCK)v4;
        HdlspEnableTerminal(1);
      }
      else
      {
        v17 = (void *)*((_QWORD *)v4 + 2);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
        v18 = (void *)*((_QWORD *)v4 + 3);
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
        v19 = (void *)*((_QWORD *)v4 + 4);
        if ( v19 )
          ExFreePoolWithTag(v19, 0);
        ExFreePoolWithTag(v4, 0);
      }
    }
  }
}
