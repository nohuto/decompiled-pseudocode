/*
 * XREFs of DestroyWindowStation @ 0x1C010A300
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0026584 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall DestroyWindowStation(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // rdi
  __int64 v7; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 20) == 1 )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v8);
    v6 = (_QWORD *)grpWinStaList;
    if ( grpWinStaList )
    {
      v4 = grpWinStaList;
      do
      {
        v7 = v4;
        if ( v1 == v4 )
          break;
        v6 = (_QWORD *)(v4 + 8);
        v7 = *(_QWORD *)(v4 + 8);
        v4 = v7;
      }
      while ( v7 );
      if ( v7 )
      {
        UnlockObjectAssignment(v6);
        *v6 = *(_QWORD *)(v1 + 8);
        *(_QWORD *)(v1 + 8) = 0LL;
      }
    }
    *(_DWORD *)(v1 + 64) |= 0x100u;
    if ( !v8 )
      UserSessionSwitchLeaveCrit(v4, v3, v5);
  }
  return 0LL;
}
