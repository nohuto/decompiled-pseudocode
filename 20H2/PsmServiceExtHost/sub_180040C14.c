/*
 * XREFs of sub_180040C14 @ 0x180040C14
 * Callers:
 *     sub_180037FB0 @ 0x180037FB0 (sub_180037FB0.c)
 *     sub_180040B34 @ 0x180040B34 (sub_180040B34.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_180040E64 @ 0x180040E64 (sub_180040E64.c)
 *     sub_180041058 @ 0x180041058 (sub_180041058.c)
 *     sub_1800410C4 @ 0x1800410C4 (sub_1800410C4.c)
 *     sub_180041224 @ 0x180041224 (sub_180041224.c)
 *     sub_18004124C @ 0x18004124C (sub_18004124C.c)
 *     sub_1800412D4 @ 0x1800412D4 (sub_1800412D4.c)
 *     sub_180041408 @ 0x180041408 (sub_180041408.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180045CFC @ 0x180045CFC (sub_180045CFC.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_18006B900 @ 0x18006B900 (sub_18006B900.c)
 *     sub_18006CAD0 @ 0x18006CAD0 (sub_18006CAD0.c)
 *     sub_18006D850 @ 0x18006D850 (sub_18006D850.c)
 */

__int64 __fastcall sub_180040C14(_DWORD *a1)
{
  int v2; // edi
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // r8
  unsigned int v6; // r10d
  __int64 i; // r9
  int v8; // eax
  unsigned int v9; // eax
  _DWORD *v10; // r15
  __int64 v11; // r14
  __int64 *v12; // rsi
  char *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdi
  HANDLE CurrentProcess; // rax
  HANDLE v17; // rax
  unsigned int v18; // esi
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v23; // r12
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rax
  char *v28; // rdi
  __int64 v29; // [rsp+38h] [rbp-D0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD *v31; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B8h]
  _QWORD v33[4]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v34[20]; // [rsp+78h] [rbp-90h] BYREF

  P = 0LL;
  v2 = sub_180041408(&P, &v29);
  if ( v2 >= 0 )
  {
    memset(v34, 0, sizeof(v34));
    v6 = v29;
    for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(*v5 + i) )
    {
      v5 = (char *)P + (unsigned int)i;
      if ( !v5[1] )
      {
        v8 = v5[2];
        if ( v8 != a1[228] )
        {
          v9 = v8 - 256;
          v3 = (unsigned __int64)v9 >> 16;
          v4 = v34[v3] | (1LL << v9);
          v34[v3] = v4;
        }
      }
    }
    LOBYTE(v4) = 0;
    v10 = a1 + 22;
    v11 = 0LL;
    LODWORD(v29) = v4;
    v12 = (__int64 *)(a1 + 22);
    v13 = (char *)((char *)v34 - (char *)a1);
    do
    {
      v14 = *v12;
      v15 = *(_QWORD *)&v13[(_QWORD)v12 - 88] & ~v12[40];
      *(_QWORD *)&v13[(_QWORD)v12 - 88] = v15;
      if ( v15 != v14 )
      {
        v23 = v15 & ~v14;
        if ( v23 )
        {
          v24 = RtlNumberOfSetBitsUlongPtr(v15 & ~v14, v3, v5, i);
          *(_QWORD *)&v10[2 * v11] |= v23;
          a1[229] += v24;
          *(_QWORD *)&a1[2 * v11 + 62] |= v23;
          a1[230] += v24;
          a1[233] |= 1u;
          v14 = *v12;
          LOBYTE(v4) = v29;
        }
        v25 = v14 & ~v15;
        if ( v25 )
        {
          LODWORD(v4) = (unsigned __int8)v4;
          if ( (~v12[20] & v25) != 0 )
            LODWORD(v4) = 1;
          *(_QWORD *)&v10[2 * v11] &= ~v25;
          LODWORD(v29) = v4;
          a1[229] -= RtlNumberOfSetBitsUlongPtr(v25, v3, v5, i);
          v26 = v25 & *(_QWORD *)&a1[2 * v11 + 62];
          if ( v26 )
          {
            *(_QWORD *)&a1[2 * v11 + 62] &= ~v26;
            a1[230] -= RtlNumberOfSetBitsUlongPtr(v26, v3, v5, i);
          }
          a1[233] |= 1u;
        }
      }
      LOBYTE(v4) = v29;
      v11 = (unsigned int)(v11 + 1);
      ++v12;
    }
    while ( (unsigned int)v11 < 0x14 );
    if ( !(unsigned __int8)sub_180045CFC((unsigned int)v29, v3, v5, i) )
    {
      CurrentProcess = GetCurrentProcess();
      sub_1800412D4(CurrentProcess, a1 + 22);
      v17 = GetCurrentProcess();
      sub_18004124C(v17, a1 + 22);
    }
    if ( (_BYTE)v29 )
      sub_18006D850(a1);
    v18 = sub_180041224(a1);
    if ( v18 > a1[230] )
    {
      sub_1800410C4(a1 + 6, v33);
      while ( 1 )
      {
        v27 = sub_180041058(v33);
        v28 = (char *)v27;
        if ( !v27 )
          break;
        sub_18006CAD0(a1, v27);
        sub_1800265B0(v28);
      }
      RtlReleaseSRWLockShared(v33[0] + 16LL);
      sub_180040E64(a1);
    }
    a1[232] = v18;
    a1[231] = 1;
    sub_180040E64(a1);
    v2 = 0;
  }
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    LOWORD(v32) = 20;
    v31 = a1 + 22;
    sub_18006B900(v19, (unsigned int)&unk_18009C6E9, v20, v21, (__int64)&v31);
  }
  return (unsigned int)v2;
}
