/*
 * XREFs of sub_1800094B0 @ 0x1800094B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FBC8 @ 0x18000FBC8 (sub_18000FBC8.c)
 *     sub_180012FA8 @ 0x180012FA8 (sub_180012FA8.c)
 *     sub_18001B50C @ 0x18001B50C (sub_18001B50C.c)
 *     sub_18001FA04 @ 0x18001FA04 (sub_18001FA04.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800094B0(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // r15
  __int64 v3; // rbp
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rdi
  BOOL v6; // r14d
  int v7; // ecx
  bool v8; // sf

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_BYTE *)(a1 + 16);
  v3 = qword_18004FE78;
  v4 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v5 = *(_QWORD *)(v1 + 256);
  if ( v5 || (sub_18001B50C(v3, v1), (v5 = *(_QWORD *)(v1 + 256)) != 0) )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 4u )
    {
      sub_18000FBC8(*((_QWORD *)off_18004F000 + 2), v2);
    }
    v6 = *(_DWORD *)(v5 + 208) != 0;
    if ( !*(_DWORD *)(v1 + 448) )
    {
      v7 = v2 != 0 ? 1 : -1;
      v8 = v7 + *(_DWORD *)(v1 + 548) < 0;
      *(_DWORD *)(v1 + 548) += v7;
      if ( v8 )
        *(_DWORD *)(v1 + 548) = 0;
      else
        sub_180012FA8(*(_QWORD *)(v1 + 256), v2 != 0 ? 1 : -1);
    }
    if ( v6 != (*(_DWORD *)(v5 + 208) != 0) )
      sub_18001FA04(v3, v5);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
