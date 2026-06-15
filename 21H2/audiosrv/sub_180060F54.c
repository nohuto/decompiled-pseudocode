/*
 * XREFs of sub_180060F54 @ 0x180060F54
 * Callers:
 *     sub_18004C0F0 @ 0x18004C0F0 (sub_18004C0F0.c)
 * Callees:
 *     sub_18004B9F0 @ 0x18004B9F0 (sub_18004B9F0.c)
 *     sub_18005EE14 @ 0x18005EE14 (sub_18005EE14.c)
 *     sub_180060C0C @ 0x180060C0C (sub_180060C0C.c)
 *     sub_180060CC8 @ 0x180060CC8 (sub_180060CC8.c)
 *     sub_180060DB4 @ 0x180060DB4 (sub_180060DB4.c)
 *     sub_180060E70 @ 0x180060E70 (sub_180060E70.c)
 *     sub_1800611C8 @ 0x1800611C8 (sub_1800611C8.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_180126A64 @ 0x180126A64 (sub_180126A64.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180060F54(__int64 a1, HINSTANCE a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // ebx
  int v18; // ecx

  v4 = -2147024882;
  sub_18004B9F0(a1, (__int64)a2, a3);
  EnterCriticalSection(&stru_18019F7B8);
  if ( ++dword_18019F7E0 == 1 )
  {
    v5 = sub_18006A18C(800LL, &unk_18019F848);
    if ( v5 )
      v6 = sub_18005EE14(v5, a2);
    else
      v6 = 0LL;
    *(_QWORD *)&dword_18019F770[2 * dword_18019F770[0] + 2] = v6;
    if ( !*(_QWORD *)&dword_18019F770[2 * dword_18019F770[0] + 2] )
      goto LABEL_28;
    ++dword_18019F770[0];
    v7 = sub_18006A18C(1312LL, &unk_18019F848);
    v8 = v7 ? sub_180060E70(v7, a2) : 0LL;
    *(_QWORD *)&dword_18019F770[2 * dword_18019F770[0] + 2] = v8;
    if ( !*(_QWORD *)&dword_18019F770[2 * dword_18019F770[0] + 2] )
      goto LABEL_28;
    ++dword_18019F770[0];
    v9 = sub_18006A18C(800LL, &unk_18019F848);
    v10 = v9 ? sub_180060DB4(v9, a2) : 0LL;
    *(_QWORD *)&dword_18019F770[2 * dword_18019F770[0] + 2] = v10;
    if ( !*(_QWORD *)&dword_18019F770[2 * dword_18019F770[0] + 2] )
      goto LABEL_28;
    ++dword_18019F770[0];
    v11 = sub_18006A18C(800LL, &unk_18019F848);
    v12 = v11 ? sub_1800611C8(v11, a2) : 0LL;
    *(_QWORD *)&dword_18019F770[2 * dword_18019F770[0] + 2] = v12;
    if ( !*(_QWORD *)&dword_18019F770[2 * dword_18019F770[0] + 2] )
      goto LABEL_28;
    ++dword_18019F770[0];
    v13 = sub_18006A18C(1312LL, &unk_18019F848);
    v14 = v13 ? sub_180060CC8(v13, a2) : 0LL;
    *(_QWORD *)&dword_18019F770[2 * dword_18019F770[0] + 2] = v14;
    if ( !*(_QWORD *)&dword_18019F770[2 * dword_18019F770[0] + 2]
      || ((++dword_18019F770[0], (v15 = sub_18006A18C(800LL, &unk_18019F848)) == 0)
        ? (v16 = 0LL)
        : (v16 = sub_180060C0C(v15, a2)),
          (*(_QWORD *)&dword_18019F770[2 * dword_18019F770[0] + 2] = v16) == 0LL) )
    {
LABEL_28:
      LeaveCriticalSection(&stru_18019F7B8);
LABEL_26:
      sub_180126A64();
      return v4;
    }
    v17 = ++dword_18019F770[0];
  }
  else
  {
    v17 = dword_18019F770[0];
  }
  LeaveCriticalSection(&stru_18019F7B8);
  v18 = 0;
  if ( !v17 )
    v18 = -2147024882;
  v4 = v18;
  if ( !v17 )
    goto LABEL_26;
  return v4;
}
