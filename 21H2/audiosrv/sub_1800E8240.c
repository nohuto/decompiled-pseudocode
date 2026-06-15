/*
 * XREFs of sub_1800E8240 @ 0x1800E8240
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD4DC @ 0x1800CD4DC (sub_1800CD4DC.c)
 *     sub_1800CD548 @ 0x1800CD548 (sub_1800CD548.c)
 *     sub_1800CD5C4 @ 0x1800CD5C4 (sub_1800CD5C4.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800E8240(__int64 a1, __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // r9
  __int64 *v6; // rdi
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 *v11; // rdx
  __int64 result; // rax
  _QWORD v13[7]; // [rsp+20h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v13[1] = v4;
  v6 = *(__int64 **)(a1 + 64);
  try
  {
    while ( v6 != *(__int64 **)(a1 + 72) )
    {
      v7 = *v6;
      v13[0] = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v15 = 0LL;
      v8 = sub_1800CD4DC(v13, &v15);
      v9 = v15;
      if ( v8 >= 0 && v15 )
      {
        v16 = 0LL;
        if ( (int)sub_1800CD548(&v15, &v16) >= 0 )
        {
          v17 = 0LL;
          v10 = v16;
          sub_1800461B8(&v17);
          if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 192LL))(v10, &v17) >= 0 && v17 )
          {
            v11 = (__int64 *)a2[1];
            if ( (__int64 *)a2[2] == v11 )
            {
              sub_1800CD5C4(a2, (__int64)v11, &v16);
            }
            else
            {
              *v11 = v16;
              sub_180047458(v11);
              a2[1] += 8LL;
            }
          }
          sub_1800461B8(&v17);
        }
        sub_1800461B8(&v16);
        v9 = v15;
      }
      if ( v9 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      ++v6;
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v15) = sub_1800C437C(
                     (int)retaddr,
                     580,
                     (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                     v5);
    return (unsigned int)v15;
  }
  return result;
}
