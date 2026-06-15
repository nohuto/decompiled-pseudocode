/*
 * XREFs of sub_18003447C @ 0x18003447C
 * Callers:
 *     sub_180004B00 @ 0x180004B00 (sub_180004B00.c)
 *     sub_180005AF0 @ 0x180005AF0 (sub_180005AF0.c)
 *     sub_180005BE4 @ 0x180005BE4 (sub_180005BE4.c)
 *     sub_180005D54 @ 0x180005D54 (sub_180005D54.c)
 *     sub_180006C80 @ 0x180006C80 (sub_180006C80.c)
 *     sub_180006FA0 @ 0x180006FA0 (sub_180006FA0.c)
 *     sub_1800184B0 @ 0x1800184B0 (sub_1800184B0.c)
 *     sub_18001B6A0 @ 0x18001B6A0 (sub_18001B6A0.c)
 *     sub_18001B770 @ 0x18001B770 (sub_18001B770.c)
 *     sub_18001B820 @ 0x18001B820 (sub_18001B820.c)
 *     sub_18001C620 @ 0x18001C620 (sub_18001C620.c)
 *     sub_18002B5E0 @ 0x18002B5E0 (sub_18002B5E0.c)
 *     sub_180034268 @ 0x180034268 (sub_180034268.c)
 *     sub_180034380 @ 0x180034380 (sub_180034380.c)
 *     sub_1800C90C4 @ 0x1800C90C4 (sub_1800C90C4.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 */

__int64 __fastcall sub_18003447C(void *a1, size_t a2, const void *a3, size_t a4)
{
  unsigned int *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  if ( !a4 )
    return 0LL;
  if ( !a1 )
    goto LABEL_7;
  if ( a3 && a2 >= a4 )
  {
    memcpy(a1, a3, a4);
    return 0LL;
  }
  memset(a1, 0, a2);
  if ( !a3 )
  {
LABEL_7:
    v8 = (unsigned int *)o__errno(a1);
    v10 = 22;
LABEL_9:
    *v8 = v10;
    o__invalid_parameter_noinfo(v9);
    return v10;
  }
  if ( a2 < a4 )
  {
    v8 = (unsigned int *)o__errno(a1);
    v10 = 34;
    goto LABEL_9;
  }
  return 22LL;
}
