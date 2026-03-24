/*
 * XREFs of MiLogOutswappedProcessCommitReacquire @ 0x14052B704
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052C368 (MiReAcquireOutSwappedProcessCommit.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1402605BC (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140263F30 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1402D2F3C (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

void __fastcall MiLogOutswappedProcessCommitReacquire(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // r11
  __int64 v6; // r8
  int v7; // r9d
  __int64 v8; // r10
  __int64 v9; // r11
  char *v10; // rdx
  __int64 v11; // r11
  __int64 v12; // r11
  int v13; // ecx
  int v14; // [rsp+20h] [rbp-98h]
  int v15; // [rsp+28h] [rbp-90h]
  int v16; // [rsp+40h] [rbp-78h] BYREF
  __int64 v17; // [rsp+48h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v19[16]; // [rsp+70h] [rbp-48h] BYREF
  int *v20; // [rsp+80h] [rbp-38h]
  int v21; // [rsp+88h] [rbp-30h]
  int v22; // [rsp+8Ch] [rbp-2Ch]
  __int64 *v23; // [rsp+90h] [rbp-28h]
  int v24; // [rsp+98h] [rbp-20h]
  int v25; // [rsp+9Ch] [rbp-1Ch]

  if ( *(_QWORD *)&qword_140C4EEE0 )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        if ( **(_DWORD **)&qword_140C4EEE0 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C4EEE0, 4LL) )
        {
          tlgCreate1Sz_char((__int64)v19, (const CHAR *)(v11 + 1448));
          v10 = byte_140025A7D;
          goto LABEL_13;
        }
      }
      else if ( **(_DWORD **)&qword_140C4EEE0 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C4EEE0, 4LL) )
      {
        tlgCreate1Sz_char((__int64)v19, (const CHAR *)(v12 + 1448));
        v10 = (char *)&byte_140025AD1;
        goto LABEL_13;
      }
    }
    else if ( **(_DWORD **)&qword_140C4EEE0 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C4EEE0, 4LL) )
    {
      tlgCreate1Sz_char((__int64)v19, (const CHAR *)(v5 + 1448));
      v10 = byte_140025A2D;
LABEL_13:
      v13 = *(_DWORD *)(v9 + 1088);
      v22 = 0;
      v25 = 0;
      v20 = &v16;
      v23 = &v17;
      v21 = v7;
      v16 = v13;
      v17 = a2;
      v24 = 8;
      tlgWriteEx_EtwWriteEx(v8, (unsigned __int8 *)v10, v6, 1u, v14, v15, 5u, &v18);
    }
  }
}
