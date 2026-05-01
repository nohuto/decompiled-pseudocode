/*
 * XREFs of sub_1800018E0 @ 0x1800018E0
 * Callers:
 *     sub_180001EC8 @ 0x180001EC8 (sub_180001EC8.c)
 *     sub_180003C44 @ 0x180003C44 (sub_180003C44.c)
 *     sub_180004B0C @ 0x180004B0C (sub_180004B0C.c)
 *     sub_180004C18 @ 0x180004C18 (sub_180004C18.c)
 *     sub_180004F80 @ 0x180004F80 (sub_180004F80.c)
 *     sub_18000507C @ 0x18000507C (sub_18000507C.c)
 *     sub_180005508 @ 0x180005508 (sub_180005508.c)
 *     sub_1800057C8 @ 0x1800057C8 (sub_1800057C8.c)
 *     sub_180005DD8 @ 0x180005DD8 (sub_180005DD8.c)
 *     sub_180008EF4 @ 0x180008EF4 (sub_180008EF4.c)
 *     sub_180008F80 @ 0x180008F80 (sub_180008F80.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18004534E (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x1800453CC (memset.c)
 *     memcpy @ 0x180045C83 (memcpy.c)
 */

__int64 __fastcall sub_1800018E0(void *a1, size_t a2, const void *a3, size_t a4)
{
  unsigned int *v7; // rax
  unsigned int v8; // ebx

  if ( !a1 )
    goto LABEL_2;
  if ( a3 && a2 >= a4 )
  {
    memcpy(a1, a3, a4);
    return 0LL;
  }
  else
  {
    memset(a1, 0, a2);
    if ( !a3 )
    {
LABEL_2:
      v7 = (unsigned int *)o__errno();
      v8 = 22;
LABEL_3:
      *v7 = v8;
      o__invalid_parameter_noinfo();
      return v8;
    }
    if ( a2 < a4 )
    {
      v7 = (unsigned int *)o__errno();
      v8 = 34;
      goto LABEL_3;
    }
    return 22LL;
  }
}
