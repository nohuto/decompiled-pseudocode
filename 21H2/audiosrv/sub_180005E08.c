/*
 * XREFs of sub_180005E08 @ 0x180005E08
 * Callers:
 *     sub_180004350 @ 0x180004350 (sub_180004350.c)
 * Callees:
 *     sub_18000455C @ 0x18000455C (sub_18000455C.c)
 *     sub_1800064D0 @ 0x1800064D0 (sub_1800064D0.c)
 *     sub_180006A60 @ 0x180006A60 (sub_180006A60.c)
 *     sub_180006CE0 @ 0x180006CE0 (sub_180006CE0.c)
 *     sub_180007854 @ 0x180007854 (sub_180007854.c)
 *     sub_180007930 @ 0x180007930 (sub_180007930.c)
 *     sub_180043A40 @ 0x180043A40 (sub_180043A40.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180005E08(_QWORD *a1)
{
  __int64 v2; // rax
  bool v3; // bl
  bool v4; // bl
  __int64 SecurityDescriptorLength; // rbx
  void *v6; // rax
  int v8; // [rsp+20h] [rbp-138h]
  int v9; // [rsp+28h] [rbp-130h]
  int v10; // [rsp+30h] [rbp-128h]
  int v11; // [rsp+38h] [rbp-120h]
  int v12; // [rsp+40h] [rbp-118h]
  __int64 v13; // [rsp+48h] [rbp-110h]
  __int64 v14; // [rsp+50h] [rbp-108h]
  __int64 (__fastcall **v15)(); // [rsp+60h] [rbp-F8h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+68h] [rbp-F0h]
  _QWORD v17[2]; // [rsp+70h] [rbp-E8h] BYREF
  char v18; // [rsp+80h] [rbp-D8h]
  int v19; // [rsp+84h] [rbp-D4h]
  __int128 v20; // [rsp+88h] [rbp-D0h]
  __int64 v21; // [rsp+98h] [rbp-C0h]
  int v22; // [rsp+A0h] [rbp-B8h]
  int v23; // [rsp+B0h] [rbp-A8h] BYREF
  __int16 v24; // [rsp+B4h] [rbp-A4h]
  _BYTE v25[128]; // [rsp+C0h] [rbp-98h] BYREF
  void *retaddr; // [rsp+158h] [rbp+0h]

  v15 = off_180146470;
  pSecurityDescriptor = 0LL;
  v23 = 0;
  v24 = 1280;
  v17[1] = 0LL;
  v18 = 0;
  v19 = 2;
  v17[0] = &off_180146410;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  v2 = sub_180006CE0(v25, &v23, 6LL, 80LL, -1618417719, 1911656217, -1669870755, -116925420, 1366760775, 0LL, 0LL);
  v3 = (unsigned __int8)sub_180006A60(v17, v2, 0x10000000LL) == 0;
  sub_1800064D0(v25);
  if ( v3 )
  {
    sub_18004BD84(retaddr, 59LL, "avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp", 2147500037LL);
    sub_18000455C(v17);
    v15 = off_180146470;
    sub_180043A40(&v15);
    return 2147500037LL;
  }
  else
  {
    sub_180006CE0(v25, &unk_18015AB24, 1LL, 11LL, v8, v9, v10, v11, v12, v13, v14);
    v4 = (unsigned __int8)sub_180006A60(v17, v25, 4096LL) == 0;
    sub_1800064D0(v25);
    if ( v4 )
    {
      sub_18004BD84(retaddr, 61LL, "avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp", 2147500037LL);
      sub_18000455C(v17);
      v15 = off_180146470;
      sub_180043A40(&v15);
      return 2147500037LL;
    }
    else
    {
      sub_180007930(&v15, v17);
      sub_180007854(&v15);
      sub_18000455C(v17);
      SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
      v6 = (void *)sub_18006A1B0(SecurityDescriptorLength, &unk_18019F848);
      *a1 = v6;
      if ( v6 )
      {
        memcpy(v6, pSecurityDescriptor, (unsigned int)SecurityDescriptorLength);
        v15 = off_180146470;
        sub_180043A40(&v15);
        return 0LL;
      }
      else
      {
        sub_18004BD84(retaddr, 79LL, "avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp", 2147942414LL);
        v15 = off_180146470;
        sub_180043A40(&v15);
        return 2147942414LL;
      }
    }
  }
}
