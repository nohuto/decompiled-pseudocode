/*
 * XREFs of sub_180061FC8 @ 0x180061FC8
 * Callers:
 *     sub_180061E00 @ 0x180061E00 (sub_180061E00.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_180062070 @ 0x180062070 (sub_180062070.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_180061FC8()
{
  int v0; // edi
  void (__fastcall ***v1)(_QWORD, __int64); // rax
  void (__fastcall ***v2)(_QWORD, __int64); // rbx

  v0 = 0;
  if ( !qword_18019E640 )
  {
    v1 = (void (__fastcall ***)(_QWORD, __int64))sub_180055F40(0x60uLL);
    v2 = v1;
    if ( v1 )
    {
      v1[10] = 0LL;
      v1[2] = 0LL;
      v1[3] = 0LL;
      v1[4] = 0LL;
      v1[5] = 0LL;
      v1[6] = 0LL;
      v1[7] = 0LL;
      *((_DWORD *)v1 + 16) = 0;
      *v1 = (void (__fastcall **)(_QWORD, __int64))off_180148CF8;
      *((_DWORD *)v1 + 2) = 3;
      *((_DWORD *)v1 + 17) = 1;
      *((_DWORD *)v1 + 18) = 72;
    }
    else
    {
      v2 = 0LL;
    }
    if ( v2 )
    {
      v0 = sub_180062070(v2);
      if ( v0 >= 0 )
      {
        qword_18019E640 = (__int64)v2;
        v2 = 0LL;
      }
      if ( v2 )
        (**v2)(v2, 1LL);
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  return (unsigned int)v0;
}
