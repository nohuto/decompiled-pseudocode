/*
 * XREFs of MiLogWsEmptyControl @ 0x1403115C8
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406D2AE8 (MmProcessWorkingSetControl.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140276C08 (_tlgCreate1Sz_char.c)
 *     MiFillLogProcessInfo @ 0x140311B3C (MiFillLogProcessInfo.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14036005C (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

void __fastcall MiLogWsEmptyControl(__int64 a1)
{
  _DWORD *v1; // r10
  __int64 v2; // r9
  char v3; // al
  int v4; // r9d
  int v5; // r11d
  int v6; // r8d
  int v7; // r10d
  int v8; // [rsp+20h] [rbp-B8h]
  int v9; // [rsp+28h] [rbp-B0h]
  char v10; // [rsp+40h] [rbp-98h] BYREF
  int v11; // [rsp+44h] [rbp-94h] BYREF
  const CHAR *v12; // [rsp+48h] [rbp-90h] BYREF
  int v13; // [rsp+50h] [rbp-88h] BYREF
  __int64 v14[5]; // [rsp+60h] [rbp-78h] BYREF
  int v15; // [rsp+88h] [rbp-50h]
  int v16; // [rsp+8Ch] [rbp-4Ch]
  _BYTE v17[16]; // [rsp+90h] [rbp-48h] BYREF
  int *v18; // [rsp+A0h] [rbp-38h]
  int v19; // [rsp+A8h] [rbp-30h]
  int v20; // [rsp+ACh] [rbp-2Ch]
  const CHAR **v21; // [rsp+B0h] [rbp-28h]
  int v22; // [rsp+B8h] [rbp-20h]
  int v23; // [rsp+BCh] [rbp-1Ch]

  v12 = 0LL;
  v11 = 0;
  if ( *(_QWORD *)&qword_140C4ECE0 )
  {
    MiFillLogProcessInfo(a1, &v11, &v12, a1);
    if ( *v1 > 5u )
    {
      if ( tlgKeywordOn((__int64)v1, 16LL) )
      {
        v3 = *(_BYTE *)(v2 + 184) & 7;
        v16 = 0;
        v10 = v3;
        v14[4] = (__int64)&v10;
        v15 = 1;
        tlgCreate1Sz_char((__int64)v17, v12);
        v20 = 0;
        v23 = 0;
        v18 = &v13;
        v13 = v11;
        v21 = &v12;
        v19 = v4 + 3;
        v22 = v4 + 3;
        LODWORD(v12) = v5;
        tlgWriteEx_EtwWriteEx(v7, (int)&byte_140025C39, v6, v4, v8, v9, 6u, (__int64)v14);
      }
    }
  }
}
