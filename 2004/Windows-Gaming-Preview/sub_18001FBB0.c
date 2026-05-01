/*
 * XREFs of sub_18001FBB0 @ 0x18001FBB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800266E0 @ 0x1800266E0 (sub_1800266E0.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800442C0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001FBB0(__int64 a1, char a2)
{
  __int64 v4; // rcx

  `eh vector destructor iterator'((void *)(a1 + 48), 8uLL, 1uLL, (void (*)(void *))sub_1800081D0);
  WindowsDeleteString(*(HSTRING *)(a1 + 24));
  *(_QWORD *)(a1 + 24) = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    sub_1800266E0(v4);
  }
  *(_QWORD *)a1 = &off_18004ADE8;
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 56LL);
  return a1;
}
