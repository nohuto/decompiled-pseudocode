/*
 * XREFs of MmCreateTeb @ 0x140640C2C
 * Callers:
 *     PspAllocateThread @ 0x14063FE68 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiCreatePebOrTeb @ 0x140640F24 (MiCreatePebOrTeb.c)
 */

__int64 __fastcall MmCreateTeb(_KPROCESS *BugCheckParameter1, __int64 a2, _QWORD *a3, __int64 a4, _QWORD *a5)
{
  unsigned int v9; // esi
  __int64 v10; // r12
  unsigned __int64 v11; // rax
  int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int16 v16; // cx
  __int64 v17; // [rsp+20h] [rbp-78h] BYREF
  _KPROCESS *v18; // [rsp+28h] [rbp-70h]
  _QWORD *v19; // [rsp+30h] [rbp-68h]
  _OWORD v20[3]; // [rsp+38h] [rbp-60h] BYREF

  v18 = BugCheckParameter1;
  v19 = a5;
  v17 = 0LL;
  memset(v20, 0, sizeof(v20));
  v9 = 3;
  v10 = 0LL;
  v11 = BugCheckParameter1[1].AffinityPadding[10];
  if ( v11 )
    v10 = *(_QWORD *)v11;
  if ( v10 )
  {
    if ( v11 && ((v16 = *(_WORD *)(v11 + 8), v16 == 332) || v16 == 452) )
      v9 = 4;
    else
      v9 = 5;
  }
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v20);
  v12 = MiCreatePebOrTeb(v9, a4, &v17);
  if ( v12 < 0 )
  {
    KiUnstackDetachProcess((__int64)v20, 0LL);
    return (unsigned int)v12;
  }
  v13 = v17;
  *(_DWORD *)(v17 + 32) = 7680;
  *(_QWORD *)(v13 + 48) = v13;
  *(_QWORD *)(v13 + 72) = a3[1];
  *(_QWORD *)(v13 + 64) = *a3;
  *(_DWORD *)(v13 + 744) = 65534;
  *(_QWORD *)(v13 + 2016) = a3[1];
  *(_QWORD *)(v13 + 2008) = *a3;
  *(_WORD *)(v13 + 4698) = 522;
  *(_QWORD *)(v13 + 4704) = v13 + 4712;
  *(_QWORD *)(v13 + 96) = v18[1].AffinityPadding[4];
  *(_QWORD *)(v13 + 8) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v13 + 16) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(v13 + 5240) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v13 + 5968) = BBTBuffer;
  if ( v9 == 4 )
  {
    v14 = v13 + 0x2000;
    v18 = (_KPROCESS *)(v13 + 0x2000);
    *(_DWORD *)(v13 + 8208) = 7680;
    *(_DWORD *)(v13 + 8216) = v13 + 0x2000;
    *(_DWORD *)(v13 + 8228) = *((_DWORD *)a3 + 2);
    *(_DWORD *)(v13 + 8224) = *(_DWORD *)a3;
    *(_DWORD *)(v13 + 8656) = 65534;
    *(_DWORD *)(v13 + 9912) = *((_DWORD *)a3 + 2);
    *(_DWORD *)(v13 + 9908) = *(_DWORD *)a3;
    *(_WORD *)(v13 + 11258) = 522;
    *(_DWORD *)(v13 + 11260) = v13 + 11264;
    *(_DWORD *)(v13 + 0x2000) = -1;
    *(_DWORD *)(v13 + 8240) = v10;
    *(_DWORD *)(v13 + 12144) = v13;
    *(_DWORD *)(v13 + 12056) = *(_DWORD *)(v13 + 5776);
    *(_DWORD *)(v13 + 8196) = *(_DWORD *)(a2 + 40);
    *(_DWORD *)(v13 + 8200) = *(_DWORD *)(a2 + 48);
    *(_DWORD *)(v13 + 11788) = *(_DWORD *)(a2 + 56);
    *(_DWORD *)(v13 + 6156) = 0x2000;
    *(_DWORD *)(v13 + 12252) = -8192;
    goto LABEL_9;
  }
  if ( v9 == 5 )
  {
    v14 = v13 + 0x2000;
    *(_DWORD *)(v13 + 8224) = 7680;
    *(_QWORD *)(v13 + 8240) = v13 + 0x2000;
    *(_QWORD *)(v13 + 8264) = a3[1];
    *(_QWORD *)(v13 + 8256) = *a3;
    *(_DWORD *)(v13 + 8936) = 65534;
    *(_QWORD *)(v13 + 10208) = a3[1];
    *(_QWORD *)(v13 + 10200) = *a3;
    *(_WORD *)(v13 + 12890) = 522;
    *(_QWORD *)(v13 + 12896) = v13 + 12904;
    *(_QWORD *)(v13 + 8288) = v10;
    *(_DWORD *)(v13 + 14144) = 0;
    *(_QWORD *)(v13 + 13968) = *(_QWORD *)(v13 + 5776);
    *(_QWORD *)(v13 + 8200) = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(v13 + 8208) = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(v13 + 13432) = *(_QWORD *)(a2 + 56);
    *(_DWORD *)(v13 + 6156) = 0x2000;
    *(_DWORD *)(v13 + 14348) = -8192;
LABEL_9:
    *(_QWORD *)v13 = v14;
  }
  KiUnstackDetachProcess((__int64)v20, 0LL);
  *a5 = v13;
  return (unsigned int)v12;
}
