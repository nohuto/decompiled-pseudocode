/*
 * XREFs of sub_1800C85C8 @ 0x1800C85C8
 * Callers:
 *     sub_1800C6990 @ 0x1800C6990 (sub_1800C6990.c)
 *     sub_1800C91E0 @ 0x1800C91E0 (sub_1800C91E0.c)
 *     sub_1800CA690 @ 0x1800CA690 (sub_1800CA690.c)
 *     sub_1800CAE90 @ 0x1800CAE90 (sub_1800CAE90.c)
 * Callees:
 *     sub_180002E28 @ 0x180002E28 (sub_180002E28.c)
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800C8AF8 @ 0x1800C8AF8 (sub_1800C8AF8.c)
 *     sub_1800CB5F0 @ 0x1800CB5F0 (sub_1800CB5F0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C85C8(__int64 a1, _QWORD *a2)
{
  int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  _QWORD *v6; // rsi
  _UNKNOWN **v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rax
  void (*v12)(void); // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+70h] [rbp+18h]

  v4 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 992);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 992));
  v18 = v5;
  v6 = (_QWORD *)(a1 + 1032);
  v7 = &off_18019C348;
  if ( *(_QWORD *)(a1 + 1032) )
    goto LABEL_26;
  v8 = 0LL;
  v17 = 0LL;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x200000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x20u, (__int64)&unk_18015DEF0, a1);
    v8 = v17;
  }
  v9 = qword_18019EE40;
  if ( qword_18019EE40 )
  {
    v10 = *(_QWORD *)qword_18019EE40;
    v11 = sub_180002E28((__int64 *)(a1 + 656));
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v10 + 48))(v9, v11, &v17);
    if ( v4 < 0 )
    {
      if ( !v17 )
        goto LABEL_34;
      v12 = *(void (**)(void))(*(_QWORD *)v17 + 16LL);
      goto LABEL_12;
    }
    v13 = v17;
    sub_180002E28((__int64 *)(a1 + 656));
    v4 = sub_1800C8AF8(a1, v14, v13);
    if ( v4 < 0 )
      goto LABEL_14;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x200000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x21u, (__int64)&unk_18015DEF0, a1);
    }
    v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 232LL))(v17, a1 + 984);
    if ( v4 < 0 )
    {
LABEL_14:
      if ( v17 )
      {
        v12 = *(void (**)(void))(*(_QWORD *)v17 + 16LL);
LABEL_12:
        v12();
      }
LABEL_34:
      if ( v4 >= 0 )
        goto LABEL_36;
      goto LABEL_35;
    }
    v15 = v17;
    if ( *v6 != v17 )
    {
      sub_1800579A4((_QWORD *)(a1 + 1032), v17);
      v15 = v17;
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v7 = &off_18019C348;
LABEL_26:
    if ( a2 )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x200000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800CB5F0(*((_QWORD *)off_18019C348 + 2), 34LL, &unk_18015DEF0, a1, *v6, a2);
      }
      *a2 = *v6;
      if ( *v6 )
        (*(void (__fastcall **)(_QWORD, _UNKNOWN **))(*(_QWORD *)*v6 + 8LL))(*v6, v7);
      v4 = 0;
    }
    goto LABEL_34;
  }
  v4 = -2147418113;
  if ( v8 )
    (*(void (__fastcall **)(__int64, _UNKNOWN **))(*(_QWORD *)v8 + 16LL))(v8, v7);
LABEL_35:
  sub_18005E8F8((__int64)"CPerEndpointVolumeAudioSession::GetVolumeStrip", 1738, v4);
LABEL_36:
  if ( v5 )
    LeaveCriticalSection(v5);
  return (unsigned int)v4;
}
