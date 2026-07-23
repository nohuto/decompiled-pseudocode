/*
 * XREFs of MiInsertSessionWorkingSet @ 0x1403A6D20
 * Callers:
 *     MiAllowWorkingSetExpansion @ 0x1402A35AC (MiAllowWorkingSetExpansion.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 */

char __fastcall MiInsertSessionWorkingSet(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // rax
  _QWORD *v4; // rdx
  bool v5; // al
  unsigned int v6; // r8d
  _QWORD *v7; // rcx

  v1 = (_QWORD *)qword_140C4EF48;
  v2 = (_QWORD *)(a1 + 128);
  if ( *(__int64 **)qword_140C4EF48 != &qword_140C4EF40 )
    __fastfail(3u);
  *v2 = &qword_140C4EF40;
  *(_QWORD *)(a1 + 136) = v1;
  *v1 = v2;
  v4 = (_QWORD *)qword_140C4DE28;
  qword_140C4EF48 = a1 + 128;
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 8);
  if ( qword_140C4DE28 )
  {
    while ( 1 )
    {
      if ( v6 < *((_DWORD *)v4 - 34) )
      {
        v7 = (_QWORD *)*v4;
        if ( !*v4 )
          return RtlAvlInsertNodeEx(
                   (unsigned __int64 *)&qword_140C4DE28,
                   (unsigned __int64)v4,
                   v5,
                   (_QWORD *)(a1 + 144));
      }
      else
      {
        v7 = (_QWORD *)v4[1];
        if ( !v7 )
        {
          v5 = 1;
          return RtlAvlInsertNodeEx(
                   (unsigned __int64 *)&qword_140C4DE28,
                   (unsigned __int64)v4,
                   v5,
                   (_QWORD *)(a1 + 144));
        }
      }
      v4 = v7;
    }
  }
  return RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C4DE28, (unsigned __int64)v4, v5, (_QWORD *)(a1 + 144));
}
