/*
 * XREFs of MiLogWsEmptyControl @ 0x14030C4DC
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406D0FA0 (MmProcessWorkingSetControl.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     MiFillLogProcessInfo @ 0x14030CA50 (MiFillLogProcessInfo.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14032274C (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgCreate1Sz_char @ 0x14033DAA4 (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void __fastcall MiLogWsEmptyControl(__int64 a1)
{
  _DWORD *v1; // r10
  __int64 v2; // r8
  __int64 v3; // r9
  char v4; // al
  int v5; // r9d
  int v6; // r11d
  int v7; // r8d
  int v8; // r10d
  int v9; // [rsp+20h] [rbp-B8h]
  int v10; // [rsp+28h] [rbp-B0h]
  char v11; // [rsp+40h] [rbp-98h] BYREF
  int v12; // [rsp+44h] [rbp-94h] BYREF
  __int64 v13; // [rsp+48h] [rbp-90h] BYREF
  int v14; // [rsp+50h] [rbp-88h] BYREF
  __int64 v15[5]; // [rsp+60h] [rbp-78h] BYREF
  int v16; // [rsp+88h] [rbp-50h]
  int v17; // [rsp+8Ch] [rbp-4Ch]
  _BYTE v18[16]; // [rsp+90h] [rbp-48h] BYREF
  int *v19; // [rsp+A0h] [rbp-38h]
  int v20; // [rsp+A8h] [rbp-30h]
  int v21; // [rsp+ACh] [rbp-2Ch]
  __int64 *v22; // [rsp+B0h] [rbp-28h]
  int v23; // [rsp+B8h] [rbp-20h]
  int v24; // [rsp+BCh] [rbp-1Ch]

  v13 = 0LL;
  v12 = 0;
  if ( *(_QWORD *)&qword_140C4EE20 )
  {
    MiFillLogProcessInfo(a1, &v12, &v13, a1);
    if ( *v1 > 5u )
    {
      if ( tlgKeywordOn((__int64)v1, 16LL) )
      {
        v4 = *(_BYTE *)(v3 + 184) & 7;
        v17 = 0;
        v11 = v4;
        v15[4] = (__int64)&v11;
        v16 = 1;
        tlgCreate1Sz_char(v18, v13, v2, 1LL);
        v21 = 0;
        v24 = 0;
        v19 = &v14;
        v14 = v12;
        v22 = &v13;
        v20 = v5 + 3;
        v23 = v5 + 3;
        LODWORD(v13) = v6;
        tlgWriteEx_EtwWriteEx(v8, (int)&byte_140025B39, v7, v5, v9, v10, 6u, (__int64)v15);
      }
    }
  }
}
