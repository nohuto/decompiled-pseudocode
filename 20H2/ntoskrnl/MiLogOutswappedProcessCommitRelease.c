/*
 * XREFs of MiLogOutswappedProcessCommitRelease @ 0x140529D80
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x14052AC08 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x14023CD10 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140330EEC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

void __fastcall MiLogOutswappedProcessCommitRelease(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // r9
  int v5; // ecx
  __int64 v6; // r11
  __int64 v7; // r8
  __int64 v8; // r10
  int v9; // [rsp+20h] [rbp-B8h]
  int v10; // [rsp+28h] [rbp-B0h]
  int v11; // [rsp+40h] [rbp-98h] BYREF
  __int64 v12; // [rsp+48h] [rbp-90h] BYREF
  __int64 v13; // [rsp+50h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v15[16]; // [rsp+80h] [rbp-58h] BYREF
  int *v16; // [rsp+90h] [rbp-48h]
  int v17; // [rsp+98h] [rbp-40h]
  int v18; // [rsp+9Ch] [rbp-3Ch]
  __int64 *v19; // [rsp+A0h] [rbp-38h]
  int v20; // [rsp+A8h] [rbp-30h]
  int v21; // [rsp+ACh] [rbp-2Ch]
  __int64 *v22; // [rsp+B0h] [rbp-28h]
  int v23; // [rsp+B8h] [rbp-20h]
  int v24; // [rsp+BCh] [rbp-1Ch]

  if ( *(_QWORD *)&qword_140C4ED60 && **(_DWORD **)&qword_140C4ED60 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C4ED60, 4LL) )
    {
      tlgCreate1Sz_char((__int64)v15, (const CHAR *)(v3 + 1448));
      v5 = *(_DWORD *)(v4 + 1088);
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v16 = &v11;
      v11 = v5;
      v19 = &v12;
      v22 = &v13;
      v20 = 8;
      v23 = 8;
      v17 = 4;
      v12 = a2;
      v13 = v6;
      tlgWriteEx_EtwWriteEx(v8, (unsigned __int8 *)&byte_140024B6B, v7, 1u, v9, v10, 6u, &v14);
    }
  }
}
