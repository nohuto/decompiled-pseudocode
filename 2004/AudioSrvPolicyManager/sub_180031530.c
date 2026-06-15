/*
 * XREFs of sub_180031530 @ 0x180031530
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_1800330A0 @ 0x1800330A0 (sub_1800330A0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180031530(__int64 a1, unsigned __int64 *a2, _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned __int64 v7; // rdi
  _DWORD *v8; // rdx
  unsigned __int64 i; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rdx
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h]

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v7 = (__int64)(*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56)) >> 2;
  v8 = 0LL;
  *a2 = v7;
  if ( v7 )
  {
    v8 = CoTaskMemAlloc(4 * v7);
    if ( !v8 )
    {
      sub_180003AB0(
        retaddr,
        318,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        -2147024882);
      if ( v6 )
        LeaveCriticalSection(v6);
      return 2147942414LL;
    }
    for ( i = 0LL; i < v7; ++i )
    {
      v11 = *(_QWORD *)(a1 + 56);
      if ( (*(_QWORD *)(a1 + 64) - v11) >> 2 <= i )
      {
        try
        {
          sub_1800330A0();
          JUMPOUT(0x18003162CLL);
        }
        catch ( ... )
        {
          v13 = &v14;
          *((_DWORD *)v13 + 16) = sub_18000FA80(
                                    v13[7],
                                    330,
                                    (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\appli"
                                             "cationspecificendpointinfo.cpp",
                                    v12);
          return (unsigned int)v16;
        }
      }
      v8[i] = *(_DWORD *)(v11 + 4 * i);
    }
  }
  *a3 = v8;
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
