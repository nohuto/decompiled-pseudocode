/*
 * XREFs of sub_1800D12B8 @ 0x1800D12B8
 * Callers:
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_1800345D4 @ 0x1800345D4 (sub_1800345D4.c)
 *     sub_180035AD0 @ 0x180035AD0 (sub_180035AD0.c)
 *     sub_1800366DC @ 0x1800366DC (sub_1800366DC.c)
 *     sub_18004699C @ 0x18004699C (sub_18004699C.c)
 *     sub_180049068 @ 0x180049068 (sub_180049068.c)
 *     sub_180066C28 @ 0x180066C28 (sub_180066C28.c)
 *     sub_180096C40 @ 0x180096C40 (sub_180096C40.c)
 *     sub_180099C14 @ 0x180099C14 (sub_180099C14.c)
 *     sub_1800CE1EC @ 0x1800CE1EC (sub_1800CE1EC.c)
 * Callees:
 *     sub_18011AC68 @ 0x18011AC68 (sub_18011AC68.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800D12B8(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  unsigned int v6; // eax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx

  v6 = a4;
  LOBYTE(a4) = a6;
  sub_18011AC68(a1, v6, a5, a4);
  *a1 = &Spectre::Engine::EngineException::`vftable';
  v9 = a2[3];
  if ( v9 >= 0x10 )
  {
    v10 = v9 + 1;
    v11 = *a2;
    if ( v10 >= 0x1000 )
    {
      v12 = v10 + 39;
      v13 = *(_QWORD *)(v11 - 8);
      v14 = v11 - v13;
      if ( (unsigned __int64)(v14 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v14, v12);
        JUMPOUT(0x1800D1366LL);
      }
      v11 = v13;
    }
    j_j__o_free(v11);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
