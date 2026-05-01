/*
 * XREFs of sub_18002B3C0 @ 0x18002B3C0
 * Callers:
 *     sub_18002B0F8 @ 0x18002B0F8 (sub_18002B0F8.c)
 *     sub_180030370 @ 0x180030370 (sub_180030370.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002B2B8 @ 0x18002B2B8 (sub_18002B2B8.c)
 *     sub_18002BF9C @ 0x18002BF9C (sub_18002BF9C.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_18003837C @ 0x18003837C (sub_18003837C.c)
 *     sub_1800429A0 @ 0x1800429A0 (sub_1800429A0.c)
 *     sub_180042DC8 @ 0x180042DC8 (sub_180042DC8.c)
 *     sub_180043688 @ 0x180043688 (sub_180043688.c)
 *     sub_180043B74 @ 0x180043B74 (sub_180043B74.c)
 *     sub_180043CF8 @ 0x180043CF8 (sub_180043CF8.c)
 *     sub_180043E7C @ 0x180043E7C (sub_180043E7C.c)
 *     sub_180043FCC @ 0x180043FCC (sub_180043FCC.c)
 *     sub_1800441FC @ 0x1800441FC (sub_1800441FC.c)
 *     sub_180044270 @ 0x180044270 (sub_180044270.c)
 *     sub_1800442E4 @ 0x1800442E4 (sub_1800442E4.c)
 *     sub_180044348 @ 0x180044348 (sub_180044348.c)
 *     sub_1800443F0 @ 0x1800443F0 (sub_1800443F0.c)
 *     sub_18004445C @ 0x18004445C (sub_18004445C.c)
 *     sub_1800444C8 @ 0x1800444C8 (sub_1800444C8.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 *     sub_1800849F0 @ 0x1800849F0 (sub_1800849F0.c)
 *     sub_180084E4C @ 0x180084E4C (sub_180084E4C.c)
 */

__int64 __fastcall sub_18002B3C0(_QWORD *CallerContext, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rdx
  int v7; // edi
  unsigned int v8; // r9d
  const GUID *v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  const void *v13; // rdx
  unsigned __int16 v14; // ax
  int v15; // r8d
  unsigned int v16; // [rsp+30h] [rbp-59h] BYREF
  int v17; // [rsp+34h] [rbp-55h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+40h] [rbp-49h] BYREF
  UUID *v19; // [rsp+60h] [rbp-29h]
  int v20; // [rsp+68h] [rbp-21h]
  int v21; // [rsp+6Ch] [rbp-1Dh]
  int *v22; // [rsp+70h] [rbp-19h]
  int v23; // [rsp+78h] [rbp-11h]
  int v24; // [rsp+7Ch] [rbp-Dh]
  _DWORD *v25; // [rsp+80h] [rbp-9h]
  int v26; // [rsp+88h] [rbp-1h]
  int v27; // [rsp+8Ch] [rbp+3h]
  _BYTE *v28; // [rsp+90h] [rbp+7h]
  _DWORD v29[2]; // [rsp+98h] [rbp+Fh] BYREF
  int *v30; // [rsp+A0h] [rbp+17h]
  int v31; // [rsp+A8h] [rbp+1Fh]
  int v32; // [rsp+ACh] [rbp+23h]
  _BYTE v33[16]; // [rsp+B0h] [rbp+27h] BYREF

  CallerContext[6] = MEMORY[0x7FFE0008];
  switch ( *(_DWORD *)CallerContext )
  {
    case 0:
    case 1:
      v5 = sub_180084E4C(CallerContext);
      goto LABEL_5;
    case 2:
      v5 = sub_1800849F0(CallerContext, v33);
      goto LABEL_5;
    case 3:
      v10 = &stru_180095D18;
      goto LABEL_13;
    case 4:
      v10 = (const GUID *)&unk_180095468;
      goto LABEL_13;
    case 5:
      v10 = (const GUID *)&unk_180095458;
      goto LABEL_13;
    case 6:
      v10 = (const GUID *)&unk_180095448;
      goto LABEL_13;
    case 7:
      v10 = (const GUID *)&unk_180095438;
      goto LABEL_13;
    case 8:
      v10 = &SettingGuid;
LABEL_13:
      v5 = sub_180042DC8(CallerContext, v10, a3, v33);
      goto LABEL_5;
    case 9:
      v6 = 0x41C6033FA3BC1075LL;
      goto LABEL_4;
    case 0xA:
      v11 = 10LL;
      goto LABEL_15;
    case 0xB:
      v5 = sub_180043B74(CallerContext, v33);
      goto LABEL_5;
    case 0xC:
      v5 = sub_180043FCC(CallerContext, v33);
      goto LABEL_5;
    case 0xD:
      v6 = 0x41840B3EA3BC0875LL;
      goto LABEL_4;
    case 0xE:
      v6 = 0x41840B3EA3BC1075LL;
      goto LABEL_4;
    case 0xF:
      v6 = 0x41840B3EA3BC8075LL;
      goto LABEL_4;
    case 0x10:
      v6 = 0x19890C35A3BCA075LL;
      goto LABEL_4;
    case 0x11:
      v6 = 0x1583002EA3BC6875LL;
      goto LABEL_4;
    case 0x12:
      v5 = sub_180043CF8(CallerContext, v33);
      goto LABEL_5;
    case 0x13:
      v5 = sub_18004445C(CallerContext, v33);
      goto LABEL_5;
    case 0x14:
      v5 = sub_1800443F0(CallerContext, v33);
      goto LABEL_5;
    case 0x15:
      v5 = sub_180044348(CallerContext, v33);
      goto LABEL_5;
    case 0x16:
      v6 = 0x2831628A3BC2075LL;
      goto LABEL_4;
    case 0x17:
      v6 = 0xD83063EA3BDD075LL;
      goto LABEL_4;
    case 0x18:
      v5 = sub_180043E7C(CallerContext, v33);
      goto LABEL_5;
    case 0x19:
      v5 = sub_180043688(CallerContext, v33);
      goto LABEL_5;
    case 0x1A:
      v5 = sub_1800442E4(CallerContext, v33);
      goto LABEL_5;
    case 0x1B:
      v5 = sub_180044270(CallerContext, v33);
      goto LABEL_5;
    case 0x1C:
      v11 = 28LL;
LABEL_15:
      *((_DWORD *)CallerContext + 14) = 0;
      CallerContext[5] = CallerContext + 7;
      v12 = sub_18002BF9C(v11);
      memcpy(v33, v13, v12);
      goto LABEL_7;
    case 0x1D:
      v5 = sub_18003837C(CallerContext, v33);
      goto LABEL_5;
    case 0x1E:
      v6 = 0x41840B3EA3BDA075LL;
      goto LABEL_4;
    case 0x1F:
      v5 = sub_1800444C8(CallerContext, v33);
      goto LABEL_5;
    case 0x20:
      v6 = 0x41840B3EA3BDB075LL;
      goto LABEL_4;
    case 0x21:
      v5 = sub_1800441FC(CallerContext, v33);
      goto LABEL_5;
    case 0x22:
      v6 = 0x41840B3EA3BC4875LL;
LABEL_4:
      v5 = sub_1800429A0(CallerContext, v6, v33);
LABEL_5:
      v7 = v5;
      break;
    default:
      v7 = -1073741822;
      break;
  }
  if ( v7 >= 0 )
  {
LABEL_7:
    sub_18002B2B8((unsigned int *)CallerContext, a2, 0);
    v7 = 0;
  }
  if ( (unsigned int)dword_1800B3250 > 5 && sub_180010470((__int64)&dword_1800B3250, 8LL) )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v19 = &Uuid;
    v22 = (int *)&v16;
    v25 = v29;
    v28 = v33;
    v20 = 16;
    v16 = v8;
    v23 = 4;
    v26 = 2;
    v14 = sub_18002BF9C(v8);
    v29[1] = 0;
    v32 = 0;
    v30 = &v17;
    v29[0] = v14;
    v31 = v15;
    v17 = v7;
    sub_18002E278((int)&dword_1800B3250, (int)&dword_1800A31A3, 0, 0, 7u, &v18);
  }
  return (unsigned int)v7;
}
