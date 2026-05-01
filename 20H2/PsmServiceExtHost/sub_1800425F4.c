/*
 * XREFs of sub_1800425F4 @ 0x1800425F4
 * Callers:
 *     PsmCrmStart @ 0x1800425D0 (PsmCrmStart.c)
 * Callees:
 *     sub_180034508 @ 0x180034508 (sub_180034508.c)
 *     sub_18003F554 @ 0x18003F554 (sub_18003F554.c)
 *     sub_1800427A0 @ 0x1800427A0 (sub_1800427A0.c)
 *     sub_1800427F0 @ 0x1800427F0 (sub_1800427F0.c)
 */

int sub_1800425F4()
{
  RPC_STATUS v0; // eax
  char *Heap; // rax
  char *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // rbx
  int result; // eax
  PVOID v8; // rax
  __int64 v9; // r8
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v0 = UuidCreate(&Uuid);
  if ( v0 )
    return I_RpcMapWin32Status(v0);
  sub_18003F554((ULONGLONG *)&dword_1800B3250, 0LL, 0LL);
  RtlGetDeviceFamilyInfoEnum(0LL, &dword_1800B3EF8, &unk_1800B3EFC);
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x6C0uLL);
  v2 = Heap;
  if ( !Heap )
    return -1073741801;
  P = Heap;
  v3 = (__int64)Heap;
  dword_1800B3EE0 = 12;
  v4 = 12LL;
  do
  {
    sub_180034508(v3);
    v3 += 144LL;
    --v4;
  }
  while ( v4 );
  v6 = 0LL;
  while ( 1 )
  {
    result = sub_1800427A0(&v2[144 * v6], (unsigned int)(v6 + 5), v5, 1LL);
    if ( result < 0 )
      break;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= 0xC )
    {
      v8 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x90uLL);
      qword_1800B3EE8 = v8;
      if ( !v8 )
        return -1073741801;
      sub_180034508((__int64)v8);
      result = sub_1800427A0(qword_1800B3EE8, 17LL, v9, 2LL);
      if ( result >= 0 )
      {
        result = TpAllocTimer(&qword_1800B3EF0, sub_180084670, &unk_1800B3D60, 0LL);
        if ( result >= 0 )
        {
          v10 = -36000000000LL;
          TpSetTimer(qword_1800B3EF0, &v10, 3600000LL, 900000LL);
          return sub_1800427F0(&BindingVector);
        }
      }
      return result;
    }
  }
  return result;
}
