/*
 * XREFs of sub_1800392D8 @ 0x1800392D8
 * Callers:
 *     sub_180039484 @ 0x180039484 (sub_180039484.c)
 * Callees:
 *     sub_180011718 @ 0x180011718 (sub_180011718.c)
 *     sub_180016730 @ 0x180016730 (sub_180016730.c)
 *     sub_18003A1A4 @ 0x18003A1A4 (sub_18003A1A4.c)
 *     sub_18003ADD8 @ 0x18003ADD8 (sub_18003ADD8.c)
 *     sub_18003AF28 @ 0x18003AF28 (sub_18003AF28.c)
 *     sub_18003AF70 @ 0x18003AF70 (sub_18003AF70.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800392D8(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  bool v4; // zf
  unsigned int v5; // r8d
  HSTRING v6; // rcx
  PCWSTR StringRawBuffer; // rax
  int v8; // edi
  _BYTE v10[4]; // [rsp+40h] [rbp-38h] BYREF
  int v11; // [rsp+44h] [rbp-34h]
  _BYTE v12[8]; // [rsp+48h] [rbp-30h] BYREF
  __int128 v13; // [rsp+50h] [rbp-28h] BYREF
  __int128 v14; // [rsp+60h] [rbp-18h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+28h] BYREF
  UINT32 length; // [rsp+A8h] [rbp+30h] BYREF
  int v17; // [rsp+B0h] [rbp+38h] BYREF
  __int16 v18; // [rsp+B4h] [rbp+3Ch]
  HSTRING string; // [rsp+B8h] [rbp+40h] BYREF

  v2 = sub_18003A1A4(a1, 0LL);
  v3 = *(_QWORD *)(v2 + 16);
  v4 = (*(_DWORD *)(v3 + 32) & 0x80) == 0;
  *(_BYTE *)(a1 + 96) = (*(_DWORD *)(v3 + 32) & 0x80) != 0;
  if ( v4 )
  {
    v5 = dword_18005AFD8;
    if ( (dword_18005AFD8 & 2) == 0 )
    {
      v15 = *(_QWORD *)sub_18003AF70(&dword_18005AFD8, v12);
      v5 = v15;
    }
    LODWORD(v15) = 0;
    BYTE4(v15) = 3;
    v17 = 0;
    v18 = WORD2(v15);
    sub_180011718((signed __int32 *)&unk_18005AFE0, 0xA8161Eu, (v5 >> 7) & 1, (v5 >> 8) & 1, (__int64)&v17, 1u, 3);
    LODWORD(v15) = 0;
    v13 = *(_OWORD *)v2;
    if ( (*(int (__fastcall **)(_QWORD, __int128 *, __int64, __int64 *))(**(_QWORD **)(a1 + 64) + 112LL))(
           *(_QWORD *)(a1 + 64),
           &v13,
           17LL,
           &v15) >= 0
      && !(_DWORD)v15 )
    {
      string = 0LL;
      v14 = *(_OWORD *)v2;
      WindowsDeleteString(0LL);
      string = 0LL;
      if ( (int)sub_180016730(*(_QWORD *)(a1 + 64), &v14, 15LL, &string) >= 0 )
      {
        v6 = string;
        if ( !string )
        {
LABEL_15:
          WindowsDeleteString(v6);
          return 0LL;
        }
        StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
        if ( StringRawBuffer )
        {
          if ( length )
          {
            v8 = o_wcstoul(StringRawBuffer, 0LL, 10LL);
            if ( (unsigned int)(v8 - 1) <= 0xFFFFFFFD )
            {
              sub_18003ADD8(&dword_18005AFD8, v10);
              if ( v8 == v11 && (unsigned __int8)sub_18003AF28(&dword_18005AFD8) == 1 )
                *(_BYTE *)(a1 + 96) = 1;
            }
          }
        }
      }
      v6 = string;
      goto LABEL_15;
    }
  }
  return 0LL;
}
