/*
 * XREFs of sub_18008A530 @ 0x18008A530
 * Callers:
 *     sub_18008A700 @ 0x18008A700 (sub_18008A700.c)
 *     sub_18008A730 @ 0x18008A730 (sub_18008A730.c)
 *     sub_18009489C @ 0x18009489C (sub_18009489C.c)
 *     sub_1800985C0 @ 0x1800985C0 (sub_1800985C0.c)
 *     sub_1800A7698 @ 0x1800A7698 (sub_1800A7698.c)
 *     sub_1800B2FE8 @ 0x1800B2FE8 (sub_1800B2FE8.c)
 *     sub_1800FBCB4 @ 0x1800FBCB4 (sub_1800FBCB4.c)
 *     sub_1800FDCA0 @ 0x1800FDCA0 (sub_1800FDCA0.c)
 *     sub_1801262A5 @ 0x1801262A5 (sub_1801262A5.c)
 *     sub_180126B8A @ 0x180126B8A (sub_180126B8A.c)
 *     sub_180126C59 @ 0x180126C59 (sub_180126C59.c)
 *     sub_180129F1D @ 0x180129F1D (sub_180129F1D.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_18008A530(_QWORD *a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int64 result; // rax
  volatile signed __int32 *v11; // rcx

  *a1 = &Spectre::Engine::Component::`vftable';
  v2 = a1[10];
  if ( v2 )
  {
    a1[10] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = (volatile signed __int32 *)a1[8];
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = a1[6];
  if ( v4 >= 0x10 )
  {
    v5 = v4 + 1;
    v6 = a1[3];
    if ( v5 >= 0x1000 )
    {
      v7 = v5 + 39;
      v8 = *(_QWORD *)(v6 - 8);
      v9 = v6 - v8;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v7);
        JUMPOUT(0x18008A607LL);
      }
      v6 = v8;
    }
    j_j__o_free(v6);
  }
  a1[5] = 0LL;
  a1[6] = 15LL;
  *((_BYTE *)a1 + 24) = 0;
  result = (unsigned __int64)&Spectre::Engine::IVisitable::`vftable';
  *a1 = &Spectre::Engine::IVisitable::`vftable';
  v11 = (volatile signed __int32 *)a1[2];
  if ( v11 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  return result;
}
