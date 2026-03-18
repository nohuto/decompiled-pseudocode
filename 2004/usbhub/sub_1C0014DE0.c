/*
 * XREFs of sub_1C0014DE0 @ 0x1C0014DE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011530 @ 0x1C0011530 (sub_1C0011530.c)
 *     sub_1C0029E7C @ 0x1C0029E7C (sub_1C0029E7C.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

__int64 __fastcall sub_1C0014DE0(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  ULONG Length; // eax
  int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // r10

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    sub_1C002DC78(a1, 0LL);
  if ( *(_DWORD *)v5 != 541218120 )
    sub_1C002DC78(a1, v5);
  if ( (dword_1C006B268 & 2) != 0 )
  {
    v6 = *(_QWORD *)(v5 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
    *(_DWORD *)v6 = 1380209000;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)(v6 + 16) = a2;
    *(_QWORD *)(v6 + 24) = 0LL;
  }
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( !Length )
    return sub_1C0011530(a1, a2);
  v9 = 1363431999;
  if ( Length == 4 )
    v9 = 1363432052;
  sub_1C000FD80(a1, 2, v9, (__int64)a2, 0LL);
  return sub_1C0029E7C(v11, v10);
}
