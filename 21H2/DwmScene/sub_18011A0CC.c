/*
 * XREFs of sub_18011A0CC @ 0x18011A0CC
 * Callers:
 *     sub_180117688 @ 0x180117688 (sub_180117688.c)
 *     sub_180117BB0 @ 0x180117BB0 (sub_180117BB0.c)
 *     sub_180117CD0 @ 0x180117CD0 (sub_180117CD0.c)
 *     sub_180117DF0 @ 0x180117DF0 (sub_180117DF0.c)
 *     sub_180117F50 @ 0x180117F50 (sub_180117F50.c)
 *     sub_1801181E0 @ 0x1801181E0 (sub_1801181E0.c)
 *     sub_180118360 @ 0x180118360 (sub_180118360.c)
 *     sub_180118610 @ 0x180118610 (sub_180118610.c)
 *     sub_180118970 @ 0x180118970 (sub_180118970.c)
 *     sub_180118AF0 @ 0x180118AF0 (sub_180118AF0.c)
 *     sub_180118DA0 @ 0x180118DA0 (sub_180118DA0.c)
 *     sub_180119020 @ 0x180119020 (sub_180119020.c)
 *     sub_180119160 @ 0x180119160 (sub_180119160.c)
 *     sub_1801193F0 @ 0x1801193F0 (sub_1801193F0.c)
 *     sub_180119580 @ 0x180119580 (sub_180119580.c)
 *     sub_180119980 @ 0x180119980 (sub_180119980.c)
 *     sub_180119AC0 @ 0x180119AC0 (sub_180119AC0.c)
 *     sub_180119C90 @ 0x180119C90 (sub_180119C90.c)
 *     sub_180119FF0 @ 0x180119FF0 (sub_180119FF0.c)
 *     sub_18011A180 @ 0x18011A180 (sub_18011A180.c)
 *     sub_18011A2D0 @ 0x18011A2D0 (sub_18011A2D0.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x1801238F9 (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x180123964 (memcpy.c)
 *     memset @ 0x18012396A (memset.c)
 *     sprintf_s @ 0x18012495C (sprintf_s.c)
 */

bool __fastcall sub_18011A0CC(_QWORD *Src, __int64 a2, _BYTE *a3)
{
  int v4; // esi
  size_t v6; // r10
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx

  v4 = a2;
  if ( !a3 )
    return 0;
  *a3 = 0;
  v6 = Src[19];
  if ( WORD2(a2) )
  {
    if ( v6 < WORD2(a2) )
    {
      memset(a3, 0, v6);
      *(_DWORD *)o__errno(v9, v8) = 34;
      o__invalid_parameter_noinfo(v11, v10);
      return 0;
    }
    memcpy(a3, Src, WORD2(a2));
    v6 = Src[19];
  }
  return sprintf_s(&a3[Src[17]], v6 - Src[17], "%u", v4) != -1;
}
