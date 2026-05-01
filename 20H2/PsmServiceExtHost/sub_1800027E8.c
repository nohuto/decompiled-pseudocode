/*
 * XREFs of sub_1800027E8 @ 0x1800027E8
 * Callers:
 *     sub_180002774 @ 0x180002774 (sub_180002774.c)
 *     sub_1800060BC @ 0x1800060BC (sub_1800060BC.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_18001E880 @ 0x18001E880 (sub_18001E880.c)
 *     sub_18001F370 @ 0x18001F370 (sub_18001F370.c)
 *     sub_18007D214 @ 0x18007D214 (sub_18007D214.c)
 *     sub_18007DAF4 @ 0x18007DAF4 (sub_18007DAF4.c)
 *     sub_18007DF84 @ 0x18007DF84 (sub_18007DF84.c)
 *     sub_18007FB44 @ 0x18007FB44 (sub_18007FB44.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180021AD4 @ 0x180021AD4 (sub_180021AD4.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180072DEC @ 0x180072DEC (sub_180072DEC.c)
 *     sub_180080BE8 @ 0x180080BE8 (sub_180080BE8.c)
 */

__int64 __fastcall sub_1800027E8(__int64 a1, unsigned int a2, int a3, int a4, int a5, int a6, __int64 a7)
{
  int v11; // r15d
  int v12; // r9d
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 (__fastcall **v16)(_QWORD *, _QWORD); // rax
  int v17; // r8d
  int v18; // r9d
  char v19; // [rsp+40h] [rbp-C0h] BYREF
  char v20; // [rsp+41h] [rbp-BFh] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v24[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h]
  unsigned int v26; // [rsp+78h] [rbp-88h]
  int v27; // [rsp+7Ch] [rbp-84h]
  int v28; // [rsp+80h] [rbp-80h]
  int v29; // [rsp+84h] [rbp-7Ch]
  __int64 v30; // [rsp+88h] [rbp-78h]
  __int128 v31; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  int *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  char *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  char *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]

  if ( a7 )
    v11 = *(_DWORD *)(a7 + 140);
  else
    v11 = 0;
  if ( a6 )
    sub_180080BE8();
  v12 = *(_DWORD *)(a1 + 544);
  result = (unsigned __int8)v12 >> 6;
  if ( (unsigned int)result >= a2 )
  {
    if ( (unsigned int)dword_1800B3218 > 5 )
    {
      v22 = *(_QWORD *)(a1 + 40);
      v19 = a2;
      v37 = &v19;
      v21 = v11;
      v35 = &v21;
      v38 = 1LL;
      v33 = &v22;
      v36 = 4LL;
      v34 = 8LL;
      return sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A1CF9, 0, 0, 5u, &v32);
    }
  }
  else
  {
    if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 8LL) )
    {
      v22 = *(_QWORD *)(a1 + 40);
      v34 = v14;
      v39 = &v19;
      v19 = a3;
      v37 = &v20;
      v20 = a2;
      v35 = &v21;
      v33 = &v22;
      v21 = v11;
      v40 = 1LL;
      v38 = 1LL;
      v36 = 4LL;
      sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A1DE4, 0, 0, 6u, &v32);
      v12 = *(_DWORD *)(a1 + 544);
    }
    v15 = *(_QWORD *)(a1 + 64);
    result = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)((_BYTE)a2 << 6)) & 0xC0u;
    *(_DWORD *)(a1 + 544) = result;
    if ( v15 )
    {
      v24[0] = *(_QWORD *)(a1 + 40);
      v28 = a5;
      v16 = (__int64 (__fastcall **)(_QWORD *, _QWORD))(v15 + 104);
      v25 = 1LL;
      v30 = 0LL;
      v31 = 0LL;
      v24[1] = 0LL;
      v26 = a2;
      v27 = a3;
      v29 = a4;
      if ( (*(_BYTE *)(v15 + 128) & 2) != 0 )
      {
        return (*v16)(v24, *(_QWORD *)(v15 + 120));
      }
      else
      {
        result = sub_180021AD4(v16, v24, 64LL, *(_QWORD *)(v15 + 112));
        if ( (int)result < 0 && (unsigned int)dword_1800B3218 > 4 )
        {
          result = sub_180010470(&dword_1800B3218, 0x400000000008LL);
          if ( (_BYTE)result )
          {
            v21 = v25;
            v23 = v24[0];
            v22 = 0x1000000LL;
            return sub_180072DEC(
                     (unsigned int)&dword_1800B3218,
                     (unsigned int)&unk_18009EB8B,
                     v17,
                     v18,
                     (__int64)&v23,
                     (__int64)&v21,
                     (__int64)&v22);
          }
        }
      }
    }
  }
  return result;
}
