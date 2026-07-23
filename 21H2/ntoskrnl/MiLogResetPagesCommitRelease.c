/*
 * XREFs of MiLogResetPagesCommitRelease @ 0x14052BBE0
 * Callers:
 *     MiReleaseCommitForResetPages @ 0x14052C794 (MiReleaseCommitForResetPages.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgCreate1Sz_char @ 0x140270A0C (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void MiLogResetPagesCommitRelease()
{
  __int64 v0; // r9
  __int64 v1; // r9
  int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // r11
  __int64 v5; // r8
  __int64 v6; // r10
  int v7; // [rsp+20h] [rbp-B8h]
  int v8; // [rsp+28h] [rbp-B0h]
  int v9; // [rsp+40h] [rbp-98h] BYREF
  __int64 v10; // [rsp+48h] [rbp-90h] BYREF
  __int64 v11; // [rsp+50h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v13[16]; // [rsp+80h] [rbp-58h] BYREF
  int *v14; // [rsp+90h] [rbp-48h]
  int v15; // [rsp+98h] [rbp-40h]
  int v16; // [rsp+9Ch] [rbp-3Ch]
  __int64 *v17; // [rsp+A0h] [rbp-38h]
  int v18; // [rsp+A8h] [rbp-30h]
  int v19; // [rsp+ACh] [rbp-2Ch]
  __int64 *v20; // [rsp+B0h] [rbp-28h]
  int v21; // [rsp+B8h] [rbp-20h]
  int v22; // [rsp+BCh] [rbp-1Ch]

  if ( *(_QWORD *)&qword_140C4EF20 && **(_DWORD **)&qword_140C4EF20 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C4EF20, 4LL) )
    {
      tlgCreate1Sz_char((__int64)v13, (const CHAR *)(v0 + 1448));
      v2 = *(_DWORD *)(v1 + 1088);
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v14 = &v9;
      v17 = &v10;
      v3 = *(_QWORD *)(v1 + 1864);
      v9 = v2;
      v11 = v3;
      v20 = &v11;
      v18 = 8;
      v21 = 8;
      v15 = 4;
      v10 = v4;
      tlgWriteEx_EtwWriteEx(v6, (unsigned __int8 *)&unk_140025B40, v5, 1u, v7, v8, 6u, &v12);
    }
  }
}
