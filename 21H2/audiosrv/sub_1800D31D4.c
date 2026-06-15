/*
 * XREFs of sub_1800D31D4 @ 0x1800D31D4
 * Callers:
 *     sub_1800D3C38 @ 0x1800D3C38 (sub_1800D3C38.c)
 * Callees:
 *     sub_1800184B0 @ 0x1800184B0 (sub_1800184B0.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D31D4(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  int v7; // ebx
  __int64 v8; // rax
  __int128 v9; // xmm0
  _WORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  _WORD *v13; // rax

  if ( a4 )
  {
    if ( !a3 )
      goto LABEL_3;
    v8 = *a3;
    if ( !*a3 )
      v8 = a3[1];
    if ( !v8 )
    {
LABEL_3:
      v7 = -2147024809;
LABEL_20:
      sub_18005E8F8((__int64)"CAppAudioSessionId::Initialize", 371, v7);
      return (unsigned int)v7;
    }
  }
  if ( a3 )
    v9 = *(_OWORD *)a3;
  else
    v9 = xmmword_18015B730;
  *(_OWORD *)(a1 + 16) = v9;
  if ( !a4 )
  {
    v10 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
    v11 = -1LL;
    if ( v10 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( v10[v12] );
    }
    else
    {
      LODWORD(v12) = 0;
    }
    sub_18002BB70((__int64 *)(a1 + 8), v10, v12);
    v13 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
    if ( v13 )
    {
      do
        ++v11;
      while ( v13[v11] );
    }
    else
    {
      LODWORD(v11) = 0;
    }
    sub_18002BB70((__int64 *)a1, v13, v11);
  }
  *(_DWORD *)(a1 + 40) = a4;
  v7 = sub_1800184B0((const GUID *)a1);
  if ( v7 < 0 )
    goto LABEL_20;
  return (unsigned int)v7;
}
