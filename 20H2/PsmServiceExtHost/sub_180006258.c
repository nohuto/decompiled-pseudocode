/*
 * XREFs of sub_180006258 @ 0x180006258
 * Callers:
 *     sub_18000366C @ 0x18000366C (sub_18000366C.c)
 *     sub_180003E70 @ 0x180003E70 (sub_180003E70.c)
 *     sub_180004934 @ 0x180004934 (sub_180004934.c)
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_1800060BC @ 0x1800060BC (sub_1800060BC.c)
 *     sub_180006158 @ 0x180006158 (sub_180006158.c)
 *     sub_1800061F8 @ 0x1800061F8 (sub_1800061F8.c)
 *     sub_1800062C8 @ 0x1800062C8 (sub_1800062C8.c)
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_18001A3C0 @ 0x18001A3C0 (sub_18001A3C0.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_18001D590 @ 0x18001D590 (sub_18001D590.c)
 *     sub_18007CF6C @ 0x18007CF6C (sub_18007CF6C.c)
 *     sub_18007D214 @ 0x18007D214 (sub_18007D214.c)
 *     sub_18007DAF4 @ 0x18007DAF4 (sub_18007DAF4.c)
 *     sub_18007DF84 @ 0x18007DF84 (sub_18007DF84.c)
 *     sub_18007E180 @ 0x18007E180 (sub_18007E180.c)
 *     sub_18007F5AC @ 0x18007F5AC (sub_18007F5AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180006258(__int64 a1)
{
  _QWORD *v1; // rcx

  v1 = (_QWORD *)(a1 + 600);
  if ( (_QWORD *)*v1 == v1 )
    return 0LL;
  else
    return *v1 - 96LL;
}
