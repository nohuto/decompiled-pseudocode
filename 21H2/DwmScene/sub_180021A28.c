/*
 * XREFs of sub_180021A28 @ 0x180021A28
 * Callers:
 *     sub_180021364 @ 0x180021364 (sub_180021364.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180021A28(int a1, int a2, _OWORD *a3)
{
  unsigned int v3; // ebx
  __int64 i; // rax

  v3 = 0;
  if ( qword_18021F848 )
  {
    AcquireSRWLockShared(&stru_18021F900);
    for ( i = qword_18021F848; i; i = *(_QWORD *)(i + 24) )
    {
      if ( *(_DWORD *)(i + 4) == a1 && *(_DWORD *)i == a2 )
      {
        v3 = 1;
        *a3 = *(_OWORD *)i;
        a3[1] = *(_OWORD *)(i + 16);
        break;
      }
    }
    ReleaseSRWLockShared(&stru_18021F900);
  }
  return v3;
}
