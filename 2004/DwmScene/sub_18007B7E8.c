/*
 * XREFs of sub_18007B7E8 @ 0x18007B7E8
 * Callers:
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ_0 @ 0x1800720D0 (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ_0.c)
 *     sub_180072B00 @ 0x180072B00 (sub_180072B00.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

_DWORD *__fastcall sub_18007B7E8(__int64 a1)
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
    if ( std::wstreambuf::pptr() )
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
    v5 = 2 * ((*v3 + 2 * v2 - v4) >> 1);
    if ( v5 >= 0x1000 )
    {
      v6 = v5 + 39;
      v7 = *(_QWORD *)(v4 - 8);
      v8 = v4 - v7;
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v8, v6);
        JUMPOUT(0x18007B89DLL);
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
