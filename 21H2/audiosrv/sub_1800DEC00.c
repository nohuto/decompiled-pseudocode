/*
 * XREFs of sub_1800DEC00 @ 0x1800DEC00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_1800DA884 @ 0x1800DA884 (sub_1800DA884.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800DEC00(__int64 a1, __int64 a2, __int64 a3, __int64 **a4)
{
  __int64 *v6; // rax
  __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  __int64 v14; // rbx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  __int64 *v23; // rbx
  __int64 v24; // rdx
  unsigned __int64 v25; // r8
  int v26; // eax
  unsigned int v27; // edi
  __int64 v28; // rdx
  unsigned __int64 v29; // r8
  __int64 v30; // rdx
  unsigned __int64 v31; // r8
  __int64 v32; // [rsp+30h] [rbp-78h] BYREF
  __int64 v33; // [rsp+38h] [rbp-70h] BYREF
  __int64 v34; // [rsp+40h] [rbp-68h] BYREF
  __int64 v35; // [rsp+48h] [rbp-60h] BYREF
  __int64 v36; // [rsp+50h] [rbp-58h] BYREF
  __int64 v37; // [rsp+58h] [rbp-50h] BYREF
  __int64 *v38; // [rsp+60h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+68h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h]

  v6 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v6[1], v7, (struct _TP_TIMER *)L"AudioServerGetEndpointVpoContext");
  v33 = 0LL;
  try
  {
    v8 = (*(__int64 (**)(void))(*(_QWORD *)qword_18019EE50 + 24LL))();
    v9 = v8;
    if ( v8 >= 0 )
    {
      v32 = 0LL;
      v14 = v33;
      sub_1800CB144(&v32);
      v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 120LL))(v14, &v32);
      v16 = v15;
      if ( v15 >= 0 )
      {
        v34 = 0LL;
        v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 96LL))(v32, &v34);
        v20 = v19;
        if ( v19 >= 0 )
        {
          v35 = v34;
          v36 = v32;
          v37 = 0LL;
          sub_1800DA884((__int64 *)&v38, &v37, &v36, &v35);
          v23 = v38;
          if ( v38 )
          {
            v26 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 32LL))(v34, a3);
            v27 = v26;
            if ( v26 >= 0 )
            {
              *a4 = v23;
              sub_18000F708(&v34);
              sub_18000F708(&v32);
              sub_18000F708(&v33);
              sub_18000F690((__int64)pv, v30, v31);
              result = 0LL;
            }
            else
            {
              sub_18004BD84((int)retaddr, 3124, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v26);
              sub_18000F708(v23 + 2);
              sub_18000F708(v23 + 1);
              sub_18000F708(v23);
              sub_18006A148(v23);
              sub_18000F708(&v34);
              sub_18000F708(&v32);
              sub_18000F708(&v33);
              sub_18000F690((__int64)pv, v28, v29);
              result = v27;
            }
          }
          else
          {
            sub_18004BD84(
              (int)retaddr,
              3121,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              -2147024882);
            sub_18000F708(&v34);
            sub_18000F708(&v32);
            sub_18000F708(&v33);
            sub_18000F690((__int64)pv, v24, v25);
            result = 2147942414LL;
          }
        }
        else
        {
          sub_18004BD84((int)retaddr, 3118, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v19);
          sub_18000F708(&v34);
          sub_18000F708(&v32);
          sub_18000F708(&v33);
          sub_18000F690((__int64)pv, v21, v22);
          result = v20;
        }
      }
      else
      {
        sub_18004BD84((int)retaddr, 3115, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v15);
        sub_18000F708(&v32);
        sub_18000F708(&v33);
        sub_18000F690((__int64)pv, v17, v18);
        result = v16;
      }
    }
    else
    {
      sub_18004BD84((int)retaddr, 3112, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v8);
      sub_18000F708(&v33);
      sub_18000F690((__int64)pv, v10, v11);
      result = v9;
    }
  }
  catch ( ... )
  {
    return (unsigned int)sub_1800C437C(
                           (int)retaddr,
                           3129,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                           v12);
  }
  return result;
}
