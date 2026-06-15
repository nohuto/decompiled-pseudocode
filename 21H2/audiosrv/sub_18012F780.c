/*
 * XREFs of sub_18012F780 @ 0x18012F780
 * Callers:
 *     sub_18012FB78 @ 0x18012FB78 (sub_18012FB78.c)
 * Callees:
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_18012E318 @ 0x18012E318 (sub_18012E318.c)
 *     sub_18012F274 @ 0x18012F274 (sub_18012F274.c)
 */

void __fastcall sub_18012F780(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // rbx
  __int64 v9; // r10
  const char *v10; // rcx
  __int64 v11; // [rsp+50h] [rbp-48h] BYREF
  __int64 v12; // [rsp+58h] [rbp-40h] BYREF
  __int64 v13; // [rsp+60h] [rbp-38h] BYREF
  __int64 v14; // [rsp+68h] [rbp-30h] BYREF
  __int64 v15; // [rsp+70h] [rbp-28h] BYREF

  v7 = (int)a3;
  if ( *(_DWORD *)qword_18019E428 > 2u
    && __vcrt_trace_logging_provider::_TlgKeywordOn(qword_18019E428, 0x400000000000uLL) )
  {
    if ( (unsigned int)v7 >= 4 )
      v10 = "Unknown";
    else
      v10 = (&off_1801568B0)[v7];
    LODWORD(v11) = a6;
    v12 = a5;
    v15 = (__int64)v10;
    v13 = a2;
    v14 = a4;
    sub_18012F274(
      v9,
      (unsigned __int8 *)dword_18016C436,
      a3,
      a4,
      (const CHAR **)&v15,
      &v14,
      (void **)&v13,
      (const CHAR **)&v12,
      (__int64)&v11);
  }
  if ( a2 )
    sub_18012E318(a2, v7, a3, a4, a4, 1.0);
}
