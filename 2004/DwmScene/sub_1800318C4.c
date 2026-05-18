/*
 * XREFs of sub_1800318C4 @ 0x1800318C4
 * Callers:
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x18002E180 (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 *     sub_18002E830 @ 0x18002E830 (sub_18002E830.c)
 *     sub_1800B2F70 @ 0x1800B2F70 (sub_1800B2F70.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

_DWORD *__fastcall sub_1800318C4(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  _DWORD *result; // rax

  if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
  {
    if ( std::streambuf::pptr() )
    {
      v2 = **(int **)(a1 + 88);
      v3 = *(_QWORD **)(a1 + 64);
    }
    else
    {
      v2 = **(int **)(a1 + 80);
      v3 = *(_QWORD **)(a1 + 56);
    }
    v4 = **(_QWORD **)(a1 + 24);
    v5 = *v3 + v2 - v4;
    if ( v5 >= 0x1000 )
    {
      v6 = v5 + 39;
      v7 = *(_QWORD *)(v4 - 8);
      v8 = v4 - v7;
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v8, v6);
        JUMPOUT(0x18003196FLL);
      }
      v4 = v7;
    }
    j_j__o_free(v4);
  }
  **(_QWORD **)(a1 + 24) = 0LL;
  **(_QWORD **)(a1 + 56) = 0LL;
  **(_DWORD **)(a1 + 80) = 0;
  **(_QWORD **)(a1 + 32) = 0LL;
  **(_QWORD **)(a1 + 64) = 0LL;
  result = *(_DWORD **)(a1 + 88);
  *result = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) &= ~1u;
  return result;
}
