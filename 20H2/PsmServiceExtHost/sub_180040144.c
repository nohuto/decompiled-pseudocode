/*
 * XREFs of sub_180040144 @ 0x180040144
 * Callers:
 *     sub_18003F99C @ 0x18003F99C (sub_18003F99C.c)
 * Callees:
 *     sub_18004024C @ 0x18004024C (sub_18004024C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180040144(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  memset((void *)(a2 + 16), 0, 0x88uLL);
  *(_QWORD *)a2 = a1;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  RtlInitializeSRWLock(a2 + 72);
  v4 = (_QWORD *)(a2 + 88);
  v5 = 2LL;
  do
  {
    v4[1] = v4;
    *v4 = v4;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v7 = 0LL;
  LODWORD(v7) = 16;
  *(_QWORD *)(a2 + 32) = a2 + 24;
  *(_QWORD *)(a2 + 24) = a2 + 24;
  if ( (int)D3DKMTGetYieldPercentage(&v7) < 0
    || (*(_DWORD *)(a2 + 48) = HIDWORD(v7),
        *(_DWORD *)(a2 + 60) = DWORD2(v7),
        v7 = 0LL,
        LODWORD(v7) = 16,
        (int)D3DKMTGetMemoryBudgetTarget(&v7) < 0) )
  {
    *(_BYTE *)(a2 + 149) |= 1u;
  }
  else
  {
    *(_QWORD *)(a2 + 52) = *((_QWORD *)&v7 + 1);
  }
  return sub_18004024C(0LL);
}
