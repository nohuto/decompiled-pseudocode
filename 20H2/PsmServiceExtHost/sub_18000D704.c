/*
 * XREFs of sub_18000D704 @ 0x18000D704
 * Callers:
 *     sub_18000CC4C @ 0x18000CC4C (sub_18000CC4C.c)
 * Callees:
 *     sub_18000E718 @ 0x18000E718 (sub_18000E718.c)
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 */

__int64 __fastcall sub_18000D704(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  DWORD v7; // edi
  _QWORD *Value; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  int v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = a4;
  v14 = 0LL;
  v7 = dwTlsIndex;
  v13 = a5;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v7) & 0xFFFFFFFFFFFFF800uLL) != 0 )
      __int2c();
    *Value |= 0x800uLL;
    ++Value[12];
  }
  RtlAcquireSRWLockShared(a1);
  sub_18000E718(a1, (unsigned int)&v15, a3, a2, (__int64)sub_1800360B0, (__int64)&v13);
  sub_18001E830(v11, v10, 11LL);
  RtlReleaseSRWLockShared(a1);
  return v14;
}
