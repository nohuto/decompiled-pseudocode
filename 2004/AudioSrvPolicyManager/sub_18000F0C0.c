/*
 * XREFs of sub_18000F0C0 @ 0x18000F0C0
 * Callers:
 *     sub_18000CDD8 @ 0x18000CDD8 (sub_18000CDD8.c)
 *     sub_18000D02C @ 0x18000D02C (sub_18000D02C.c)
 *     sub_18000F150 @ 0x18000F150 (sub_18000F150.c)
 *     sub_180032EA0 @ 0x180032EA0 (sub_180032EA0.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18003A752 (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18003A7D8 (memset.c)
 *     memcpy @ 0x18003AE0F (memcpy.c)
 */

void __fastcall sub_18000F0C0(void *a1, __int64 a2, const void *a3, int a4)
{
  size_t v4; // rdi
  unsigned __int64 v6; // rbx

  v4 = 2 * a2;
  v6 = 2LL * a4;
  if ( v6 )
  {
    if ( !a1 )
      goto LABEL_3;
    if ( a3 && v4 >= v6 )
    {
      memcpy(a1, a3, 2LL * a4);
      return;
    }
    memset(a1, 0, v4);
    if ( a3 )
    {
      if ( v4 >= v6 )
        return;
      *(_DWORD *)o__errno(a1, a2) = 34;
    }
    else
    {
LABEL_3:
      *(_DWORD *)o__errno(a1, a2) = 22;
    }
    o__invalid_parameter_noinfo();
  }
}
