/*
 * XREFs of MiInsertClone @ 0x14055B4B4
 * Callers:
 *     MiCloneVads @ 0x140559568 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x1408D91C0 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiDeleteCloneZombies @ 0x140247A3C (MiDeleteCloneZombies.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 */

char __fastcall MiInsertClone(__int64 a1, _QWORD *a2, int a3)
{
  bool v3; // bl
  _QWORD *v6; // rdx
  _QWORD *v7; // rax

  v3 = 0;
  if ( a3 )
    MiDeleteCloneZombies(a1, 1LL);
  v6 = *(_QWORD **)(a1 + 1264);
  if ( v6 )
  {
    while ( 1 )
    {
      if ( a2[3] > v6[4] || a2[4] >= v6[3] )
      {
        v7 = (_QWORD *)v6[1];
        if ( !v7 )
        {
          v3 = 1;
          return RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 1264), (unsigned __int64)v6, v3, a2);
        }
      }
      else
      {
        v7 = (_QWORD *)*v6;
        if ( !*v6 )
          return RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 1264), (unsigned __int64)v6, v3, a2);
      }
      v6 = v7;
    }
  }
  return RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 1264), (unsigned __int64)v6, v3, a2);
}
