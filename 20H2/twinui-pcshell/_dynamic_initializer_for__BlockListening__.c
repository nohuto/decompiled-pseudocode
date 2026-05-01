/*
 * XREFs of _dynamic_initializer_for__BlockListening__ @ 0x180002D30
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V?$initializer_list@UColor@UI@Windows@@@1@AEBV?$allocator@UColor@UI@Windows@@@1@@Z @ 0x18008BFD0 (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V-$initializer_l.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     atexit @ 0x18008D254 (atexit.c)
 */

int dynamic_initializer_for__BlockListening__()
{
  _QWORD v1[2]; // [rsp+20h] [rbp-39h] BYREF
  _DWORD v2[28]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v3; // [rsp+A0h] [rbp+47h] BYREF

  v2[0] = -1269949697;
  v1[0] = v2;
  v2[1] = -1253041153;
  v1[1] = &v3;
  v2[2] = -1235934465;
  v2[3] = -1168364289;
  v2[4] = -1100531201;
  v2[5] = -998945537;
  v2[6] = -880451073;
  v2[7] = -728139009;
  v2[8] = -592603905;
  v2[9] = -440225793;
  v2[10] = -304822017;
  v2[11] = -186196225;
  v2[12] = -84676353;
  v2[13] = -33752321;
  v2[14] = -257;
  v2[15] = -16908801;
  v2[16] = -67701761;
  v2[17] = -152443905;
  v2[18] = -270938625;
  v2[19] = -423184897;
  v2[20] = -558786049;
  v2[21] = -711164161;
  v2[22] = -863476481;
  v2[23] = -982036737;
  v2[24] = -1083687937;
  v2[25] = -1168298753;
  v2[26] = -1219157505;
  v2[27] = -1269818369;
  std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(&BlockListening, v1);
  return atexit(dynamic_atexit_destructor_for__BlockListening__);
}
