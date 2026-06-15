/*
 * XREFs of sub_1800FA570 @ 0x1800FA570
 * Callers:
 *     sub_1800615D4 @ 0x1800615D4 (sub_1800615D4.c)
 *     sub_1800FA9C8 @ 0x1800FA9C8 (sub_1800FA9C8.c)
 *     sub_1800FABF8 @ 0x1800FABF8 (sub_1800FABF8.c)
 * Callees:
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_1800BB3A8 @ 0x1800BB3A8 (sub_1800BB3A8.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800F9A68 @ 0x1800F9A68 (sub_1800F9A68.c)
 *     sub_1800FC8A0 @ 0x1800FC8A0 (sub_1800FC8A0.c)
 *     sub_1800FFCD4 @ 0x1800FFCD4 (sub_1800FFCD4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800FA570(__int64 a1, _WORD *a2, _WORD *a3, int a4, char a5, _QWORD *a6)
{
  _QWORD *v10; // rsi
  int v11; // edi
  LPVOID v12; // rax
  void *v13; // rbx
  int v14; // eax
  __int64 v15; // r9
  unsigned int v16; // edi
  int *v18; // rbx
  void *v19; // [rsp+38h] [rbp-30h]
  ATL::CAtlException *v20; // [rsp+48h] [rbp-20h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v10 = a6;
  *a6 = 0LL;
  v11 = 0;
  v12 = sub_18006A18C(0xD0uLL);
  try
  {
    try
    {
      if ( v12 )
        v13 = (void *)sub_1800F9A68((__int64)v12, a1, a2, a3, a4, a5);
      else
        v13 = 0LL;
      v19 = v13;
    }
    catch ( ATL::CAtlException *v20 )
    {
      v18 = (int *)v20;
      if ( *(_DWORD *)v20 == -1073741571 )
        o__resetstkoflw();
      v10 = a6;
      v11 = *v18;
      v13 = v19;
    }
    if ( v11 < 0 )
      sub_1800BB3A8((int)retaddr, 2745, (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp", v11);
    if ( !v13 )
      sub_1800FFCD4(retaddr, 2747LL);
    v14 = sub_1800FC8A0(v13);
    v16 = v14;
    if ( v14 < 0 )
      sub_1800BB3A8((int)retaddr, 2751, (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp", v14);
    *v10 = v13;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x55u, (__int64)&unk_180172650, v13);
    }
  }
  catch ( ... )
  {
    return (unsigned int)sub_1800C437C(
                           (int)retaddr,
                           2759,
                           (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
                           v15);
  }
  return v16;
}
