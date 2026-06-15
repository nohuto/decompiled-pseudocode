/*
 * XREFs of sub_1800C1F20 @ 0x1800C1F20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005D19C @ 0x18005D19C (sub_18005D19C.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _o_pow @ 0x18006AB5C (_o_pow.c)
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800BF15C @ 0x1800BF15C (sub_1800BF15C.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800C1F20(__int64 a1)
{
  int v2; // edi
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // rdx
  float v7; // xmm1_4
  int v8; // eax
  __int64 v10; // [rsp+80h] [rbp+8h] BYREF
  __int64 v11; // [rsp+88h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+90h] [rbp+18h]

  v2 = 0;
  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 256);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
  v12 = v3;
  if ( *(_QWORD *)(a1 + 248) )
  {
    v10 = 0LL;
    sub_1800BF15C(&v10, *(unsigned int *)(a1 + 124));
    v4 = v10;
    if ( !v10 )
    {
      v2 = -2147024882;
      _o_free(0LL);
      v10 = 0LL;
LABEL_10:
      sub_18005E8F8((__int64)"CVolumeSoftware::UpdateMasterVolumeLevel", 2048, v2);
      goto LABEL_17;
    }
    v5 = 0LL;
    v6 = *(unsigned int *)(a1 + 124);
    if ( (_DWORD)v6 )
    {
      do
      {
        sub_18005D19C((_QWORD *)(a1 + 88), (unsigned int)v5);
        v7 = o_pow();
        *(float *)(v4 + 4 * v5) = v7;
        v5 = (unsigned int)(v5 + 1);
        v6 = *(unsigned int *)(a1 + 124);
      }
      while ( (unsigned int)v5 < (unsigned int)v6 );
    }
    v11 = 50000LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, __int64 *))(**(_QWORD **)(a1 + 248) + 32LL))(
           *(_QWORD *)(a1 + 248),
           v6,
           v4,
           0LL,
           1,
           &v11);
    v2 = v8;
    if ( v8 == -2147417848 || v8 == -2147023174 )
    {
      sub_180071C14((_QWORD *)(a1 + 248));
      v2 = 0;
    }
    _o_free(v4);
    v10 = 0LL;
    if ( v2 < 0 )
      goto LABEL_10;
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x36u, (__int64)&unk_18016DDC0, a1);
  }
  *(_BYTE *)(a1 + 300) = 1;
  v10 = -10000000LL;
  if ( qword_18019E640 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD, _DWORD))(*(_QWORD *)qword_18019E640 + 24LL))(
      qword_18019E640,
      *(_QWORD *)(a1 + 304),
      &v10,
      0LL,
      0);
LABEL_17:
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v2;
}
