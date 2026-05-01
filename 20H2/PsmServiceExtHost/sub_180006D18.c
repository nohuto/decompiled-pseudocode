/*
 * XREFs of sub_180006D18 @ 0x180006D18
 * Callers:
 *     sub_180006CA4 @ 0x180006CA4 (sub_180006CA4.c)
 *     sub_1800181E0 @ 0x1800181E0 (sub_1800181E0.c)
 * Callees:
 *     sub_18000350C @ 0x18000350C (sub_18000350C.c)
 *     sub_18000688C @ 0x18000688C (sub_18000688C.c)
 *     sub_180008CE8 @ 0x180008CE8 (sub_180008CE8.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_180035C5C @ 0x180035C5C (sub_180035C5C.c)
 *     sub_18003C324 @ 0x18003C324 (sub_18003C324.c)
 */

__int64 __fastcall sub_180006D18(__int64 a1, int a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // r14
  char v6; // al
  BOOL v7; // r15d
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // esi
  void *v11; // rbp
  __int64 v12; // rdi
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  char v17; // [rsp+80h] [rbp+8h] BYREF
  char v18; // [rsp+88h] [rbp+10h] BYREF
  __int64 v19; // [rsp+90h] [rbp+18h] BYREF

  sub_1800093A0(*(_QWORD *)(a1 + 80), 0LL);
  if ( a2 )
  {
    if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 8LL) )
    {
      v18 = *(_BYTE *)(a1 + 548);
      v19 = *(_QWORD *)(a1 + 40);
      v17 = 1;
      sub_18003C324(v14, (unsigned int)&unk_1800A1BB2, v15, v16, (__int64)&v19, (__int64)&v17, (__int64)&v18);
    }
    *(_BYTE *)(a1 + 548) = 1;
    sub_18000350C(a1, 6u);
  }
  v4 = *(_QWORD *)(a1 + 80);
  v5 = (_DWORD *)(a1 + 544);
  *(_DWORD *)(a1 + 544) &= ~1u;
  sub_18001BD70(v4);
  v6 = *(_BYTE *)(a1 + 548);
  v7 = (v6 == 1 || v6 == 4) && ((*(_BYTE *)(a1 + 120) & 0xC) != 0 || (*(_DWORD *)(a1 + 112) & 0x4000) != 0);
  v8 = *(_QWORD *)(a1 + 80);
  v9 = *(_QWORD *)(v8 + 688);
  if ( v9 )
  {
    sub_18000688C(a1);
    v10 = (*v5 >> 1) & 1;
    *v5 &= ~2u;
  }
  else
  {
    v10 = 0;
    sub_18001CC80(v8, 0LL);
  }
  v11 = (void *)(v9 & -(__int64)(v10 != 0));
  if ( !a2 && *(_BYTE *)(a1 + 548) == 4 )
  {
    v12 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  sub_18000A110(*(_QWORD *)(a1 + 80));
  RtlWakeAddressAll(a1 + 544);
  if ( v12 )
    sub_180035C5C(v12);
  if ( v7 )
    sub_180008CE8((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120, 0LL);
  if ( v10 )
    sub_180017F60(v11);
  return sub_180006E40(*(_QWORD *)(a1 + 80));
}
