/*
 * XREFs of _NtUserGetClassName@12 @ 0x9A578
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetClassName(int a1, int a2, ULONG a3)
{
  int AtomName; // esi
  int v4; // edi
  int *v5; // ecx
  volatile void *v6; // esi
  int v7; // edx
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // [esp+1Ch] [ebp-28h]
  int v12; // [esp+4Ch] [ebp+8h]

  AtomName = 0;
  EnterSharedCrit(0, 1);
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    v5 = (int *)a3;
    if ( a3 >= _MmUserProbeAddress )
      v5 = (int *)_MmUserProbeAddress;
    v12 = *v5;
    v6 = (volatile void *)v5[1];
    ProbeForWrite(v6, HIWORD(*v5), 1u);
    v7 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(v4 + 76) + 4) + 2);
    if ( a2 )
    {
      v11 = *(unsigned __int16 *)(*(_DWORD *)(v4 + 20) + 30);
      if ( (v11 & 0xFFFF3FFF) != 0 )
      {
        v9 = (v11 & 0xFFFF3FFF) - 666;
        if ( v9 < 0x1F )
        {
          _mm_lfence();
          v10 = (unsigned __int8)byte_251120[v9];
          if ( v10 != 25 )
            v7 = *(unsigned __int16 *)(_gpsi + 2 * v10 + 468);
        }
      }
    }
    AtomName = UserGetAtomName(v7, v6, HIWORD(v12) >> 1);
  }
  UserSessionSwitchLeaveCrit();
  return AtomName;
}
