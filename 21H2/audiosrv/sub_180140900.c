/*
 * XREFs of sub_180140900 @ 0x180140900
 * Callers:
 *     <none>
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013EC44 @ 0x18013EC44 (sub_18013EC44.c)
 */

__int64 __fastcall sub_180140900(__int64 a1, int *a2, int a3)
{
  int v6; // ecx
  _QWORD *v7; // rax
  __int64 v8; // rbx
  void *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v13; // [rsp+48h] [rbp+10h] BYREF
  _QWORD *v14; // [rsp+58h] [rbp+20h]

  v13 = 0;
  if ( a2 )
  {
    if ( *a2 < 3 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)a1 + 48LL))(a1, a2, &v13);
      if ( v6 >= 0 )
      {
        v7 = sub_180055F40(0x438uLL);
        v14 = v7;
        v8 = (__int64)v7;
        if ( v7 )
        {
          *v7 = off_18014B3E0;
          v9 = v7 + 3;
          v10 = *(_QWORD *)a2;
          *(_DWORD *)(v8 + 20) = 0;
          *(_QWORD *)(v8 + 8) = v10;
          *(_DWORD *)(v8 + 16) = a3;
          *(_DWORD *)(v8 + 1072) = 2;
          memset(v9, 0, 0x418uLL);
          *(_QWORD *)v8 = off_1801563B0;
        }
        else
        {
          v8 = 0LL;
        }
        if ( v8 )
        {
          v11 = sub_18013EC44(a1, v8);
          v6 = 0;
          if ( v11 < 0 )
            return (unsigned int)v11;
        }
        else
        {
          return (unsigned int)-2147024882;
        }
      }
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)v6;
}
