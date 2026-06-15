/*
 * XREFs of sub_1801268FC @ 0x1801268FC
 * Callers:
 *     sub_18004ACE0 @ 0x18004ACE0 (sub_18004ACE0.c)
 * Callees:
 *     sub_18006C4AC @ 0x18006C4AC (sub_18006C4AC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1801268FC(__int64 a1, unsigned int a2, int a3, int a4, _DWORD *a5, _BYTE *a6)
{
  int DefaultSpatialRenderingMode; // ebp
  __int64 result; // rax

  DefaultSpatialRenderingMode = 0;
  *a5 = 0;
  *a6 = 1;
  if ( sub_18006C4AC() )
    DefaultSpatialRenderingMode = GetDefaultSpatialRenderingMode(a2);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
  if ( DefaultSpatialRenderingMode == (_DWORD)result )
  {
    *a5 = 1;
  }
  else if ( DefaultSpatialRenderingMode )
  {
    *a6 = 0;
  }
  else if ( a2 == a3 || a2 == 5 && a3 == 3 )
  {
    *a5 = a4;
  }
  return result;
}
