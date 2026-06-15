/*
 * XREFs of ?GetInputFormat@CSubmixImpl@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14001AE30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x140029D4F (memcpy_0.c)
 */

__int64 __fastcall CSubmixImpl::GetInputFormat(CSubmixImpl *this, struct tWAVEFORMATEX **a2)
{
  unsigned __int16 *v2; // rsi
  __int64 v4; // rbx
  struct tWAVEFORMATEX *v5; // rax
  struct tWAVEFORMATEX *v6; // rdi
  int v7; // ebx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (unsigned __int16 *)*((_QWORD *)this + 28);
  v4 = v2[8];
  v5 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v4 + 18);
  v6 = v5;
  if ( v5 )
  {
    memcpy_0(v5, v2, v4 + 18);
    v7 = 0;
  }
  else
  {
    v7 = -2147024882;
  }
  *a2 = v6;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4BB,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)v7,
    v9);
  return (unsigned int)v7;
}
