/*
 * XREFs of MiLogCreateImageFileMapFailure @ 0x1408C7854
 * Callers:
 *     MiCreateImageFileMap @ 0x1406AA6D4 (MiCreateImageFileMap.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgCreate1Sz_char @ 0x140270A0C (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall MiLogCreateImageFileMapFailure(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r11
  int v5; // r9d
  __int64 v6; // r8
  __int64 v7; // r10
  int v8; // [rsp+20h] [rbp-C8h]
  int v9; // [rsp+28h] [rbp-C0h]
  int v10; // [rsp+40h] [rbp-A8h] BYREF
  int v11; // [rsp+44h] [rbp-A4h] BYREF
  __int64 v12; // [rsp+48h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v14[16]; // [rsp+70h] [rbp-78h] BYREF
  _DWORD *v15; // [rsp+80h] [rbp-68h]
  int v16; // [rsp+88h] [rbp-60h]
  int v17; // [rsp+8Ch] [rbp-5Ch]
  __int64 v18; // [rsp+90h] [rbp-58h]
  _DWORD v19[2]; // [rsp+98h] [rbp-50h] BYREF
  int *v20; // [rsp+A0h] [rbp-48h]
  int v21; // [rsp+A8h] [rbp-40h]
  int v22; // [rsp+ACh] [rbp-3Ch]
  int *v23; // [rsp+B0h] [rbp-38h]
  int v24; // [rsp+B8h] [rbp-30h]
  int v25; // [rsp+BCh] [rbp-2Ch]
  __int64 *v26; // [rsp+C0h] [rbp-28h]
  int v27; // [rsp+C8h] [rbp-20h]
  int v28; // [rsp+CCh] [rbp-1Ch]

  if ( *(_QWORD *)&qword_140C4EF20 && **(_DWORD **)&qword_140C4EF20 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C4EF20, 0x400000000000LL) )
    {
      tlgCreate1Sz_char((__int64)v14, "SectionAlignmentIssue");
      v17 = 0;
      v19[1] = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v15 = v19;
      v18 = *(_QWORD *)(v4 + 96);
      v19[0] = *(unsigned __int16 *)(v4 + 88);
      v20 = &v10;
      v23 = &v11;
      v21 = 4;
      v24 = 4;
      v26 = &v12;
      v11 = v5;
      v27 = 8;
      v16 = 2;
      v10 = a3;
      v12 = 0x1000000LL;
      tlgWriteEx_EtwWriteEx(v7, (unsigned __int8 *)&byte_140025D08, v6, 1u, v8, v9, 8u, &v13);
    }
  }
}
