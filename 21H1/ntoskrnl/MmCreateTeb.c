/*
 * XREFs of MmCreateTeb @ 0x1406392B4
 * Callers:
 *     PspAllocateThread @ 0x14070559C (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiCreatePebOrTeb @ 0x1406395AC (MiCreatePebOrTeb.c)
 */

__int64 __fastcall MmCreateTeb(_KPROCESS *BugCheckParameter1, __int64 a2, _QWORD *a3, __int64 a4, _QWORD *a5)
{
  unsigned int v9; // esi
  __int64 v10; // r12
  unsigned __int64 v11; // rax
  int v12; // edi
  __int64 v13; // r8
  _DWORD *v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int16 v18; // cx
  __int64 v19; // [rsp+20h] [rbp-78h] BYREF
  _KPROCESS *v20; // [rsp+28h] [rbp-70h]
  _QWORD *v21; // [rsp+30h] [rbp-68h]
  _OWORD v22[3]; // [rsp+38h] [rbp-60h] BYREF

  v20 = BugCheckParameter1;
  v21 = a5;
  v19 = 0LL;
  memset(v22, 0, sizeof(v22));
  v9 = 3;
  v10 = 0LL;
  v11 = BugCheckParameter1[1].AffinityPadding[10];
  if ( v11 )
    v10 = *(_QWORD *)v11;
  if ( v10 )
  {
    if ( v11 && ((v18 = *(_WORD *)(v11 + 8), v18 == 332) || v18 == 452) )
      v9 = 4;
    else
      v9 = 5;
  }
  KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v22, BugCheckParameter1);
  v12 = MiCreatePebOrTeb(v9, a4, &v19);
  if ( v12 < 0 )
  {
    KiUnstackDetachProcess((__int64)v22, 0LL, v13, v14);
    return (unsigned int)v12;
  }
  v15 = v19;
  *(_DWORD *)(v19 + 32) = 7680;
  *(_QWORD *)(v15 + 48) = v15;
  *(_QWORD *)(v15 + 72) = a3[1];
  *(_QWORD *)(v15 + 64) = *a3;
  *(_DWORD *)(v15 + 744) = 65534;
  *(_QWORD *)(v15 + 2016) = a3[1];
  *(_QWORD *)(v15 + 2008) = *a3;
  *(_WORD *)(v15 + 4698) = 522;
  *(_QWORD *)(v15 + 4704) = v15 + 4712;
  *(_QWORD *)(v15 + 96) = v20[1].AffinityPadding[4];
  *(_QWORD *)(v15 + 8) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v15 + 16) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(v15 + 5240) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v15 + 5968) = BBTBuffer;
  if ( v9 == 4 )
  {
    v16 = v15 + 0x2000;
    v20 = (_KPROCESS *)(v15 + 0x2000);
    *(_DWORD *)(v15 + 8208) = 7680;
    *(_DWORD *)(v15 + 8216) = v15 + 0x2000;
    *(_DWORD *)(v15 + 8228) = *((_DWORD *)a3 + 2);
    *(_DWORD *)(v15 + 8224) = *(_DWORD *)a3;
    *(_DWORD *)(v15 + 8656) = 65534;
    *(_DWORD *)(v15 + 9912) = *((_DWORD *)a3 + 2);
    *(_DWORD *)(v15 + 9908) = *(_DWORD *)a3;
    *(_WORD *)(v15 + 11258) = 522;
    *(_DWORD *)(v15 + 11260) = v15 + 11264;
    *(_DWORD *)(v15 + 0x2000) = -1;
    *(_DWORD *)(v15 + 8240) = v10;
    *(_DWORD *)(v15 + 12144) = v15;
    *(_DWORD *)(v15 + 12056) = *(_DWORD *)(v15 + 5776);
    *(_DWORD *)(v15 + 8196) = *(_DWORD *)(a2 + 40);
    *(_DWORD *)(v15 + 8200) = *(_DWORD *)(a2 + 48);
    *(_DWORD *)(v15 + 11788) = *(_DWORD *)(a2 + 56);
    *(_DWORD *)(v15 + 6156) = 0x2000;
    *(_DWORD *)(v15 + 12252) = -8192;
    goto LABEL_9;
  }
  if ( v9 == 5 )
  {
    v16 = v15 + 0x2000;
    *(_DWORD *)(v15 + 8224) = 7680;
    *(_QWORD *)(v15 + 8240) = v15 + 0x2000;
    *(_QWORD *)(v15 + 8264) = a3[1];
    *(_QWORD *)(v15 + 8256) = *a3;
    *(_DWORD *)(v15 + 8936) = 65534;
    *(_QWORD *)(v15 + 10208) = a3[1];
    *(_QWORD *)(v15 + 10200) = *a3;
    *(_WORD *)(v15 + 12890) = 522;
    *(_QWORD *)(v15 + 12896) = v15 + 12904;
    *(_QWORD *)(v15 + 8288) = v10;
    *(_DWORD *)(v15 + 14144) = 0;
    *(_QWORD *)(v15 + 13968) = *(_QWORD *)(v15 + 5776);
    *(_QWORD *)(v15 + 8200) = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(v15 + 8208) = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(v15 + 13432) = *(_QWORD *)(a2 + 56);
    *(_DWORD *)(v15 + 6156) = 0x2000;
    *(_DWORD *)(v15 + 14348) = -8192;
LABEL_9:
    *(_QWORD *)v15 = v16;
  }
  KiUnstackDetachProcess((__int64)v22, 0LL, 65534LL, (_DWORD *)0x20A);
  *a5 = v15;
  return (unsigned int)v12;
}
