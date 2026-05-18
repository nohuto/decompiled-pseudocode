/*
 * XREFs of sub_1800F7880 @ 0x1800F7880
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A9340 @ 0x1800A9340 (sub_1800A9340.c)
 *     sub_1800B760C @ 0x1800B760C (sub_1800B760C.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F7880(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rbx
  __int128 v9; // [rsp+20h] [rbp-20h] BYREF
  __int128 v10; // [rsp+30h] [rbp-10h] BYREF

  v10 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v10 = *a2;
  *((_QWORD *)&v10 + 1) = v4;
  sub_1800A9340(a1, &v10);
  v9 = 0LL;
  sub_1800B760C((__int64 *)&v9, a2);
  v5 = v9;
  *(_DWORD *)(v9 + 1800) = *(_DWORD *)(a1 + 1800);
  *(_DWORD *)(v5 + 1804) = *(_DWORD *)(a1 + 1804);
  *(_DWORD *)(v5 + 1808) = *(_DWORD *)(a1 + 1808);
  *(_DWORD *)(v5 + 1812) = *(_DWORD *)(a1 + 1812);
  *(_DWORD *)(v5 + 1816) = *(_DWORD *)(a1 + 1816);
  *(_DWORD *)(v5 + 1820) = *(_DWORD *)(a1 + 1820);
  *(_DWORD *)(v5 + 1824) = *(_DWORD *)(a1 + 1824);
  *(_DWORD *)(v5 + 1828) = *(_DWORD *)(a1 + 1828);
  *(_DWORD *)(v5 + 1832) = *(_DWORD *)(a1 + 1832);
  *(_DWORD *)(v5 + 1836) = *(_DWORD *)(a1 + 1836);
  *(_DWORD *)(v5 + 1840) = *(_DWORD *)(a1 + 1840);
  *(_DWORD *)(v5 + 1844) = *(_DWORD *)(a1 + 1844);
  *(_DWORD *)(v5 + 1848) = *(_DWORD *)(a1 + 1848);
  *(_DWORD *)(v5 + 1852) = *(_DWORD *)(a1 + 1852);
  *(_DWORD *)(v5 + 1856) = *(_DWORD *)(a1 + 1856);
  *(_DWORD *)(v5 + 1860) = *(_DWORD *)(a1 + 1860);
  *(_BYTE *)(v5 + 1864) = *(_BYTE *)(a1 + 1864);
  *(_DWORD *)(v5 + 1868) = *(_DWORD *)(a1 + 1868);
  *(_DWORD *)(v5 + 1872) = *(_DWORD *)(a1 + 1872);
  *(_DWORD *)(v5 + 1876) = *(_DWORD *)(a1 + 1876);
  *(_DWORD *)(v5 + 1880) = *(_DWORD *)(a1 + 1880);
  *(_DWORD *)(v5 + 1884) = *(_DWORD *)(a1 + 1884);
  *(_DWORD *)(v5 + 1888) = *(_DWORD *)(a1 + 1888);
  *(_DWORD *)(v5 + 1892) = *(_DWORD *)(a1 + 1892);
  *(_BYTE *)(v5 + 1896) = *(_BYTE *)(a1 + 1896);
  *(_BYTE *)(v5 + 1897) = *(_BYTE *)(a1 + 1897);
  *(_BYTE *)(v5 + 1898) = *(_BYTE *)(a1 + 1898);
  result = *(unsigned int *)(a1 + 1900);
  *(_DWORD *)(v5 + 1900) = result;
  if ( *((_QWORD *)&v9 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v7 = *((_QWORD *)&v9 + 1);
      (***((void (__fastcall ****)(_QWORD))&v9 + 1))(*((_QWORD *)&v9 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v9 + 1) + 8LL))(*((_QWORD *)&v9 + 1));
    }
  }
  v8 = (volatile signed __int32 *)a2[1];
  if ( v8 )
  {
    result = (unsigned int)_InterlockedDecrement(v8 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      result = (unsigned int)_InterlockedDecrement(v8 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return result;
}
